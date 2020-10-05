// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ParryMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParryMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UParryMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UParryMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EParryStage();
	MORDHAU_API UClass* Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMovementRestriction();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion_NoRegister();
// End Cross Module References
	void UParryMotion::StaticRegisterNativesUParryMotion()
	{
	}
	UClass* Z_Construct_UClass_UParryMotion_NoRegister()
	{
		return UParryMotion::StaticClass();
	}
	struct Z_Construct_UClass_UParryMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedMoveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedMoveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasQueuedMove_MetaData[];
#endif
		static void NewProp_bHasQueuedMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasQueuedMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeaponPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteWindowStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteWindowStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlockHoldable_MetaData[];
#endif
		static void NewProp_bIsBlockHoldable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlockHoldable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalBlocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TotalBlocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaRecover_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BlockStaminaRecover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryUpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryUpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldParrySuccessRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldParrySuccessRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParrySuccessRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParrySuccessRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldParryRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldParryRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryRecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryRecoveryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumHeldParryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumHeldParryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldParryFailFadeOut1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldParryFailFadeOut1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldParryFailPlayRate1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldParryFailPlayRate1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldParryFailFadeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldParryFailFadeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldParryFailPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldParryFailPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryFailFadeOut1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryFailFadeOut1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryFailPlayRate1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryFailPlayRate1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryFailFadeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryFailFadeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryFailPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryFailPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiposteWindowBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiposteWindowBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MWAP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MWAP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedParryRecoveryMovementRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FailedParryRecoveryMovementRestriction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailedParryRecoveryMovementRestriction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulParryRecoveryMovementRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuccessfulParryRecoveryMovementRestriction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuccessfulParryRecoveryMovementRestriction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonHeldParryExtensionAndRiposteWindowExtra_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonHeldParryExtensionAndRiposteWindowExtra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldRiposteWindowExtra_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldRiposteWindowExtra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EasyParryStaminaCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EasyParryStaminaCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EasyParryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EasyParryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedBlockMemoryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimedBlockMemoryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldBlockMemoryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldBlockMemoryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedAttacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlockedAttacks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedAttacks_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockedAttacks_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParryMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ParryMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove = { UE4CodeGen_Private::EPropertyClass::Enum, "QueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, QueuedMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedAngle_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedAngle = { UE4CodeGen_Private::EPropertyClass::Float, "QueuedAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, QueuedAngle), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMoveTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMoveTime = { UE4CodeGen_Private::EPropertyClass::Float, "QueuedMoveTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, QueuedMoveTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMoveTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMoveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	void Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove_SetBit(void* Obj)
	{
		((UParryMotion*)Obj)->bHasQueuedMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasQueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParryMotion), &Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_WeaponPtr_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_WeaponPtr = { UE4CodeGen_Private::EPropertyClass::WeakObject, "WeaponPtr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, WeaponPtr), Z_Construct_UClass_AMordhauWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_WeaponPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_WeaponPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowStart_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowStart = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteWindowStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, RiposteWindowStart), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryEnd_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryEnd = { UE4CodeGen_Private::EPropertyClass::Float, "ParryEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryEnd), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage = { UE4CodeGen_Private::EPropertyClass::Enum, "Stage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, Stage), Z_Construct_UEnum_Mordhau_EParryStage, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	void Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable_SetBit(void* Obj)
	{
		((UParryMotion*)Obj)->bIsBlockHoldable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsBlockHoldable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParryMotion), &Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_TotalBlocks_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_TotalBlocks = { UE4CodeGen_Private::EPropertyClass::Byte, "TotalBlocks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, TotalBlocks), nullptr, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_TotalBlocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_TotalBlocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockStaminaRecover_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockStaminaRecover = { UE4CodeGen_Private::EPropertyClass::Int, "BlockStaminaRecover", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, BlockStaminaRecover), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockStaminaRecover_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockStaminaRecover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryUpTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryUpTime = { UE4CodeGen_Private::EPropertyClass::Float, "ParryUpTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryUpTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryUpTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryUpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParrySuccessRecoveryTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParrySuccessRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "HeldParrySuccessRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldParrySuccessRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParrySuccessRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParrySuccessRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParrySuccessRecoveryTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParrySuccessRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "ParrySuccessRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParrySuccessRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParrySuccessRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParrySuccessRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryRecoveryTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "HeldParryRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldParryRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryRecoveryTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryRecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "ParryRecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryRecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryRecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryRecoveryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_MinimumHeldParryTime_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_MinimumHeldParryTime = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumHeldParryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, MinimumHeldParryTime), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_MinimumHeldParryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_MinimumHeldParryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut1P_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut1P = { UE4CodeGen_Private::EPropertyClass::Float, "HeldParryFailFadeOut1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldParryFailFadeOut1P), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate1P_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate1P = { UE4CodeGen_Private::EPropertyClass::Float, "HeldParryFailPlayRate1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldParryFailPlayRate1P), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut = { UE4CodeGen_Private::EPropertyClass::Float, "HeldParryFailFadeOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldParryFailFadeOut), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "HeldParryFailPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldParryFailPlayRate), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut1P_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut1P = { UE4CodeGen_Private::EPropertyClass::Float, "ParryFailFadeOut1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryFailFadeOut1P), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate1P_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate1P = { UE4CodeGen_Private::EPropertyClass::Float, "ParryFailPlayRate1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryFailPlayRate1P), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut = { UE4CodeGen_Private::EPropertyClass::Float, "ParryFailFadeOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryFailFadeOut), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "ParryFailPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, ParryFailPlayRate), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowBase_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowBase = { UE4CodeGen_Private::EPropertyClass::Float, "RiposteWindowBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, RiposteWindowBase), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_MWAP_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_MWAP = { UE4CodeGen_Private::EPropertyClass::Object, "MWAP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, MWAP), Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_MWAP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_MWAP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction = { UE4CodeGen_Private::EPropertyClass::Enum, "FailedParryRecoveryMovementRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, FailedParryRecoveryMovementRestriction), Z_Construct_UEnum_Mordhau_EMovementRestriction, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction = { UE4CodeGen_Private::EPropertyClass::Enum, "SuccessfulParryRecoveryMovementRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, SuccessfulParryRecoveryMovementRestriction), Z_Construct_UEnum_Mordhau_EMovementRestriction, METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_NonHeldParryExtensionAndRiposteWindowExtra_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_NonHeldParryExtensionAndRiposteWindowExtra = { UE4CodeGen_Private::EPropertyClass::Float, "NonHeldParryExtensionAndRiposteWindowExtra", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, NonHeldParryExtensionAndRiposteWindowExtra), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_NonHeldParryExtensionAndRiposteWindowExtra_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_NonHeldParryExtensionAndRiposteWindowExtra_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldRiposteWindowExtra_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldRiposteWindowExtra = { UE4CodeGen_Private::EPropertyClass::Float, "HeldRiposteWindowExtra", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldRiposteWindowExtra), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldRiposteWindowExtra_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldRiposteWindowExtra_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryStaminaCost_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryStaminaCost = { UE4CodeGen_Private::EPropertyClass::Int, "EasyParryStaminaCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, EasyParryStaminaCost), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryStaminaCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryStaminaCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryDuration_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryDuration = { UE4CodeGen_Private::EPropertyClass::Float, "EasyParryDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, EasyParryDuration), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_TimedBlockMemoryDuration_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_TimedBlockMemoryDuration = { UE4CodeGen_Private::EPropertyClass::Float, "TimedBlockMemoryDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, TimedBlockMemoryDuration), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_TimedBlockMemoryDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_TimedBlockMemoryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldBlockMemoryDuration_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldBlockMemoryDuration = { UE4CodeGen_Private::EPropertyClass::Float, "HeldBlockMemoryDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, HeldBlockMemoryDuration), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldBlockMemoryDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldBlockMemoryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_MetaData[] = {
		{ "Category", "ParryMotion" },
		{ "ModuleRelativePath", "ParryMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks = { UE4CodeGen_Private::EPropertyClass::Map, "BlockedAttacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParryMotion, BlockedAttacks), METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "BlockedAttacks_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UClass_UMordhauMotion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "BlockedAttacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParryMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_QueuedMoveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_bHasQueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_WeaponPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_Stage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_bIsBlockHoldable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_TotalBlocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockStaminaRecover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryUpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParrySuccessRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParrySuccessRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryRecoveryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_MinimumHeldParryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailFadeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldParryFailPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailFadeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_ParryFailPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_RiposteWindowBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_MWAP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_FailedParryRecoveryMovementRestriction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_SuccessfulParryRecoveryMovementRestriction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_NonHeldParryExtensionAndRiposteWindowExtra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldRiposteWindowExtra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryStaminaCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_EasyParryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_TimedBlockMemoryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_HeldBlockMemoryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParryMotion_Statics::NewProp_BlockedAttacks_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParryMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParryMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParryMotion_Statics::ClassParams = {
		&UParryMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UParryMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParryMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParryMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParryMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParryMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParryMotion, 2418123974);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParryMotion(Z_Construct_UClass_UParryMotion, &UParryMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UParryMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParryMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
