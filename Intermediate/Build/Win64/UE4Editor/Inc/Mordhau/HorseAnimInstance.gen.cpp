// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/HorseAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorseAnimInstance() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UHorseAnimInstance_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UHorseAnimInstance();
	MORDHAU_API UClass* Z_Construct_UClass_UCreatureAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void UHorseAnimInstance::StaticRegisterNativesUHorseAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHorseAnimInstance_NoRegister()
	{
		return UHorseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHorseAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasDriverFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HasDriverFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseHeadRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorseHeadRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseLeanOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorseLeanOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseLeanRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorseLeanRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackHorseRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackHorseRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontHorseRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontHorseRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedDirectionSmoothTimeNoMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothedDirectionSmoothTimeNoMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedDirectionSmoothTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothedDirectionSmoothTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorseDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAnimRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAnimRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedHorseVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimatedHorseVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorseVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetShuffleAnimRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeetShuffleAnimRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetShuffleWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FeetShuffleWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontBackLegsDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontBackLegsDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMeshRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousMeshRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowVelocityChangeVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlowVelocityChangeVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastVelocityChangeVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FastVelocityChangeVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlowVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FastVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceDuck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BounceDuck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadStopBounceWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadStopBounceWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadStopBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadStopBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBounceWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopBounceWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowVelocityLagTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowVelocityLagTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastVelocityLagTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastVelocityLagTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadBounceInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadBounceInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadStopBounceLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadStopBounceLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadStopTiltFactorBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadStopTiltFactorBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadStopTiltFactorForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadStopTiltFactorForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadStopTiltFactorLeftRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadStopTiltFactorLeftRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBounceLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopBounceLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTiltFactorBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopTiltFactorBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTiltFactorForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopTiltFactorForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTiltFactorLeftRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopTiltFactorLeftRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceDuckLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceDuckLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRearing_MetaData[];
#endif
		static void NewProp_bIsRearing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFrontLegOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFrontLegOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFrontLegOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFrontLegOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightBackLegOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightBackLegOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBackLegOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftBackLegOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootOffsetTranslationToRotationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootOffsetTranslationToRotationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastFootstepParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FastFootstepParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FastFootstepParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastFootstepParticlesMinVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastFootstepParticlesMinVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGallopRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundGallopRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGallopLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundGallopLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCanterBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCanterBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCanterFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCanterFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundTrot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundTrot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCreatureAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HorseAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HasDriverFloat_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HasDriverFloat = { UE4CodeGen_Private::EPropertyClass::Float, "HasDriverFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HasDriverFloat), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HasDriverFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HasDriverFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseHeadRotator_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseHeadRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "HorseHeadRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HorseHeadRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseHeadRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseHeadRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "HorseLeanOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HorseLeanOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanRotator_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "HorseLeanRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HorseLeanRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackHorseRotator_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackHorseRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "BackHorseRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, BackHorseRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackHorseRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackHorseRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontHorseRotator_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontHorseRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontHorseRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FrontHorseRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontHorseRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontHorseRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTimeNoMovement_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTimeNoMovement = { UE4CodeGen_Private::EPropertyClass::Float, "SmoothedDirectionSmoothTimeNoMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SmoothedDirectionSmoothTimeNoMovement), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTimeNoMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTimeNoMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTime_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTime = { UE4CodeGen_Private::EPropertyClass::Float, "SmoothedDirectionSmoothTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SmoothedDirectionSmoothTime), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeanFactor_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeanFactor = { UE4CodeGen_Private::EPropertyClass::Float, "LeanFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, LeanFactor), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeanFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeanFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseDirection_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseDirection = { UE4CodeGen_Private::EPropertyClass::Float, "HorseDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HorseDirection), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_MovementAnimRate_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_MovementAnimRate = { UE4CodeGen_Private::EPropertyClass::Float, "MovementAnimRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, MovementAnimRate), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_MovementAnimRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_MovementAnimRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopSmoothSpeed_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopSmoothSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "StopSmoothSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopSmoothSpeed), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopSmoothSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_AnimatedHorseVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_AnimatedHorseVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "AnimatedHorseVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, AnimatedHorseVelocity), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_AnimatedHorseVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_AnimatedHorseVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "HorseVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HorseVelocity), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleAnimRate_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleAnimRate = { UE4CodeGen_Private::EPropertyClass::Float, "FeetShuffleAnimRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FeetShuffleAnimRate), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleAnimRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleAnimRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleWeight_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleWeight = { UE4CodeGen_Private::EPropertyClass::Float, "FeetShuffleWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FeetShuffleWeight), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontBackLegsDistance_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontBackLegsDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FrontBackLegsDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FrontBackLegsDistance), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontBackLegsDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontBackLegsDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_PreviousMeshRotation_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_PreviousMeshRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousMeshRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, PreviousMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_PreviousMeshRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_PreviousMeshRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityChangeVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityChangeVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "SlowVelocityChangeVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SlowVelocityChangeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityChangeVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityChangeVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityChangeVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityChangeVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "FastVelocityChangeVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FastVelocityChangeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityChangeVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityChangeVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "SlowVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SlowVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "FastVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FastVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuck_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuck = { UE4CodeGen_Private::EPropertyClass::Struct, "BounceDuck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, BounceDuck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceWorld_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceWorld = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadStopBounceWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadStopBounceWorld), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounce_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounce = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadStopBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadStopBounce), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceWorld_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceWorld = { UE4CodeGen_Private::EPropertyClass::Struct, "StopBounceWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopBounceWorld), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounce_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounce = { UE4CodeGen_Private::EPropertyClass::Struct, "StopBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopBounce), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityLagTime_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityLagTime = { UE4CodeGen_Private::EPropertyClass::Float, "SlowVelocityLagTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SlowVelocityLagTime), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityLagTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityLagTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityLagTime_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityLagTime = { UE4CodeGen_Private::EPropertyClass::Float, "FastVelocityLagTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FastVelocityLagTime), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityLagTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityLagTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadBounceInterpSpeed_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadBounceInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "HeadBounceInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadBounceInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadBounceInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadBounceInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceLimit_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "HeadStopBounceLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadStopBounceLimit), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorBack_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorBack = { UE4CodeGen_Private::EPropertyClass::Float, "HeadStopTiltFactorBack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadStopTiltFactorBack), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorForward_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorForward = { UE4CodeGen_Private::EPropertyClass::Float, "HeadStopTiltFactorForward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadStopTiltFactorForward), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorForward_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorLeftRight_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorLeftRight = { UE4CodeGen_Private::EPropertyClass::Float, "HeadStopTiltFactorLeftRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, HeadStopTiltFactorLeftRight), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorLeftRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorLeftRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceInterpSpeed_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BounceInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, BounceInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceLimit_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "StopBounceLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopBounceLimit), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorBack_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorBack = { UE4CodeGen_Private::EPropertyClass::Float, "StopTiltFactorBack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopTiltFactorBack), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorForward_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorForward = { UE4CodeGen_Private::EPropertyClass::Float, "StopTiltFactorForward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopTiltFactorForward), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorForward_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorLeftRight_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorLeftRight = { UE4CodeGen_Private::EPropertyClass::Float, "StopTiltFactorLeftRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, StopTiltFactorLeftRight), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorLeftRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorLeftRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuckLimit_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuckLimit = { UE4CodeGen_Private::EPropertyClass::Float, "BounceDuckLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, BounceDuckLimit), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuckLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuckLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing_SetBit(void* Obj)
	{
		((UHorseAnimInstance*)Obj)->bIsRearing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorseAnimInstance), &Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightFrontLegOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightFrontLegOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RightFrontLegOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, RightFrontLegOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightFrontLegOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightFrontLegOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftFrontLegOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftFrontLegOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftFrontLegOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, LeftFrontLegOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftFrontLegOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftFrontLegOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FrontOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightBackLegOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightBackLegOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RightBackLegOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, RightBackLegOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightBackLegOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightBackLegOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftBackLegOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftBackLegOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftBackLegOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, LeftBackLegOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftBackLegOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftBackLegOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackOffset_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "BackOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, BackOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RootOffsetTranslationToRotationFactor_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RootOffsetTranslationToRotationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RootOffsetTranslationToRotationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, RootOffsetTranslationToRotationFactor), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RootOffsetTranslationToRotationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RootOffsetTranslationToRotationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontLimits_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FrontLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackLimits_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "BackLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, BackLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles = { UE4CodeGen_Private::EPropertyClass::Array, "FastFootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FastFootstepParticles), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FastFootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticlesMinVelocity_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticlesMinVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "FastFootstepParticlesMinVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, FastFootstepParticlesMinVelocity), METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticlesMinVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticlesMinVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopRight_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopRight = { UE4CodeGen_Private::EPropertyClass::Object, "SoundGallopRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SoundGallopRight), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopLeft_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopLeft = { UE4CodeGen_Private::EPropertyClass::Object, "SoundGallopLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SoundGallopLeft), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterBack_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterBack = { UE4CodeGen_Private::EPropertyClass::Object, "SoundCanterBack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SoundCanterBack), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterBack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterFront_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterFront = { UE4CodeGen_Private::EPropertyClass::Object, "SoundCanterFront", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SoundCanterFront), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterFront_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundTrot_MetaData[] = {
		{ "Category", "HorseAnimInstance" },
		{ "ModuleRelativePath", "HorseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundTrot = { UE4CodeGen_Private::EPropertyClass::Object, "SoundTrot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseAnimInstance, SoundTrot), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundTrot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundTrot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorseAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HasDriverFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseHeadRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseLeanRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackHorseRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontHorseRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTimeNoMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SmoothedDirectionSmoothTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeanFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_MovementAnimRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_AnimatedHorseVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HorseVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleAnimRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FeetShuffleWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontBackLegsDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_PreviousMeshRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityChangeVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityChangeVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SlowVelocityLagTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastVelocityLagTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadBounceInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopBounceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_HeadStopTiltFactorLeftRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopBounceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_StopTiltFactorLeftRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BounceDuckLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_bIsRearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightFrontLegOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftFrontLegOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RightBackLegOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_LeftBackLegOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_RootOffsetTranslationToRotationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FrontLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_BackLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_FastFootstepParticlesMinVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundGallopLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundCanterFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseAnimInstance_Statics::NewProp_SoundTrot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorseAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorseAnimInstance_Statics::ClassParams = {
		&UHorseAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UHorseAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHorseAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHorseAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorseAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorseAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorseAnimInstance, 3189391594);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorseAnimInstance(Z_Construct_UClass_UHorseAnimInstance, &UHorseAnimInstance::StaticClass, TEXT("/Script/Mordhau"), TEXT("UHorseAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorseAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
