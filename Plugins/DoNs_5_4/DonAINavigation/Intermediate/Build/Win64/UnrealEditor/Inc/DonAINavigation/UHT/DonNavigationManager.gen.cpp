// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigationManager.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigationManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager();
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
DONAINAVIGATION_API UEnum* Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus();
DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature();
DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature();
DONAINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationQueryTask();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationTask();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationVoxel();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelX();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelXYZ();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelY();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonVoxelCollisionProfile();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References

// Begin Enum EDonNavigationQueryStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDonNavigationQueryStatus;
static UEnum* EDonNavigationQueryStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDonNavigationQueryStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDonNavigationQueryStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("EDonNavigationQueryStatus"));
	}
	return Z_Registration_Info_UEnum_EDonNavigationQueryStatus.OuterSingleton;
}
template<> DONAINAVIGATION_API UEnum* StaticEnum<EDonNavigationQueryStatus>()
{
	return EDonNavigationQueryStatus_StaticEnum();
}
struct Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failure.Name", "EDonNavigationQueryStatus::Failure" },
		{ "InProgress.Name", "EDonNavigationQueryStatus::InProgress" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "QueryHasNoSolution.Name", "EDonNavigationQueryStatus::QueryHasNoSolution" },
		{ "Success.Name", "EDonNavigationQueryStatus::Success" },
		{ "TimedOut.Name", "EDonNavigationQueryStatus::TimedOut" },
		{ "Unscheduled.Name", "EDonNavigationQueryStatus::Unscheduled" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDonNavigationQueryStatus::Unscheduled", (int64)EDonNavigationQueryStatus::Unscheduled },
		{ "EDonNavigationQueryStatus::InProgress", (int64)EDonNavigationQueryStatus::InProgress },
		{ "EDonNavigationQueryStatus::Success", (int64)EDonNavigationQueryStatus::Success },
		{ "EDonNavigationQueryStatus::Failure", (int64)EDonNavigationQueryStatus::Failure },
		{ "EDonNavigationQueryStatus::QueryHasNoSolution", (int64)EDonNavigationQueryStatus::QueryHasNoSolution },
		{ "EDonNavigationQueryStatus::TimedOut", (int64)EDonNavigationQueryStatus::TimedOut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	"EDonNavigationQueryStatus",
	"EDonNavigationQueryStatus",
	Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus()
{
	if (!Z_Registration_Info_UEnum_EDonNavigationQueryStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDonNavigationQueryStatus.InnerSingleton, Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDonNavigationQueryStatus.InnerSingleton;
}
// End Enum EDonNavigationQueryStatus

// Begin ScriptStruct FDonNavigationVoxel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavigationVoxel;
class UScriptStruct* FDonNavigationVoxel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationVoxel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavigationVoxel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationVoxel, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationVoxel"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationVoxel.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationVoxel>()
{
	return FDonNavigationVoxel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This is the basic unit of pathfinding for Finite Worlds.\n* Infinite Worlds (Unbound Manager) rely directly on FVectors\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the basic unit of pathfinding for Finite Worlds.\nInfinite Worlds (Unbound Manager) rely directly on FVectors" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationVoxel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavigationVoxel",
	nullptr,
	0,
	sizeof(FDonNavigationVoxel),
	alignof(FDonNavigationVoxel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationVoxel()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationVoxel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavigationVoxel.InnerSingleton, Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationVoxel.InnerSingleton;
}
// End ScriptStruct FDonNavigationVoxel

// Begin ScriptStruct FDonVoxelCollisionProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile;
class UScriptStruct* FDonVoxelCollisionProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonVoxelCollisionProfile, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonVoxelCollisionProfile"));
	}
	return Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonVoxelCollisionProfile>()
{
	return FDonVoxelCollisionProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Approximates the collision geometry of a mesh in the form of voxels.\n* This is only used when a pawn's collision body exceeds exceeds a \"unit voxel volume\" for the world.\n* For maximum performance it is recommended to tune the manager's VoxelSize to a value that roughly approximates your pawn's collision body.\n* If that is done correctly, this struct is never used as all collision checks for the pawn are inferred directly around its origin.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Approximates the collision geometry of a mesh in the form of voxels.\n* This is only used when a pawn's collision body exceeds exceeds a \"unit voxel volume\" for the world.\n* For maximum performance it is recommended to tune the manager's VoxelSize to a value that roughly approximates your pawn's collision body.\n* If that is done correctly, this struct is never used as all collision checks for the pawn are inferred directly around its origin." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonVoxelCollisionProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonVoxelCollisionProfile",
	nullptr,
	0,
	sizeof(FDonVoxelCollisionProfile),
	alignof(FDonVoxelCollisionProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonVoxelCollisionProfile()
{
	if (!Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile.InnerSingleton, Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile.InnerSingleton;
}
// End ScriptStruct FDonVoxelCollisionProfile

// Begin ScriptStruct FDonNavigationDynamicCollisionPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload;
class UScriptStruct* FDonNavigationDynamicCollisionPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationDynamicCollisionPayload"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationDynamicCollisionPayload>()
{
	return FDonNavigationDynamicCollisionPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* Collision payloads are any generic set of data passed from an external source (eg: The Behavior Tree \"Fly To\" node provided with this plugin) to the manager.\n* They are passed back via callbacks to anyone listening to the manager's query results, dynamic collision updates and other such callbacks.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision payloads are any generic set of data passed from an external source (eg: The Behavior Tree \"Fly To\" node provided with this plugin) to the manager.\nThey are passed back via callbacks to anyone listening to the manager's query results, dynamic collision updates and other such callbacks." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavigationDynamicCollisionPayload",
	nullptr,
	0,
	sizeof(FDonNavigationDynamicCollisionPayload),
	alignof(FDonNavigationDynamicCollisionPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload.InnerSingleton, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload.InnerSingleton;
}
// End ScriptStruct FDonNavigationDynamicCollisionPayload

// Begin Delegate FDonNavigationDynamicCollisionDelegate
struct Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics
{
	struct _Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms
	{
		FDonNavigationDynamicCollisionPayload Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms, Data), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2893137837
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation, nullptr, "DonNavigationDynamicCollisionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDonNavigationDynamicCollisionDelegate_DelegateWrapper(const FScriptDelegate& DonNavigationDynamicCollisionDelegate, FDonNavigationDynamicCollisionPayload const& Data)
{
	struct _Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms
	{
		FDonNavigationDynamicCollisionPayload Data;
	};
	_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms Parms;
	Parms.Data=Data;
	DonNavigationDynamicCollisionDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDonNavigationDynamicCollisionDelegate

// Begin ScriptStruct FDonNavigationDynamicCollisionNotifyee
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee;
class UScriptStruct* FDonNavigationDynamicCollisionNotifyee::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationDynamicCollisionNotifyee"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationDynamicCollisionNotifyee>()
{
	return FDonNavigationDynamicCollisionNotifyee::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This Collision Notifyee struct contains the delegate for any class listening to dynamic collisions and the paylaod provided by that class */" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Collision Notifyee struct contains the delegate for any class listening to dynamic collisions and the paylaod provided by that class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listener_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Listener;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionNotifyee>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDonNavigationDynamicCollisionNotifyee, Listener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listener_MetaData), NewProp_Listener_MetaData) }; // 892553534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewProp_Listener,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavigationDynamicCollisionNotifyee",
	Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::PropPointers),
	sizeof(FDonNavigationDynamicCollisionNotifyee),
	alignof(FDonNavigationDynamicCollisionNotifyee),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee.InnerSingleton, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee.InnerSingleton;
}
// End ScriptStruct FDonNavigationDynamicCollisionNotifyee

// Begin ScriptStruct FDonNavVoxelY
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavVoxelY;
class UScriptStruct* FDonNavVoxelY::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavVoxelY.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavVoxelY.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavVoxelY, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavVoxelY"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavVoxelY.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavVoxelY>()
{
	return FDonNavVoxelY::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavVoxelY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finite World data structure:\n// Nested Structs for aggregating world voxels across three axes:\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finite World data structure:\nNested Structs for aggregating world voxels across three axes:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavVoxelY>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_Inner = { "Z", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDonNavigationVoxel, METADATA_PARAMS(0, nullptr) }; // 405751508
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDonNavVoxelY, Z), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) }; // 405751508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewProp_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavVoxelY",
	Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::PropPointers),
	sizeof(FDonNavVoxelY),
	alignof(FDonNavVoxelY),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelY()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavVoxelY.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavVoxelY.InnerSingleton, Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavVoxelY.InnerSingleton;
}
// End ScriptStruct FDonNavVoxelY

// Begin ScriptStruct FDonNavVoxelX
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavVoxelX;
class UScriptStruct* FDonNavVoxelX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavVoxelX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavVoxelX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavVoxelX, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavVoxelX"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavVoxelX.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavVoxelX>()
{
	return FDonNavVoxelX::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavVoxelX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Y_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavVoxelX>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_Inner = { "Y", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDonNavVoxelY, METADATA_PARAMS(0, nullptr) }; // 2814026830
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDonNavVoxelX, Y), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) }; // 2814026830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavVoxelX",
	Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::PropPointers),
	sizeof(FDonNavVoxelX),
	alignof(FDonNavVoxelX),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelX()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavVoxelX.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavVoxelX.InnerSingleton, Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavVoxelX.InnerSingleton;
}
// End ScriptStruct FDonNavVoxelX

// Begin ScriptStruct FDonNavVoxelXYZ
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ;
class UScriptStruct* FDonNavVoxelXYZ::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavVoxelXYZ, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavVoxelXYZ"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavVoxelXYZ>()
{
	return FDonNavVoxelXYZ::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_X_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_X;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavVoxelXYZ>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_Inner = { "X", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDonNavVoxelX, METADATA_PARAMS(0, nullptr) }; // 773902155
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDonNavVoxelXYZ, X), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) }; // 773902155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewProp_X,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavVoxelXYZ",
	Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::PropPointers),
	sizeof(FDonNavVoxelXYZ),
	alignof(FDonNavVoxelXYZ),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavVoxelXYZ()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ.InnerSingleton, Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ.InnerSingleton;
}
// End ScriptStruct FDonNavVoxelXYZ

