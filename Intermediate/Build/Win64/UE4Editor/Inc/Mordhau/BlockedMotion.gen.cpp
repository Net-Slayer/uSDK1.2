// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/BlockedMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockedMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UBlockedMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UBlockedMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMovementRestriction();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EBlockedReason();
// End Cross Module References
	void UBlockedMotion::StaticRegisterNativesUBlockedMotion()
	{
	}
	UClass* Z_Construct_UClass_UBlockedMotion_NoRegister()
	{
		return UBlockedMotion::StaticClass();
	}
	struct Z_Construct_UClass_UBlockedMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberedRecoveryTimeLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChamberedRecoveryTimeLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParriedRecoveryTimeLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParriedRecoveryTimeLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabChamberedFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabChamberedFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabChamberedMinMaxRange3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabChamberedMinMaxRange3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabChamberedFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabChamberedFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabChamberedMinMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabChamberedMinMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabParryFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabParryFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabParryMinMaxRange3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabParryMinMaxRange3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabParryFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabParryFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabParryMinMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabParryMinMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberBounceDuration3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberBounceDuration3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberTimeUntilFade3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberTimeUntilFade3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberMinMaxRange3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberMinMaxRange3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryBounceDuration3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryBounceDuration3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryTimeUntilFade3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryTimeUntilFade3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryMinMaxRange3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryMinMaxRange3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberBounceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberBounceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberTimeUntilFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberTimeUntilFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralChamberMinMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralChamberMinMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryBounceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryBounceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryTimeUntilFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryTimeUntilFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralParryMinMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralParryMinMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseScaleCurve3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleaseScaleCurve3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleaseScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralWorldFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralWorldFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralWorldBounceDuration3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralWorldBounceDuration3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralWorldTimeUntilFade3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralWorldTimeUntilFade3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueWindowHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueueWindowHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueueWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabWorldFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabWorldFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabWorldFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabWorldFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClashFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClashFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralWorldFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralWorldFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralWorldBounceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralWorldBounceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralWorldTimeUntilFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralWorldTimeUntilFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickClashedRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickClashedRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashedRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClashedRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCancelRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitCancelRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickHitStopRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickHitStopRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStopRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteParryRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteParryRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickHitStopAnimRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickHitStopAnimRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickHitStopBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickHitStopBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabHitStopFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabHitStopFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabHitStopFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabHitStopFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralHitStopFadeOutTime3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralHitStopFadeOutTime3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralHitStopBounceDuration3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralHitStopBounceDuration3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralHitStopTimeUntilFade3P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralHitStopTimeUntilFade3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralHitStopFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralHitStopFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralHitStopBounceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralHitStopBounceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralHitStopTimeUntilFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProceduralHitStopTimeUntilFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberedRecoveryTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChamberedRecoveryTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParriedRecoveryTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParriedRecoveryTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMovementRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OriginalMovementRestriction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OriginalMovementRestriction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRestrictionWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementRestrictionWorld;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementRestrictionWorld_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementRestrictionHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementRestrictionHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementRestrictionHit_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FromMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FromMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlockedReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockedReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueuedMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueuedMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoReleaseBounceProcedural_MetaData[];
#endif
		static void NewProp_bDoReleaseBounceProcedural_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoReleaseBounceProcedural;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFadedOutProcedural_MetaData[];
#endif
		static void NewProp_bHasFadedOutProcedural_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFadedOutProcedural;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasQueuedMove_MetaData[];
