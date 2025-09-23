#include "LlamaFunctionLibrary.h"
#include "Misc/Paths.h"
#include "Interfaces/IPluginManager.h"
#include "HAL/PlatformFilemanager.h"
#include "GenericPlatform/GenericPlatformMisc.h"
// Log OpenMP threads
#include <omp.h>
#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include <sched.h>
#include <unistd.h>
#endif


bool ULlamaFunctionLibrary::bIsBackendInitialized = false;
FCriticalSection ULlamaFunctionLibrary::BackendMutex;
FString ULlamaFunctionLibrary::CachedModelPath;
llama_model* ULlamaFunctionLibrary::CachedModel = nullptr;
llama_context* ULlamaFunctionLibrary::CachedContext = nullptr;
TArray<llama_token> ULlamaFunctionLibrary::SystemPromptTokens;

bool ULlamaFunctionLibrary::InitializeLlama()
{
    FScopeLock Lock(&BackendMutex);

    if (bIsBackendInitialized)
    {
        return true;
    }

    FString PluginBaseDir = IPluginManager::Get().FindPlugin(TEXT("LlamaIntegration"))->GetBaseDir();
    UE_LOG(LogTemp, Warning, TEXT("Plugin Base Directory: %s"), *PluginBaseDir);
    FString GGUFModelPath;

#if PLATFORM_ANDROID
    FString SourcePath = FPaths::Combine(PluginBaseDir, TEXT("Content/models/tinyllama-1.1b-chat-v1.0.Q2_K.gguf"));
    FString DestPath = FPaths::Combine(FPaths::ProjectPersistentDownloadDir(), TEXT("tinyllama-1.1b-chat-v1.0.Q2_K.gguf"));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.DirectoryExists(*FPaths::ProjectPersistentDownloadDir()))
    {
        PlatformFile.CreateDirectoryTree(*FPaths::ProjectPersistentDownloadDir());
    }

    if (!PlatformFile.FileExists(*DestPath))
    {
        if (!PlatformFile.FileExists(*SourcePath) || !PlatformFile.CopyFile(*DestPath, *SourcePath))
        {
            return false;
        }
}
    GGUFModelPath = DestPath;
#else
    GGUFModelPath = FPaths::Combine(PluginBaseDir, TEXT("Content/models/tinyllama-1.1b-chat-v1.0.Q2_K.gguf"));
#endif

    if (!FPaths::FileExists(GGUFModelPath))
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Model file not found: %s"), *GGUFModelPath);
        return false;
    }

    llama_backend_init();
    FString CleanPath = FPaths::ConvertRelativePathToFull(GGUFModelPath);
    llama_model_params modelParams = llama_model_default_params();
    modelParams.n_gpu_layers = 0;
    modelParams.main_gpu = 0;

    CachedModel = llama_model_load_from_file(TCHAR_TO_UTF8(*CleanPath), modelParams);
    if (!CachedModel)
    {
        llama_backend_free();
        UE_LOG(LogTemp, Error, TEXT("❌ Failed to load model: %s"), *CleanPath);
        return false;
    }

    llama_context_params ctxParams = llama_context_default_params();
    ctxParams.n_ctx = 512;
    ctxParams.n_threads = 5;
    ctxParams.n_threads_batch = ctxParams.n_threads;

    CachedContext = llama_init_from_model(CachedModel, ctxParams);
    if (!CachedContext)
    {
        llama_model_free(CachedModel);
        CachedModel = nullptr;
        llama_backend_free();
        return false;
    }

    const llama_vocab* vocab = llama_model_get_vocab(CachedModel);
    if (vocab)
    {
        FString SystemPrompt = TEXT("<|system|>\nYou are a helpful assistant.\n");
        FTCHARToUTF8 Utf8Prompt(*SystemPrompt);
        const char* Utf8Data = Utf8Prompt.Get();
        int PromptLength = Utf8Prompt.Length();
        SystemPromptTokens.Reserve(PromptLength / 2);
        int n_tokens = llama_tokenize(vocab, Utf8Data, PromptLength, SystemPromptTokens.GetData(), SystemPromptTokens.Max(), true, false);
        if (n_tokens > 0)
        {
            SystemPromptTokens.SetNum(n_tokens);
        }
        else
        {
            SystemPromptTokens.Empty();
        }
    }

    bIsBackendInitialized = true;
    CachedModelPath = GGUFModelPath;
    return true;
}


