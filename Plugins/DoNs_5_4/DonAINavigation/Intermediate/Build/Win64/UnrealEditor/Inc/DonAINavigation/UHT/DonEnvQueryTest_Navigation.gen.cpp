// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonEnvQueryTest_Navigation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation_NoRegister();
UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References

// Begin Class UDonEnvQueryTest_Navigation
void UDonEnvQueryTest_Navigation::StaticRegisterNativesUDonEnvQueryTest_Navigation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDonEnvQueryTest_Navigation);
UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation_NoRegister()
{
	return UDonEnvQueryTest_Navigation::StaticClass();
}
struct Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchRandomLocation_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Search for random location nearby */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Search for random location nearby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomLocationMaxAttempts_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of Attempts to find random location nearby if Item's location is not valid */" },
#endif
		{ "EditCondition", "bSearchRandomLocation" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Attempts to find random location nearby if Item's location is not valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomLocationRadius_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find Random location radius */" },
#endif
		{ "EditCondition", "bSearchRandomLocation" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/DonEnvQueryTest_Navigation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Random location radius" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSearchRandomLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchRandomLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomLocationMaxAttempts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomLocationRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDonEnvQueryTest_Navigation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_SetBit(void* Obj)
{
	((UDonEnvQueryTest_Navigation*)Obj)->bSearchRandomLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation = { "bSearchRandomLocation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDonEnvQueryTest_Navigation), &Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchRandomLocation_MetaData), NewProp_bSearchRandomLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts = { "RandomLocationMaxAttempts", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDonEnvQueryTest_Navigation, RandomLocationMaxAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomLocationMaxAttempts_MetaData), NewProp_RandomLocationMaxAttempts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius = { "RandomLocationRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDonEnvQueryTest_Navigation, RandomLocationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomLocationRadius_MetaData), NewProp_RandomLocationRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_bSearchRandomLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationMaxAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::NewProp_RandomLocationRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::ClassParams = {
	&UDonEnvQueryTest_Navigation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDonEnvQueryTest_Navigation()
{
	if (!Z_Registration_Info_UClass_UDonEnvQueryTest_Navigation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDonEnvQueryTest_Navigation.OuterSingleton, Z_Construct_UClass_UDonEnvQueryTest_Navigation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDonEnvQueryTest_Navigation.OuterSingleton;
}
template<> DONAINAVIGATION_API UClass* StaticClass<UDonEnvQueryTest_Navigation>()
{
	return UDonEnvQueryTest_Navigation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDonEnvQueryTest_Navigation);
UDonEnvQueryTest_Navigation::~UDonEnvQueryTest_Navigation() {}
// End Class UDonEnvQueryTest_Navigation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Public_EnvironmentQuery_DonEnvQueryTest_Navigation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDonEnvQueryTest_Navigation, UDonEnvQueryTest_Navigation::StaticClass, TEXT("UDonEnvQueryTest_Navigation"), &Z_Registration_Info_UClass_UDonEnvQueryTest_Navigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDonEnvQueryTest_Navigation), 2470273171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Public_EnvironmentQuery_DonEnvQueryTest_Navigation_h_2678161498(TEXT("/Script/DonAINavigation"),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Public_EnvironmentQuery_DonEnvQueryTest_Navigation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Public_EnvironmentQuery_DonEnvQueryTest_Navigation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
