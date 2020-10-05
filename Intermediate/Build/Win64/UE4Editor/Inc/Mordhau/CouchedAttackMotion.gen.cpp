// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CouchedAttackMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCouchedAttackMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UCouchedAttackMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UCouchedAttackMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UClass* Z_Construct_UClass_AHorse_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FAttackInfo();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UCouchedAttackMotion::StaticRegisterNativesUCouchedAttackMotion()
	{
	}
	UClass* Z_Construct_UClass_UCouchedAttackMotion_NoRegister()
	{
		return UCouchedAttackMotion::StaticClass();
	}
	struct Z_Construct_UClass_UCouchedAttackMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorsePtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HorsePtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSecondaryTurnLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalSecondaryTurnLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInRecovery_MetaData[];
#endif
		static void NewProp_bIsInRecovery_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCouchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCouchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CouchStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CouchStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchingBlendFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CouchingBlendFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindUpMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindUpMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCouchedAttackMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CouchedAttackMotion.h" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_HorsePtr_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_HorsePtr = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HorsePtr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, HorsePtr), Z_Construct_UClass_AHorse_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_HorsePtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_HorsePtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_OriginalSecondaryTurnLimit_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_OriginalSecondaryTurnLimit = { UE4CodeGen_Private::EPropertyClass::Float, "OriginalSecondaryTurnLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, OriginalSecondaryTurnLimit), METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_OriginalSecondaryTurnLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_OriginalSecondaryTurnLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_AttackInfo_MetaData[] = {
		{ "Category", "StructRefs" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_AttackInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, AttackInfo), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_AttackInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_AttackInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	void Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery_SetBit(void* Obj)
	{
		((UCouchedAttackMotion*)Obj)->bIsInRecovery = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInRecovery", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCouchedAttackMotion), &Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_RecoveryDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_RecoveryDuration = { UE4CodeGen_Private::EPropertyClass::Float, "RecoveryDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, RecoveryDuration), METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_RecoveryDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_RecoveryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_MaxCouchTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_MaxCouchTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCouchTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, MaxCouchTime), METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_MaxCouchTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_MaxCouchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStart_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStart = { UE4CodeGen_Private::EPropertyClass::Float, "CouchStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, CouchStart), METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStage_MetaData[] = {
		{ "Category", "Bytes" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStage = { UE4CodeGen_Private::EPropertyClass::Byte, "CouchStage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, CouchStage), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchingBlendFrom_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchingBlendFrom = { UE4CodeGen_Private::EPropertyClass::Float, "CouchingBlendFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, CouchingBlendFrom), METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchingBlendFrom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchingBlendFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_Weapon = { UE4CodeGen_Private::EPropertyClass::Object, "Weapon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, Weapon), Z_Construct_UClass_AMordhauWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_WindUpMontage_MetaData[] = {
		{ "Category", "Anims" },
		{ "ModuleRelativePath", "CouchedAttackMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_WindUpMontage = { UE4CodeGen_Private::EPropertyClass::Object, "WindUpMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCouchedAttackMotion, WindUpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_WindUpMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_WindUpMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCouchedAttackMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_HorsePtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_OriginalSecondaryTurnLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_AttackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_bIsInRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_RecoveryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_MaxCouchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_CouchingBlendFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCouchedAttackMotion_Statics::NewProp_WindUpMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCouchedAttackMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCouchedAttackMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCouchedAttackMotion_Statics::ClassParams = {
		&UCouchedAttackMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCouchedAttackMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCouchedAttackMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCouchedAttackMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCouchedAttackMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCouchedAttackMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCouchedAttackMotion, 1729269305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCouchedAttackMotion(Z_Construct_UClass_UCouchedAttackMotion, &UCouchedAttackMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UCouchedAttackMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCouchedAttackMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
