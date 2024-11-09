// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTTask_FlyTo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDonNavigationDynamicCollisionPayload;
struct FDoNNavigationQueryData;
#ifdef DONAINAVIGATION_BTTask_FlyTo_generated_h
#error "BTTask_FlyTo.generated.h already included, missing '#pragma once' in BTTask_FlyTo.h"
#endif
#define DONAINAVIGATION_BTTask_FlyTo_generated_h

#define FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBT_FlyToTarget_DebugParams_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDoNNavigationDebugParams Super;


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FBT_FlyToTarget_DebugParams>();

#define FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPathfinding_OnDynamicCollisionAlert); \
	DECLARE_FUNCTION(execPathfinding_OnFinish);


#define FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_FlyTo(); \
	friend struct Z_Construct_UClass_UBTTask_FlyTo_Statics; \
public: \
	DECLARE_CLASS(UBTTask_FlyTo, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FlyTo)


#define FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_FlyTo(UBTTask_FlyTo&&); \
	UBTTask_FlyTo(const UBTTask_FlyTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FlyTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FlyTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FlyTo) \
	NO_API virtual ~UBTTask_FlyTo();


#define FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_82_PROLOG
#define FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_INCLASS_NO_PURE_DECLS \
	FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class UBTTask_FlyTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_BehaviorTree_BTTask_FlyTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
