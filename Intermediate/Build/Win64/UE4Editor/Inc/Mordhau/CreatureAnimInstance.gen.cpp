// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CreatureAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreatureAnimInstance() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UCreatureAnimInstance_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UCreatureAnimInstance();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UCreatureAnimInstance::StaticRegisterNativesUCreatureAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UCreatureAnimInstance_NoRegister()
	{
		return UCreatureAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCreatureAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandOffsetFactorByAirTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandOffsetFactorByAirTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotAddLandOffsetToGrounding_MetaData[];
#endif
		static void NewProp_bDoNotAddLandOffsetToGrounding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotAddLandOffsetToGrounding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandOffsetBlendOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandOffsetBlendOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandOffsetBlendInSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandOffsetBlendInSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandOffsetBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandOffsetBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootstepParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootstepDecals;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepSoundZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootstepSoundZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepVolumeModifierAlly_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootstepVolumeModifierAlly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepVolumeModifierSelf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootstepVolumeModifierSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepPitchVelocityRangeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepPitchVelocityRangeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepPitchVelocityRangeIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepPitchVelocityRangeIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepVolumeVelocityRangeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepVolumeVelocityRangeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepVolumeVelocityRangeIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepVolumeVelocityRangeIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepLODDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootstepLODDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepEffectsMaxCameraDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootstepEffectsMaxCameraDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeGroundingRotation_MetaData[];
#endif
		static void NewProp_bComputeGroundingRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeGroundingRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreatureAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CreatureAnimInstance.h" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetFactorByAirTime_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetFactorByAirTime = { UE4CodeGen_Private::EPropertyClass::Object, "LandOffsetFactorByAirTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, LandOffsetFactorByAirTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetFactorByAirTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetFactorByAirTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding_SetBit(void* Obj)
	{
		((UCreatureAnimInstance*)Obj)->bDoNotAddLandOffsetToGrounding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotAddLandOffsetToGrounding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCreatureAnimInstance), &Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffset_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LandOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, LandOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendOutSpeed_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendOutSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LandOffsetBlendOutSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, LandOffsetBlendOutSpeed), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInSpeed_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LandOffsetBlendInSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, LandOffsetBlendInSpeed), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInTime_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "LandOffsetBlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, LandOffsetBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles = { UE4CodeGen_Private::EPropertyClass::Array, "FootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepParticles), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals = { UE4CodeGen_Private::EPropertyClass::Array, "FootstepDecals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepDecals), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FootstepDecals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecalSize_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecalSize = { UE4CodeGen_Private::EPropertyClass::Struct, "FootstepDecalSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepDecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecalSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepSoundZOffset_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepSoundZOffset = { UE4CodeGen_Private::EPropertyClass::Float, "FootstepSoundZOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepSoundZOffset), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepSoundZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepSoundZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierAlly_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierAlly = { UE4CodeGen_Private::EPropertyClass::Float, "FootstepVolumeModifierAlly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepVolumeModifierAlly), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierAlly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierAlly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierSelf_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierSelf = { UE4CodeGen_Private::EPropertyClass::Float, "FootstepVolumeModifierSelf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepVolumeModifierSelf), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierSelf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeOut_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeOut = { UE4CodeGen_Private::EPropertyClass::Struct, "FootstepPitchVelocityRangeOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepPitchVelocityRangeOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeIn_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeIn = { UE4CodeGen_Private::EPropertyClass::Struct, "FootstepPitchVelocityRangeIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepPitchVelocityRangeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeOut_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeOut = { UE4CodeGen_Private::EPropertyClass::Struct, "FootstepVolumeVelocityRangeOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepVolumeVelocityRangeOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeIn_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeIn = { UE4CodeGen_Private::EPropertyClass::Struct, "FootstepVolumeVelocityRangeIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepVolumeVelocityRangeIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepLODDistance_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepLODDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FootstepLODDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepLODDistance), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepLODDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepLODDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepEffectsMaxCameraDist_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepEffectsMaxCameraDist = { UE4CodeGen_Private::EPropertyClass::Float, "FootstepEffectsMaxCameraDist", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCreatureAnimInstance, FootstepEffectsMaxCameraDist), METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepEffectsMaxCameraDist_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepEffectsMaxCameraDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation_MetaData[] = {
		{ "Category", "CreatureAnimInstance" },
		{ "ModuleRelativePath", "CreatureAnimInstance.h" },
		{ "ToolTip", "TArray<struct FFootGroundingLimb>                  GroundingLimbs;" },
	};
#endif
	void Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation_SetBit(void* Obj)
	{
		((UCreatureAnimInstance*)Obj)->bComputeGroundingRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bComputeGroundingRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCreatureAnimInstance), &Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreatureAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetFactorByAirTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bDoNotAddLandOffsetToGrounding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_LandOffsetBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepSoundZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierAlly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeModifierSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepPitchVelocityRangeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepVolumeVelocityRangeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepLODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_FootstepEffectsMaxCameraDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatureAnimInstance_Statics::NewProp_bComputeGroundingRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreatureAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreatureAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreatureAnimInstance_Statics::ClassParams = {
		&UCreatureAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UCreatureAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCreatureAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCreatureAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreatureAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreatureAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreatureAnimInstance, 3218095604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreatureAnimInstance(Z_Construct_UClass_UCreatureAnimInstance, &UCreatureAnimInstance::StaticClass, TEXT("/Script/Mordhau"), TEXT("UCreatureAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreatureAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
