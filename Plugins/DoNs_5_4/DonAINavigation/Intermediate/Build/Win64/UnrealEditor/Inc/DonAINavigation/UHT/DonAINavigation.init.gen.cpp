// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonAINavigation_init() {}
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature();
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature();
	DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DonAINavigation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DonAINavigation()
	{
		if (!Z_Registration_Info_UPackage__Script_DonAINavigation.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DonAINavigation",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x29C87DFB,
				0xE7FC71AD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DonAINavigation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DonAINavigation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DonAINavigation(Z_Construct_UPackage__Script_DonAINavigation, TEXT("/Script/DonAINavigation"), Z_Registration_Info_UPackage__Script_DonAINavigation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x29C87DFB, 0xE7FC71AD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
