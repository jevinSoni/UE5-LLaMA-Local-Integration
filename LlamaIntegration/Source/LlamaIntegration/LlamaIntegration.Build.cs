// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class LlamaIntegration : ModuleRules
{
    public LlamaIntegration(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        string ModulePath = ModuleDirectory;
        string LlamaBasePath = Path.Combine(ModulePath, "Public", "ThirdParty", "llama");
        string IncludePath = Path.Combine(LlamaBasePath, "include");
        string ModelPath = "$(PluginDir)/Content/models/tinyllama-1.1b-chat-v1.0.Q2_K.gguf";

        PublicIncludePaths.Add(IncludePath);

        RuntimeDependencies.Add(ModelPath, StagedFileType.NonUFS);

        CppStandard = CppStandardVersion.Cpp17;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string LibPath = Path.Combine(LlamaBasePath, "lib", "llama.lib");

            if (!File.Exists(LibPath))
            {
                System.Console.WriteLine("❌ Windows static library not found: " + LibPath);
            }
            else
            {
                System.Console.WriteLine("✅ Windows static library found: " + LibPath);
                PublicAdditionalLibraries.Add(LibPath);
                PublicDefinitions.Add("LLAMA_STATIC=1");
            }

            bEnableExceptions = true;
            bUseRTTI = true;

            AdditionalPropertiesForReceipt.Add("AdditionalContentDirectories", "Content/Models");
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            string LibPath = Path.Combine(LlamaBasePath, "lib", "arm64-v8a");

            string[] Libraries = new string[]
            {
                "libllama.a",
                "libggml.a",
                "libggml-base.a",
                "libggml-cpu.a",
                "libcommon.a",
                "libomp.a"
            };

            bool allLibrariesFound = true;

            foreach (string lib in Libraries)
            {
                string fullLibPath = Path.Combine(LibPath, lib);
                if (!File.Exists(fullLibPath))
                {
                    System.Console.WriteLine("❌ Android static library not found: " + fullLibPath);
                    allLibrariesFound = false;
                }
                else
                {
                    System.Console.WriteLine("✅ Android static library found: " + fullLibPath);
                    PublicAdditionalLibraries.Add(fullLibPath);
                }
            }

            if (!allLibrariesFound)
            {
                System.Console.WriteLine("⚠️ Some Android libraries are missing. Build may fail.");
            }

            PublicAdditionalLibraries.AddRange(new string[] { "log", "android" });

            bEnableExceptions = true;

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModulePath, "LlamaIntegration_APL.xml"));
        }

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "Projects",
            "UMG",
        });
    }
}
