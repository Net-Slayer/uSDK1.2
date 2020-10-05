// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/PseudoVehicleMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePseudoVehicleMovementComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UPseudoVehicleMovementComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UPseudoVehicleMovementComponent();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterMovement();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UPseudoVehicleMovementComponent::StaticRegisterNativesUPseudoVehicleMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UPseudoVehicleMovementComponent_NoRegister()
	{
		return UPseudoVehicleMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningFactorScaleAirborne_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningFactorScaleAirborne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningAccelerationByVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurningAccelerationByVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningFactorByVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurningFactorByVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningBrakeAccelerationByVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurningBrakeAccelerationByVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryStepCapableComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryStepCapableComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryStepCapableComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedCharacterMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PseudoVehicleMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents = { UE4CodeGen_Private::EPropertyClass::Array, "SecondaryComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000800000000d, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, SecondaryComponents), METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SecondaryComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorScaleAirborne_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorScaleAirborne = { UE4CodeGen_Private::EPropertyClass::Float, "TurningFactorScaleAirborne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, TurningFactorScaleAirborne), METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorScaleAirborne_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorScaleAirborne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningAccelerationByVelocity_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningAccelerationByVelocity = { UE4CodeGen_Private::EPropertyClass::Object, "TurningAccelerationByVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, TurningAccelerationByVelocity), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningAccelerationByVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningAccelerationByVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorByVelocity_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorByVelocity = { UE4CodeGen_Private::EPropertyClass::Object, "TurningFactorByVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, TurningFactorByVelocity), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorByVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorByVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningBrakeAccelerationByVelocity_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningBrakeAccelerationByVelocity = { UE4CodeGen_Private::EPropertyClass::Object, "TurningBrakeAccelerationByVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, TurningBrakeAccelerationByVelocity), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningBrakeAccelerationByVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningBrakeAccelerationByVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningVelocity_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "TurningVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, TurningVelocity), METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents_MetaData[] = {
		{ "Category", "PseudoVehicleMovementComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PseudoVehicleMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents = { UE4CodeGen_Private::EPropertyClass::Array, "SecondaryStepCapableComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000800000000d, 1, nullptr, STRUCT_OFFSET(UPseudoVehicleMovementComponent, SecondaryStepCapableComponents), METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SecondaryStepCapableComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorScaleAirborne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningAccelerationByVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningFactorByVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningBrakeAccelerationByVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_TurningVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::NewProp_SecondaryStepCapableComponents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPseudoVehicleMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::ClassParams = {
		&UPseudoVehicleMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPseudoVehicleMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPseudoVehicleMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPseudoVehicleMovementComponent, 2201925038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPseudoVehicleMovementComponent(Z_Construct_UClass_UPseudoVehicleMovementComponent, &UPseudoVehicleMovementComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UPseudoVehicleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPseudoVehicleMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
