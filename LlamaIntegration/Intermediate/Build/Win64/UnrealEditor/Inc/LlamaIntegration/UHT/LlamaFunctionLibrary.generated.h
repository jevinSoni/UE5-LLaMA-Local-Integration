// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LlamaFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LLAMAINTEGRATION_LlamaFunctionLibrary_generated_h
#error "LlamaFunctionLibrary.generated.h already included, missing '#pragma once' in LlamaFunctionLibrary.h"
#endif
#define LLAMAINTEGRATION_LlamaFunctionLibrary_generated_h

#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_11_DELEGATE \
LLAMAINTEGRATION_API void FLlamaResultDelegate_DelegateWrapper(const FScriptDelegate& LlamaResultDelegate, const FString& GeneratedText);


#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_SPARSE_DATA
#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildAgentPrompt); \
	DECLARE_FUNCTION(execLoadTinyModelAndGenerateTextAsync); \
	DECLARE_FUNCTION(execLoadTinyModelAndGenerateText); \
	DECLARE_FUNCTION(execInitializeLlama);


#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_ACCESSORS
#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULlamaFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULlamaFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULlamaFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LlamaIntegration"), NO_API) \
	DECLARE_SERIALIZER(ULlamaFunctionLibrary)


#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULlamaFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULlamaFunctionLibrary(ULlamaFunctionLibrary&&); \
	NO_API ULlamaFunctionLibrary(const ULlamaFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULlamaFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULlamaFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULlamaFunctionLibrary) \
	NO_API virtual ~ULlamaFunctionLibrary();


#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_13_PROLOG
#define FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_SPARSE_DATA \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_ACCESSORS \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LLAMAINTEGRATION_API UClass* StaticClass<class ULlamaFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VideoStream_Plugins_LlamaIntegration_Source_LlamaIntegration_Public_LlamaFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
