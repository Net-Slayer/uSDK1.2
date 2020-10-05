// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauMovementComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMovementComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMovementComponent();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterMovement();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMovementComponent_Knockback();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMovementModifier();
// End Cross Module References
	void UMordhauMovementComponent::StaticRegisterNativesUMordhauMovementComponent()
	{
		UClass* Class = UMordhauMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccelerationFactor", &UMordhauMovementComponent::execGetAccelerationFactor },
			{ "GetSpeedFactor", &UMordhauMovementComponent::execGetSpeedFactor },
			{ "IsInKnockback", &UMordhauMovementComponent::execIsInKnockback },
			{ "Knockback", &UMordhauMovementComponent::execKnockback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics
	{
		struct MordhauMovementComponent_eventGetAccelerationFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauMovementComponent_eventGetAccelerationFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMovementFns" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMovementComponent, "GetAccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauMovementComponent_eventGetAccelerationFactor_Parms), Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics
	{
		struct MordhauMovementComponent_eventGetSpeedFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauMovementComponent_eventGetSpeedFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMovementFns" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMovementComponent, "GetSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauMovementComponent_eventGetSpeedFactor_Parms), Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics
	{
		struct MordhauMovementComponent_eventIsInKnockback_Parms
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
	void Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauMovementComponent_eventIsInKnockback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauMovementComponent_eventIsInKnockback_Parms), &Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMovementFns" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMovementComponent, "IsInKnockback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauMovementComponent_eventIsInKnockback_Parms), Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics
	{
		struct MordhauMovementComponent_eventKnockback_Parms
		{
			FVector Amount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Struct, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauMovementComponent_eventKnockback_Parms, Amount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::NewProp_Amount_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMovementFns" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMovementComponent, "Knockback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauMovementComponent_eventKnockback_Parms), Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMovementComponent_Knockback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMovementComponent_Knockback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauMovementComponent_NoRegister()
	{
		return UMordhauMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationFallingTooFast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationFallingTooFast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFallingLateralFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFallingLateralFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGroundFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGroundFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackUpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackUpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackFallingLateralFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackFallingLateralFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackGroundFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackGroundFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsSupersprint_MetaData[];
#endif
		static void NewProp_bWantsSupersprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsSupersprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyPartialSprint_MetaData[];
#endif
		static void NewProp_bOnlyPartialSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyPartialSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprintIsAllowed_MetaData[];
#endif
		static void NewProp_bSprintIsAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprintIsAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsSprint_MetaData[];
#endif
		static void NewProp_bWantsSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementModifier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementModifier_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentAccelerationBonusPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipmentAccelerationBonusPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentSpeedBonusPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipmentSpeedBonusPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorAccelerationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorAccelerationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentBackpedalSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipmentBackpedalSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBackpedalSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBackpedalSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupersprintAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SupersprintAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintTimeToReachMaxSprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintTimeToReachMaxSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartialSprintAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartialSprintAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrafeModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackpedalModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackpedalModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupersprintModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SupersprintModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartialSprintModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartialSprintModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedCrouchedWithRatPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedCrouchedWithRatPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeToStartBeingChased_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeToStartBeingChased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeToStartChasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeToStartChasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToBreakUsBeingChased_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToBreakUsBeingChased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToBreakUsChasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToBreakUsChasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChasedMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChasedMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChasingMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChasingMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleToChase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleToChase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeingChasedSlowdownTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeingChasedSlowdownTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RushSprintTimeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RushSprintTimeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChasingSprintTimeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChasingSprintTimeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSprintPreventionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSprintPreventionThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSprintPreventionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSprintPreventionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSprintPreventionDecaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSprintPreventionDecaySpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedCharacterMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauMovementComponent_GetAccelerationFactor, "GetAccelerationFactor" }, // 2437953819
		{ &Z_Construct_UFunction_UMordhauMovementComponent_GetSpeedFactor, "GetSpeedFactor" }, // 1345412163
		{ &Z_Construct_UFunction_UMordhauMovementComponent_IsInKnockback, "IsInKnockback" }, // 4220600005
		{ &Z_Construct_UFunction_UMordhauMovementComponent_Knockback, "Knockback" }, // 3579213354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MordhauMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class EMovementModifier : uint8\n{\n       Walk = 0,\n       Strafe = 1,\n       Backpedal = 2,\n       PartialSprint = 3,\n       Sprint = 4,\n       Rush = 5,\n       Chasing = 6,\n       Supersprint = 7,\n       EMovementModifier_MAX = 8\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BrakingDecelerationFallingTooFast_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BrakingDecelerationFallingTooFast = { UE4CodeGen_Private::EPropertyClass::Float, "BrakingDecelerationFallingTooFast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, BrakingDecelerationFallingTooFast), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BrakingDecelerationFallingTooFast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BrakingDecelerationFallingTooFast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackDuration_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackDuration = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, KnockbackDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseFallingLateralFriction_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseFallingLateralFriction = { UE4CodeGen_Private::EPropertyClass::Float, "BaseFallingLateralFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, BaseFallingLateralFriction), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseFallingLateralFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseFallingLateralFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseGroundFriction_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseGroundFriction = { UE4CodeGen_Private::EPropertyClass::Float, "BaseGroundFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, BaseGroundFriction), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseGroundFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseGroundFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxSpeedFalling_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxSpeedFalling = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeedFalling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MaxSpeedFalling), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxSpeedFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxSpeedFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackUpImpulse_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackUpImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackUpImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, KnockbackUpImpulse), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackUpImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackUpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackFallingLateralFriction_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackFallingLateralFriction = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackFallingLateralFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, KnockbackFallingLateralFriction), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackFallingLateralFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackFallingLateralFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackGroundFriction_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackGroundFriction = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackGroundFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, KnockbackGroundFriction), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackGroundFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackGroundFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint_SetBit(void* Obj)
	{
		((UMordhauMovementComponent*)Obj)->bWantsSupersprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsSupersprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMovementComponent), &Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint_SetBit(void* Obj)
	{
		((UMordhauMovementComponent*)Obj)->bOnlyPartialSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyPartialSprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMovementComponent), &Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed_SetBit(void* Obj)
	{
		((UMordhauMovementComponent*)Obj)->bSprintIsAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed = { UE4CodeGen_Private::EPropertyClass::Bool, "bSprintIsAllowed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMovementComponent), &Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint_SetBit(void* Obj)
	{
		((UMordhauMovementComponent*)Obj)->bWantsSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsSprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMovementComponent), &Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MovementModifier), Z_Construct_UEnum_Mordhau_EMovementModifier, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentAccelerationBonusPercentage_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentAccelerationBonusPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "EquipmentAccelerationBonusPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, EquipmentAccelerationBonusPercentage), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentAccelerationBonusPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentAccelerationBonusPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentSpeedBonusPercentage_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentSpeedBonusPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "EquipmentSpeedBonusPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, EquipmentSpeedBonusPercentage), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentSpeedBonusPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentSpeedBonusPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorAccelerationFactor_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorAccelerationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ArmorAccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, ArmorAccelerationFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorAccelerationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorAccelerationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorSpeedFactor_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ArmorSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, ArmorSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentBackpedalSpeedFactor_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentBackpedalSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "EquipmentBackpedalSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, EquipmentBackpedalSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentBackpedalSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentBackpedalSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionBackpedalSpeedFactor_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionBackpedalSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MotionBackpedalSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MotionBackpedalSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionBackpedalSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionBackpedalSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionSpeedFactor_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "MotionSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MotionSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintAcceleration_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "SupersprintAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, SupersprintAcceleration), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTime_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTime = { UE4CodeGen_Private::EPropertyClass::Float, "SprintTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, SprintTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTimeToReachMaxSprint_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTimeToReachMaxSprint = { UE4CodeGen_Private::EPropertyClass::Float, "SprintTimeToReachMaxSprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, SprintTimeToReachMaxSprint), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTimeToReachMaxSprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTimeToReachMaxSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintAcceleration_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "SprintAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, SprintAcceleration), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintAcceleration_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "PartialSprintAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, PartialSprintAcceleration), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_WalkAcceleration_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_WalkAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "WalkAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, WalkAcceleration), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_WalkAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_WalkAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_StrafeModifier_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_StrafeModifier = { UE4CodeGen_Private::EPropertyClass::Float, "StrafeModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, StrafeModifier), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_StrafeModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_StrafeModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BackpedalModifier_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BackpedalModifier = { UE4CodeGen_Private::EPropertyClass::Float, "BackpedalModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, BackpedalModifier), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BackpedalModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BackpedalModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintModifier_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintModifier = { UE4CodeGen_Private::EPropertyClass::Float, "SupersprintModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, SupersprintModifier), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintModifier_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintModifier = { UE4CodeGen_Private::EPropertyClass::Float, "PartialSprintModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, PartialSprintModifier), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintModifier_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintModifier = { UE4CodeGen_Private::EPropertyClass::Float, "SprintModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, SprintModifier), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchedWithRatPerk_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchedWithRatPerk = { UE4CodeGen_Private::EPropertyClass::Float, "MaxWalkSpeedCrouchedWithRatPerk", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MaxWalkSpeedCrouchedWithRatPerk), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchedWithRatPerk_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchedWithRatPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartBeingChased_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartBeingChased = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeToStartBeingChased", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MinTimeToStartBeingChased), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartBeingChased_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartBeingChased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartChasing_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartChasing = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeToStartChasing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MinTimeToStartChasing), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartChasing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartChasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsBeingChased_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsBeingChased = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToBreakUsBeingChased", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, TimeToBreakUsBeingChased), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsBeingChased_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsBeingChased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsChasing_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsChasing = { UE4CodeGen_Private::EPropertyClass::Float, "TimeToBreakUsChasing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, TimeToBreakUsChasing), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsChasing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsChasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasedMaxDistance_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasedMaxDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "ChasedMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, ChasedMaxDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasedMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasedMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingMaxDistance_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingMaxDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "ChasingMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, ChasingMaxDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxAngleToChase_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxAngleToChase = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngleToChase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, MaxAngleToChase), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxAngleToChase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxAngleToChase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BeingChasedSlowdownTimeFactor_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BeingChasedSlowdownTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "BeingChasedSlowdownTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, BeingChasedSlowdownTimeFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BeingChasedSlowdownTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BeingChasedSlowdownTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_RushSprintTimeStart_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_RushSprintTimeStart = { UE4CodeGen_Private::EPropertyClass::Float, "RushSprintTimeStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, RushSprintTimeStart), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_RushSprintTimeStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_RushSprintTimeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingSprintTimeStart_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingSprintTimeStart = { UE4CodeGen_Private::EPropertyClass::Float, "ChasingSprintTimeStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, ChasingSprintTimeStart), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingSprintTimeStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingSprintTimeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionThreshold_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "TurnSprintPreventionThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, TurnSprintPreventionThreshold), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDuration_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDuration = { UE4CodeGen_Private::EPropertyClass::Float, "TurnSprintPreventionDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, TurnSprintPreventionDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDecaySpeed_MetaData[] = {
		{ "Category", "MordhauMovementComponent" },
		{ "ModuleRelativePath", "MordhauMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDecaySpeed = { UE4CodeGen_Private::EPropertyClass::Float, "TurnSprintPreventionDecaySpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMovementComponent, TurnSprintPreventionDecaySpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDecaySpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDecaySpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BrakingDecelerationFallingTooFast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseFallingLateralFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BaseGroundFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxSpeedFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackUpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackFallingLateralFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_KnockbackGroundFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSupersprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bOnlyPartialSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bSprintIsAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_bWantsSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MovementModifier_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentAccelerationBonusPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentSpeedBonusPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorAccelerationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ArmorSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_EquipmentBackpedalSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionBackpedalSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MotionSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintTimeToReachMaxSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_WalkAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_StrafeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BackpedalModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SupersprintModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_PartialSprintModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_SprintModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchedWithRatPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartBeingChased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MinTimeToStartChasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsBeingChased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TimeToBreakUsChasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasedMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_MaxAngleToChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_BeingChasedSlowdownTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_RushSprintTimeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_ChasingSprintTimeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMovementComponent_Statics::NewProp_TurnSprintPreventionDecaySpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauMovementComponent_Statics::ClassParams = {
		&UMordhauMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMordhauMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauMovementComponent, 555859883);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauMovementComponent(Z_Construct_UClass_UMordhauMovementComponent, &UMordhauMovementComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