#endif
		static void NewProp_bHasQueuedMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasQueuedMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockedMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockedMotion.h" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeLimits_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "ChamberedRecoveryTimeLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ChamberedRecoveryTimeLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeLimits_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "ParriedRecoveryTimeLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ParriedRecoveryTimeLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Struct, "StabChamberedFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabChamberedFadeOutTime3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange3P = { UE4CodeGen_Private::EPropertyClass::Struct, "StabChamberedMinMaxRange3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabChamberedMinMaxRange3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Struct, "StabChamberedFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabChamberedFadeOutTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange = { UE4CodeGen_Private::EPropertyClass::Struct, "StabChamberedMinMaxRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabChamberedMinMaxRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Struct, "StabParryFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabParryFadeOutTime3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange3P = { UE4CodeGen_Private::EPropertyClass::Struct, "StabParryMinMaxRange3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabParryMinMaxRange3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Struct, "StabParryFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabParryFadeOutTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange = { UE4CodeGen_Private::EPropertyClass::Struct, "StabParryMinMaxRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabParryMinMaxRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberFadeOutTime3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberBounceDuration3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberBounceDuration3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberTimeUntilFade3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberTimeUntilFade3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberMinMaxRange3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberMinMaxRange3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryFadeOutTime3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryBounceDuration3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryBounceDuration3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryTimeUntilFade3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryTimeUntilFade3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange3P_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange3P = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryMinMaxRange3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryMinMaxRange3P), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberFadeOutTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberBounceDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberBounceDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberTimeUntilFade", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberTimeUntilFade), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralChamberMinMaxRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralChamberMinMaxRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryFadeOutTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryBounceDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryBounceDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryTimeUntilFade", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryTimeUntilFade), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralParryMinMaxRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralParryMinMaxRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve3P_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve3P = { UE4CodeGen_Private::EPropertyClass::Object, "ReleaseScaleCurve3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ReleaseScaleCurve3P), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve = { UE4CodeGen_Private::EPropertyClass::Object, "ReleaseScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ReleaseScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromAttackMontage_MetaData[] = {
		{ "Category", "Anims" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromAttackMontage = { UE4CodeGen_Private::EPropertyClass::Object, "FromAttackMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, FromAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromAttackMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralWorldFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralWorldFadeOutTime3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration3P = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralWorldBounceDuration3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralWorldBounceDuration3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade3P = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralWorldTimeUntilFade3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralWorldTimeUntilFade3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedAngle_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedAngle = { UE4CodeGen_Private::EPropertyClass::Float, "QueuedAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, QueuedAngle), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindowHit_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindowHit = { UE4CodeGen_Private::EPropertyClass::Float, "QueueWindowHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, QueueWindowHit), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindowHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindowHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindow_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindow = { UE4CodeGen_Private::EPropertyClass::Float, "QueueWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, QueueWindow), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Float, "StabWorldFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabWorldFadeOutTime3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "StabWorldFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabWorldFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Float, "ClashFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ClashFadeOutTime3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "ClashFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ClashFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralWorldFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralWorldFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralWorldBounceDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralWorldBounceDuration), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralWorldTimeUntilFade", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralWorldTimeUntilFade), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickClashedRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickClashedRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "KickClashedRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, KickClashedRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickClashedRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickClashedRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashedRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashedRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "ClashedRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ClashedRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashedRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashedRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_WorldRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_WorldRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "WorldRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, WorldRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_WorldRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_WorldRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitCancelRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitCancelRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "HitCancelRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, HitCancelRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitCancelRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitCancelRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "KickHitStopRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, KickHitStopRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitStopRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitStopRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "HitStopRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, HitStopRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitStopRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitStopRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_RiposteParryRecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_RiposteParryRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteParryRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, RiposteParryRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_RiposteParryRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_RiposteParryRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopAnimRate_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopAnimRate = { UE4CodeGen_Private::EPropertyClass::Float, "KickHitStopAnimRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, KickHitStopAnimRate), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopAnimRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopAnimRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopBlendOutTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopBlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "KickHitStopBlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, KickHitStopBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopBlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Float, "StabHitStopFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabHitStopFadeOutTime3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "StabHitStopFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, StabHitStopFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime3P = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralHitStopFadeOutTime3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralHitStopFadeOutTime3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration3P = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralHitStopBounceDuration3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralHitStopBounceDuration3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade3P_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade3P = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralHitStopTimeUntilFade3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralHitStopTimeUntilFade3P), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralHitStopFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralHitStopFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralHitStopBounceDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralHitStopBounceDuration), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade = { UE4CodeGen_Private::EPropertyClass::Float, "ProceduralHitStopTimeUntilFade", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ProceduralHitStopTimeUntilFade), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeOffset_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ChamberedRecoveryTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ChamberedRecoveryTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeOffset_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ParriedRecoveryTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, ParriedRecoveryTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction = { UE4CodeGen_Private::EPropertyClass::Enum, "OriginalMovementRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, OriginalMovementRestriction), Z_Construct_UEnum_Mordhau_EMovementRestriction, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementRestrictionWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, MovementRestrictionWorld), Z_Construct_UEnum_Mordhau_EMovementRestriction, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementRestrictionHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, MovementRestrictionHit), Z_Construct_UEnum_Mordhau_EMovementRestriction, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove = { UE4CodeGen_Private::EPropertyClass::Enum, "FromMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, FromMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason = { UE4CodeGen_Private::EPropertyClass::Enum, "BlockedReason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, BlockedReason), Z_Construct_UEnum_Mordhau_EBlockedReason, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove = { UE4CodeGen_Private::EPropertyClass::Enum, "QueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBlockedMotion, QueuedMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	void Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural_SetBit(void* Obj)
	{
		((UBlockedMotion*)Obj)->bDoReleaseBounceProcedural = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoReleaseBounceProcedural", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlockedMotion), &Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	void Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural_SetBit(void* Obj)
	{
		((UBlockedMotion*)Obj)->bHasFadedOutProcedural = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasFadedOutProcedural", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlockedMotion), &Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "BlockedMotion.h" },
	};
#endif
	void Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove_SetBit(void* Obj)
	{
		((UBlockedMotion*)Obj)->bHasQueuedMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasQueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlockedMotion), &Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockedMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabChamberedMinMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabParryMinMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberBounceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberTimeUntilFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralChamberMinMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryBounceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryTimeUntilFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralParryMinMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ReleaseScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindowHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueueWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabWorldFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldBounceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralWorldTimeUntilFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickClashedRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ClashedRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_WorldRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitCancelRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_HitStopRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_RiposteParryRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopAnimRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_KickHitStopBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_StabHitStopFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopBounceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ProceduralHitStopTimeUntilFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ChamberedRecoveryTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_ParriedRecoveryTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_OriginalMovementRestriction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionWorld_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_MovementRestrictionHit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_FromMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_BlockedReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_QueuedMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bDoReleaseBounceProcedural,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasFadedOutProcedural,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockedMotion_Statics::NewProp_bHasQueuedMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockedMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockedMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlockedMotion_Statics::ClassParams = {
		&UBlockedMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBlockedMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlockedMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlockedMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlockedMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlockedMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlockedMotion, 994270253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlockedMotion(Z_Construct_UClass_UBlockedMotion, &UBlockedMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UBlockedMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockedMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
