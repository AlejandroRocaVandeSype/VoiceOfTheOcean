// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonAINavigation/Classes/DonNavigatorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonNavigatorInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigator();
DONAINAVIGATION_API UClass* Z_Construct_UClass_UDonNavigator_NoRegister();
UPackage* Z_Construct_UPackage__Script_DonAINavigation();
// End Cross Module References

// Begin Interface UDonNavigator Function AddMovementInputCustom
struct DonNavigator_eventAddMovementInputCustom_Parms
{
	FVector WorldDirection;
	float ScaleValue;
};
void IDonNavigator::AddMovementInputCustom(FVector WorldDirection, float ScaleValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddMovementInputCustom instead.");
}
static FName NAME_UDonNavigator_AddMovementInputCustom = FName(TEXT("AddMovementInputCustom"));
void IDonNavigator::Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
	DonNavigator_eventAddMovementInputCustom_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDonNavigator_AddMovementInputCustom);
	if (Func)
	{
		Parms.WorldDirection=WorldDirection;
		Parms.ScaleValue=ScaleValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
	{
		I->AddMovementInputCustom_Implementation(WorldDirection,ScaleValue);
	}
}
struct Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Optional custom movement input. If not provided, default AddMovementInput behavior will be called on the pawn or character*/" },
#endif
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional custom movement input. If not provided, default AddMovementInput behavior will be called on the pawn or character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigator_eventAddMovementInputCustom_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigator_eventAddMovementInputCustom_Parms, ScaleValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::NewProp_ScaleValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "AddMovementInputCustom", nullptr, nullptr, Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::PropPointers), sizeof(DonNavigator_eventAddMovementInputCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::Function_MetaDataParams) };
static_assert(sizeof(DonNavigator_eventAddMovementInputCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDonNavigator::execAddMovementInputCustom)
{
	P_GET_STRUCT(FVector,Z_Param_WorldDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMovementInputCustom_Implementation(Z_Param_WorldDirection,Z_Param_ScaleValue);
	P_NATIVE_END;
}
// End Interface UDonNavigator Function AddMovementInputCustom

// Begin Interface UDonNavigator Function OnLocomotionAbort
void IDonNavigator::OnLocomotionAbort()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionAbort instead.");
}
static FName NAME_UDonNavigator_OnLocomotionAbort = FName(TEXT("OnLocomotionAbort"));
void IDonNavigator::Execute_OnLocomotionAbort(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionAbort);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
	{
		I->OnLocomotionAbort_Implementation();
	}
}
struct Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnLocomotionAbort", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDonNavigator::execOnLocomotionAbort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLocomotionAbort_Implementation();
	P_NATIVE_END;
}
// End Interface UDonNavigator Function OnLocomotionAbort

// Begin Interface UDonNavigator Function OnLocomotionBegin
void IDonNavigator::OnLocomotionBegin()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionBegin instead.");
}
static FName NAME_UDonNavigator_OnLocomotionBegin = FName(TEXT("OnLocomotionBegin"));
void IDonNavigator::Execute_OnLocomotionBegin(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionBegin);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
	{
		I->OnLocomotionBegin_Implementation();
	}
}
struct Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnLocomotionBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDonNavigator::execOnLocomotionBegin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLocomotionBegin_Implementation();
	P_NATIVE_END;
}
// End Interface UDonNavigator Function OnLocomotionBegin

