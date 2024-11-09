// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigationManagerUnbound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationManagerUnbound() {}

// Begin Cross Module References
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager();
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManagerUnbound();
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManagerUnbound_NoRegister();
UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References

// Begin Class ADonNavigationManagerUnbound
void ADonNavigationManagerUnbound::StaticRegisterNativesADonNavigationManagerUnbound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADonNavigationManagerUnbound);
UClass* Z_Construct_UClass_ADonNavigationManagerUnbound_NoRegister()
{
	return ADonNavigationManagerUnbound::StaticClass();
}
struct Z_Construct_UClass_ADonNavigationManagerUnbound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Infinite Worlds! This is the unbound version of the Navigation Manager.\n* Supports unlimited map sizes. Nothing is cached, everything is looked up on-demand and for procedural games it fully eliminates the burden of having to manage dynamic collision updates.\n* It is obviously slower than the Finite World equivalent but will benefit projects with huge maps or highly dynamic/frequently changing/procedural collision geometry.\n*/" },
#endif
		{ "IncludePath", "DonNavigationManagerUnbound.h" },
		{ "ModuleRelativePath", "Classes/DonNavigationManagerUnbound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Infinite Worlds! This is the unbound version of the Navigation Manager.\n* Supports unlimited map sizes. Nothing is cached, everything is looked up on-demand and for procedural games it fully eliminates the burden of having to manage dynamic collision updates.\n* It is obviously slower than the Finite World equivalent but will benefit projects with huge maps or highly dynamic/frequently changing/procedural collision geometry." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonNavigationManagerUnbound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADonNavigationManager,
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::ClassParams = {
	&ADonNavigationManagerUnbound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::Class_MetaDataParams), Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADonNavigationManagerUnbound()
{
	if (!Z_Registration_Info_UClass_ADonNavigationManagerUnbound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADonNavigationManagerUnbound.OuterSingleton, Z_Construct_UClass_ADonNavigationManagerUnbound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADonNavigationManagerUnbound.OuterSingleton;
}
template<> DONAINAVIGATION_API UClass* StaticClass<ADonNavigationManagerUnbound>()
{
	return ADonNavigationManagerUnbound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADonNavigationManagerUnbound);
ADonNavigationManagerUnbound::~ADonNavigationManagerUnbound() {}
// End Class ADonNavigationManagerUnbound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManagerUnbound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADonNavigationManagerUnbound, ADonNavigationManagerUnbound::StaticClass, TEXT("ADonNavigationManagerUnbound"), &Z_Registration_Info_UClass_ADonNavigationManagerUnbound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADonNavigationManagerUnbound), 2994234738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManagerUnbound_h_641835629(TEXT("/Script/DonAINavigation"),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManagerUnbound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManagerUnbound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
