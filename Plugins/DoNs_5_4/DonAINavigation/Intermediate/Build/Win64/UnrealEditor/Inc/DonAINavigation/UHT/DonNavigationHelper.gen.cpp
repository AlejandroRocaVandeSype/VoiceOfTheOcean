// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigationHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationHelper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigationHelper();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigationHelper_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References

// Begin Class UDonNavigationHelper Function DonNavigationManager
struct Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics
{
	struct DonNavigationHelper_eventDonNavigationManager_Parms
	{
		UObject* WorldContextObject;
		ADonNavigationManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding */" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManager_Parms, ReturnValue), Z_Construct_UClass_ADonNavigationManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigationHelper, nullptr, "DonNavigationManager", nullptr, nullptr, Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::DonNavigationHelper_eventDonNavigationManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::DonNavigationHelper_eventDonNavigationManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDonNavigationHelper::execDonNavigationManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADonNavigationManager**)Z_Param__Result=UDonNavigationHelper::DonNavigationManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UDonNavigationHelper Function DonNavigationManager

// Begin Class UDonNavigationHelper Function DonNavigationManagerForActor
struct Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics
{
	struct DonNavigationHelper_eventDonNavigationManagerForActor_Parms
	{
		const AActor* Actor;
		ADonNavigationManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding for specified Actor*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationHelper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Voxel navigation builder used for building navigation volumes and performing pathfinding for specified Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManagerForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationHelper_eventDonNavigationManagerForActor_Parms, ReturnValue), Z_Construct_UClass_ADonNavigationManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigationHelper, nullptr, "DonNavigationManagerForActor", nullptr, nullptr, Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::DonNavigationHelper_eventDonNavigationManagerForActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::DonNavigationHelper_eventDonNavigationManagerForActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDonNavigationHelper::execDonNavigationManagerForActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADonNavigationManager**)Z_Param__Result=UDonNavigationHelper::DonNavigationManagerForActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDonNavigationHelper Function DonNavigationManagerForActor

// Begin Class UDonNavigationHelper
void UDonNavigationHelper::StaticRegisterNativesUDonNavigationHelper()
{
	UClass* Class = UDonNavigationHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DonNavigationManager", &UDonNavigationHelper::execDonNavigationManager },
		{ "DonNavigationManagerForActor", &UDonNavigationHelper::execDonNavigationManagerForActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDonNavigationHelper);
UClass* Z_Construct_UClass_UDonNavigationHelper_NoRegister()
{
	return UDonNavigationHelper::StaticClass();
}
struct Z_Construct_UClass_UDonNavigationHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DonNavigationHelper.h" },
		{ "ModuleRelativePath", "Classes/DonNavigationHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManager, "DonNavigationManager" }, // 386963065
		{ &Z_Construct_UFunction_UDonNavigationHelper_DonNavigationManagerForActor, "DonNavigationManagerForActor" }, // 3966283794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDonNavigationHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDonNavigationHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDonNavigationHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDonNavigationHelper_Statics::ClassParams = {
	&UDonNavigationHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDonNavigationHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UDonNavigationHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDonNavigationHelper()
{
	if (!Z_Registration_Info_UClass_UDonNavigationHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDonNavigationHelper.OuterSingleton, Z_Construct_UClass_UDonNavigationHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDonNavigationHelper.OuterSingleton;
}
template<> DONAINAVIGATION_API UClass* StaticClass<UDonNavigationHelper>()
{
	return UDonNavigationHelper::StaticClass();
}
UDonNavigationHelper::UDonNavigationHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDonNavigationHelper);
UDonNavigationHelper::~UDonNavigationHelper() {}
// End Class UDonNavigationHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDonNavigationHelper, UDonNavigationHelper::StaticClass, TEXT("UDonNavigationHelper"), &Z_Registration_Info_UClass_UDonNavigationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDonNavigationHelper), 1874066391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_1691010939(TEXT("/Script/DonAINavigation"),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationHelper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