// Begin Interface UDonNavigator Function OnLocomotionEnd
struct DonNavigator_eventOnLocomotionEnd_Parms
{
	bool bLocomotionSuccess;
};
void IDonNavigator::OnLocomotionEnd(bool bLocomotionSuccess)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionEnd instead.");
}
static FName NAME_UDonNavigator_OnLocomotionEnd = FName(TEXT("OnLocomotionEnd"));
void IDonNavigator::Execute_OnLocomotionEnd(UObject* O, bool bLocomotionSuccess)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
	DonNavigator_eventOnLocomotionEnd_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnLocomotionEnd);
	if (Func)
	{
		Parms.bLocomotionSuccess=bLocomotionSuccess;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
	{
		I->OnLocomotionEnd_Implementation(bLocomotionSuccess);
	}
}
struct Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocomotionSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bLocomotionSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocomotionSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_SetBit(void* Obj)
{
	((DonNavigator_eventOnLocomotionEnd_Parms*)Obj)->bLocomotionSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess = { "bLocomotionSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DonNavigator_eventOnLocomotionEnd_Parms), &Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocomotionSuccess_MetaData), NewProp_bLocomotionSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::NewProp_bLocomotionSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnLocomotionEnd", nullptr, nullptr, Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::PropPointers), sizeof(DonNavigator_eventOnLocomotionEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(DonNavigator_eventOnLocomotionEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDonNavigator::execOnLocomotionEnd)
{
	P_GET_UBOOL(Z_Param_bLocomotionSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLocomotionEnd_Implementation(Z_Param_bLocomotionSuccess);
	P_NATIVE_END;
}
// End Interface UDonNavigator Function OnLocomotionEnd

// Begin Interface UDonNavigator Function OnNextSegment
struct DonNavigator_eventOnNextSegment_Parms
{
	FVector NextPoint;
};
void IDonNavigator::OnNextSegment(FVector NextPoint)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNextSegment instead.");
}
static FName NAME_UDonNavigator_OnNextSegment = FName(TEXT("OnNextSegment"));
void IDonNavigator::Execute_OnNextSegment(UObject* O, FVector NextPoint)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDonNavigator::StaticClass()));
	DonNavigator_eventOnNextSegment_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDonNavigator_OnNextSegment);
	if (Func)
	{
		Parms.NextPoint=NextPoint;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDonNavigator*)(O->GetNativeInterfaceAddress(UDonNavigator::StaticClass())))
	{
		I->OnNextSegment_Implementation(NextPoint);
	}
}
struct Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Don Navigation" },
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::NewProp_NextPoint = { "NextPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DonNavigator_eventOnNextSegment_Parms, NextPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::NewProp_NextPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDonNavigator, nullptr, "OnNextSegment", nullptr, nullptr, Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::PropPointers), sizeof(DonNavigator_eventOnNextSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(DonNavigator_eventOnNextSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDonNavigator_OnNextSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDonNavigator_OnNextSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDonNavigator::execOnNextSegment)
{
	P_GET_STRUCT(FVector,Z_Param_NextPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextSegment_Implementation(Z_Param_NextPoint);
	P_NATIVE_END;
}
// End Interface UDonNavigator Function OnNextSegment

// Begin Interface UDonNavigator
void UDonNavigator::StaticRegisterNativesUDonNavigator()
{
	UClass* Class = UDonNavigator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMovementInputCustom", &IDonNavigator::execAddMovementInputCustom },
		{ "OnLocomotionAbort", &IDonNavigator::execOnLocomotionAbort },
		{ "OnLocomotionBegin", &IDonNavigator::execOnLocomotionBegin },
		{ "OnLocomotionEnd", &IDonNavigator::execOnLocomotionEnd },
		{ "OnNextSegment", &IDonNavigator::execOnNextSegment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDonNavigator);
UClass* Z_Construct_UClass_UDonNavigator_NoRegister()
{
	return UDonNavigator::StaticClass();
}
struct Z_Construct_UClass_UDonNavigator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DonNavigatorInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDonNavigator_AddMovementInputCustom, "AddMovementInputCustom" }, // 3920165368
		{ &Z_Construct_UFunction_UDonNavigator_OnLocomotionAbort, "OnLocomotionAbort" }, // 225246072
		{ &Z_Construct_UFunction_UDonNavigator_OnLocomotionBegin, "OnLocomotionBegin" }, // 3670548261
		{ &Z_Construct_UFunction_UDonNavigator_OnLocomotionEnd, "OnLocomotionEnd" }, // 1718402390
		{ &Z_Construct_UFunction_UDonNavigator_OnNextSegment, "OnNextSegment" }, // 2217302302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDonNavigator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDonNavigator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DonAINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDonNavigator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDonNavigator_Statics::ClassParams = {
	&UDonNavigator::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDonNavigator_Statics::Class_MetaDataParams), Z_Construct_UClass_UDonNavigator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDonNavigator()
{
	if (!Z_Registration_Info_UClass_UDonNavigator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDonNavigator.OuterSingleton, Z_Construct_UClass_UDonNavigator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDonNavigator.OuterSingleton;
}
template<> DONAINAVIGATION_API UClass* StaticClass<UDonNavigator>()
{
	return UDonNavigator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDonNavigator);
UDonNavigator::~UDonNavigator() {}
// End Interface UDonNavigator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDonNavigator, UDonNavigator::StaticClass, TEXT("UDonNavigator"), &Z_Registration_Info_UClass_UDonNavigator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDonNavigator), 4092936149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_830307515(TEXT("/Script/DonAINavigation"),
	Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_grpprj26_Dev_VoiceOfTheOcean_Plugins_DoNs_5_4_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
