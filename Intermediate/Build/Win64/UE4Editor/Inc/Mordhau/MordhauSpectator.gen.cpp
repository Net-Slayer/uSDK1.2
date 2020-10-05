// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauSpectator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauSpectator() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauSpectator_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauSpectator();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction();
// End Cross Module References
	void AMordhauSpectator::StaticRegisterNativesAMordhauSpectator()
	{
		UClass* Class = AMordhauSpectator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsWatchingOwnDeath", &AMordhauSpectator::execIsWatchingOwnDeath },
			{ "PrimarySpectatorAction", &AMordhauSpectator::execPrimarySpectatorAction },
			{ "SecondarySpectatorAction", &AMordhauSpectator::execSecondarySpectatorAction },
			{ "SwitchToFreeCam", &AMordhauSpectator::execSwitchToFreeCam },
			{ "TertiarySpectatorAction", &AMordhauSpectator::execTertiarySpectatorAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics
	{
		struct MordhauSpectator_eventIsWatchingOwnDeath_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauSpectator_eventIsWatchingOwnDeath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauSpectator_eventIsWatchingOwnDeath_Parms), &Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauSpectatorFns" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauSpectator, "IsWatchingOwnDeath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauSpectator_eventIsWatchingOwnDeath_Parms), Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauSpectatorFns" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauSpectator, "PrimarySpectatorAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauSpectatorFns" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauSpectator, "SecondarySpectatorAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauSpectatorFns" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauSpectator, "SwitchToFreeCam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauSpectatorFns" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauSpectator, "TertiarySpectatorAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauSpectator_NoRegister()
	{
		return AMordhauSpectator::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauSpectator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFirstTick_MetaData[];
#endif
		static void NewProp_bIsFirstTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSmoothingLookUpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSmoothingLookUpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSmoothedLookUpValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSmoothedLookUpValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSmoothingTurnVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSmoothingTurnVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSmoothedTurnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSmoothedTurnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSentCameraUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSentCameraUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CreatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyAsksForSpawn_MetaData[];
#endif
		static void NewProp_bAutomaticallyAsksForSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyAsksForSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockInputAfterDeathTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockInputAfterDeathTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauSpectator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauSpectator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauSpectator_IsWatchingOwnDeath, "IsWatchingOwnDeath" }, // 4283700456
		{ &Z_Construct_UFunction_AMordhauSpectator_PrimarySpectatorAction, "PrimarySpectatorAction" }, // 4081947302
		{ &Z_Construct_UFunction_AMordhauSpectator_SecondarySpectatorAction, "SecondarySpectatorAction" }, // 885493581
		{ &Z_Construct_UFunction_AMordhauSpectator_SwitchToFreeCam, "SwitchToFreeCam" }, // 1786190778
		{ &Z_Construct_UFunction_AMordhauSpectator_TertiarySpectatorAction, "TertiarySpectatorAction" }, // 1461963823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MordhauSpectator.h" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick_SetBit(void* Obj)
	{
		((AMordhauSpectator*)Obj)->bIsFirstTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFirstTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauSpectator), &Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingLookUpVelocity_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingLookUpVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MouseSmoothingLookUpVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, MouseSmoothingLookUpVelocity), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingLookUpVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingLookUpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedLookUpValue_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedLookUpValue = { UE4CodeGen_Private::EPropertyClass::Float, "MouseSmoothedLookUpValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, MouseSmoothedLookUpValue), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedLookUpValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedLookUpValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingTurnVelocity_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingTurnVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MouseSmoothingTurnVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, MouseSmoothingTurnVelocity), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingTurnVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingTurnVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedTurnValue_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedTurnValue = { UE4CodeGen_Private::EPropertyClass::Float, "MouseSmoothedTurnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, MouseSmoothedTurnValue), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedTurnValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedTurnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_LastSentCameraUpdate_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_LastSentCameraUpdate = { UE4CodeGen_Private::EPropertyClass::Float, "LastSentCameraUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, LastSentCameraUpdate), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_LastSentCameraUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_LastSentCameraUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_CreatedTime_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_CreatedTime = { UE4CodeGen_Private::EPropertyClass::Float, "CreatedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, CreatedTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_CreatedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_CreatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn_SetBit(void* Obj)
	{
		((AMordhauSpectator*)Obj)->bAutomaticallyAsksForSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticallyAsksForSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauSpectator), &Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_BlockInputAfterDeathTime_MetaData[] = {
		{ "Category", "MordhauSpectator" },
		{ "ModuleRelativePath", "MordhauSpectator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_BlockInputAfterDeathTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlockInputAfterDeathTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauSpectator, BlockInputAfterDeathTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_BlockInputAfterDeathTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_BlockInputAfterDeathTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauSpectator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bIsFirstTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingLookUpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedLookUpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothingTurnVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_MouseSmoothedTurnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_LastSentCameraUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_CreatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_bAutomaticallyAsksForSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauSpectator_Statics::NewProp_BlockInputAfterDeathTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauSpectator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauSpectator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauSpectator_Statics::ClassParams = {
		&AMordhauSpectator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauSpectator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauSpectator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauSpectator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauSpectator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauSpectator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauSpectator, 491150626);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauSpectator(Z_Construct_UClass_AMordhauSpectator, &AMordhauSpectator::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauSpectator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauSpectator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
