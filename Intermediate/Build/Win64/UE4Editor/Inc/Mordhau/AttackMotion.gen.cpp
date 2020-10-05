// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/AttackMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UAttackMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UAttackMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackStage();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackType();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FSpineSpaceAdditive();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FAttackInfo();
	MORDHAU_API UClass* Z_Construct_UClass_UParryMotion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UAttackMotion::StaticRegisterNativesUAttackMotion()
	{
		UClass* Class = UAttackMotion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHasHitIncludingCosmeticHit", &UAttackMotion::execSetHasHitIncludingCosmeticHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttackMotionFns" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackMotion, "SetHasHitIncludingCosmeticHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttackMotion_NoRegister()
	{
		return UAttackMotion::StaticClass();
	}
	struct Z_Construct_UClass_UAttackMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedAttacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_BlockedAttacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasChambered_MetaData[];
#endif
		static void NewProp_bHasChambered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasChambered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstHitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstHitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasHitIncludingCosmeticHit_MetaData[];
#endif
		static void NewProp_bHasHitIncludingCosmeticHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasHitIncludingCosmeticHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasHit_MetaData[];
#endif
		static void NewProp_bHasHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueuedMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueuedMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasQueuedMove_MetaData[];
#endif
		static void NewProp_bHasQueuedMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasQueuedMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedServerComboMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueuedServerComboMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueuedServerComboMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedServerComboAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedServerComboAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasQueuedServerCombo_MetaData[];
#endif
		static void NewProp_bHasQueuedServerCombo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasQueuedServerCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLastAttackMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousLastAttackMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTorsoMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftTorsoMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedAnimFor3PRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueuedAnimFor3PRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindupEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindupEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastWindupNormalizedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastWindupNormalizedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReleaseNormalizedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastReleaseNormalizedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterCompensateLookTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterCompensateLookTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTurnCompensation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTurnCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterCompensateWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterCompensateWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterCompensateOverheadFixupTiltTerm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterCompensateOverheadFixupTiltTerm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterCompensateOverheadFixupTerm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterCompensateOverheadFixupTerm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindUpAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindUpAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReducedTargetAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReducedTargetAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComingFromAsParry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComingFromAsParry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComingFromMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComingFromMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComingFromMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulHitPlayRate1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulHitPlayRate1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulHitBlendOutAnimTime1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulHitBlendOutAnimTime1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulHitStrikePlayRate1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulHitStrikePlayRate1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulHitStrikeBlendOutAnimTime1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulHitStrikeBlendOutAnimTime1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulHitPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulHitPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulHitBlendOutAnimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessfulHitBlendOutAnimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissPlayRate1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MissPlayRate1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MissPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOut1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOut1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteBlendInWithShield1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteBlendInWithShield1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteBlendInWithShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteBlendInWithShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostClashBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostClashBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostClashBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostClashBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalAttackParrySlowBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalAttackParrySlowBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalAttackParrySlowBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalAttackParrySlowBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalAttackSlowBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalAttackSlowBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalAttackSlowBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalAttackSlowBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalAttackBlendIn1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalAttackBlendIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalAttackBlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalAttackBlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReleaseIsClashableAfter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReleaseIsClashableAfter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWindUpTimeBeforeMorphing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinWindUpTimeBeforeMorphing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickEarlyRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickEarlyRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberStaminaRecover_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ChamberStaminaRecover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabEarlyRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabEarlyRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabRiposteEarlyRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabRiposteEarlyRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeEarlyRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeEarlyRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseJumpBlockTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseJumpBlockTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMorphTotalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMorphTotalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboFeintWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboFeintWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularFeintWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RegularFeintWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToChamberAttackAngleTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToChamberAttackAngleTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraEarlyReleaseForLookUpNonUndercuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtraEarlyReleaseForLookUpNonUndercuts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraEarlyReleaseForLookUpOverheads_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtraEarlyReleaseForLookUpOverheads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupersprintDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SupersprintDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceRecoveryMinimumTurnAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceRecoveryMinimumTurnAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeRiposteEarlyReleaseTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeRiposteEarlyReleaseTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeEarlyReleaseTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeEarlyReleaseTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeReducedAnglingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeReducedAnglingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickWooshTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickWooshTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabWooshTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabWooshTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeWooshTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeWooshTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleaseCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindUpCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindUpCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphKickExtraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphKickExtraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabChamberWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabChamberWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeChamberWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeChamberWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeAnimationNormalizedRecoveryOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeAnimationNormalizedRecoveryOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClashAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeRiposteEarlyRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrikeRiposteEarlyRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitRecoveryKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitRecoveryKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitRecovery_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRiposteAteFeintInput_MetaData[];
#endif
		static void NewProp_bRiposteAteFeintInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRiposteAteFeintInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteWindUpCanParryWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteWindUpCanParryWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteTradeDamageFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteTradeDamageFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayAttackYellTimeReleaseOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayAttackYellTimeReleaseOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissTwiceStaminaCostMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MissTwiceStaminaCostMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsComboFromMiss_MetaData[];
#endif
		static void NewProp_bIsComboFromMiss_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComboFromMiss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryQueueWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryQueueWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveParryStaminaCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActiveParryStaminaCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCancelDamageModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitCancelDamageModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttackMotion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttackMotion_SetHasHitIncludingCosmeticHit, "SetHasHitIncludingCosmeticHit" }, // 4139660649
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttackMotion.h" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlockedAttacks_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlockedAttacks = { UE4CodeGen_Private::EPropertyClass::SoftClass, "BlockedAttacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, BlockedAttacks), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlockedAttacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlockedAttacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bHasChambered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasChambered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime = { UE4CodeGen_Private::EPropertyClass::Float, "FirstHitIncludingCosmeticReleaseNormalizedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, FirstHitIncludingCosmeticReleaseNormalizedTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitTime = { UE4CodeGen_Private::EPropertyClass::Float, "FirstHitTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, FirstHitTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bHasHitIncludingCosmeticHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasHitIncludingCosmeticHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bHasHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage = { UE4CodeGen_Private::EPropertyClass::Enum, "Stage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, Stage), Z_Construct_UEnum_Mordhau_EAttackStage, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove = { UE4CodeGen_Private::EPropertyClass::Enum, "QueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, QueuedMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAngle_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAngle = { UE4CodeGen_Private::EPropertyClass::Float, "QueuedAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, QueuedAngle), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bHasQueuedMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasQueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove = { UE4CodeGen_Private::EPropertyClass::Enum, "QueuedServerComboMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, QueuedServerComboMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboAngle_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboAngle = { UE4CodeGen_Private::EPropertyClass::Float, "QueuedServerComboAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, QueuedServerComboAngle), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bHasQueuedServerCombo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasQueuedServerCombo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_PreviousLastAttackMotion_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_PreviousLastAttackMotion = { UE4CodeGen_Private::EPropertyClass::Object, "PreviousLastAttackMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, PreviousLastAttackMotion), Z_Construct_UClass_UAttackMotion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PreviousLastAttackMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PreviousLastAttackMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "Weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, Weapon), Z_Construct_UClass_AMordhauWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_LeftTorsoMontage_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_LeftTorsoMontage = { UE4CodeGen_Private::EPropertyClass::Object, "LeftTorsoMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, LeftTorsoMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_LeftTorsoMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_LeftTorsoMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAnimFor3PRelease_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAnimFor3PRelease = { UE4CodeGen_Private::EPropertyClass::Object, "QueuedAnimFor3PRelease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, QueuedAnimFor3PRelease), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAnimFor3PRelease_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAnimFor3PRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseEnd_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseEnd = { UE4CodeGen_Private::EPropertyClass::Float, "ReleaseEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ReleaseEnd), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindupEnd_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindupEnd = { UE4CodeGen_Private::EPropertyClass::Float, "WindupEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, WindupEnd), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindupEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindupEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, Type), Z_Construct_UEnum_Mordhau_EAttackType, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastWindupNormalizedTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastWindupNormalizedTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastWindupNormalizedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, LastWindupNormalizedTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastWindupNormalizedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastWindupNormalizedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastReleaseNormalizedTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastReleaseNormalizedTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastReleaseNormalizedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, LastReleaseNormalizedTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastReleaseNormalizedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastReleaseNormalizedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_AngleTarget_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_AngleTarget = { UE4CodeGen_Private::EPropertyClass::Float, "AngleTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, AngleTarget), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_AngleTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_AngleTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateLookTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateLookTime = { UE4CodeGen_Private::EPropertyClass::Float, "CounterCompensateLookTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, CounterCompensateLookTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateLookTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateLookTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxTurnCompensation_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxTurnCompensation = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTurnCompensation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MaxTurnCompensation), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxTurnCompensation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxTurnCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateWeight_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateWeight = { UE4CodeGen_Private::EPropertyClass::Float, "CounterCompensateWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, CounterCompensateWeight), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTiltTerm_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTiltTerm = { UE4CodeGen_Private::EPropertyClass::Float, "CounterCompensateOverheadFixupTiltTerm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, CounterCompensateOverheadFixupTiltTerm), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTiltTerm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTiltTerm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTerm_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTerm = { UE4CodeGen_Private::EPropertyClass::Float, "CounterCompensateOverheadFixupTerm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, CounterCompensateOverheadFixupTerm), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTerm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTerm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpAdditive_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpAdditive = { UE4CodeGen_Private::EPropertyClass::Struct, "WindUpAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, WindUpAdditive), Z_Construct_UScriptStruct_FSpineSpaceAdditive, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReducedTargetAdditive_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReducedTargetAdditive = { UE4CodeGen_Private::EPropertyClass::Struct, "ReducedTargetAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ReducedTargetAdditive), Z_Construct_UScriptStruct_FSpineSpaceAdditive, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReducedTargetAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReducedTargetAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_TargetAdditive_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_TargetAdditive = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, TargetAdditive), Z_Construct_UScriptStruct_FSpineSpaceAdditive, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_TargetAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_TargetAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_AttackInfo_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_AttackInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, AttackInfo), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_AttackInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_AttackInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromAsParry_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromAsParry = { UE4CodeGen_Private::EPropertyClass::Object, "ComingFromAsParry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ComingFromAsParry), Z_Construct_UClass_UParryMotion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromAsParry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromAsParry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove = { UE4CodeGen_Private::EPropertyClass::Enum, "ComingFromMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ComingFromMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate1P = { UE4CodeGen_Private::EPropertyClass::Float, "SuccessfulHitPlayRate1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SuccessfulHitPlayRate1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime1P = { UE4CodeGen_Private::EPropertyClass::Float, "SuccessfulHitBlendOutAnimTime1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SuccessfulHitBlendOutAnimTime1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikePlayRate1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikePlayRate1P = { UE4CodeGen_Private::EPropertyClass::Float, "SuccessfulHitStrikePlayRate1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SuccessfulHitStrikePlayRate1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikePlayRate1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikePlayRate1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikeBlendOutAnimTime1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikeBlendOutAnimTime1P = { UE4CodeGen_Private::EPropertyClass::Float, "SuccessfulHitStrikeBlendOutAnimTime1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SuccessfulHitStrikeBlendOutAnimTime1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikeBlendOutAnimTime1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikeBlendOutAnimTime1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "SuccessfulHitPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SuccessfulHitPlayRate), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime = { UE4CodeGen_Private::EPropertyClass::Float, "SuccessfulHitBlendOutAnimTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SuccessfulHitBlendOutAnimTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate1P = { UE4CodeGen_Private::EPropertyClass::Float, "MissPlayRate1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MissPlayRate1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "MissPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MissPlayRate), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut1P = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOut1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, BlendOut1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, BlendOut), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield1P = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteBlendInWithShield1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RiposteBlendInWithShield1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RiposteBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteBlendInWithShield", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RiposteBlendInWithShield), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RiposteBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "MorphBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MorphBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "MorphBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MorphBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "PostClashBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, PostClashBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "PostClashBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, PostClashBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "ComboBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ComboBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "ComboBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ComboBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "BashBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, BashBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "BashBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, BashBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "KickBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, KickBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "KickBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, KickBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "NormalAttackParrySlowBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, NormalAttackParrySlowBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "NormalAttackParrySlowBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, NormalAttackParrySlowBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "NormalAttackSlowBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, NormalAttackSlowBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "NormalAttackSlowBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, NormalAttackSlowBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn1P_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn1P = { UE4CodeGen_Private::EPropertyClass::Float, "NormalAttackBlendIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, NormalAttackBlendIn1P), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn = { UE4CodeGen_Private::EPropertyClass::Float, "NormalAttackBlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, NormalAttackBlendIn), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_EarlyReleaseIsClashableAfter_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_EarlyReleaseIsClashableAfter = { UE4CodeGen_Private::EPropertyClass::Float, "EarlyReleaseIsClashableAfter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, EarlyReleaseIsClashableAfter), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_EarlyReleaseIsClashableAfter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_EarlyReleaseIsClashableAfter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MinWindUpTimeBeforeMorphing_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MinWindUpTimeBeforeMorphing = { UE4CodeGen_Private::EPropertyClass::Float, "MinWindUpTimeBeforeMorphing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MinWindUpTimeBeforeMorphing), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MinWindUpTimeBeforeMorphing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MinWindUpTimeBeforeMorphing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickEarlyRelease_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickEarlyRelease = { UE4CodeGen_Private::EPropertyClass::Float, "KickEarlyRelease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, KickEarlyRelease), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickEarlyRelease_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickEarlyRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ChamberStaminaRecover_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ChamberStaminaRecover = { UE4CodeGen_Private::EPropertyClass::Int, "ChamberStaminaRecover", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ChamberStaminaRecover), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ChamberStaminaRecover_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ChamberStaminaRecover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabEarlyRelease_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabEarlyRelease = { UE4CodeGen_Private::EPropertyClass::Float, "StabEarlyRelease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StabEarlyRelease), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabEarlyRelease_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabEarlyRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabRiposteEarlyRelease_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabRiposteEarlyRelease = { UE4CodeGen_Private::EPropertyClass::Float, "StabRiposteEarlyRelease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StabRiposteEarlyRelease), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabRiposteEarlyRelease_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabRiposteEarlyRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyRelease_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyRelease = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeEarlyRelease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeEarlyRelease), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyRelease_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseJumpBlockTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseJumpBlockTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReleaseJumpBlockTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ReleaseJumpBlockTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseJumpBlockTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseJumpBlockTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxMorphTotalTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxMorphTotalTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxMorphTotalTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MaxMorphTotalTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxMorphTotalTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxMorphTotalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphWindow = { UE4CodeGen_Private::EPropertyClass::Float, "MorphWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MorphWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboFeintWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboFeintWindow = { UE4CodeGen_Private::EPropertyClass::Float, "ComboFeintWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ComboFeintWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboFeintWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboFeintWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RegularFeintWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RegularFeintWindow = { UE4CodeGen_Private::EPropertyClass::Float, "RegularFeintWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RegularFeintWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RegularFeintWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RegularFeintWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ToChamberAttackAngleTolerance_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ToChamberAttackAngleTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ToChamberAttackAngleTolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ToChamberAttackAngleTolerance), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ToChamberAttackAngleTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ToChamberAttackAngleTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpNonUndercuts_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpNonUndercuts = { UE4CodeGen_Private::EPropertyClass::Float, "ExtraEarlyReleaseForLookUpNonUndercuts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ExtraEarlyReleaseForLookUpNonUndercuts), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpNonUndercuts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpNonUndercuts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpOverheads_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpOverheads = { UE4CodeGen_Private::EPropertyClass::Float, "ExtraEarlyReleaseForLookUpOverheads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ExtraEarlyReleaseForLookUpOverheads), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpOverheads_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpOverheads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_SupersprintDuration_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_SupersprintDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SupersprintDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, SupersprintDuration), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SupersprintDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_SupersprintDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ForceRecoveryMinimumTurnAmount_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ForceRecoveryMinimumTurnAmount = { UE4CodeGen_Private::EPropertyClass::Float, "ForceRecoveryMinimumTurnAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ForceRecoveryMinimumTurnAmount), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ForceRecoveryMinimumTurnAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ForceRecoveryMinimumTurnAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyReleaseTimeFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyReleaseTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeRiposteEarlyReleaseTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeRiposteEarlyReleaseTimeFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyReleaseTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyReleaseTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyReleaseTimeFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyReleaseTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeEarlyReleaseTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeEarlyReleaseTimeFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyReleaseTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyReleaseTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeReducedAnglingFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeReducedAnglingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeReducedAnglingFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeReducedAnglingFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeReducedAnglingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeReducedAnglingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickWooshTimeFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickWooshTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "KickWooshTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, KickWooshTimeFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickWooshTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickWooshTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabWooshTimeFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabWooshTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StabWooshTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StabWooshTimeFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabWooshTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabWooshTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeWooshTimeFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nclass UMeleeWeaponAnimationProfile*                AnglingWeaponAnimationProfile;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeWooshTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeWooshTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeWooshTimeFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeWooshTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeWooshTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseCurve_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseCurve = { UE4CodeGen_Private::EPropertyClass::Object, "ReleaseCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ReleaseCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpCurve_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpCurve = { UE4CodeGen_Private::EPropertyClass::Object, "WindUpCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, WindUpCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphKickExtraTime_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphKickExtraTime = { UE4CodeGen_Private::EPropertyClass::Float, "MorphKickExtraTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MorphKickExtraTime), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphKickExtraTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphKickExtraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabChamberWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabChamberWindow = { UE4CodeGen_Private::EPropertyClass::Float, "StabChamberWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StabChamberWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabChamberWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabChamberWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeChamberWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeChamberWindow = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeChamberWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeChamberWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeChamberWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeChamberWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeAnimationNormalizedRecoveryOffset_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeAnimationNormalizedRecoveryOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeAnimationNormalizedRecoveryOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeAnimationNormalizedRecoveryOffset), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeAnimationNormalizedRecoveryOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeAnimationNormalizedRecoveryOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ClashAngle_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ClashAngle = { UE4CodeGen_Private::EPropertyClass::Float, "ClashAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ClashAngle), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ClashAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ClashAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyRelease_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyRelease = { UE4CodeGen_Private::EPropertyClass::Float, "StrikeRiposteEarlyRelease", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, StrikeRiposteEarlyRelease), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyRelease_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecoveryKick_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecoveryKick = { UE4CodeGen_Private::EPropertyClass::Float, "HitRecoveryKick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, HitRecoveryKick), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecoveryKick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecoveryKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecovery_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecovery = { UE4CodeGen_Private::EPropertyClass::Float, "HitRecovery", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, HitRecovery), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecovery_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bRiposteAteFeintInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bRiposteAteFeintInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteWindUpCanParryWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteWindUpCanParryWindow = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteWindUpCanParryWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RiposteWindUpCanParryWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteWindUpCanParryWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteWindUpCanParryWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteTradeDamageFactor_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteTradeDamageFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteTradeDamageFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RiposteTradeDamageFactor), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteTradeDamageFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteTradeDamageFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_PlayAttackYellTimeReleaseOffset_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_PlayAttackYellTimeReleaseOffset = { UE4CodeGen_Private::EPropertyClass::Float, "PlayAttackYellTimeReleaseOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, PlayAttackYellTimeReleaseOffset), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PlayAttackYellTimeReleaseOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_PlayAttackYellTimeReleaseOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissTwiceStaminaCostMultiplier_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissTwiceStaminaCostMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "MissTwiceStaminaCostMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, MissTwiceStaminaCostMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissTwiceStaminaCostMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissTwiceStaminaCostMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss_SetBit(void* Obj)
	{
		((UAttackMotion*)Obj)->bIsComboFromMiss = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsComboFromMiss", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAttackMotion), &Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_RecoveryQueueWindow_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_RecoveryQueueWindow = { UE4CodeGen_Private::EPropertyClass::Float, "RecoveryQueueWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, RecoveryQueueWindow), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RecoveryQueueWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_RecoveryQueueWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_ActiveParryStaminaCost_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_ActiveParryStaminaCost = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveParryStaminaCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, ActiveParryStaminaCost), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ActiveParryStaminaCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_ActiveParryStaminaCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitCancelDamageModifier_MetaData[] = {
		{ "Category", "AttackMotion" },
		{ "ModuleRelativePath", "AttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitCancelDamageModifier = { UE4CodeGen_Private::EPropertyClass::Float, "HitCancelDamageModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAttackMotion, HitCancelDamageModifier), METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitCancelDamageModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitCancelDamageModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlockedAttacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasChambered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitIncludingCosmeticReleaseNormalizedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_FirstHitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHitIncludingCosmeticHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Stage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedServerComboAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bHasQueuedServerCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_PreviousLastAttackMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_LeftTorsoMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_QueuedAnimFor3PRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindupEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Move_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastWindupNormalizedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_LastReleaseNormalizedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_AngleTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateLookTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxTurnCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTiltTerm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_CounterCompensateOverheadFixupTerm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReducedTargetAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_TargetAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_AttackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromAsParry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComingFromMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikePlayRate1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitStrikeBlendOutAnimTime1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SuccessfulHitBlendOutAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_BlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendInWithShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_PostClashBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_BashBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackParrySlowBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackSlowBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_NormalAttackBlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_EarlyReleaseIsClashableAfter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MinWindUpTimeBeforeMorphing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickEarlyRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ChamberStaminaRecover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabEarlyRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabRiposteEarlyRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseJumpBlockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MaxMorphTotalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ComboFeintWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RegularFeintWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ToChamberAttackAngleTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpNonUndercuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ExtraEarlyReleaseForLookUpOverheads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_SupersprintDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ForceRecoveryMinimumTurnAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyReleaseTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeEarlyReleaseTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeReducedAnglingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_KickWooshTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabWooshTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeWooshTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ReleaseCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_WindUpCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MorphKickExtraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StabChamberWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeChamberWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeAnimationNormalizedRecoveryOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ClashAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_StrikeRiposteEarlyRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecoveryKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bRiposteAteFeintInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteWindUpCanParryWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RiposteTradeDamageFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_PlayAttackYellTimeReleaseOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_MissTwiceStaminaCostMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_bIsComboFromMiss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_RecoveryQueueWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_ActiveParryStaminaCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackMotion_Statics::NewProp_HitCancelDamageModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackMotion_Statics::ClassParams = {
		&UAttackMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAttackMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAttackMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAttackMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackMotion, 184325534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackMotion(Z_Construct_UClass_UAttackMotion, &UAttackMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UAttackMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
