// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/AdvancedCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedCharacterAnimInstance() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterAnimInstance_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep();
	MORDHAU_API UFunction* Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UAdvancedCharacterAnimInstance::StaticRegisterNativesUAdvancedCharacterAnimInstance()
	{
		UClass* Class = UAdvancedCharacterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoFootstep", &UAdvancedCharacterAnimInstance::execDoFootstep },
			{ "OnFootstep", &UAdvancedCharacterAnimInstance::execOnFootstep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics
	{
		struct AdvancedCharacterAnimInstance_eventDoFootstep_Parms
		{
			int32 Limb;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Limb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::NewProp_Limb = { UE4CodeGen_Private::EPropertyClass::Int, "Limb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedCharacterAnimInstance_eventDoFootstep_Parms, Limb), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::NewProp_Limb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedCharAnimFns" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedCharacterAnimInstance, "DoFootstep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AdvancedCharacterAnimInstance_eventDoFootstep_Parms), Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics
	{
		struct AdvancedCharacterAnimInstance_eventOnFootstep_Parms
		{
			int32 Limb;
			int32 SurfaceType;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Limb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::NewProp_SurfaceType = { UE4CodeGen_Private::EPropertyClass::Int, "SurfaceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedCharacterAnimInstance_eventOnFootstep_Parms, SurfaceType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::NewProp_Limb = { UE4CodeGen_Private::EPropertyClass::Int, "Limb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedCharacterAnimInstance_eventOnFootstep_Parms, Limb), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::NewProp_Limb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdvancedCharAnimFns" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedCharacterAnimInstance, "OnFootstep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AdvancedCharacterAnimInstance_eventOnFootstep_Parms), Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedCharacterAnimInstance_NoRegister()
	{
		return UAdvancedCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRanPostEvaluateThisFrame_MetaData[];
#endif
		static void NewProp_bRanPostEvaluateThisFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRanPostEvaluateThisFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDeltaSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastDeltaSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltFlinchIsHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AltFlinchIsHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltFlinchDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AltFlinchDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchIsHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchIsHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveOverrideTypeNormalizedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveOverrideTypeNormalizedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveOverrideNoneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveOverrideNoneTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveOverrideWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveOverrideWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveOverrideType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AdditiveOverrideType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeathDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAirborneFromJump_MetaData[];
#endif
		static void NewProp_bAirborneFromJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAirborneFromJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumped_MetaData[];
#endif
		static void NewProp_bJumped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirborneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirborneTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastJump_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLand_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAirborne_MetaData[];
#endif
		static void NewProp_bIsAirborne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAirborne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTurnLag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccumulatedTurnLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedLocationLag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccumulatedLocationLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootLiftLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootLiftLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimbRotationOffsetFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimbRotationOffsetFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotationOffsetFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootRotationOffsetFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotationPivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootRotationPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotationOffsetInternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootRotationOffsetInternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTranslationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTranslationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTranslationOffsetInternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTranslationOffsetInternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsGrounding_MetaData[];
#endif
		static void NewProp_bWantsGrounding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsGrounding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedCharacterAnimInstance_DoFootstep, "DoFootstep" }, // 2764854892
		{ &Z_Construct_UFunction_UAdvancedCharacterAnimInstance_OnFootstep, "OnFootstep" }, // 1198792975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AdvancedCharacterAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame_SetBit(void* Obj)
	{
		((UAdvancedCharacterAnimInstance*)Obj)->bRanPostEvaluateThisFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bRanPostEvaluateThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterAnimInstance), &Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastDeltaSeconds_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastDeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "LastDeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, LastDeltaSeconds), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastDeltaSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastDeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchIsHead_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchIsHead = { UE4CodeGen_Private::EPropertyClass::Float, "AltFlinchIsHead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AltFlinchIsHead), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchIsHead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchIsHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchDirection_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchDirection = { UE4CodeGen_Private::EPropertyClass::Float, "AltFlinchDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AltFlinchDirection), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchIsHead_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchIsHead = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchIsHead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, FlinchIsHead), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchIsHead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchIsHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchDirection_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchDirection = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, FlinchDirection), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideTypeNormalizedTime_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideTypeNormalizedTime = { UE4CodeGen_Private::EPropertyClass::Float, "AdditiveOverrideTypeNormalizedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AdditiveOverrideTypeNormalizedTime), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideTypeNormalizedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideTypeNormalizedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideNoneTime_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideNoneTime = { UE4CodeGen_Private::EPropertyClass::Float, "AdditiveOverrideNoneTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AdditiveOverrideNoneTime), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideNoneTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideNoneTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideWeight_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideWeight = { UE4CodeGen_Private::EPropertyClass::Float, "AdditiveOverrideWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AdditiveOverrideWeight), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideType_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideType = { UE4CodeGen_Private::EPropertyClass::Name, "AdditiveOverrideType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AdditiveOverrideType), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_DeathDirection_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_DeathDirection = { UE4CodeGen_Private::EPropertyClass::Float, "DeathDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, DeathDirection), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_DeathDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_DeathDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((UAdvancedCharacterAnimInstance*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterAnimInstance), &Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump_SetBit(void* Obj)
	{
		((UAdvancedCharacterAnimInstance*)Obj)->bAirborneFromJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump = { UE4CodeGen_Private::EPropertyClass::Bool, "bAirborneFromJump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterAnimInstance), &Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped_SetBit(void* Obj)
	{
		((UAdvancedCharacterAnimInstance*)Obj)->bJumped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped = { UE4CodeGen_Private::EPropertyClass::Bool, "bJumped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterAnimInstance), &Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AirborneTime_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AirborneTime = { UE4CodeGen_Private::EPropertyClass::Float, "AirborneTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AirborneTime), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AirborneTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AirborneTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastJump_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastJump = { UE4CodeGen_Private::EPropertyClass::Float, "LastJump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, LastJump), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastJump_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastLand_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastLand = { UE4CodeGen_Private::EPropertyClass::Float, "LastLand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, LastLand), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastLand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastLand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne_SetBit(void* Obj)
	{
		((UAdvancedCharacterAnimInstance*)Obj)->bIsAirborne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAirborne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterAnimInstance), &Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedTurnLag_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedTurnLag = { UE4CodeGen_Private::EPropertyClass::Struct, "AccumulatedTurnLag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AccumulatedTurnLag), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedTurnLag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedTurnLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedLocationLag_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedLocationLag = { UE4CodeGen_Private::EPropertyClass::Struct, "AccumulatedLocationLag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, AccumulatedLocationLag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedLocationLag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedLocationLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_GroundingWeight_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_GroundingWeight = { UE4CodeGen_Private::EPropertyClass::Float, "GroundingWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, GroundingWeight), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_GroundingWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_GroundingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootLiftLimits_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootLiftLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "RootLiftLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootLiftLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootLiftLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootLiftLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LimbRotationOffsetFactor_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LimbRotationOffsetFactor = { UE4CodeGen_Private::EPropertyClass::Float, "LimbRotationOffsetFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, LimbRotationOffsetFactor), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LimbRotationOffsetFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LimbRotationOffsetFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetFactor_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RootRotationOffsetFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootRotationOffsetFactor), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RotationInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RotationInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RotationInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_TranslationInterpSpeed_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_TranslationInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "TranslationInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, TranslationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_TranslationInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_TranslationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationPivot_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationPivot = { UE4CodeGen_Private::EPropertyClass::Struct, "RootRotationPivot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootRotationPivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationPivot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffset_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RootRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetInternal_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetInternal = { UE4CodeGen_Private::EPropertyClass::Struct, "RootRotationOffsetInternal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootRotationOffsetInternal), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetInternal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetInternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffset_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RootTranslationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffsetInternal_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffsetInternal = { UE4CodeGen_Private::EPropertyClass::Struct, "RootTranslationOffsetInternal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterAnimInstance, RootTranslationOffsetInternal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffsetInternal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffsetInternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding_MetaData[] = {
		{ "Category", "AdvancedCharacterAnimInstance" },
		{ "ModuleRelativePath", "AdvancedCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding_SetBit(void* Obj)
	{
		((UAdvancedCharacterAnimInstance*)Obj)->bWantsGrounding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsGrounding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterAnimInstance), &Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bRanPostEvaluateThisFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastDeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchIsHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AltFlinchDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchIsHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_FlinchDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideTypeNormalizedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideNoneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AdditiveOverrideType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_DeathDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bAirborneFromJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bJumped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AirborneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LastLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bIsAirborne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedTurnLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_AccumulatedLocationLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_GroundingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootLiftLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_LimbRotationOffsetFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_TranslationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootRotationOffsetInternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_RootTranslationOffsetInternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::NewProp_bWantsGrounding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::ClassParams = {
		&UAdvancedCharacterAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedCharacterAnimInstance, 4064752541);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedCharacterAnimInstance(Z_Construct_UClass_UAdvancedCharacterAnimInstance, &UAdvancedCharacterAnimInstance::StaticClass, TEXT("/Script/Mordhau"), TEXT("UAdvancedCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
