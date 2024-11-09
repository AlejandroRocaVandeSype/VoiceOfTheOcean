// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/BehaviorTree/BTTask_FlyTo.h"
#include "DonAINavigation/Classes/DonNavigationManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FlyTo() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
DONAINAVIGATION_API UClass* Z_Construct_UClass_ADonNavigationManager_NoRegister();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UBTTask_FlyTo();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UBTTask_FlyTo_NoRegister();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationDebugParams();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryData();
DONAINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FDoNNavigationQueryParams();
UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References

// Begin ScriptStruct FBT_FlyToTarget_DebugParams
static_assert(std::is_polymorphic<FBT_FlyToTarget_DebugParams>() == std::is_polymorphic<FDoNNavigationDebugParams>(), "USTRUCT FBT_FlyToTarget_DebugParams cannot be polymorphic unless super FDoNNavigationDebugParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams;
class UScriptStruct* FBT_FlyToTarget_DebugParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams, (UObject*)Z_Construct_UPackage__Script_DonAINavigation(), TEXT("BT_FlyToTarget_DebugParams"));
	}
	return Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams.OuterSingleton;
}
template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<FBT_FlyToTarget_DebugParams>()
{
	return FBT_FlyToTarget_DebugParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizePawnAsVoxels_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisualizePawnAsVoxels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizePawnAsVoxels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBT_FlyToTarget_DebugParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_SetBit(void* Obj)
{
	((FBT_FlyToTarget_DebugParams*)Obj)->bVisualizePawnAsVoxels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels = { "bVisualizePawnAsVoxels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBT_FlyToTarget_DebugParams), &Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualizePawnAsVoxels_MetaData), NewProp_bVisualizePawnAsVoxels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewProp_bVisualizePawnAsVoxels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
	Z_Construct_UScriptStruct_FDoNNavigationDebugParams,
	&NewStructOps,
	"BT_FlyToTarget_DebugParams",
	Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::PropPointers),
	sizeof(FBT_FlyToTarget_DebugParams),
	alignof(FBT_FlyToTarget_DebugParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams()
{
	if (!Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams.InnerSingleton, Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams.InnerSingleton;
}
// End ScriptStruct FBT_FlyToTarget_DebugParams

// Begin Class UBTTask_FlyTo Function Pathfinding_OnDynamicCollisionAlert
struct Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics
{
	struct BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms
	{
		FDonNavigationDynamicCollisionPayload Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms, Data), Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2893137837
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_FlyTo, nullptr, "Pathfinding_OnDynamicCollisionAlert", nullptr, nullptr, Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::BTTask_FlyTo_eventPathfinding_OnDynamicCollisionAlert_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_FlyTo::execPathfinding_OnDynamicCollisionAlert)
{
	P_GET_STRUCT_REF(FDonNavigationDynamicCollisionPayload,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pathfinding_OnDynamicCollisionAlert(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UBTTask_FlyTo Function Pathfinding_OnDynamicCollisionAlert

// Begin Class UBTTask_FlyTo Function Pathfinding_OnFinish
struct Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics
{
	struct BTTask_FlyTo_eventPathfinding_OnFinish_Parms
	{
		FDoNNavigationQueryData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_FlyTo_eventPathfinding_OnFinish_Parms, Data), Z_Construct_UScriptStruct_FDoNNavigationQueryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2515757025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_FlyTo, nullptr, "Pathfinding_OnFinish", nullptr, nullptr, Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::BTTask_FlyTo_eventPathfinding_OnFinish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::BTTask_FlyTo_eventPathfinding_OnFinish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_FlyTo::execPathfinding_OnFinish)
{
	P_GET_STRUCT_REF(FDoNNavigationQueryData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pathfinding_OnFinish(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UBTTask_FlyTo Function Pathfinding_OnFinish

// Begin Class UBTTask_FlyTo
void UBTTask_FlyTo::StaticRegisterNativesUBTTask_FlyTo()
{
	UClass* Class = UBTTask_FlyTo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Pathfinding_OnDynamicCollisionAlert", &UBTTask_FlyTo::execPathfinding_OnDynamicCollisionAlert },
		{ "Pathfinding_OnFinish", &UBTTask_FlyTo::execPathfinding_OnFinish },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FlyTo);
UClass* Z_Construct_UClass_UBTTask_FlyTo_NoRegister()
{
	return UBTTask_FlyTo::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FlyTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BehaviorTree/BTTask_FlyTo.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightLocationKey_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Behavior Tree Input:\n" },
#endif
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior Tree Input:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightResultKey_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Optional: Useful in somecases where you want failure or success of a task to automatically update a particular blackboard key*/" },
#endif
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: Useful in somecases where you want failure or success of a task to automatically update a particular blackboard key" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyToFlipFlopWhenTaskExits_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Optional: This boolean will be flip-flopped at the end of this task (regardless of success or failure). This can be useful for certain types of behavior tree setups*/" },
#endif
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: This boolean will be flip-flopped at the end of this task (regardless of success or failure). This can be useful for certain types of behavior tree setups" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumProximityRequired_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalcPathOnDestinationChanged_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Recalculate path enable */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recalculate path enable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecalculatePathTolerance_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Recalculate path if FlightLocation value changed. */" },
#endif
		{ "EditCondition", "bRecalcPathOnDestinationChanged" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recalculate path if FlightLocation value changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugParams_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationManager_MetaData[] = {
		{ "Category", "DoN Navigation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToDestinationUponFailure_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In some scenarios, it may be desirable to allow the A.I. to teleport to its intended destination  if pathfinding failed for some reason\n\x09*    Set this flag to true to if you want this behavior*/" },
#endif
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In some scenarios, it may be desirable to allow the A.I. to teleport to its intended destination  if pathfinding failed for some reason\n  Set this flag to true to if you want this behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeBeforeTeleport_MetaData[] = {
		{ "Category", "DoN Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Makeshift arrangement until the Task Owner / Task List discrepancy bug is comprehensively conquered\n" },
#endif
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTask_FlyTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makeshift arrangement until the Task Owner / Task List discrepancy bug is comprehensively conquered" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlightLocationKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FlightResultKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToFlipFlopWhenTaskExits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumProximityRequired;
	static void NewProp_bRecalcPathOnDestinationChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalcPathOnDestinationChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecalculatePathTolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationManager;
	static void NewProp_bTeleportToDestinationUponFailure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToDestinationUponFailure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeBeforeTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert, "Pathfinding_OnDynamicCollisionAlert" }, // 3858147523
		{ &Z_Construct_UFunction_UBTTask_FlyTo_Pathfinding_OnFinish, "Pathfinding_OnFinish" }, // 274607015
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FlyTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey = { "FlightLocationKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, FlightLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightLocationKey_MetaData), NewProp_FlightLocationKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey = { "FlightResultKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, FlightResultKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightResultKey_MetaData), NewProp_FlightResultKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits = { "KeyToFlipFlopWhenTaskExits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, KeyToFlipFlopWhenTaskExits), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyToFlipFlopWhenTaskExits_MetaData), NewProp_KeyToFlipFlopWhenTaskExits_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired = { "MinimumProximityRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, MinimumProximityRequired), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumProximityRequired_MetaData), NewProp_MinimumProximityRequired_MetaData) };
void Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bRecalcPathOnDestinationChanged_SetBit(void* Obj)
{
	((UBTTask_FlyTo*)Obj)->bRecalcPathOnDestinationChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bRecalcPathOnDestinationChanged = { "bRecalcPathOnDestinationChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_FlyTo), &Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bRecalcPathOnDestinationChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalcPathOnDestinationChanged_MetaData), NewProp_bRecalcPathOnDestinationChanged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_RecalculatePathTolerance = { "RecalculatePathTolerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, RecalculatePathTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecalculatePathTolerance_MetaData), NewProp_RecalculatePathTolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, QueryParams), Z_Construct_UScriptStruct_FDoNNavigationQueryParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryParams_MetaData), NewProp_QueryParams_MetaData) }; // 3542915895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams = { "DebugParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, DebugParams), Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugParams_MetaData), NewProp_DebugParams_MetaData) }; // 1653199570
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager = { "NavigationManager", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, NavigationManager), Z_Construct_UClass_ADonNavigationManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationManager_MetaData), NewProp_NavigationManager_MetaData) };
void Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bTeleportToDestinationUponFailure_SetBit(void* Obj)
{
	((UBTTask_FlyTo*)Obj)->bTeleportToDestinationUponFailure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bTeleportToDestinationUponFailure = { "bTeleportToDestinationUponFailure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_FlyTo), &Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bTeleportToDestinationUponFailure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleportToDestinationUponFailure_MetaData), NewProp_bTeleportToDestinationUponFailure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MaxTimeBeforeTeleport = { "MaxTimeBeforeTeleport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FlyTo, MaxTimeBeforeTeleport), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeBeforeTeleport_MetaData), NewProp_MaxTimeBeforeTeleport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightLocationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_FlightResultKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_KeyToFlipFlopWhenTaskExits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MinimumProximityRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bRecalcPathOnDestinationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_RecalculatePathTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_QueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_DebugParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_NavigationManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_bTeleportToDestinationUponFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FlyTo_Statics::NewProp_MaxTimeBeforeTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FlyTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FlyTo_Statics::ClassParams = {
	&UBTTask_FlyTo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FlyTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FlyTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FlyTo()
{
	if (!Z_Registration_Info_UClass_UBTTask_FlyTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FlyTo.OuterSingleton, Z_Construct_UClass_UBTTask_FlyTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FlyTo.OuterSingleton;
}
template<> DONAINAVIGATION_API UClass* StaticClass<UBTTask_FlyTo>()
{
	return UBTTask_FlyTo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FlyTo);
UBTTask_FlyTo::~UBTTask_FlyTo() {}
// End Class UBTTask_FlyTo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBT_FlyToTarget_DebugParams::StaticStruct, Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics::NewStructOps, TEXT("BT_FlyToTarget_DebugParams"), &Z_Registration_Info_UScriptStruct_BT_FlyToTarget_DebugParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBT_FlyToTarget_DebugParams), 1653199570U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FlyTo, UBTTask_FlyTo::StaticClass, TEXT("UBTTask_FlyTo"), &Z_Registration_Info_UClass_UBTTask_FlyTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FlyTo), 1653427514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_2145375782(TEXT("/Script/DonAINavigation"),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
