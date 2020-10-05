// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/AdvancedCharacterMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedCharacterMovement() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterMovement_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager_NoRegister();
// End Cross Module References
	void UAdvancedCharacterMovement::StaticRegisterNativesUAdvancedCharacterMovement()
	{
	}
	UClass* Z_Construct_UClass_UAdvancedCharacterMovement_NoRegister()
	{
		return UAdvancedCharacterMovement::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedCharacterMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipPredictionForAnimTickSkipOrGreater_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SkipPredictionForAnimTickSkipOrGreater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAuthNetSmoothing_MetaData[];
#endif
		static void NewProp_bDisableAuthNetSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAuthNetSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthNetMaxSmoothDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AuthNetMaxSmoothDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthNetSmoothTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AuthNetSmoothTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponentMeshOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementComponentMeshOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetNetSmoothPending_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetNetSmoothPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetNetSmoothLeftover_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetNetSmoothLeftover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetCorrectionLeftover_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetCorrectionLeftover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetExtrapolationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetExtrapolationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetExtrapolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetExtrapolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetMeshTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetMeshTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementInput_MetaData[];
#endif
		static void NewProp_bIgnoreMovementInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingTurnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PendingTurnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePendingRotationToOrientMovement_MetaData[];
#endif
		static void NewProp_bUsePendingRotationToOrientMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePendingRotationToOrientMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseBackwardsTurning_MetaData[];
#endif
		static void NewProp_bReverseBackwardsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseBackwardsTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollFallDamageFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollFallDamageFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollFallDamageOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollFallDamageOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollMinVelocityForFallDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollMinVelocityForFallDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallDamageFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallDamageFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallDamageOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallDamageOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVelocityForFallDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVelocityForFallDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerchRadiusThresholdRagdollFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerchRadiusThresholdRagdollFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StillTimeWhileRagdollFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StillTimeWhileRagdollFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MordhauRotationSmoothFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MordhauRotationSmoothFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MordhauRotationSmoothStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MordhauRotationSmoothStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMordhauRotationInterpMode_MetaData[];
#endif
		static void NewProp_bUseMordhauRotationInterpMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMordhauRotationInterpMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrowdManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFallingCheckVelocityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFallingCheckVelocityZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedCharacterMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AdvancedCharacterMovement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_SkipPredictionForAnimTickSkipOrGreater_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_SkipPredictionForAnimTickSkipOrGreater = { UE4CodeGen_Private::EPropertyClass::Int, "SkipPredictionForAnimTickSkipOrGreater", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, SkipPredictionForAnimTickSkipOrGreater), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_SkipPredictionForAnimTickSkipOrGreater_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_SkipPredictionForAnimTickSkipOrGreater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing_SetBit(void* Obj)
	{
		((UAdvancedCharacterMovement*)Obj)->bDisableAuthNetSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableAuthNetSmoothing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterMovement), &Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetMaxSmoothDist_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetMaxSmoothDist = { UE4CodeGen_Private::EPropertyClass::Float, "AuthNetMaxSmoothDist", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, AuthNetMaxSmoothDist), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetMaxSmoothDist_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetMaxSmoothDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetSmoothTime_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetSmoothTime = { UE4CodeGen_Private::EPropertyClass::Float, "AuthNetSmoothTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, AuthNetSmoothTime), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetSmoothTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetSmoothTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MovementComponentMeshOffset_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MovementComponentMeshOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementComponentMeshOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, MovementComponentMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MovementComponentMeshOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MovementComponentMeshOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothPending_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothPending = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetNetSmoothPending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, OffsetNetSmoothPending), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothPending_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothLeftover_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothLeftover = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetNetSmoothLeftover", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, OffsetNetSmoothLeftover), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothLeftover_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothLeftover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetCorrectionLeftover_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetCorrectionLeftover = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetCorrectionLeftover", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, OffsetCorrectionLeftover), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetCorrectionLeftover_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetCorrectionLeftover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolationTarget_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolationTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetExtrapolationTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, OffsetExtrapolationTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolationTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolation_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolation = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetExtrapolation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, OffsetExtrapolation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetMeshTranslation_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetMeshTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetMeshTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, OffsetMeshTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetMeshTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetMeshTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput_SetBit(void* Obj)
	{
		((UAdvancedCharacterMovement*)Obj)->bIgnoreMovementInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreMovementInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterMovement), &Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PendingTurnValue_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PendingTurnValue = { UE4CodeGen_Private::EPropertyClass::Float, "PendingTurnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, PendingTurnValue), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PendingTurnValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PendingTurnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PreviousVelocity_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
		{ "ToolTip", "POSSIBLY USEFUL, ADD BACK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PreviousVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, PreviousVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PreviousVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PreviousVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement_SetBit(void* Obj)
	{
		((UAdvancedCharacterMovement*)Obj)->bUsePendingRotationToOrientMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePendingRotationToOrientMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterMovement), &Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning_SetBit(void* Obj)
	{
		((UAdvancedCharacterMovement*)Obj)->bReverseBackwardsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverseBackwardsTurning", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterMovement), &Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageFactor_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RagdollFallDamageFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, RagdollFallDamageFactor), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageOffset_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageOffset = { UE4CodeGen_Private::EPropertyClass::Float, "RagdollFallDamageOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, RagdollFallDamageOffset), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollMinVelocityForFallDamage_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollMinVelocityForFallDamage = { UE4CodeGen_Private::EPropertyClass::Float, "RagdollMinVelocityForFallDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, RagdollMinVelocityForFallDamage), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollMinVelocityForFallDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollMinVelocityForFallDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageFactor_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageFactor = { UE4CodeGen_Private::EPropertyClass::Float, "FallDamageFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, FallDamageFactor), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageOffset_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageOffset = { UE4CodeGen_Private::EPropertyClass::Float, "FallDamageOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, FallDamageOffset), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MinVelocityForFallDamage_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MinVelocityForFallDamage = { UE4CodeGen_Private::EPropertyClass::Float, "MinVelocityForFallDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, MinVelocityForFallDamage), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MinVelocityForFallDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MinVelocityForFallDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PerchRadiusThresholdRagdollFalling_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PerchRadiusThresholdRagdollFalling = { UE4CodeGen_Private::EPropertyClass::Float, "PerchRadiusThresholdRagdollFalling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, PerchRadiusThresholdRagdollFalling), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PerchRadiusThresholdRagdollFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PerchRadiusThresholdRagdollFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_StillTimeWhileRagdollFalling_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_StillTimeWhileRagdollFalling = { UE4CodeGen_Private::EPropertyClass::Float, "StillTimeWhileRagdollFalling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, StillTimeWhileRagdollFalling), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_StillTimeWhileRagdollFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_StillTimeWhileRagdollFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothFrom_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothFrom = { UE4CodeGen_Private::EPropertyClass::Struct, "MordhauRotationSmoothFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, MordhauRotationSmoothFrom), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothFrom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothStartTime_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "MordhauRotationSmoothStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, MordhauRotationSmoothStartTime), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	void Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode_SetBit(void* Obj)
	{
		((UAdvancedCharacterMovement*)Obj)->bUseMordhauRotationInterpMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMordhauRotationInterpMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedCharacterMovement), &Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_CrowdManager_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_CrowdManager = { UE4CodeGen_Private::EPropertyClass::Object, "CrowdManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, CrowdManager), Z_Construct_UClass_UCrowdManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_CrowdManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_CrowdManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_LastFallingCheckVelocityZ_MetaData[] = {
		{ "Category", "AdvancedCharacterMovement" },
		{ "ModuleRelativePath", "AdvancedCharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_LastFallingCheckVelocityZ = { UE4CodeGen_Private::EPropertyClass::Float, "LastFallingCheckVelocityZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedCharacterMovement, LastFallingCheckVelocityZ), METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_LastFallingCheckVelocityZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_LastFallingCheckVelocityZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedCharacterMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_SkipPredictionForAnimTickSkipOrGreater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bDisableAuthNetSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetMaxSmoothDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_AuthNetSmoothTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MovementComponentMeshOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetNetSmoothLeftover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetCorrectionLeftover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetExtrapolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_OffsetMeshTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bIgnoreMovementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PendingTurnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PreviousVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUsePendingRotationToOrientMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bReverseBackwardsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollFallDamageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_RagdollMinVelocityForFallDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_FallDamageOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MinVelocityForFallDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_PerchRadiusThresholdRagdollFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_StillTimeWhileRagdollFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_MordhauRotationSmoothStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_bUseMordhauRotationInterpMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_CrowdManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedCharacterMovement_Statics::NewProp_LastFallingCheckVelocityZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedCharacterMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedCharacterMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedCharacterMovement_Statics::ClassParams = {
		&UAdvancedCharacterMovement::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UAdvancedCharacterMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCharacterMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedCharacterMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedCharacterMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedCharacterMovement, 1677393882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedCharacterMovement(Z_Construct_UClass_UAdvancedCharacterMovement, &UAdvancedCharacterMovement::StaticClass, TEXT("/Script/Mordhau"), TEXT("UAdvancedCharacterMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedCharacterMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