// Begin ScriptStruct FDoNNavigationQueryParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams;
class UScriptStruct* FDoNNavigationQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoNNavigationQueryParams, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DoNNavigationQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDoNNavigationQueryParams>()
{
	return FDoNNavigationQueryParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* These parameters are passed by end users (via direct API calls or via the \"Fly To\" Behavior Tree node) to customize various aspects of this pathfinding system\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These parameters are passed by end users (via direct API calls or via the \"Fly To\" Behavior Tree node) to customize various aspects of this pathfinding system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryTimeout_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If a query takes more time to run than the value specified here, the pathfinding task will abort\n\x09*   This is useful to prevent expensive queries (eg: by passing a destination for which no solution exists)\n\x09*   from clogging up the pathfinding system\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a query takes more time to run than the value specified here, the pathfinding task will abort\n This is useful to prevent expensive queries (eg: by passing a destination for which no solution exists)\n from clogging up the pathfinding system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlexibleOriginGoal_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09*  If enabled, your A.I.'s origin or destination will be slightly nudged to accommodate tricky scenarios where\n\x09*  your A.I. needs to start or finish its pathfinding flush with a collision body (eg: hiding right next to a wall)\n\x09* The magnitude of nudging can be configured directly in the Navigation Manager's AutoCorrectionGuessList variable\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*  If enabled, your A.I.'s origin or destination will be slightly nudged to accommodate tricky scenarios where\n*  your A.I. needs to start or finish its pathfinding flush with a collision body (eg: hiding right next to a wall)\n* The magnitude of nudging can be configured directly in the Navigation Manager's AutoCorrectionGuessList variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipOptimizationPass_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skips optimization of the path solution completely. Optimized paths are shorter and more visually cogent\n\x09*   but come at a cost. Maps with low voxel density (high VoxelSize value) usually need optimization for best results\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips optimization of the path solution completely. Optimized paths are shorter and more visually cogent\n but come at a cost. Maps with low voxel density (high VoxelSize value) usually need optimization for best results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreciseDynamicCollisionRepathing_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enabling this will sample all voxels of your pawn or character for determining whether a path solution\n\x09*  needs to be recalculated due to dynamic obstacles. This will improve the accuracy of response to dynamic collisions\n\x09*  but comes at a steep cost as the number of event delegates required for listening to precise dynamic collisions is high\n\x09*  Only use this if you really need to.*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this will sample all voxels of your pawn or character for determining whether a path solution\nneeds to be recalculated due to dynamic obstacles. This will improve the accuracy of response to dynamic collisions\nbut comes at a steep cost as the number of event delegates required for listening to precise dynamic collisions is high\nOnly use this if you really need to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the destination can be reached via straight line travel, then skip creation of dynamic collision listeners and repathing\n\x09*    to maximize performance. However, advanced usecases (like the sample project's over-the-top multi-rocket dodging example)\n\x09*    may need dynamic repathing even for straight-line travel. In such a case you should set this variable to false\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the destination can be reached via straight line travel, then skip creation of dynamic collision listeners and repathing\n  to maximize performance. However, advanced usecases (like the sample project's over-the-top multi-rocket dodging example)\n  may need dynamic repathing even for straight-line travel. In such a case you should set this variable to false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionShapeInflation_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows you to inflate your mesh's collision extents by a fixed increment for all sweep based testing.\n\x09*   Typically used if you find your mesh bumping into obstacles while navigating along path solutions.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to inflate your mesh's collision extents by a fixed increment for all sweep based testing.\n Typically used if you find your mesh bumping into obstacles while navigating along path solutions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceRescheduleQuery_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** By default the navigation manager will not allow you to schedule a new query if a pre-existing query\n\x09*   scheduled by you is not yet complete. You can override this behavior by forcing the manager to abort\n\x09*   the old query and reschedule this one. Use with discretion: Hammering the manager with queries can\n\x09*   quickly degrade performance (especially in a dynamic collision context).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By default the navigation manager will not allow you to schedule a new query if a pre-existing query\n scheduled by you is not yet complete. You can override this behavior by forcing the manager to abort\n the old query and reschedule this one. Use with discretion: Hammering the manager with queries can\n quickly degrade performance (especially in a dynamic collision context)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryTimeout;
	static void NewProp_bFlexibleOriginGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlexibleOriginGoal;
	static void NewProp_bSkipOptimizationPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipOptimizationPass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOptimizerSweepAttemptsPerNode;
	static void NewProp_bPreciseDynamicCollisionRepathing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreciseDynamicCollisionRepathing;
	static void NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionShapeInflation;
	static void NewProp_bForceRescheduleQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRescheduleQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoNNavigationQueryParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout = { "QueryTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryParams, QueryTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryTimeout_MetaData), NewProp_QueryTimeout_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_SetBit(void* Obj)
{
	((FDoNNavigationQueryParams*)Obj)->bFlexibleOriginGoal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal = { "bFlexibleOriginGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlexibleOriginGoal_MetaData), NewProp_bFlexibleOriginGoal_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_SetBit(void* Obj)
{
	((FDoNNavigationQueryParams*)Obj)->bSkipOptimizationPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass = { "bSkipOptimizationPass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipOptimizationPass_MetaData), NewProp_bSkipOptimizationPass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode = { "MaxOptimizerSweepAttemptsPerNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryParams, MaxOptimizerSweepAttemptsPerNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData), NewProp_MaxOptimizerSweepAttemptsPerNode_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_SetBit(void* Obj)
{
	((FDoNNavigationQueryParams*)Obj)->bPreciseDynamicCollisionRepathing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing = { "bPreciseDynamicCollisionRepathing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreciseDynamicCollisionRepathing_MetaData), NewProp_bPreciseDynamicCollisionRepathing_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals_SetBit(void* Obj)
{
	((FDoNNavigationQueryParams*)Obj)->bIgnoreDynamicCollisionRepathingForDirectGoals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals = { "bIgnoreDynamicCollisionRepathingForDirectGoals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals_MetaData), NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation = { "CollisionShapeInflation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryParams, CollisionShapeInflation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionShapeInflation_MetaData), NewProp_CollisionShapeInflation_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_SetBit(void* Obj)
{
	((FDoNNavigationQueryParams*)Obj)->bForceRescheduleQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery = { "bForceRescheduleQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationQueryParams), &Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceRescheduleQuery_MetaData), NewProp_bForceRescheduleQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_QueryTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bFlexibleOriginGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bSkipOptimizationPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_MaxOptimizerSweepAttemptsPerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bPreciseDynamicCollisionRepathing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bIgnoreDynamicCollisionRepathingForDirectGoals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_CollisionShapeInflation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewProp_bForceRescheduleQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DoNNavigationQueryParams",
	Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::PropPointers),
	sizeof(FDoNNavigationQueryParams),
	alignof(FDoNNavigationQueryParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams()
{
	if (!Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams.InnerSingleton;
}
// End ScriptStruct FDoNNavigationQueryParams

// Begin ScriptStruct FDoNNavigationDebugParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams;
class UScriptStruct* FDoNNavigationDebugParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoNNavigationDebugParams, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DoNNavigationDebugParams"));
	}
	return Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDoNNavigationDebugParams>()
{
	return FDoNNavigationDebugParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Navigation Query Debug Parameters  */" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Navigation Query Debug Parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugVolumes_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeRawPath_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeOptimizedPath_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeInRealTime_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineDuration_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* -1 signifies persistent lines that need to be flushed out manually to clear them*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 signifies persistent lines that need to be flushed out manually to clear them" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_DrawDebugVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugVolumes;
	static void NewProp_VisualizeRawPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VisualizeRawPath;
	static void NewProp_VisualizeOptimizedPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VisualizeOptimizedPath;
	static void NewProp_VisualizeInRealTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VisualizeInRealTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoNNavigationDebugParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_SetBit(void* Obj)
{
	((FDoNNavigationDebugParams*)Obj)->DrawDebugVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes = { "DrawDebugVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugVolumes_MetaData), NewProp_DrawDebugVolumes_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_SetBit(void* Obj)
{
	((FDoNNavigationDebugParams*)Obj)->VisualizeRawPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath = { "VisualizeRawPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeRawPath_MetaData), NewProp_VisualizeRawPath_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_SetBit(void* Obj)
{
	((FDoNNavigationDebugParams*)Obj)->VisualizeOptimizedPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath = { "VisualizeOptimizedPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeOptimizedPath_MetaData), NewProp_VisualizeOptimizedPath_MetaData) };
void Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_SetBit(void* Obj)
{
	((FDoNNavigationDebugParams*)Obj)->VisualizeInRealTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime = { "VisualizeInRealTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDoNNavigationDebugParams), &Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeInRealTime_MetaData), NewProp_VisualizeInRealTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationDebugParams, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration = { "LineDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationDebugParams, LineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineDuration_MetaData), NewProp_LineDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_DrawDebugVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeRawPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeOptimizedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_VisualizeInRealTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewProp_LineDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DoNNavigationDebugParams",
	Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::PropPointers),
	sizeof(FDoNNavigationDebugParams),
	alignof(FDoNNavigationDebugParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams()
{
	if (!Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams.InnerSingleton, Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams.InnerSingleton;
}
// End ScriptStruct FDoNNavigationDebugParams

// Begin ScriptStruct FDoNNavigationQueryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoNNavigationQueryData;
class UScriptStruct* FDoNNavigationQueryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoNNavigationQueryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoNNavigationQueryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoNNavigationQueryData, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DoNNavigationQueryData"));
	}
	return Z_Registration_Info_UScriptStruct_DoNNavigationQueryData.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDoNNavigationQueryData>()
{
	return FDoNNavigationQueryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* Encapsulates all the data relevant for a single navigation query request. \n  Some variables in this are updated in real-time per tick as the navigation solver sequentially processes each task in its queue\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encapsulates all the data relevant for a single navigation query request.\n  Some variables in this are updated in real-time per tick as the navigation solver sequentially processes each task in its queue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Query input\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSolutionOptimized_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryStatus_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueryStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoNNavigationQueryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, CollisionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryParams_MetaData), NewProp_QueryParams_MetaData) }; // 3542915895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, PathSolutionOptimized), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSolutionOptimized_MetaData), NewProp_PathSolutionOptimized_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoNNavigationQueryData, QueryStatus), Z_Construct_UEnum_DonAINavigation_EDonNavigationQueryStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryStatus_MetaData), NewProp_QueryStatus_MetaData) }; // 3121564868
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_PathSolutionOptimized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewProp_QueryStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DoNNavigationQueryData",
	Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::PropPointers),
	sizeof(FDoNNavigationQueryData),
	alignof(FDoNNavigationQueryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData()
{
	if (!Z_Registration_Info_UScriptStruct_DoNNavigationQueryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoNNavigationQueryData.InnerSingleton, Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoNNavigationQueryData.InnerSingleton;
}
// End ScriptStruct FDoNNavigationQueryData

// Begin Delegate FDoNNavigationResultHandler
struct Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics
{
	struct _Script_DonAINavigation_eventDoNNavigationResultHandler_Parms
	{
		FDoNNavigationQueryData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n* Result Handler Delegate: This is used by the Navigation Manager for signialling to API callers/BT nodes/etc that a navigation query is complete \n* and that the pawn can now consume the path solution to navigate to its goal\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result Handler Delegate: This is used by the Navigation Manager for signialling to API callers/BT nodes/etc that a navigation query is complete\nand that the pawn can now consume the path solution to navigate to its goal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms, Data), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2515757025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation, nullptr, "DoNNavigationResultHandler__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDoNNavigationResultHandler_DelegateWrapper(const FScriptDelegate& DoNNavigationResultHandler, FDoNNavigationQueryData const& Data)
{
	struct _Script_DonAINavigation_eventDoNNavigationResultHandler_Parms
	{
		FDoNNavigationQueryData Data;
	};
	_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms Parms;
	Parms.Data=Data;
	DoNNavigationResultHandler.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDoNNavigationResultHandler

// Begin ScriptStruct FDonNavigationTask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavigationTask;
class UScriptStruct* FDonNavigationTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavigationTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationTask, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationTask"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationTask.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationTask>()
{
	return FDonNavigationTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavigationTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	nullptr,
	&NewStructOps,
	"DonNavigationTask",
	nullptr,
	0,
	sizeof(FDonNavigationTask),
	alignof(FDonNavigationTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavigationTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationTask()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavigationTask.InnerSingleton, Z_Construct_UScriptStruct_FDonNavigationTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationTask.InnerSingleton;
}
// End ScriptStruct FDonNavigationTask

// Begin ScriptStruct FDonNavigationQueryTask
static_assert(std::is_polymorphic<FDonNavigationQueryTask>() == std::is_polymorphic<FDonNavigationTask>(), "USTRUCT FDonNavigationQueryTask cannot be polymorphic unless super FDonNavigationTask is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavigationQueryTask;
class UScriptStruct* FDonNavigationQueryTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationQueryTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavigationQueryTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationQueryTask, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationQueryTask"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationQueryTask.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationQueryTask>()
{
	return FDonNavigationQueryTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Represents a single navigation task. These are contained in a queue and solved with a fixed number of solver iterations allocated to each task still pending in the queue\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a single navigation task. These are contained in a queue and solved with a fixed number of solver iterations allocated to each task still pending in the queue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultHandler_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicCollisionListener_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResultHandler;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_DynamicCollisionListener;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationQueryTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler = { "ResultHandler", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDonNavigationQueryTask, ResultHandler), Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultHandler_MetaData), NewProp_ResultHandler_MetaData) }; // 1396312569
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener = { "DynamicCollisionListener", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDonNavigationQueryTask, DynamicCollisionListener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicCollisionListener_MetaData), NewProp_DynamicCollisionListener_MetaData) }; // 892553534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_ResultHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewProp_DynamicCollisionListener,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	Z_Construct_UScriptStruct_FDonNavigationTask,
	&NewStructOps,
	"DonNavigationQueryTask",
	Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::PropPointers),
	sizeof(FDonNavigationQueryTask),
	alignof(FDonNavigationQueryTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationQueryTask()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationQueryTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavigationQueryTask.InnerSingleton, Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationQueryTask.InnerSingleton;
}
// End ScriptStruct FDonNavigationQueryTask

// Begin Delegate FDonCollisionSamplerCallback
struct Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics
{
	struct _Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms
	{
		bool bTaskSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTaskSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTaskSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful_SetBit(void* Obj)
{
	((_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms*)Obj)->bTaskSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful = { "bTaskSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms), &Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::NewProp_bTaskSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DonAINavigation, nullptr, "DonCollisionSamplerCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDonCollisionSamplerCallback_DelegateWrapper(const FScriptDelegate& DonCollisionSamplerCallback, bool bTaskSuccessful)
{
	struct _Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms
	{
		bool bTaskSuccessful;
	};
	_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms Parms;
	Parms.bTaskSuccessful=bTaskSuccessful ? true : false;
	DonCollisionSamplerCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDonCollisionSamplerCallback

// Begin ScriptStruct FDonNavigationDynamicCollisionTask
static_assert(std::is_polymorphic<FDonNavigationDynamicCollisionTask>() == std::is_polymorphic<FDonNavigationTask>(), "USTRUCT FDonNavigationDynamicCollisionTask cannot be polymorphic unless super FDonNavigationTask is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask;
class UScriptStruct* FDonNavigationDynamicCollisionTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("DonNavigationDynamicCollisionTask"));
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FDonNavigationDynamicCollisionTask>()
{
	return FDonNavigationDynamicCollisionTask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	Z_Construct_UScriptStruct_FDonNavigationTask,
	&NewStructOps,
	"DonNavigationDynamicCollisionTask",
	nullptr,
	0,
	sizeof(FDonNavigationDynamicCollisionTask),
	alignof(FDonNavigationDynamicCollisionTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask()
{
	if (!Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask.InnerSingleton, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask.InnerSingleton;
}
// End ScriptStruct FDonNavigationDynamicCollisionTask

// Begin Class ADonNavigationManager Function AbortPathfindingTask
struct Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics
{
	struct DonNavigationManager_eventAbortPathfindingTask_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aborts an existing pathfinding task for a given Actor */" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aborts an existing pathfinding task for a given Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventAbortPathfindingTask_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "AbortPathfindingTask", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::DonNavigationManager_eventAbortPathfindingTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::DonNavigationManager_eventAbortPathfindingTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execAbortPathfindingTask)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbortPathfindingTask(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function AbortPathfindingTask

// Begin Class ADonNavigationManager Function CanNavigate
struct Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics
{
	struct DonNavigationManager_eventCanNavigate_Parms
	{
		FVector Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventCanNavigate_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventCanNavigate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventCanNavigate_Parms), &Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "CanNavigate", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::DonNavigationManager_eventCanNavigate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::DonNavigationManager_eventCanNavigate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_CanNavigate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_CanNavigate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execCanNavigate)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanNavigate(Z_Param_Location);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function CanNavigate

// Begin Class ADonNavigationManager Function ClampLocationToNavigableWorld
struct Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics
{
	struct DonNavigationManager_eventClampLocationToNavigableWorld_Parms
	{
		FVector DesiredLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Clamps a vector to the navigation bounds as defined by the grid configuration of the navigation object you've placed in the map*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamps a vector to the navigation bounds as defined by the grid configuration of the navigation object you've placed in the map" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventClampLocationToNavigableWorld_Parms, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventClampLocationToNavigableWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_DesiredLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "ClampLocationToNavigableWorld", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::DonNavigationManager_eventClampLocationToNavigableWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::DonNavigationManager_eventClampLocationToNavigableWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execClampLocationToNavigableWorld)
{
	P_GET_STRUCT(FVector,Z_Param_DesiredLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ClampLocationToNavigableWorld(Z_Param_DesiredLocation);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function ClampLocationToNavigableWorld

// Begin Class ADonNavigationManager Function ConstructBuilder
struct Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World generation\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World generation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "ConstructBuilder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execConstructBuilder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConstructBuilder();
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function ConstructBuilder

// Begin Class ADonNavigationManager Function Debug_ClearAllVolumes
struct Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_ClearAllVolumes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execDebug_ClearAllVolumes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_ClearAllVolumes();
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function Debug_ClearAllVolumes

// Begin Class ADonNavigationManager Function Debug_DrawAllVolumes
struct Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics
{
	struct DonNavigationManager_eventDebug_DrawAllVolumes_Parms
	{
		float LineThickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawAllVolumes_Parms, LineThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::NewProp_LineThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_DrawAllVolumes", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::DonNavigationManager_eventDebug_DrawAllVolumes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::DonNavigationManager_eventDebug_DrawAllVolumes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execDebug_DrawAllVolumes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_DrawAllVolumes(Z_Param_LineThickness);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function Debug_DrawAllVolumes

// Begin Class ADonNavigationManager Function Debug_DrawVolumesAroundPoint
struct Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics
{
	struct DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms
	{
		FVector Location;
		int32 CubeSize;
		bool DrawPersistentLines;
		float Duration;
		float LineThickness;
		bool bAutoInitializeVolumes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bAutoInitializeVolumes", "false" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CubeSize;
	static void NewProp_DrawPersistentLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawPersistentLines;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bAutoInitializeVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInitializeVolumes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_CubeSize = { "CubeSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, CubeSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines_SetBit(void* Obj)
{
	((DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms*)Obj)->DrawPersistentLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines = { "DrawPersistentLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms), &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms, LineThickness), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes_SetBit(void* Obj)
{
	((DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms*)Obj)->bAutoInitializeVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes = { "bAutoInitializeVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms), &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_CubeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_DrawPersistentLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::NewProp_bAutoInitializeVolumes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_DrawVolumesAroundPoint", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::DonNavigationManager_eventDebug_DrawVolumesAroundPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execDebug_DrawVolumesAroundPoint)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FIntProperty,Z_Param_CubeSize);
	P_GET_UBOOL(Z_Param_DrawPersistentLines);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
	P_GET_UBOOL(Z_Param_bAutoInitializeVolumes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_DrawVolumesAroundPoint(Z_Param_Location,Z_Param_CubeSize,Z_Param_DrawPersistentLines,Z_Param_Duration,Z_Param_LineThickness,Z_Param_bAutoInitializeVolumes);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function Debug_DrawVolumesAroundPoint

// Begin Class ADonNavigationManager Function Debug_DrawVoxelCollisionProfile
struct Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics
{
	struct DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms
	{
		UPrimitiveComponent* MeshOrPrimitive;
		bool bDrawPersistent;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bDrawPersistent", "false" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOrPrimitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshOrPrimitive;
	static void NewProp_bDrawPersistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPersistent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive = { "MeshOrPrimitive", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms, MeshOrPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOrPrimitive_MetaData), NewProp_MeshOrPrimitive_MetaData) };
void Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent_SetBit(void* Obj)
{
	((DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms*)Obj)->bDrawPersistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent = { "bDrawPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms), &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_MeshOrPrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_bDrawPersistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_DrawVoxelCollisionProfile", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::DonNavigationManager_eventDebug_DrawVoxelCollisionProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execDebug_DrawVoxelCollisionProfile)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MeshOrPrimitive);
	P_GET_UBOOL(Z_Param_bDrawPersistent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_DrawVoxelCollisionProfile(Z_Param_MeshOrPrimitive,Z_Param_bDrawPersistent,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function Debug_DrawVoxelCollisionProfile

// Begin Class ADonNavigationManager Function Debug_ToggleWorldBoundaryInGame
struct Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "Debug_ToggleWorldBoundaryInGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execDebug_ToggleWorldBoundaryInGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Debug_ToggleWorldBoundaryInGame();
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function Debug_ToggleWorldBoundaryInGame

// Begin Class ADonNavigationManager Function FindPathSolution_StressTesting
struct Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics
{
	struct DonNavigationManager_eventFindPathSolution_StressTesting_Parms
	{
		AActor* Actor;
		FVector Destination;
		TArray<FVector> PathSolutionRaw;
		TArray<FVector> PathSolutionOptimized;
		FDoNNavigationQueryParams QueryParams;
		FDoNNavigationDebugParams DebugParams;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09*  WARNING: This function is for stress-testing for performance only, it operates synchronously unlike the scheduler functions making it great for profiling sessions.\n\x09*  Use SchedulePathfindingTask for regular navigation and pathfinding usecases.\n\x09*\n\x09*  Given an actor (representing origin) and a destination point in the world, this function generates the shortest path between the two. \n\x09*\n\x09*  @param  Actor                  Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\x09\n\x09*  @param  Destination            Point in the world to which the actor needs to travel\n\x09*  @param  PathSolutionRaw        Path solution as an array of FVectors representing the shortest path from origin to destination\n\x09*  @param  PathSolutionOptimized  Path solution optimized from the raw path by performing collision sweeps using the actor's collision component\n\x09*  @param  QueryParams            Additional params for the path finding query\x09\x09\x09\x09\x09\x09\x09\x09\x09  \n\x09*  @param  DebugParams            Use these debug params to enable visualization of the raw and optimized paths and other debug related activities\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WARNING: This function is for stress-testing for performance only, it operates synchronously unlike the scheduler functions making it great for profiling sessions.\nUse SchedulePathfindingTask for regular navigation and pathfinding usecases.\n\nGiven an actor (representing origin) and a destination point in the world, this function generates the shortest path between the two.\n\n@param  Actor                  Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\n@param  Destination            Point in the world to which the actor needs to travel\n@param  PathSolutionRaw        Path solution as an array of FVectors representing the shortest path from origin to destination\n@param  PathSolutionOptimized  Path solution optimized from the raw path by performing collision sweeps using the actor's collision component\n@param  QueryParams            Additional params for the path finding query\n@param  DebugParams            Use these debug params to enable visualization of the raw and optimized paths and other debug related activities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathSolutionRaw_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathSolutionRaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathSolutionOptimized_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathSolutionOptimized;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugParams;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw_Inner = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw = { "PathSolutionRaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, PathSolutionRaw), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized_Inner = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized = { "PathSolutionOptimized", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, PathSolutionOptimized), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryParams_MetaData), NewProp_QueryParams_MetaData) }; // 3542915895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindPathSolution_StressTesting_Parms, DebugParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugParams_MetaData), NewProp_DebugParams_MetaData) }; // 681916136
void Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventFindPathSolution_StressTesting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventFindPathSolution_StressTesting_Parms), &Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_PathSolutionOptimized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_QueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_DebugParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "FindPathSolution_StressTesting", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::DonNavigationManager_eventFindPathSolution_StressTesting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::DonNavigationManager_eventFindPathSolution_StressTesting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execFindPathSolution_StressTesting)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionRaw);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolutionOptimized);
	P_GET_STRUCT_REF(FDoNNavigationQueryParams,Z_Param_Out_QueryParams);
	P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindPathSolution_StressTesting(Z_Param_Actor,Z_Param_Destination,Z_Param_Out_PathSolutionRaw,Z_Param_Out_PathSolutionOptimized,Z_Param_Out_QueryParams,Z_Param_Out_DebugParams);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function FindPathSolution_StressTesting

// Begin Class ADonNavigationManager Function FindRandomPointAroundOriginInNavWorld
struct Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics
{
	struct DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms
	{
		AActor* NavigationActor;
		FVector Origin;
		float Distance;
		bool bFoundValidResult;
		float MaxDesiredAltitude;
		float MaxZAngularDispacement;
		int32 MaxAttempts;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_MaxAttempts", "5" },
		{ "CPP_Default_MaxDesiredAltitude", "-1.000000" },
		{ "CPP_Default_MaxZAngularDispacement", "15.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bFoundValidResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundValidResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZAngularDispacement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_NavigationActor = { "NavigationActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, NavigationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, Distance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult_SetBit(void* Obj)
{
	((DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms*)Obj)->bFoundValidResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult = { "bFoundValidResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxDesiredAltitude = { "MaxDesiredAltitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, MaxDesiredAltitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxZAngularDispacement = { "MaxZAngularDispacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, MaxZAngularDispacement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, MaxAttempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_NavigationActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_bFoundValidResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxDesiredAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxZAngularDispacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_MaxAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "FindRandomPointAroundOriginInNavWorld", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::DonNavigationManager_eventFindRandomPointAroundOriginInNavWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execFindRandomPointAroundOriginInNavWorld)
{
	P_GET_OBJECT(AActor,Z_Param_NavigationActor);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_UBOOL_REF(Z_Param_Out_bFoundValidResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDesiredAltitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxZAngularDispacement);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttempts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->FindRandomPointAroundOriginInNavWorld(Z_Param_NavigationActor,Z_Param_Origin,Z_Param_Distance,Z_Param_Out_bFoundValidResult,Z_Param_MaxDesiredAltitude,Z_Param_MaxZAngularDispacement,Z_Param_MaxAttempts);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function FindRandomPointAroundOriginInNavWorld

// Begin Class ADonNavigationManager Function FindRandomPointFromActorInNavWorld
struct Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics
{
	struct DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms
	{
		AActor* Actor;
		float Distance;
		bool bFoundValidResult;
		float MaxDesiredAltitude;
		float MaxZAngularDispacement;
		int32 MaxAttempts;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI Utility Functions\n" },
#endif
		{ "CPP_Default_MaxAttempts", "5" },
		{ "CPP_Default_MaxDesiredAltitude", "-1.000000" },
		{ "CPP_Default_MaxZAngularDispacement", "15.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bFoundValidResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundValidResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZAngularDispacement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, Distance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult_SetBit(void* Obj)
{
	((DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms*)Obj)->bFoundValidResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult = { "bFoundValidResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxDesiredAltitude = { "MaxDesiredAltitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, MaxDesiredAltitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxZAngularDispacement = { "MaxZAngularDispacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, MaxZAngularDispacement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, MaxAttempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_bFoundValidResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxDesiredAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxZAngularDispacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_MaxAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "FindRandomPointFromActorInNavWorld", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::DonNavigationManager_eventFindRandomPointFromActorInNavWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execFindRandomPointFromActorInNavWorld)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_UBOOL_REF(Z_Param_Out_bFoundValidResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDesiredAltitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxZAngularDispacement);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttempts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->FindRandomPointFromActorInNavWorld(Z_Param_Actor,Z_Param_Distance,Z_Param_Out_bFoundValidResult,Z_Param_MaxDesiredAltitude,Z_Param_MaxZAngularDispacement,Z_Param_MaxAttempts);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function FindRandomPointFromActorInNavWorld

// Begin Class ADonNavigationManager Function HasTask
struct Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics
{
	struct DonNavigationManager_eventHasTask_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Does this actor have an active pathfinding task already scheduled with the navigation manager? */" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this actor have an active pathfinding task already scheduled with the navigation manager?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventHasTask_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventHasTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventHasTask_Parms), &Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "HasTask", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::DonNavigationManager_eventHasTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::DonNavigationManager_eventHasTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_HasTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_HasTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execHasTask)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTask(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function HasTask

// Begin Class ADonNavigationManager Function IsDirectPathLineSweep
struct Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics
{
	struct DonNavigationManager_eventIsDirectPathLineSweep_Parms
	{
		UPrimitiveComponent* CollisionComponent;
		FVector Start;
		FVector End;
		FHitResult OutHit;
		bool bFindInitialOverlaps;
		float CollisionShapeInflation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bFindInitialOverlaps", "false" },
		{ "CPP_Default_CollisionShapeInflation", "0.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionShapeInflation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, CollisionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsDirectPathLineSweep_Parms*)Obj)->bFindInitialOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionShapeInflation = { "CollisionShapeInflation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineSweep_Parms, CollisionShapeInflation), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsDirectPathLineSweep_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_bFindInitialOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_CollisionShapeInflation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsDirectPathLineSweep", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::DonNavigationManager_eventIsDirectPathLineSweep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::DonNavigationManager_eventIsDirectPathLineSweep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execIsDirectPathLineSweep)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_UBOOL(Z_Param_bFindInitialOverlaps);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionShapeInflation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDirectPathLineSweep(Z_Param_CollisionComponent,Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit,Z_Param_bFindInitialOverlaps,Z_Param_CollisionShapeInflation);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function IsDirectPathLineSweep

// Begin Class ADonNavigationManager Function IsDirectPathLineTrace
struct Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics
{
	struct DonNavigationManager_eventIsDirectPathLineTrace_Parms
	{
		FVector start;
		FVector end;
		FHitResult OutHit;
		TArray<AActor*> ActorsToIgnore;
		bool bFindInitialOverlaps;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_bFindInitialOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_end;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathLineTrace_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsDirectPathLineTrace_Parms*)Obj)->bFindInitialOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineTrace_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsDirectPathLineTrace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathLineTrace_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_end,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_bFindInitialOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsDirectPathLineTrace", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::DonNavigationManager_eventIsDirectPathLineTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::DonNavigationManager_eventIsDirectPathLineTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execIsDirectPathLineTrace)
{
	P_GET_STRUCT(FVector,Z_Param_start);
	P_GET_STRUCT(FVector,Z_Param_end);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_UBOOL(Z_Param_bFindInitialOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDirectPathLineTrace(Z_Param_start,Z_Param_end,Z_Param_Out_OutHit,Z_Param_Out_ActorsToIgnore,Z_Param_bFindInitialOverlaps);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function IsDirectPathLineTrace

// Begin Class ADonNavigationManager Function IsDirectPathSweep
struct Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics
{
	struct DonNavigationManager_eventIsDirectPathSweep_Parms
	{
		UPrimitiveComponent* CollisionComponent;
		FVector Start;
		FVector End;
		FHitResult OutHit;
		bool bFindInitialOverlaps;
		float CollisionShapeInflation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracing utility\n" },
#endif
		{ "CPP_Default_bFindInitialOverlaps", "false" },
		{ "CPP_Default_CollisionShapeInflation", "0.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracing utility" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionShapeInflation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, CollisionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsDirectPathSweep_Parms*)Obj)->bFindInitialOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionShapeInflation = { "CollisionShapeInflation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsDirectPathSweep_Parms, CollisionShapeInflation), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsDirectPathSweep_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsDirectPathSweep_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_bFindInitialOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_CollisionShapeInflation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsDirectPathSweep", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::DonNavigationManager_eventIsDirectPathSweep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::DonNavigationManager_eventIsDirectPathSweep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execIsDirectPathSweep)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_CollisionComponent);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_UBOOL(Z_Param_bFindInitialOverlaps);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionShapeInflation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDirectPathSweep(Z_Param_CollisionComponent,Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit,Z_Param_bFindInitialOverlaps,Z_Param_CollisionShapeInflation);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function IsDirectPathSweep

// Begin Class ADonNavigationManager Function IsLocationBeneathLandscape
struct Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics
{
	struct DonNavigationManager_eventIsLocationBeneathLandscape_Parms
	{
		FVector Location;
		float LineTraceHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is an edge case where the goal is beneath the landscape (and therefore can never be reached). This situation should be identified preemptively and dealt with to prevent a futile and expensive call*/" },
#endif
		{ "CPP_Default_LineTraceHeight", "3000.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an edge case where the goal is beneath the landscape (and therefore can never be reached). This situation should be identified preemptively and dealt with to prevent a futile and expensive call" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineTraceHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsLocationBeneathLandscape_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_LineTraceHeight = { "LineTraceHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsLocationBeneathLandscape_Parms, LineTraceHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsLocationBeneathLandscape_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsLocationBeneathLandscape_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_LineTraceHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsLocationBeneathLandscape", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::DonNavigationManager_eventIsLocationBeneathLandscape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::DonNavigationManager_eventIsLocationBeneathLandscape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execIsLocationBeneathLandscape)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineTraceHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocationBeneathLandscape(Z_Param_Location,Z_Param_LineTraceHeight);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function IsLocationBeneathLandscape

// Begin Class ADonNavigationManager Function IsLocationWithinNavigableWorld
struct Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics
{
	struct DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms
	{
		FVector DesiredLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_DesiredLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsLocationWithinNavigableWorld", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::DonNavigationManager_eventIsLocationWithinNavigableWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execIsLocationWithinNavigableWorld)
{
	P_GET_STRUCT(FVector,Z_Param_DesiredLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocationWithinNavigableWorld(Z_Param_DesiredLocation);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function IsLocationWithinNavigableWorld

// Begin Class ADonNavigationManager Function IsMeshBoundsWithinNavigableWorld
struct Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics
{
	struct DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms
	{
		UPrimitiveComponent* Mesh;
		float BoundsScaleFactor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "CPP_Default_BoundsScaleFactor", "1.000000" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsScaleFactor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_BoundsScaleFactor = { "BoundsScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms, BoundsScaleFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms), &Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_BoundsScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "IsMeshBoundsWithinNavigableWorld", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::DonNavigationManager_eventIsMeshBoundsWithinNavigableWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execIsMeshBoundsWithinNavigableWorld)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BoundsScaleFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMeshBoundsWithinNavigableWorld(Z_Param_Mesh,Z_Param_BoundsScaleFactor);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function IsMeshBoundsWithinNavigableWorld

// Begin Class ADonNavigationManager Function ScheduleDynamicCollisionUpdate
struct Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics
{
	struct DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms
	{
		UPrimitiveComponent* Mesh;
		FScriptDelegate ResultHandler;
		FName CustomCacheIdentifier;
		bool bReplaceExistingTask;
		bool bDisableCacheUsage;
		bool bReloadCollisionCache;
		bool bUseCheapBoundsCollision;
		float BoundsScaleFactor;
		bool bForceSynchronousExecution;
		bool bDrawDebug;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*  Schedule Dynamic Collision Update For Mesh\n\x09*\n\x09*  Updates the collision status of all voxels within a mesh's visibility bounds. You should call this function whenever a dynamic obstacle in your scene \n\x09*  moves, scales or morphs in any way that affects the collision. Always remember that the DoN Navigation system does not automatically detect dynamic voxel collision\n\x09*  as that would be too expensive for the system to manage (potentially millions of voxels reside in a scene). Therefore it relies on users of the plugin to manually\n\x09*  trigger dynamic collision depending on the unique needs of a particular project. You only need this for any object that moves after the game has begun, voxel collision\n\x09*  for static objects is exempt from this as they're managed through a different code path and lazy-loaded on demand.\n\x09*\n\x09*  This function is expensive as it samples per-voxel collision so use it with care.\n\x09*\n\x09*  @param  Mesh\x09\x09\x09\x09\x09\x09\x09\x09  The mesh (usually a movable object) whose collision influence needs to be updated around the current location of the mesh\n\x09*\n\x09*  @param  ResultHandler                      Use this delegate to be notified when the task is complete and to learn its final status\n\x09*\n\x09*  @param  CustomCacheIdentifier              Use this to share a single collision profile across multiple meshes or to fully customize what gets loaded into the collision cache.\n\x09*\n\x09*                                             Details: By default the collision cache uses the address of each mesh component as the cache key. This has two fundamental limitations:\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09  1. Multiple meshes with identical collision properties will end up creating individual entries in the cache despite being the same (collision wise).\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09  2. Any mesh that needs to change its rotation or scale cannot use the default cache value which only works for location based translations.\n\x09*\n\x09*                                             The first limitation can be easily solved by sharing a single cache identifier across all meshes of the same type (Eg: \"SolidWall_NoRotation\").\n\x09*                                             The second limitation can be resolved either by forcibly reloading the collision cache each time using bReloadCollisionCache (not recommended, very expensive) \n\x09*                                             OR you can use the Custom Cache Identifier to define cardinal translation points for your mesh as follows:\x09\n\x09*                                             Eg: Mesh Scale = 1.5f -> CustomCacheIdentifier = \"SolidWall_NoRotation_150p\", \n\x09*                                             Eg: Mesh Scale = 2.0f -> CustomCacheIdentifier = \"SolidWall_NoRotation_200p\", etc. \n\x09*                                             Using this technique instead of forcibly reloading the cache will improve your performance. Try to keep your identifiers short though!\n\x09*\n\x09*  @param  bReplaceExistingTask               By default the scheduler will ignore new tasks for a mesh if it already has one running. Use this to forcibly replace an existing task.\n\x09*                                             This is useful for advanced usecases where you're relying on the sequence of dynamic collision updates or triggering other events dependent on its success\n\x09*\n\x09*  @param  bReloadCollisionCache\x09\x09\x09  Default is false. The system maintains a cache of voxel collision profiles associated with a mesh. A cache entry is created for a mesh\n\x09*                                             the first time you call this function for it. If you really want to overwrite the cache value associated with a mesh\n\x09*                                             then set bReloadCollisionCache to true. However for most usecases it is recommended to use CustomCacheIdentifier instead.\n\x09*\n\x09*\n\x09*  @param  bUseCheapBoundsCollision\x09\x09\x09  Marks all voxels within the mesh's visibility bounds as collided. This is several times faster that per-voxel sampling. Great for simple meshes like walls\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09  whose visibility bounds closely aligns with the actual mesh itself.\n\x09*                                             \n\x09*  @param  BoundsScaleFactor\x09\x09\x09\x09  Use this multiplier to increase or decrease the size of the bounding box derived from your mesh within which voxel collisions are sampled.\n\x09*\n\x09*/" },
#endif
		{ "CPP_Default_bDisableCacheUsage", "false" },
		{ "CPP_Default_bDrawDebug", "false" },
		{ "CPP_Default_bForceSynchronousExecution", "false" },
		{ "CPP_Default_BoundsScaleFactor", "1.000000" },
		{ "CPP_Default_bReloadCollisionCache", "false" },
		{ "CPP_Default_bReplaceExistingTask", "false" },
		{ "CPP_Default_bUseCheapBoundsCollision", "false" },
		{ "CPP_Default_CustomCacheIdentifier", "None" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Schedule Dynamic Collision Update For Mesh\n\nUpdates the collision status of all voxels within a mesh's visibility bounds. You should call this function whenever a dynamic obstacle in your scene\nmoves, scales or morphs in any way that affects the collision. Always remember that the DoN Navigation system does not automatically detect dynamic voxel collision\nas that would be too expensive for the system to manage (potentially millions of voxels reside in a scene). Therefore it relies on users of the plugin to manually\ntrigger dynamic collision depending on the unique needs of a particular project. You only need this for any object that moves after the game has begun, voxel collision\nfor static objects is exempt from this as they're managed through a different code path and lazy-loaded on demand.\n\nThis function is expensive as it samples per-voxel collision so use it with care.\n\n@param  Mesh                                                           The mesh (usually a movable object) whose collision influence needs to be updated around the current location of the mesh\n\n@param  ResultHandler                      Use this delegate to be notified when the task is complete and to learn its final status\n\n@param  CustomCacheIdentifier              Use this to share a single collision profile across multiple meshes or to fully customize what gets loaded into the collision cache.\n\n                                           Details: By default the collision cache uses the address of each mesh component as the cache key. This has two fundamental limitations:\n                                                                                       1. Multiple meshes with identical collision properties will end up creating individual entries in the cache despite being the same (collision wise).\n                                                                                       2. Any mesh that needs to change its rotation or scale cannot use the default cache value which only works for location based translations.\n\n                                           The first limitation can be easily solved by sharing a single cache identifier across all meshes of the same type (Eg: \"SolidWall_NoRotation\").\n                                           The second limitation can be resolved either by forcibly reloading the collision cache each time using bReloadCollisionCache (not recommended, very expensive)\n                                           OR you can use the Custom Cache Identifier to define cardinal translation points for your mesh as follows:\n                                           Eg: Mesh Scale = 1.5f -> CustomCacheIdentifier = \"SolidWall_NoRotation_150p\",\n                                           Eg: Mesh Scale = 2.0f -> CustomCacheIdentifier = \"SolidWall_NoRotation_200p\", etc.\n                                           Using this technique instead of forcibly reloading the cache will improve your performance. Try to keep your identifiers short though!\n\n@param  bReplaceExistingTask               By default the scheduler will ignore new tasks for a mesh if it already has one running. Use this to forcibly replace an existing task.\n                                           This is useful for advanced usecases where you're relying on the sequence of dynamic collision updates or triggering other events dependent on its success\n\n@param  bReloadCollisionCache                          Default is false. The system maintains a cache of voxel collision profiles associated with a mesh. A cache entry is created for a mesh\n                                           the first time you call this function for it. If you really want to overwrite the cache value associated with a mesh\n                                           then set bReloadCollisionCache to true. However for most usecases it is recommended to use CustomCacheIdentifier instead.\n\n\n@param  bUseCheapBoundsCollision                       Marks all voxels within the mesh's visibility bounds as collided. This is several times faster that per-voxel sampling. Great for simple meshes like walls\n                                                                                       whose visibility bounds closely aligns with the actual mesh itself.\n\n@param  BoundsScaleFactor                              Use this multiplier to increase or decrease the size of the bounding box derived from your mesh within which voxel collisions are sampled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResultHandler;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCacheIdentifier;
	static void NewProp_bReplaceExistingTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingTask;
	static void NewProp_bDisableCacheUsage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCacheUsage;
	static void NewProp_bReloadCollisionCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadCollisionCache;
	static void NewProp_bUseCheapBoundsCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCheapBoundsCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsScaleFactor;
	static void NewProp_bForceSynchronousExecution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSynchronousExecution;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ResultHandler = { "ResultHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, ResultHandler), Z_Construct_UDelegateFunction_DonAINavigation_DonCollisionSamplerCallback__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 989087591
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_CustomCacheIdentifier = { "CustomCacheIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, CustomCacheIdentifier), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bReplaceExistingTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask = { "bReplaceExistingTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bDisableCacheUsage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage = { "bDisableCacheUsage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bReloadCollisionCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache = { "bReloadCollisionCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bUseCheapBoundsCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision = { "bUseCheapBoundsCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_BoundsScaleFactor = { "BoundsScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms, BoundsScaleFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bForceSynchronousExecution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution = { "bForceSynchronousExecution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ResultHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_CustomCacheIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReplaceExistingTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDisableCacheUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bReloadCollisionCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bUseCheapBoundsCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_BoundsScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bForceSynchronousExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "ScheduleDynamicCollisionUpdate", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::DonNavigationManager_eventScheduleDynamicCollisionUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execScheduleDynamicCollisionUpdate)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultHandler);
	P_GET_PROPERTY(FNameProperty,Z_Param_CustomCacheIdentifier);
	P_GET_UBOOL(Z_Param_bReplaceExistingTask);
	P_GET_UBOOL(Z_Param_bDisableCacheUsage);
	P_GET_UBOOL(Z_Param_bReloadCollisionCache);
	P_GET_UBOOL(Z_Param_bUseCheapBoundsCollision);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BoundsScaleFactor);
	P_GET_UBOOL(Z_Param_bForceSynchronousExecution);
	P_GET_UBOOL(Z_Param_bDrawDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ScheduleDynamicCollisionUpdate(Z_Param_Mesh,FDonCollisionSamplerCallback(Z_Param_ResultHandler),Z_Param_CustomCacheIdentifier,Z_Param_bReplaceExistingTask,Z_Param_bDisableCacheUsage,Z_Param_bReloadCollisionCache,Z_Param_bUseCheapBoundsCollision,Z_Param_BoundsScaleFactor,Z_Param_bForceSynchronousExecution,Z_Param_bDrawDebug);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function ScheduleDynamicCollisionUpdate

// Begin Class ADonNavigationManager Function SchedulePathfindingTask
struct Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics
{
	struct DonNavigationManager_eventSchedulePathfindingTask_Parms
	{
		AActor* Actor;
		FVector Destination;
		FDoNNavigationQueryParams QueryParams;
		FDoNNavigationDebugParams DebugParams;
		FScriptDelegate ResultHandlerDelegate;
		FScriptDelegate DynamicCollisionListener;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*  Schedule Pathfinding Task\n\x09*\n\x09*  Schedules a pathfinding task to generate the shortest available path between a given actor and a desired destination.\n\x09*  A pathfinding task can run across multiple ticks and when the results are ready the caller is immediately notified through a result handler (FDoNNavigationResultHandler)\n\x09*  The caller must bind the result handler in advance to be notified when results are ready.\n\x09*  If you're interested in listening to dynamic collisions that may have invalidated the path (for course correction, etc) then you must also bind the dynamic listener FDonNavigationDynamicCollisionDelegate\n\x09*\n\x09*  @param  Actor                    Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\n\x09*  @param  Destination              Point in the world to which the actor needs to travel\n\x09*  @param  QueryParams              Additional params for customizing the path finding query\n\x09*  @param  DebugParams              Use these debug params to enable visualization of the raw and optimized paths and other debug related activities\n\x09*  @param  ResultHandlerDelegate    You must bind a function of your choice to this delegate to be notified when pathfinding results are available for you to use\n\x09*  @param DynamicCollisionListener  This listener allows you to be notified whenever your path solution has been invalidated by dynamic obstacles that have occupied parts of your path solution\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09\x09that may previously have been navigable. Typically this means you should immediately reschedule your query to obtain a revised path solution\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Schedule Pathfinding Task\n\nSchedules a pathfinding task to generate the shortest available path between a given actor and a desired destination.\nA pathfinding task can run across multiple ticks and when the results are ready the caller is immediately notified through a result handler (FDoNNavigationResultHandler)\nThe caller must bind the result handler in advance to be notified when results are ready.\nIf you're interested in listening to dynamic collisions that may have invalidated the path (for course correction, etc) then you must also bind the dynamic listener FDonNavigationDynamicCollisionDelegate\n\n@param  Actor                    Actor which needs to navigate from one point to another. Typically (but not necessarily) a pawn. The location of this actor is treated as origin for pathfinding\n@param  Destination              Point in the world to which the actor needs to travel\n@param  QueryParams              Additional params for customizing the path finding query\n@param  DebugParams              Use these debug params to enable visualization of the raw and optimized paths and other debug related activities\n@param  ResultHandlerDelegate    You must bind a function of your choice to this delegate to be notified when pathfinding results are available for you to use\n@param DynamicCollisionListener  This listener allows you to be notified whenever your path solution has been invalidated by dynamic obstacles that have occupied parts of your path solution\n                                                                     that may previously have been navigable. Typically this means you should immediately reschedule your query to obtain a revised path solution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugParams;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResultHandlerDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_DynamicCollisionListener;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryParams_MetaData), NewProp_QueryParams_MetaData) }; // 3542915895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, DebugParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugParams_MetaData), NewProp_DebugParams_MetaData) }; // 681916136
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ResultHandlerDelegate = { "ResultHandlerDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, ResultHandlerDelegate), Z_Construct_UDelegateFunction_DonAINavigation_DoNNavigationResultHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1396312569
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DynamicCollisionListener = { "DynamicCollisionListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventSchedulePathfindingTask_Parms, DynamicCollisionListener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 892553534
void Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DonNavigationManager_eventSchedulePathfindingTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventSchedulePathfindingTask_Parms), &Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_QueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DebugParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ResultHandlerDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_DynamicCollisionListener,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "SchedulePathfindingTask", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::DonNavigationManager_eventSchedulePathfindingTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::DonNavigationManager_eventSchedulePathfindingTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execSchedulePathfindingTask)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_STRUCT_REF(FDoNNavigationQueryParams,Z_Param_Out_QueryParams);
	P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ResultHandlerDelegate);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_DynamicCollisionListener);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SchedulePathfindingTask(Z_Param_Actor,Z_Param_Destination,Z_Param_Out_QueryParams,Z_Param_Out_DebugParams,FDoNNavigationResultHandler(Z_Param_ResultHandlerDelegate),FDonNavigationDynamicCollisionDelegate(Z_Param_DynamicCollisionListener));
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function SchedulePathfindingTask

// Begin Class ADonNavigationManager Function StopListeningToDynamicCollisionsForPath
struct Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics
{
	struct DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms
	{
		FScriptDelegate ListenerToClear;
		FDoNNavigationQueryData QueryData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09*  Unregisters a given dynamic collision listener from a given volume. Your should always call this function whenever a particular actor or object is\n\x09*  no longer interested in listening to collisions in a particular area. This is especially important for maintaining performance as \n\x09*  accumulating unwanted collision listeners will clog up the system quickly and affect performance.\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregisters a given dynamic collision listener from a given volume. Your should always call this function whenever a particular actor or object is\nno longer interested in listening to collisions in a particular area. This is especially important for maintaining performance as\naccumulating unwanted collision listeners will clog up the system quickly and affect performance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ListenerToClear;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_ListenerToClear = { "ListenerToClear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms, ListenerToClear), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 892553534
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData = { "QueryData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms, QueryData), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryData_MetaData), NewProp_QueryData_MetaData) }; // 2515757025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_ListenerToClear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::NewProp_QueryData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "StopListeningToDynamicCollisionsForPath", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::DonNavigationManager_eventStopListeningToDynamicCollisionsForPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execStopListeningToDynamicCollisionsForPath)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ListenerToClear);
	P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopListeningToDynamicCollisionsForPath(FDonNavigationDynamicCollisionDelegate(Z_Param_ListenerToClear),Z_Param_Out_QueryData);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function StopListeningToDynamicCollisionsForPath

// Begin Class ADonNavigationManager Function StopListeningToDynamicCollisionsForPathIndex
struct Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics
{
	struct DonNavigationManager_eventStopListeningToDynamicCollisionsForPathIndex_Parms
	{
		FScriptDelegate ListenerToClear;
		FDoNNavigationQueryData QueryData;
		int32 VolumeIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Similar to StopListeningToDynamicCollisionsForPath, but operates on a single index. If you're using the pathfinding API directly, use this to \"clean up\" behind your pawn as it passes dynamic collision geometry\n\x09* (For users using the \"Fly To\" behavior tree node you don't need to worry about this as all cleanup is taken care of for you)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Similar to StopListeningToDynamicCollisionsForPath, but operates on a single index. If you're using the pathfinding API directly, use this to \"clean up\" behind your pawn as it passes dynamic collision geometry\n(For users using the \"Fly To\" behavior tree node you don't need to worry about this as all cleanup is taken care of for you)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ListenerToClear;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::NewProp_ListenerToClear = { "ListenerToClear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPathIndex_Parms, ListenerToClear), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 892553534
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::NewProp_QueryData = { "QueryData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPathIndex_Parms, QueryData), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryData_MetaData), NewProp_QueryData_MetaData) }; // 2515757025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::NewProp_VolumeIndex = { "VolumeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventStopListeningToDynamicCollisionsForPathIndex_Parms, VolumeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeIndex_MetaData), NewProp_VolumeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::NewProp_ListenerToClear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::NewProp_QueryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::NewProp_VolumeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "StopListeningToDynamicCollisionsForPathIndex", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::DonNavigationManager_eventStopListeningToDynamicCollisionsForPathIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::DonNavigationManager_eventStopListeningToDynamicCollisionsForPathIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execStopListeningToDynamicCollisionsForPathIndex)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ListenerToClear);
	P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData);
	P_GET_PROPERTY(FIntProperty,Z_Param_VolumeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopListeningToDynamicCollisionsForPathIndex(FDonNavigationDynamicCollisionDelegate(Z_Param_ListenerToClear),Z_Param_Out_QueryData,Z_Param_VolumeIndex);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function StopListeningToDynamicCollisionsForPathIndex

// Begin Class ADonNavigationManager Function VisualizeDynamicCollisionListeners
struct Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics
{
	struct DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms
	{
		FScriptDelegate Listener;
		FDoNNavigationQueryData QueryData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Listener;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms, Listener), Z_Construct_UDelegateFunction_DonAINavigation_DonNavigationDynamicCollisionDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 892553534
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData = { "QueryData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms, QueryData), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryData_MetaData), NewProp_QueryData_MetaData) }; // 2515757025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_Listener,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::NewProp_QueryData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "VisualizeDynamicCollisionListeners", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::DonNavigationManager_eventVisualizeDynamicCollisionListeners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execVisualizeDynamicCollisionListeners)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Listener);
	P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_QueryData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VisualizeDynamicCollisionListeners(FDonNavigationDynamicCollisionDelegate(Z_Param_Listener),Z_Param_Out_QueryData);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function VisualizeDynamicCollisionListeners

// Begin Class ADonNavigationManager Function VisualizeNAVResult
struct Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics
{
	struct DonNavigationManager_eventVisualizeNAVResult_Parms
	{
		TArray<FVector> PathSolution;
		FVector Source;
		FVector Destination;
		bool Reset;
		FDoNNavigationDebugParams DebugParams;
		FColor LineColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug helpers:\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug helpers:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSolution_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathSolution_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathSolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static void NewProp_Reset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_Inner = { "PathSolution", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution = { "PathSolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, PathSolution), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSolution_MetaData), NewProp_PathSolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, Source), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset_SetBit(void* Obj)
{
	((DonNavigationManager_eventVisualizeNAVResult_Parms*)Obj)->Reset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigationManager_eventVisualizeNAVResult_Parms), &Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, DebugParams), Z_Construct_UScriptStruct_FDoNNavigationDebugParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugParams_MetaData), NewProp_DebugParams_MetaData) }; // 681916136
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigationManager_eventVisualizeNAVResult_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_PathSolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_Reset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_DebugParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::NewProp_LineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonNavigationManager, nullptr, "VisualizeNAVResult", nullptr, nullptr, Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::DonNavigationManager_eventVisualizeNAVResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::DonNavigationManager_eventVisualizeNAVResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADonNavigationManager::execVisualizeNAVResult)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PathSolution);
	P_GET_STRUCT(FVector,Z_Param_Source);
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_UBOOL(Z_Param_Reset);
	P_GET_STRUCT_REF(FDoNNavigationDebugParams,Z_Param_Out_DebugParams);
	P_GET_STRUCT_REF(FColor,Z_Param_Out_LineColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VisualizeNAVResult(Z_Param_Out_PathSolution,Z_Param_Source,Z_Param_Destination,Z_Param_Reset,Z_Param_Out_DebugParams,Z_Param_Out_LineColor);
	P_NATIVE_END;
}
// End Class ADonNavigationManager Function VisualizeNAVResult

// Begin Class ADonNavigationManager
void ADonNavigationManager::StaticRegisterNativesADonNavigationManager()
{
	UClass* Class = ADonNavigationManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AbortPathfindingTask", &ADonNavigationManager::execAbortPathfindingTask },
		{ "CanNavigate", &ADonNavigationManager::execCanNavigate },
		{ "ClampLocationToNavigableWorld", &ADonNavigationManager::execClampLocationToNavigableWorld },
		{ "ConstructBuilder", &ADonNavigationManager::execConstructBuilder },
		{ "Debug_ClearAllVolumes", &ADonNavigationManager::execDebug_ClearAllVolumes },
		{ "Debug_DrawAllVolumes", &ADonNavigationManager::execDebug_DrawAllVolumes },
		{ "Debug_DrawVolumesAroundPoint", &ADonNavigationManager::execDebug_DrawVolumesAroundPoint },
		{ "Debug_DrawVoxelCollisionProfile", &ADonNavigationManager::execDebug_DrawVoxelCollisionProfile },
		{ "Debug_ToggleWorldBoundaryInGame", &ADonNavigationManager::execDebug_ToggleWorldBoundaryInGame },
		{ "FindPathSolution_StressTesting", &ADonNavigationManager::execFindPathSolution_StressTesting },
		{ "FindRandomPointAroundOriginInNavWorld", &ADonNavigationManager::execFindRandomPointAroundOriginInNavWorld },
		{ "FindRandomPointFromActorInNavWorld", &ADonNavigationManager::execFindRandomPointFromActorInNavWorld },
		{ "HasTask", &ADonNavigationManager::execHasTask },
		{ "IsDirectPathLineSweep", &ADonNavigationManager::execIsDirectPathLineSweep },
		{ "IsDirectPathLineTrace", &ADonNavigationManager::execIsDirectPathLineTrace },
		{ "IsDirectPathSweep", &ADonNavigationManager::execIsDirectPathSweep },
		{ "IsLocationBeneathLandscape", &ADonNavigationManager::execIsLocationBeneathLandscape },
		{ "IsLocationWithinNavigableWorld", &ADonNavigationManager::execIsLocationWithinNavigableWorld },
		{ "IsMeshBoundsWithinNavigableWorld", &ADonNavigationManager::execIsMeshBoundsWithinNavigableWorld },
		{ "ScheduleDynamicCollisionUpdate", &ADonNavigationManager::execScheduleDynamicCollisionUpdate },
		{ "SchedulePathfindingTask", &ADonNavigationManager::execSchedulePathfindingTask },
		{ "StopListeningToDynamicCollisionsForPath", &ADonNavigationManager::execStopListeningToDynamicCollisionsForPath },
		{ "StopListeningToDynamicCollisionsForPathIndex", &ADonNavigationManager::execStopListeningToDynamicCollisionsForPathIndex },
		{ "VisualizeDynamicCollisionListeners", &ADonNavigationManager::execVisualizeDynamicCollisionListeners },
		{ "VisualizeNAVResult", &ADonNavigationManager::execVisualizeNAVResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADonNavigationManager);
UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister()
{
	return ADonNavigationManager::StaticClass();
}
struct Z_Construct_UClass_ADonNavigationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DonNavigationManager.h" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnbound_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Translation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "Category", "Translation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "World Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Represents the side of the cube used to build the voxel. Eg: a value of 300 produces a cube 300x300x300*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the side of the cube used to build the voxel. Eg: a value of 300 produces a cube 300x300x300" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XGridSize_MetaData[] = {
		{ "Category", "World Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of voxels to build along the X axis (offset from NAV actor)*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of voxels to build along the X axis (offset from NAV actor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YGridSize_MetaData[] = {
		{ "Category", "World Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of voxels to build along the Y axis (offset from NAV actor)*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of voxels to build along the Y axis (offset from NAV actor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZGridSize_MetaData[] = {
		{ "Category", "World Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of voxels to build along the Z axis (offset from NAV actor)*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of voxels to build along the Z axis (offset from NAV actor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleQueryChannels_MetaData[] = {
		{ "Category", "ObstacleDetection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Any channels added here will be treated as obstacles by the path finder*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any channels added here will be treated as obstacles by the path finder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreForCollision_MetaData[] = {
		{ "Category", "ObstacleDetection" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoCorrectionGuessList_MetaData[] = {
		{ "Category", "ObstacleDetection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09* Some pathfinding scenarios need a special auto-correction to be applied to either origin or \n\x09* destination for pathfinding to work. Eg: If a player is hiding flush with a wall then the pathfinding origin\n\x09* must be offset slightly adjacent to the wall.\n\x09*\n\x09* Different games/maps will need different auto-correction values, some maps may need large correction values\n\x09* while others may need only small adjustments. Tweak this list based on your game's needs.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Some pathfinding scenarios need a special auto-correction to be applied to either origin or\n* destination for pathfinding to work. Eg: If a player is hiding flush with a wall then the pathfinding origin\n* must be offset slightly adjacent to the wall.\n*\n* Different games/maps will need different auto-correction values, some maps may need large correction values\n* while others may need only small adjustments. Tweak this list based on your game's needs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealPhyxPenetrationDepth_MetaData[] = {
		{ "Category", "ObstacleDetection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Estimates the maximum possible penetration that can occur based on how Unreal's Physx handles collisions.\n\x09*   The default is a surprisingly high value, but this was derived from actual tests with the sample project's \"thin glass tubes\" usecase*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estimates the maximum possible penetration that can occur based on how Unreal's Physx handles collisions.\n      *   The default is a surprisingly high value, but this was derived from actual tests with the sample project's \"thin glass tubes\" usecase" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformCollisionChecksOnStartup_MetaData[] = {
		{ "Category", "Game Startup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to true, collision checks will be performed for each and every voxel when the game begins. Warning: This can slow down loading of the game significantly.\n\x09 *  Default behavior is set to false, meaning collision data will always be lazy loaded upn demand. This is the recommended approach */" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, collision checks will be performed for each and every voxel when the game begins. Warning: This can slow down loading of the game significantly.\nDefault behavior is set to false, meaning collision data will always be lazy loaded upn demand. This is the recommended approach" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadingEnabled_MetaData[] = {
		{ "Category", "Performance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performance settings - Bound worlds (if multi-threading is enabled, these will be overwritten at BeginPlay with the values in the next section!)\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance settings - Bound worlds (if multi-threading is enabled, these will be overwritten at BeginPlay with the values in the next section!)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathSolverIterationsPerTick_MetaData[] = {
		{ "Category", "Performance Settings | Bound Worlds | SingleThread" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionSolverIterationsPerTick_MetaData[] = {
		{ "Category", "Performance Settings | Bound Worlds | SingleThread" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathSolverIterationsOnThread_MetaData[] = {
		{ "Category", "Performance Settings | Bound Worlds | Multithreaded" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionSolverIterationsOnThread_MetaData[] = {
		{ "Category", "Performance Settings | Bound Worlds | Multithreaded" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathSolverIterationsPerTick_Unbound_MetaData[] = {
		{ "Category", "Performance Settings | Infinite Worlds | SingleThread" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performance settings - Infinite worlds\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance settings - Infinite worlds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionSolverIterationsPerTick_Unbound_MetaData[] = {
		{ "Category", "Performance Settings | Infinite Worlds | SingleThread" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathSolverIterationsOnThread_Unbound_MetaData[] = {
		{ "Category", "Performance Settings | Infinite Worlds | Multithreaded" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionSolverIterationsOnThread_Unbound_MetaData[] = {
		{ "Category", "Performance Settings | Infinite Worlds | Multithreaded" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBoundaryVisualizer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug Visualization:\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Visualization:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayWorldBoundary_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayWorldBoundaryInGame_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugVoxelsLineThickness_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunDebugValidationsForDynamicCollisions_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This property will help you identify issues with your dynamic collision setup by performinge extra vaildations at run-time.\n\x09This can be expensive so it is disabled by default. Enable if, for example, your pawns are reacting to dynamic collisions that they shouldn't actually be interested in.*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This property will help you identify issues with your dynamic collision setup by performinge extra vaildations at run-time.\n      This can be expensive so it is disabled by default. Enable if, for example, your pawns are reacting to dynamic collisions that they shouldn't actually be interested in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNavigationTaskOwners_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//(owned by game thread)\n" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(owned by game thread)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCollisionTaskOwners_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DonNavigationManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsUnbound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnbound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XGridSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YGridSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZGridSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObstacleQueryChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObstacleQueryChannels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreForCollision_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreForCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoCorrectionGuessList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoCorrectionGuessList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealPhyxPenetrationDepth;
	static void NewProp_PerformCollisionChecksOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PerformCollisionChecksOnStartup;
	static void NewProp_bMultiThreadingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadingEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPathSolverIterationsPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionSolverIterationsPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPathSolverIterationsOnThread;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionSolverIterationsOnThread;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPathSolverIterationsPerTick_Unbound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionSolverIterationsPerTick_Unbound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPathSolverIterationsOnThread_Unbound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionSolverIterationsOnThread_Unbound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldBoundaryVisualizer;
	static void NewProp_bDisplayWorldBoundary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayWorldBoundary;
	static void NewProp_bDisplayWorldBoundaryInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayWorldBoundaryInGame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugVoxelsLineThickness;
	static void NewProp_bRunDebugValidationsForDynamicCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunDebugValidationsForDynamicCollisions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveNavigationTaskOwners_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveNavigationTaskOwners;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCollisionTaskOwners_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveCollisionTaskOwners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADonNavigationManager_AbortPathfindingTask, "AbortPathfindingTask" }, // 3310443766
		{ &Z_Construct_UFunction_ADonNavigationManager_CanNavigate, "CanNavigate" }, // 2830726595
		{ &Z_Construct_UFunction_ADonNavigationManager_ClampLocationToNavigableWorld, "ClampLocationToNavigableWorld" }, // 651307304
		{ &Z_Construct_UFunction_ADonNavigationManager_ConstructBuilder, "ConstructBuilder" }, // 1901594184
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_ClearAllVolumes, "Debug_ClearAllVolumes" }, // 133789087
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawAllVolumes, "Debug_DrawAllVolumes" }, // 2097688956
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVolumesAroundPoint, "Debug_DrawVolumesAroundPoint" }, // 1668362540
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_DrawVoxelCollisionProfile, "Debug_DrawVoxelCollisionProfile" }, // 929079726
		{ &Z_Construct_UFunction_ADonNavigationManager_Debug_ToggleWorldBoundaryInGame, "Debug_ToggleWorldBoundaryInGame" }, // 3946983591
		{ &Z_Construct_UFunction_ADonNavigationManager_FindPathSolution_StressTesting, "FindPathSolution_StressTesting" }, // 1795936085
		{ &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointAroundOriginInNavWorld, "FindRandomPointAroundOriginInNavWorld" }, // 3286469983
		{ &Z_Construct_UFunction_ADonNavigationManager_FindRandomPointFromActorInNavWorld, "FindRandomPointFromActorInNavWorld" }, // 1455564086
		{ &Z_Construct_UFunction_ADonNavigationManager_HasTask, "HasTask" }, // 277409936
		{ &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineSweep, "IsDirectPathLineSweep" }, // 461661386
		{ &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathLineTrace, "IsDirectPathLineTrace" }, // 4246000413
		{ &Z_Construct_UFunction_ADonNavigationManager_IsDirectPathSweep, "IsDirectPathSweep" }, // 3165587702
		{ &Z_Construct_UFunction_ADonNavigationManager_IsLocationBeneathLandscape, "IsLocationBeneathLandscape" }, // 3553301291
		{ &Z_Construct_UFunction_ADonNavigationManager_IsLocationWithinNavigableWorld, "IsLocationWithinNavigableWorld" }, // 2066745759
		{ &Z_Construct_UFunction_ADonNavigationManager_IsMeshBoundsWithinNavigableWorld, "IsMeshBoundsWithinNavigableWorld" }, // 4001622188
		{ &Z_Construct_UFunction_ADonNavigationManager_ScheduleDynamicCollisionUpdate, "ScheduleDynamicCollisionUpdate" }, // 4236299440
		{ &Z_Construct_UFunction_ADonNavigationManager_SchedulePathfindingTask, "SchedulePathfindingTask" }, // 491688873
		{ &Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPath, "StopListeningToDynamicCollisionsForPath" }, // 4030455279
		{ &Z_Construct_UFunction_ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex, "StopListeningToDynamicCollisionsForPathIndex" }, // 274796212
		{ &Z_Construct_UFunction_ADonNavigationManager_VisualizeDynamicCollisionListeners, "VisualizeDynamicCollisionListeners" }, // 663531012
		{ &Z_Construct_UFunction_ADonNavigationManager_VisualizeNAVResult, "VisualizeNAVResult" }, // 810673529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonNavigationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_SetBit(void* Obj)
{
	((ADonNavigationManager*)Obj)->bIsUnbound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound = { "bIsUnbound", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnbound_MetaData), NewProp_bIsUnbound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize = { "XGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, XGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XGridSize_MetaData), NewProp_XGridSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize = { "YGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, YGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YGridSize_MetaData), NewProp_YGridSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize = { "ZGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, ZGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZGridSize_MetaData), NewProp_ZGridSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_Inner = { "ObstacleQueryChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels = { "ObstacleQueryChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, ObstacleQueryChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleQueryChannels_MetaData), NewProp_ObstacleQueryChannels_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_Inner = { "ActorsToIgnoreForCollision", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision = { "ActorsToIgnoreForCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, ActorsToIgnoreForCollision), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnoreForCollision_MetaData), NewProp_ActorsToIgnoreForCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_Inner = { "AutoCorrectionGuessList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList = { "AutoCorrectionGuessList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, AutoCorrectionGuessList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoCorrectionGuessList_MetaData), NewProp_AutoCorrectionGuessList_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_UnrealPhyxPenetrationDepth = { "UnrealPhyxPenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, UnrealPhyxPenetrationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealPhyxPenetrationDepth_MetaData), NewProp_UnrealPhyxPenetrationDepth_MetaData) };
void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_SetBit(void* Obj)
{
	((ADonNavigationManager*)Obj)->PerformCollisionChecksOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup = { "PerformCollisionChecksOnStartup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformCollisionChecksOnStartup_MetaData), NewProp_PerformCollisionChecksOnStartup_MetaData) };
void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_SetBit(void* Obj)
{
	((ADonNavigationManager*)Obj)->bMultiThreadingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled = { "bMultiThreadingEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiThreadingEnabled_MetaData), NewProp_bMultiThreadingEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick = { "MaxPathSolverIterationsPerTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxPathSolverIterationsPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathSolverIterationsPerTick_MetaData), NewProp_MaxPathSolverIterationsPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick = { "MaxCollisionSolverIterationsPerTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxCollisionSolverIterationsPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionSolverIterationsPerTick_MetaData), NewProp_MaxCollisionSolverIterationsPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread = { "MaxPathSolverIterationsOnThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxPathSolverIterationsOnThread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathSolverIterationsOnThread_MetaData), NewProp_MaxPathSolverIterationsOnThread_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread = { "MaxCollisionSolverIterationsOnThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxCollisionSolverIterationsOnThread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionSolverIterationsOnThread_MetaData), NewProp_MaxCollisionSolverIterationsOnThread_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick_Unbound = { "MaxPathSolverIterationsPerTick_Unbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxPathSolverIterationsPerTick_Unbound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathSolverIterationsPerTick_Unbound_MetaData), NewProp_MaxPathSolverIterationsPerTick_Unbound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick_Unbound = { "MaxCollisionSolverIterationsPerTick_Unbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxCollisionSolverIterationsPerTick_Unbound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionSolverIterationsPerTick_Unbound_MetaData), NewProp_MaxCollisionSolverIterationsPerTick_Unbound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread_Unbound = { "MaxPathSolverIterationsOnThread_Unbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxPathSolverIterationsOnThread_Unbound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathSolverIterationsOnThread_Unbound_MetaData), NewProp_MaxPathSolverIterationsOnThread_Unbound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread_Unbound = { "MaxCollisionSolverIterationsOnThread_Unbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, MaxCollisionSolverIterationsOnThread_Unbound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionSolverIterationsOnThread_Unbound_MetaData), NewProp_MaxCollisionSolverIterationsOnThread_Unbound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer = { "WorldBoundaryVisualizer", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, WorldBoundaryVisualizer), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBoundaryVisualizer_MetaData), NewProp_WorldBoundaryVisualizer_MetaData) };
void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_SetBit(void* Obj)
{
	((ADonNavigationManager*)Obj)->bDisplayWorldBoundary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary = { "bDisplayWorldBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayWorldBoundary_MetaData), NewProp_bDisplayWorldBoundary_MetaData) };
void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_SetBit(void* Obj)
{
	((ADonNavigationManager*)Obj)->bDisplayWorldBoundaryInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame = { "bDisplayWorldBoundaryInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayWorldBoundaryInGame_MetaData), NewProp_bDisplayWorldBoundaryInGame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness = { "DebugVoxelsLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, DebugVoxelsLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugVoxelsLineThickness_MetaData), NewProp_DebugVoxelsLineThickness_MetaData) };
void Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_SetBit(void* Obj)
{
	((ADonNavigationManager*)Obj)->bRunDebugValidationsForDynamicCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions = { "bRunDebugValidationsForDynamicCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADonNavigationManager), &Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunDebugValidationsForDynamicCollisions_MetaData), NewProp_bRunDebugValidationsForDynamicCollisions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveNavigationTaskOwners_ElementProp = { "ActiveNavigationTaskOwners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveNavigationTaskOwners = { "ActiveNavigationTaskOwners", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, ActiveNavigationTaskOwners), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNavigationTaskOwners_MetaData), NewProp_ActiveNavigationTaskOwners_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveCollisionTaskOwners_ElementProp = { "ActiveCollisionTaskOwners", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveCollisionTaskOwners = { "ActiveCollisionTaskOwners", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADonNavigationManager, ActiveCollisionTaskOwners), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCollisionTaskOwners_MetaData), NewProp_ActiveCollisionTaskOwners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bIsUnbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_Billboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_XGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_YGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ZGridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ObstacleQueryChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActorsToIgnoreForCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_AutoCorrectionGuessList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_UnrealPhyxPenetrationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_PerformCollisionChecksOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bMultiThreadingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsPerTick_Unbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsPerTick_Unbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxPathSolverIterationsOnThread_Unbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_MaxCollisionSolverIterationsOnThread_Unbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_WorldBoundaryVisualizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bDisplayWorldBoundaryInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_DebugVoxelsLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_bRunDebugValidationsForDynamicCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveNavigationTaskOwners_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveNavigationTaskOwners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveCollisionTaskOwners_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonNavigationManager_Statics::NewProp_ActiveCollisionTaskOwners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADonNavigationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADonNavigationManager_Statics::ClassParams = {
	&ADonNavigationManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADonNavigationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADonNavigationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADonNavigationManager()
{
	if (!Z_Registration_Info_UClass_ADonNavigationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADonNavigationManager.OuterSingleton, Z_Construct_UClass_ADonNavigationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADonNavigationManager.OuterSingleton;
}
template<> DONAINAVIGATION_API UClass* StaticClass<ADonNavigationManager>()
{
	return ADonNavigationManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADonNavigationManager);
ADonNavigationManager::~ADonNavigationManager() {}
// End Class ADonNavigationManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDonNavigationQueryStatus_StaticEnum, TEXT("EDonNavigationQueryStatus"), &Z_Registration_Info_UEnum_EDonNavigationQueryStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3121564868U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDonNavigationVoxel::StaticStruct, Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics::NewStructOps, TEXT("DonNavigationVoxel"), &Z_Registration_Info_UScriptStruct_DonNavigationVoxel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavigationVoxel), 405751508U) },
		{ FDonVoxelCollisionProfile::StaticStruct, Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics::NewStructOps, TEXT("DonVoxelCollisionProfile"), &Z_Registration_Info_UScriptStruct_DonVoxelCollisionProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonVoxelCollisionProfile), 963718266U) },
		{ FDonNavigationDynamicCollisionPayload::StaticStruct, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics::NewStructOps, TEXT("DonNavigationDynamicCollisionPayload"), &Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavigationDynamicCollisionPayload), 2893137837U) },
		{ FDonNavigationDynamicCollisionNotifyee::StaticStruct, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics::NewStructOps, TEXT("DonNavigationDynamicCollisionNotifyee"), &Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionNotifyee, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavigationDynamicCollisionNotifyee), 2929051280U) },
		{ FDonNavVoxelY::StaticStruct, Z_Construct_UScriptStruct_FDonNavVoxelY_Statics::NewStructOps, TEXT("DonNavVoxelY"), &Z_Registration_Info_UScriptStruct_DonNavVoxelY, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavVoxelY), 2814026830U) },
		{ FDonNavVoxelX::StaticStruct, Z_Construct_UScriptStruct_FDonNavVoxelX_Statics::NewStructOps, TEXT("DonNavVoxelX"), &Z_Registration_Info_UScriptStruct_DonNavVoxelX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavVoxelX), 773902155U) },
		{ FDonNavVoxelXYZ::StaticStruct, Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics::NewStructOps, TEXT("DonNavVoxelXYZ"), &Z_Registration_Info_UScriptStruct_DonNavVoxelXYZ, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavVoxelXYZ), 1421459579U) },
		{ FDoNNavigationQueryParams::StaticStruct, Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics::NewStructOps, TEXT("DoNNavigationQueryParams"), &Z_Registration_Info_UScriptStruct_DoNNavigationQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoNNavigationQueryParams), 3542915895U) },
		{ FDoNNavigationDebugParams::StaticStruct, Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics::NewStructOps, TEXT("DoNNavigationDebugParams"), &Z_Registration_Info_UScriptStruct_DoNNavigationDebugParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoNNavigationDebugParams), 681916136U) },
		{ FDoNNavigationQueryData::StaticStruct, Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics::NewStructOps, TEXT("DoNNavigationQueryData"), &Z_Registration_Info_UScriptStruct_DoNNavigationQueryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoNNavigationQueryData), 2515757025U) },
		{ FDonNavigationTask::StaticStruct, Z_Construct_UScriptStruct_FDonNavigationTask_Statics::NewStructOps, TEXT("DonNavigationTask"), &Z_Registration_Info_UScriptStruct_DonNavigationTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavigationTask), 384145301U) },
		{ FDonNavigationQueryTask::StaticStruct, Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics::NewStructOps, TEXT("DonNavigationQueryTask"), &Z_Registration_Info_UScriptStruct_DonNavigationQueryTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavigationQueryTask), 3302942207U) },
		{ FDonNavigationDynamicCollisionTask::StaticStruct, Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics::NewStructOps, TEXT("DonNavigationDynamicCollisionTask"), &Z_Registration_Info_UScriptStruct_DonNavigationDynamicCollisionTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDonNavigationDynamicCollisionTask), 2023541256U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADonNavigationManager, ADonNavigationManager::StaticClass, TEXT("ADonNavigationManager"), &Z_Registration_Info_UClass_ADonNavigationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADonNavigationManager), 3464000258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_396565851(TEXT("/Script/DonAINavigation"),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
