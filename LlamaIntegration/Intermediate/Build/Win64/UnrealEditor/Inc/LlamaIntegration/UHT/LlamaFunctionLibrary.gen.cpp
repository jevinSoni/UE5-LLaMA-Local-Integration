// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../LlamaFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLlamaFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LLAMAINTEGRATION_API UClass* Z_Construct_UClass_ULlamaFunctionLibrary();
	LLAMAINTEGRATION_API UClass* Z_Construct_UClass_ULlamaFunctionLibrary_NoRegister();
	LLAMAINTEGRATION_API UFunction* Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LlamaIntegration();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics
	{
		struct _Script_LlamaIntegration_eventLlamaResultDelegate_Parms
		{
			FString GeneratedText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::NewProp_GeneratedText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::NewProp_GeneratedText = { "GeneratedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LlamaIntegration_eventLlamaResultDelegate_Parms, GeneratedText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::NewProp_GeneratedText_MetaData), Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::NewProp_GeneratedText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::NewProp_GeneratedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LlamaFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LlamaIntegration, nullptr, "LlamaResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::_Script_LlamaIntegration_eventLlamaResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::_Script_LlamaIntegration_eventLlamaResultDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLlamaResultDelegate_DelegateWrapper(const FScriptDelegate& LlamaResultDelegate, const FString& GeneratedText)
{
	struct _Script_LlamaIntegration_eventLlamaResultDelegate_Parms
	{
		FString GeneratedText;
	};
	_Script_LlamaIntegration_eventLlamaResultDelegate_Parms Parms;
	Parms.GeneratedText=GeneratedText;
	LlamaResultDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULlamaFunctionLibrary::execBuildAgentPrompt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_GET_PROPERTY(FStrProperty,Z_Param_AgentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULlamaFunctionLibrary::BuildAgentPrompt(Z_Param_Step,Z_Param_AgentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULlamaFunctionLibrary::execLoadTinyModelAndGenerateTextAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserInput);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnTextGenerated);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULlamaFunctionLibrary::LoadTinyModelAndGenerateTextAsync(Z_Param_UserInput,FLlamaResultDelegate(Z_Param_OnTextGenerated));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULlamaFunctionLibrary::execLoadTinyModelAndGenerateText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULlamaFunctionLibrary::LoadTinyModelAndGenerateText(Z_Param_UserInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULlamaFunctionLibrary::execInitializeLlama)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULlamaFunctionLibrary::InitializeLlama();
		P_NATIVE_END;
	}
	void ULlamaFunctionLibrary::StaticRegisterNativesULlamaFunctionLibrary()
	{
		UClass* Class = ULlamaFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildAgentPrompt", &ULlamaFunctionLibrary::execBuildAgentPrompt },
			{ "InitializeLlama", &ULlamaFunctionLibrary::execInitializeLlama },
			{ "LoadTinyModelAndGenerateText", &ULlamaFunctionLibrary::execLoadTinyModelAndGenerateText },
			{ "LoadTinyModelAndGenerateTextAsync", &ULlamaFunctionLibrary::execLoadTinyModelAndGenerateTextAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics
	{
		struct LlamaFunctionLibrary_eventBuildAgentPrompt_Parms
		{
			int32 Step;
			FString AgentName;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Step;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AgentName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventBuildAgentPrompt_Parms, Step), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_AgentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_AgentName = { "AgentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventBuildAgentPrompt_Parms, AgentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_AgentName_MetaData), Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_AgentName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventBuildAgentPrompt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_AgentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Llama" },
		{ "ModuleRelativePath", "Public/LlamaFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULlamaFunctionLibrary, nullptr, "BuildAgentPrompt", nullptr, nullptr, Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::LlamaFunctionLibrary_eventBuildAgentPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::LlamaFunctionLibrary_eventBuildAgentPrompt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics
	{
		struct LlamaFunctionLibrary_eventInitializeLlama_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LlamaFunctionLibrary_eventInitializeLlama_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LlamaFunctionLibrary_eventInitializeLlama_Parms), &Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::Function_MetaDataParams[] = {
		{ "Category", "Llama" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the llama backend\n" },
#endif
		{ "ModuleRelativePath", "Public/LlamaFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the llama backend" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULlamaFunctionLibrary, nullptr, "InitializeLlama", nullptr, nullptr, Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::LlamaFunctionLibrary_eventInitializeLlama_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::LlamaFunctionLibrary_eventInitializeLlama_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics
	{
		struct LlamaFunctionLibrary_eventLoadTinyModelAndGenerateText_Parms
		{
			FString UserInput;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInput_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserInput;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_UserInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_UserInput = { "UserInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventLoadTinyModelAndGenerateText_Parms, UserInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_UserInput_MetaData), Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_UserInput_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventLoadTinyModelAndGenerateText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_UserInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Llama" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Load model and generate text synchronously\n" },
#endif
		{ "ModuleRelativePath", "Public/LlamaFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load model and generate text synchronously" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULlamaFunctionLibrary, nullptr, "LoadTinyModelAndGenerateText", nullptr, nullptr, Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::LlamaFunctionLibrary_eventLoadTinyModelAndGenerateText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::LlamaFunctionLibrary_eventLoadTinyModelAndGenerateText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics
	{
		struct LlamaFunctionLibrary_eventLoadTinyModelAndGenerateTextAsync_Parms
		{
			FString UserInput;
			FScriptDelegate OnTextGenerated;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInput_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserInput;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnTextGenerated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_UserInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_UserInput = { "UserInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventLoadTinyModelAndGenerateTextAsync_Parms, UserInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_UserInput_MetaData), Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_UserInput_MetaData) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_OnTextGenerated = { "OnTextGenerated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LlamaFunctionLibrary_eventLoadTinyModelAndGenerateTextAsync_Parms, OnTextGenerated), Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3487808426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_UserInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::NewProp_OnTextGenerated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Llama" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate text asynchronously\n" },
#endif
		{ "ModuleRelativePath", "Public/LlamaFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate text asynchronously" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULlamaFunctionLibrary, nullptr, "LoadTinyModelAndGenerateTextAsync", nullptr, nullptr, Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::LlamaFunctionLibrary_eventLoadTinyModelAndGenerateTextAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::LlamaFunctionLibrary_eventLoadTinyModelAndGenerateTextAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULlamaFunctionLibrary);
	UClass* Z_Construct_UClass_ULlamaFunctionLibrary_NoRegister()
	{
		return ULlamaFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULlamaFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULlamaFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LlamaIntegration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULlamaFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULlamaFunctionLibrary_BuildAgentPrompt, "BuildAgentPrompt" }, // 4004727267
		{ &Z_Construct_UFunction_ULlamaFunctionLibrary_InitializeLlama, "InitializeLlama" }, // 3806908742
		{ &Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateText, "LoadTinyModelAndGenerateText" }, // 2671792345
		{ &Z_Construct_UFunction_ULlamaFunctionLibrary_LoadTinyModelAndGenerateTextAsync, "LoadTinyModelAndGenerateTextAsync" }, // 1909806785
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULlamaFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LlamaFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/LlamaFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULlamaFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULlamaFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULlamaFunctionLibrary_Statics::ClassParams = {
		&ULlamaFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULlamaFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULlamaFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULlamaFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULlamaFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULlamaFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULlamaFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULlamaFunctionLibrary.OuterSingleton;
	}
	template<> LLAMAINTEGRATION_API UClass* StaticClass<ULlamaFunctionLibrary>()
	{
		return ULlamaFunctionLibrary::StaticClass();
	}
	ULlamaFunctionLibrary::ULlamaFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULlamaFunctionLibrary);
	ULlamaFunctionLibrary::~ULlamaFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULlamaFunctionLibrary, ULlamaFunctionLibrary::StaticClass, TEXT("ULlamaFunctionLibrary"), &Z_Registration_Info_UClass_ULlamaFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULlamaFunctionLibrary), 2532695181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_788255536(TEXT("/Script/LlamaIntegration"),
		Z_CompiledInDeferFile_FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
