// LlamaFunctionLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Misc/DateTime.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "llama.h"
#include "Async/Async.h"
#include "LlamaFunctionLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FLlamaResultDelegate, const FString&, GeneratedText);

UCLASS()
class LLAMAINTEGRATION_API ULlamaFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    // Initialize the llama backend
    UFUNCTION(BlueprintCallable, Category = "Llama")
    static bool InitializeLlama();

    // Load model and generate text synchronously
    UFUNCTION(BlueprintCallable, Category = "Llama")
    static FString LoadTinyModelAndGenerateText(const FString& UserInput);

    // Generate text asynchronously
    UFUNCTION(BlueprintCallable, Category = "Llama")
    static void LoadTinyModelAndGenerateTextAsync(const FString& UserInput, FLlamaResultDelegate OnTextGenerated);

    UFUNCTION(BlueprintCallable, Category = "Llama")
    static FString BuildAgentPrompt(int Step, const FString& AgentName);




    //UFUNCTION(BlueprintCallable, Category = "Llama")
    //static bool InitializeLlama();

    //UFUNCTION(BlueprintCallable, Category = "Llama")
    //static FString RunLlamaInference(const FString& GGUFModelPath, const FString& UserInput);

    //// BlueprintCallable function to load and process the GGUF model
    //UFUNCTION(BlueprintCallable, Category = "LLaMA")
    //static FString LoadTinyModelAndGenerateText( const FString& InputText);

    //UFUNCTION(BlueprintCallable, Category = "AI|LLaMA", meta = (AutoCreateRefTerm = "Completed"))
    //static void LoadTinyModelAndGenerateTextAsync(const FString& UserInput, FLlamaResultDelegate Completed);
   
    static llama_model* CachedModel;
    static llama_context* CachedContext;
    static TArray<llama_token> SystemPromptTokens;
    static bool bIsBackendInitialized;
    static FCriticalSection BackendMutex;
    static FString CachedModelPath;
    
};
