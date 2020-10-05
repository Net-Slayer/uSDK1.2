// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/HorseMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorseMovementComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UHorseMovementComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UHorseMovementComponent();
	MORDHAU_API UClass* Z_Construct_UClass_UPseudoVehicleMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EHorseGear();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FHorseGearInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UHorseMovementComponent::StaticRegisterNativesUHorseMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UHorseMovementComponent_NoRegister()
	{
		return UHorseMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHorseMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplierOnBump_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplierOnBump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DesiredGear;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredGear_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GearInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gear;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gear_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceTurningAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceTurningAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearCapsuleRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RearCapsuleRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontCapsuleRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrontCapsuleRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAndRearCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontAndRearCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAndRearCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrontAndRearCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftBubbleMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftBubbleMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftBubbleEllipseRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftBubbleEllipseRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftBubbleEllipseLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftBubbleEllipseLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftBubbleEllipseRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftBubbleEllipseRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadOnCollisionMinSpeedToRear_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadOnCollisionMinSpeedToRear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorseMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPseudoVehicleMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HorseMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SpeedMultiplierOnBump_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SpeedMultiplierOnBump = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedMultiplierOnBump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, SpeedMultiplierOnBump), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SpeedMultiplierOnBump_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SpeedMultiplierOnBump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear = { UE4CodeGen_Private::EPropertyClass::Enum, "DesiredGear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, DesiredGear), Z_Construct_UEnum_Mordhau_EHorseGear, METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo = { UE4CodeGen_Private::EPropertyClass::Array, "GearInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, GearInfo), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GearInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHorseGearInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear = { UE4CodeGen_Private::EPropertyClass::Enum, "Gear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, Gear), Z_Construct_UEnum_Mordhau_EHorseGear, METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_AvoidanceTurningAcceleration_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_AvoidanceTurningAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidanceTurningAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, AvoidanceTurningAcceleration), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_AvoidanceTurningAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_AvoidanceTurningAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_RearCapsuleRelativeLocation_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_RearCapsuleRelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RearCapsuleRelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, RearCapsuleRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_RearCapsuleRelativeLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_RearCapsuleRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontCapsuleRelativeLocation_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontCapsuleRelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "FrontCapsuleRelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, FrontCapsuleRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontCapsuleRelativeLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontCapsuleRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleRadius_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "FrontAndRearCapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, FrontAndRearCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleHalfHeight_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "FrontAndRearCapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, FrontAndRearCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleHalfHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleMaxHeight_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleMaxHeight = { UE4CodeGen_Private::EPropertyClass::Float, "SoftBubbleMaxHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, SoftBubbleMaxHeight), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleMaxHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRadius_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SoftBubbleEllipseRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, SoftBubbleEllipseRadius), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseLength_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseLength = { UE4CodeGen_Private::EPropertyClass::Float, "SoftBubbleEllipseLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, SoftBubbleEllipseLength), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRelativeLocation_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "SoftBubbleEllipseRelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, SoftBubbleEllipseRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRelativeLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_HeadOnCollisionMinSpeedToRear_MetaData[] = {
		{ "Category", "HorseMovementComponent" },
		{ "ModuleRelativePath", "HorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_HeadOnCollisionMinSpeedToRear = { UE4CodeGen_Private::EPropertyClass::Float, "HeadOnCollisionMinSpeedToRear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorseMovementComponent, HeadOnCollisionMinSpeedToRear), METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_HeadOnCollisionMinSpeedToRear_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_HeadOnCollisionMinSpeedToRear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorseMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SpeedMultiplierOnBump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_DesiredGear_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_GearInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_Gear_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_AvoidanceTurningAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_RearCapsuleRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontCapsuleRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_FrontAndRearCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_SoftBubbleEllipseRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorseMovementComponent_Statics::NewProp_HeadOnCollisionMinSpeedToRear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorseMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorseMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorseMovementComponent_Statics::ClassParams = {
		&UHorseMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UHorseMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHorseMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHorseMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorseMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorseMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorseMovementComponent, 755418009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorseMovementComponent(Z_Construct_UClass_UHorseMovementComponent, &UHorseMovementComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UHorseMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorseMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
