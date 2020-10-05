// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/PushableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePushableActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_APushableActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_APushableActor();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_APushableActor_OnProgressUpdated();
	MORDHAU_API UFunction* Z_Construct_UFunction_APushableActor_OnRep_Progress();
	MORDHAU_API UFunction* Z_Construct_UFunction_APushableActor_SetProgress();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static FName NAME_APushableActor_OnProgressUpdated = FName(TEXT("OnProgressUpdated"));
	void APushableActor::OnProgressUpdated(float OldProgress)
	{
		PushableActor_eventOnProgressUpdated_Parms Parms;
		Parms.OldProgress=OldProgress;
		ProcessEvent(FindFunctionChecked(NAME_APushableActor_OnProgressUpdated),&Parms);
	}
	void APushableActor::StaticRegisterNativesAPushableActor()
	{
		UClass* Class = APushableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Progress", &APushableActor::execOnRep_Progress },
			{ "SetProgress", &APushableActor::execSetProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::NewProp_OldProgress = { UE4CodeGen_Private::EPropertyClass::Float, "OldProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PushableActor_eventOnProgressUpdated_Parms, OldProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::NewProp_OldProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PushableFns" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APushableActor, "OnProgressUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(PushableActor_eventOnProgressUpdated_Parms), Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APushableActor_OnProgressUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APushableActor_OnProgressUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APushableActor_OnRep_Progress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushableActor_OnRep_Progress_Statics::Function_MetaDataParams[] = {
		{ "Category", "PushableFns" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APushableActor_OnRep_Progress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APushableActor, "OnRep_Progress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APushableActor_OnRep_Progress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APushableActor_OnRep_Progress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APushableActor_OnRep_Progress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APushableActor_OnRep_Progress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APushableActor_SetProgress_Statics
	{
		struct PushableActor_eventSetProgress_Parms
		{
			float NewProgress;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APushableActor_SetProgress_Statics::NewProp_NewProgress = { UE4CodeGen_Private::EPropertyClass::Float, "NewProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PushableActor_eventSetProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APushableActor_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushableActor_SetProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushableActor_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "PushableFns" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APushableActor_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APushableActor, "SetProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PushableActor_eventSetProgress_Parms), Z_Construct_UFunction_APushableActor_SetProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APushableActor_SetProgress_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APushableActor_SetProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APushableActor_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APushableActor_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APushableActor_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APushableActor_NoRegister()
	{
		return APushableActor::StaticClass();
	}
	struct Z_Construct_UClass_APushableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoMoveIfAlone_MetaData[];
#endif
		static void NewProp_bAutoMoveIfAlone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoMoveIfAlone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPullingAllowed_MetaData[];
#endif
		static void NewProp_bIsPullingAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPullingAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPushingAllowed_MetaData[];
#endif
		static void NewProp_bIsPushingAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPushingAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNetworkInterpolationConstant_MetaData[];
#endif
		static void NewProp_bIsNetworkInterpolationConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNetworkInterpolationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkInterpolationSpeedConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkInterpolationSpeedConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreAwardedPerProgressStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreAwardedPerProgressStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressStepToAwardScoreFor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressStepToAwardScoreFor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PushArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopPushingIfContested_MetaData[];
#endif
		static void NewProp_bStopPushingIfContested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopPushingIfContested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2PushSpeedByPushers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Team2PushSpeedByPushers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1PushSpeedByPushers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Team1PushSpeedByPushers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team2Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team1Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonPullableThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NonPullableThresholds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonPullableThresholds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APushableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APushableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APushableActor_OnProgressUpdated, "OnProgressUpdated" }, // 2343524641
		{ &Z_Construct_UFunction_APushableActor_OnRep_Progress, "OnRep_Progress" }, // 3502322922
		{ &Z_Construct_UFunction_APushableActor_SetProgress, "SetProgress" }, // 1685358003
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PushableActor.h" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_AutoMoveSpeed_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_AutoMoveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "AutoMoveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, AutoMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_AutoMoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_AutoMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	void Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone_SetBit(void* Obj)
	{
		((APushableActor*)Obj)->bAutoMoveIfAlone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoMoveIfAlone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APushableActor), &Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone_SetBit, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	void Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed_SetBit(void* Obj)
	{
		((APushableActor*)Obj)->bIsPullingAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPullingAllowed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APushableActor), &Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	void Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed_SetBit(void* Obj)
	{
		((APushableActor*)Obj)->bIsPushingAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPushingAllowed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APushableActor), &Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_Progress = { UE4CodeGen_Private::EPropertyClass::Float, "Progress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, Progress), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_Progress_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	void Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant_SetBit(void* Obj)
	{
		((APushableActor*)Obj)->bIsNetworkInterpolationConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsNetworkInterpolationConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APushableActor), &Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant_SetBit, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeedConstant_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeedConstant = { UE4CodeGen_Private::EPropertyClass::Float, "NetworkInterpolationSpeedConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, NetworkInterpolationSpeedConstant), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeedConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeedConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeed_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NetworkInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, NetworkInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_ScoreAwardedPerProgressStep_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_ScoreAwardedPerProgressStep = { UE4CodeGen_Private::EPropertyClass::Int, "ScoreAwardedPerProgressStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, ScoreAwardedPerProgressStep), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_ScoreAwardedPerProgressStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_ScoreAwardedPerProgressStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_ProgressStepToAwardScoreFor_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_ProgressStepToAwardScoreFor = { UE4CodeGen_Private::EPropertyClass::Float, "ProgressStepToAwardScoreFor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, ProgressStepToAwardScoreFor), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_ProgressStepToAwardScoreFor_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_ProgressStepToAwardScoreFor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_PushArea_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_PushArea = { UE4CodeGen_Private::EPropertyClass::Object, "PushArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APushableActor, PushArea), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_PushArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_PushArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	void Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested_SetBit(void* Obj)
	{
		((APushableActor*)Obj)->bStopPushingIfContested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopPushingIfContested", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APushableActor), &Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested_SetBit, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_Team2PushSpeedByPushers_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_Team2PushSpeedByPushers = { UE4CodeGen_Private::EPropertyClass::Object, "Team2PushSpeedByPushers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, Team2PushSpeedByPushers), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_Team2PushSpeedByPushers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_Team2PushSpeedByPushers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_Team1PushSpeedByPushers_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_Team1PushSpeedByPushers = { UE4CodeGen_Private::EPropertyClass::Object, "Team1PushSpeedByPushers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, Team1PushSpeedByPushers), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_Team1PushSpeedByPushers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_Team1PushSpeedByPushers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_Team2Presence_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_Team2Presence = { UE4CodeGen_Private::EPropertyClass::Int, "Team2Presence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, Team2Presence), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_Team2Presence_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_Team2Presence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_Team1Presence_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_Team1Presence = { UE4CodeGen_Private::EPropertyClass::Int, "Team1Presence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, Team1Presence), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_Team1Presence_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_Team1Presence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds_MetaData[] = {
		{ "Category", "PushableActor" },
		{ "ModuleRelativePath", "PushableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds = { UE4CodeGen_Private::EPropertyClass::Array, "NonPullableThresholds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APushableActor, NonPullableThresholds), METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds_MetaData, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "NonPullableThresholds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APushableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_AutoMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_bAutoMoveIfAlone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPullingAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_bIsPushingAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_bIsNetworkInterpolationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeedConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_NetworkInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_ScoreAwardedPerProgressStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_ProgressStepToAwardScoreFor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_PushArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_bStopPushingIfContested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_Team2PushSpeedByPushers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_Team1PushSpeedByPushers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_Team2Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_Team1Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushableActor_Statics::NewProp_NonPullableThresholds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APushableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APushableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APushableActor_Statics::ClassParams = {
		&APushableActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APushableActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APushableActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APushableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APushableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APushableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APushableActor, 4064984535);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APushableActor(Z_Construct_UClass_APushableActor, &APushableActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("APushableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APushableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