FString ULlamaFunctionLibrary::LoadTinyModelAndGenerateText(const FString& UserInput)
{
    FScopeLock Lock(&BackendMutex);
    FDateTime StartTime = FDateTime::Now();

    if (!bIsBackendInitialized || !CachedModel || !CachedContext)
    {
        return TEXT("Backend not initialized.");
    }

    const llama_vocab* vocab = llama_model_get_vocab(CachedModel);
    if (!vocab)
    {
        return TEXT("Failed to get vocabulary.");
    }

    FString Prompt = FString::Printf(
        TEXT("<|system|>\nYou are a friendly in-game assistant guiding players through a virtual environment of AI agent offices.\n<|user|>\n%s\n<|assistant|>\n"),
        *UserInput);
    FTCHARToUTF8 Utf8Prompt(*Prompt);
    const char* Utf8Data = Utf8Prompt.Get();
    int PromptLength = Utf8Prompt.Length();

    TArray<llama_token> inputTokens;
    inputTokens.SetNumUninitialized(PromptLength + 16);
    int n_input = llama_tokenize(vocab, Utf8Data, PromptLength, inputTokens.GetData(), inputTokens.Num(), true, false);
    if (n_input <= 0)
    {
        return TEXT("Failed to tokenize prompt.");
    }
    inputTokens.SetNum(n_input);

    llama_kv_cache_clear(CachedContext);

    llama_batch prompt_batch = llama_batch_get_one(inputTokens.GetData(), inputTokens.Num());
    if (llama_decode(CachedContext, prompt_batch) != 0)
    {
        return TEXT("Failed to decode prompt.");
    }

    FString Output;
    const int MaxTokens = 100;
    int WordCount = 0;
    int MinWords = 15;
    int MaxWords = 20;

    float Temperature = 0.6f;
    FRandomStream Rand(FDateTime::Now().GetTicks());

    for (int step = 0; step < MaxTokens; ++step)
    {
        const float* logits = llama_get_logits(CachedContext);
        if (!logits)
        {
            break;
        }

        int vocab_size = llama_vocab_n_tokens(vocab);
        TArray<float> probs;
        probs.SetNum(vocab_size);

        float maxLogit = -FLT_MAX;
        for (int i = 0; i < vocab_size; ++i)
        {
            if (logits[i] > maxLogit)
                maxLogit = logits[i];
        }

        float sum = 0.0f;
        for (int i = 0; i < vocab_size; ++i)
        {
            float val = (logits[i] - maxLogit) / Temperature;
            probs[i] = FMath::Exp(val);
            sum += probs[i];
        }

        for (int i = 0; i < vocab_size; ++i)
        {
            probs[i] /= sum;
        }

        float r = Rand.FRand();
        float cumulative = 0.0f;
        llama_token sampled_token = 0;
        for (int i = 0; i < vocab_size; ++i)
        {
            cumulative += probs[i];
            if (r < cumulative)
            {
                sampled_token = i;
                break;
            }
        }

        if (sampled_token == llama_vocab_eos(vocab))
        {
            break;
        }

        std::string PieceStr(64, '\0');
        int n = llama_token_to_piece(vocab, sampled_token, PieceStr.data(), PieceStr.size(), 0, false);
        if (n <= 0)
        {
            break;
        }
        PieceStr.resize(n);
        FString TokenText = UTF8_TO_TCHAR(PieceStr.c_str());

        if (TokenText.Contains(TEXT("<|user|>")) || TokenText.Contains(TEXT("<|assistant|>")))
        {
            break;
        }

        Output += TokenText;

        // Count words
        TArray<FString> Words;
        TokenText.ParseIntoArray(Words, TEXT(" "), true);
        WordCount += Words.Num();

        // Check if token ends with a sentence or word boundary
        bool bSafeToBreak = TokenText.EndsWith(TEXT(" ")) ||
            TokenText.EndsWith(TEXT(".")) ||
            TokenText.EndsWith(TEXT("!")) ||
            TokenText.EndsWith(TEXT("?"));

        // Stop if we hit max word count and it's a clean boundary
        if (WordCount >= MaxWords && bSafeToBreak)
        {
            break;
        }

        // Random early stop after min words but only on word boundary
        if (WordCount >= MinWords && bSafeToBreak && Rand.FRand() < 0.2f)
        {
            break;
        }

        llama_batch next_batch = llama_batch_get_one(&sampled_token, 1);
        if (llama_decode(CachedContext, next_batch) != 0)
        {
            break;
        }
    }

    Output = Output.TrimStart().TrimEnd();

    int ControlIndex = Output.Find(TEXT("<|"));
    if (ControlIndex != INDEX_NONE)
    {
        Output = Output.Left(ControlIndex).TrimEnd();
    }

    if (Output.IsEmpty() || Output.Len() < 5)
    {
        Output = TEXT("How can I assist you?");
    }

    FDateTime EndTime = FDateTime::Now();
    UE_LOG(LogTemp, Display, TEXT("Total generation took %f seconds"), (EndTime - StartTime).GetTotalSeconds());

    return Output;
}


void ULlamaFunctionLibrary::LoadTinyModelAndGenerateTextAsync(const FString& UserInput, FLlamaResultDelegate OnTextGenerated)
{
     AsyncTask(ENamedThreads::AnyHiPriThreadHiPriTask, [UserInput, OnTextGenerated]()
        {
            FString Result = LoadTinyModelAndGenerateText(UserInput);

            AsyncTask(ENamedThreads::GameThread, [Result, OnTextGenerated]()
                {
                    if (OnTextGenerated.IsBound())
                    {
                        OnTextGenerated.Execute(Result);
                    }
                });
});
}

FString ULlamaFunctionLibrary::BuildAgentPrompt(int Step, const FString& AgentName)
{
    FString SystemPrompt = TEXT("You're a helpful and upbeat assistant  Keep responses concise, friendly, and assist the player based on their current step.");
    FString UserPrompt="";

   
    return FString::Printf(TEXT("%s\n\n%s"), *SystemPrompt, *UserPrompt);
}
