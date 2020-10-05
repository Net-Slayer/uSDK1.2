// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/SkeletalMeshCapturePointBanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshCapturePointBanner() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ASkeletalMeshCapturePointBanner_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ASkeletalMeshCapturePointBanner();
	MORDHAU_API UClass* Z_Construct_UClass_ACapturePointBanner();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASkeletalMeshCapturePointBanner::StaticRegisterNativesASkeletalMeshCapturePointBanner()
	{
	}
	UClass* Z_Construct_UClass_ASkeletalMeshCapturePointBanner_NoRegister()
	{
		return ASkeletalMeshCapturePointBanner::StaticClass();
	}
	struct Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioPitchByProgressOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioPitchByProgressOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioPitchByProgressIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioPitchByProgressIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeByProgressOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioVolumeByProgressOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeByProgressIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioVolumeByProgressIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WavingAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WavingAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWindSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWindSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindMaxGustAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindMaxGustAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindMinGustAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindMinGustAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDisabledIfLessThanProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindDisabledIfLessThanProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddWindActor_MetaData[];
#endif
		static void NewProp_bAddWindActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddWindActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoweringSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoweringSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaisingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RaisingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturingAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapturingAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapturePointBanner,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletalMeshCapturePointBanner.h" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressOut_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressOut = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioPitchByProgressOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, AudioPitchByProgressOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressIn_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressIn = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioPitchByProgressIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, AudioPitchByProgressIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressOut_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressOut = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioVolumeByProgressOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, AudioVolumeByProgressOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressIn_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressIn = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioVolumeByProgressIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, AudioVolumeByProgressIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WavingAudioComponent_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WavingAudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "WavingAudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WavingAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WavingAudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WavingAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindActor_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindActor = { UE4CodeGen_Private::EPropertyClass::Object, "WindActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindActor), Z_Construct_UClass_AWindDirectionalSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CurrentWindSpeed_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CurrentWindSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentWindSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, CurrentWindSpeed), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CurrentWindSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CurrentWindSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMaxGustAmount_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMaxGustAmount = { UE4CodeGen_Private::EPropertyClass::Float, "WindMaxGustAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindMaxGustAmount), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMaxGustAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMaxGustAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMinGustAmount_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMinGustAmount = { UE4CodeGen_Private::EPropertyClass::Float, "WindMinGustAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindMinGustAmount), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMinGustAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMinGustAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindRadius_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindRadius = { UE4CodeGen_Private::EPropertyClass::Float, "WindRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindRadius), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindSpeed_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "WindSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindSpeed), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindStrength_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindStrength = { UE4CodeGen_Private::EPropertyClass::Float, "WindStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindStrength), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindDisabledIfLessThanProgress_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindDisabledIfLessThanProgress = { UE4CodeGen_Private::EPropertyClass::Float, "WindDisabledIfLessThanProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, WindDisabledIfLessThanProgress), METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindDisabledIfLessThanProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindDisabledIfLessThanProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	void Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor_SetBit(void* Obj)
	{
		((ASkeletalMeshCapturePointBanner*)Obj)->bAddWindActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddWindActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASkeletalMeshCapturePointBanner), &Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_LoweringSound_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_LoweringSound = { UE4CodeGen_Private::EPropertyClass::Object, "LoweringSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, LoweringSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_LoweringSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_LoweringSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_RaisingSound_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_RaisingSound = { UE4CodeGen_Private::EPropertyClass::Object, "RaisingSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, RaisingSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_RaisingSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_RaisingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CapturingAudioComponent_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CapturingAudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CapturingAudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, CapturingAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CapturingAudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CapturingAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "SkeletalMeshCapturePointBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkeletalMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_SkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshCapturePointBanner, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioPitchByProgressIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_AudioVolumeByProgressIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WavingAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CurrentWindSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMaxGustAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindMinGustAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_WindDisabledIfLessThanProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_bAddWindActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_LoweringSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_RaisingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_CapturingAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::NewProp_SkeletalMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkeletalMeshCapturePointBanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::ClassParams = {
		&ASkeletalMeshCapturePointBanner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkeletalMeshCapturePointBanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASkeletalMeshCapturePointBanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkeletalMeshCapturePointBanner, 1719665362);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkeletalMeshCapturePointBanner(Z_Construct_UClass_ASkeletalMeshCapturePointBanner, &ASkeletalMeshCapturePointBanner::StaticClass, TEXT("/Script/Mordhau"), TEXT("ASkeletalMeshCapturePointBanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkeletalMeshCapturePointBanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
