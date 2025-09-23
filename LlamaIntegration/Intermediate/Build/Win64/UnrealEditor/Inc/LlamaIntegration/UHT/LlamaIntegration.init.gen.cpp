// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLlamaIntegration_init() {}
	LLAMAINTEGRATION_API UFunction* Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LlamaIntegration;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LlamaIntegration()
	{
		if (!Z_Registration_Info_UPackage__Script_LlamaIntegration.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LlamaIntegration_LlamaResultDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LlamaIntegration",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8BCD8159,
				0x721A59C0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LlamaIntegration.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LlamaIntegration.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LlamaIntegration(Z_Construct_UPackage__Script_LlamaIntegration, TEXT("/Script/LlamaIntegration"), Z_Registration_Info_UPackage__Script_LlamaIntegration, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8BCD8159, 0x721A59C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
