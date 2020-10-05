// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ClimbingMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbingMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UClimbingMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UClimbingMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void UClimbingMotion::StaticRegisterNativesUClimbingMotion()
	{
	}
	UClass* Z_Construct_UClass_UClimbingMotion_NoRegister()
	{
		return UClimbingMotion::StaticClass();
	}
	struct Z_Construct_UClass_UClimbingMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAuthMovingLaterally_MetaData[];
#endif
		static void NewProp_bIsAuthMovingLaterally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAuthMovingLaterally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAuthMovingUp_MetaData[];
#endif
		static void NewProp_bIsAuthMovingUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAuthMovingUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthMoveStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthMoveStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbStartMeshLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbStartMeshLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LedgeNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LedgeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSlowClimb_MetaData[];
#endif
		static void NewProp_bIsSlowClimb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlowClimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnCaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurnCaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowAuthorityMoveLateralDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowAuthorityMoveLateralDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowAuthorityMoveLateralStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowAuthorityMoveLateralStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowAuthorityMoveUpStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowAuthorityMoveUpStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowClimbRecoveryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowClimbRecoveryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityMoveLateralDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AuthorityMoveLateralDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityMoveLateralStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AuthorityMoveLateralStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityMoveUpStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AuthorityMoveUpStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbRecoveryDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbRecoveryDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClimbSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimbingMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClimbingMotion.h" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	void Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally_SetBit(void* Obj)
	{
		((UClimbingMotion*)Obj)->bIsAuthMovingLaterally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAuthMovingLaterally", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClimbingMotion), &Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	void Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp_SetBit(void* Obj)
	{
		((UClimbingMotion*)Obj)->bIsAuthMovingUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAuthMovingUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClimbingMotion), &Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthMoveStartLocation_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthMoveStartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "AuthMoveStartLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, AuthMoveStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthMoveStartLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthMoveStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbStartMeshLocation_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbStartMeshLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbStartMeshLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, ClimbStartMeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbStartMeshLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbStartMeshLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeNormal_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "LedgeNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, LedgeNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeOffset_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LedgeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, LedgeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbOffset_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, ClimbOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	void Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb_SetBit(void* Obj)
	{
		((UClimbingMotion*)Obj)->bIsSlowClimb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSlowClimb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UClimbingMotion), &Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_TurnCaps_MetaData[] = {
		{ "Category", "Geometric" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_TurnCaps = { UE4CodeGen_Private::EPropertyClass::Struct, "TurnCaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, TurnCaps), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_TurnCaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_TurnCaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SlowAuthorityMoveLateralDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, SlowAuthorityMoveLateralDuration), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralStartTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SlowAuthorityMoveLateralStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, SlowAuthorityMoveLateralStartTime), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveUpStartTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveUpStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SlowAuthorityMoveUpStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, SlowAuthorityMoveUpStartTime), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveUpStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveUpStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowClimbRecoveryDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowClimbRecoveryDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SlowClimbRecoveryDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, SlowClimbRecoveryDuration), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowClimbRecoveryDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowClimbRecoveryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralDuration = { UE4CodeGen_Private::EPropertyClass::Float, "AuthorityMoveLateralDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, AuthorityMoveLateralDuration), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralStartTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "AuthorityMoveLateralStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, AuthorityMoveLateralStartTime), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveUpStartTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveUpStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "AuthorityMoveUpStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, AuthorityMoveUpStartTime), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveUpStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveUpStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbRecoveryDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbRecoveryDuration = { UE4CodeGen_Private::EPropertyClass::Float, "ClimbRecoveryDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, ClimbRecoveryDuration), METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbRecoveryDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbRecoveryDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "ClimbingMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbSound = { UE4CodeGen_Private::EPropertyClass::Object, "ClimbSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UClimbingMotion, ClimbSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClimbingMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingLaterally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsAuthMovingUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthMoveStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbStartMeshLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_LedgeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_bIsSlowClimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_TurnCaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveLateralStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowAuthorityMoveUpStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_SlowClimbRecoveryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveLateralStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_AuthorityMoveUpStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbRecoveryDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbingMotion_Statics::NewProp_ClimbSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbingMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbingMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimbingMotion_Statics::ClassParams = {
		&UClimbingMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UClimbingMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UClimbingMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClimbingMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClimbingMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClimbingMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClimbingMotion, 2932744400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClimbingMotion(Z_Construct_UClass_UClimbingMotion, &UClimbingMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UClimbingMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbingMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
