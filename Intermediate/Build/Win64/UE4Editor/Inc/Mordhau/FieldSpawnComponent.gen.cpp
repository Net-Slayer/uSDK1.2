// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/FieldSpawnComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSpawnComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UFieldSpawnComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UFieldSpawnComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UFieldSpawnComponent::StaticRegisterNativesUFieldSpawnComponent()
	{
	}
	UClass* Z_Construct_UClass_UFieldSpawnComponent_NoRegister()
	{
		return UFieldSpawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFieldSpawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineOfSightRadiusCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineOfSightRadiusCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldCheckLineOfSight_MetaData[];
#endif
		static void NewProp_bShouldCheckLineOfSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldCheckLineOfSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceSnapGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceSnapGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapGroundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapGroundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapGroundTraceOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapGroundTraceOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapRotationToGroundNormal_MetaData[];
#endif
		static void NewProp_bSnapRotationToGroundNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapRotationToGroundNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapLocationToGroundDestroyIfNoGround_MetaData[];
#endif
		static void NewProp_bSnapLocationToGroundDestroyIfNoGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapLocationToGroundDestroyIfNoGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapLocationToGround_MetaData[];
#endif
		static void NewProp_bSnapLocationToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapLocationToGround;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFieldSpawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FieldSpawnComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_LineOfSightRadiusCheck_MetaData[] = {
		{ "Category", "FieldSpawnCompFloats" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_LineOfSightRadiusCheck = { UE4CodeGen_Private::EPropertyClass::Float, "LineOfSightRadiusCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFieldSpawnComponent, LineOfSightRadiusCheck), METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_LineOfSightRadiusCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_LineOfSightRadiusCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight_MetaData[] = {
		{ "Category", "FieldSpawnCompBools" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight_SetBit(void* Obj)
	{
		((UFieldSpawnComponent*)Obj)->bShouldCheckLineOfSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldCheckLineOfSight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFieldSpawnComponent), &Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxDistanceSnapGround_MetaData[] = {
		{ "Category", "FieldSpawnCompFloats" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxDistanceSnapGround = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistanceSnapGround", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFieldSpawnComponent, MaxDistanceSnapGround), METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxDistanceSnapGround_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxDistanceSnapGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundRadius_MetaData[] = {
		{ "Category", "FieldSpawnCompFloats" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SnapGroundRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFieldSpawnComponent, SnapGroundRadius), METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundTraceOffsetZ_MetaData[] = {
		{ "Category", "FieldSpawnCompFloats" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundTraceOffsetZ = { UE4CodeGen_Private::EPropertyClass::Float, "SnapGroundTraceOffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFieldSpawnComponent, SnapGroundTraceOffsetZ), METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundTraceOffsetZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundTraceOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxAllowedRotation_MetaData[] = {
		{ "Category", "FieldSpawnCompFloats" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxAllowedRotation = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAllowedRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFieldSpawnComponent, MaxAllowedRotation), METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxAllowedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxAllowedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal_MetaData[] = {
		{ "Category", "FieldSpawnCompBools" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal_SetBit(void* Obj)
	{
		((UFieldSpawnComponent*)Obj)->bSnapRotationToGroundNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapRotationToGroundNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFieldSpawnComponent), &Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround_MetaData[] = {
		{ "Category", "FieldSpawnCompBools" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround_SetBit(void* Obj)
	{
		((UFieldSpawnComponent*)Obj)->bSnapLocationToGroundDestroyIfNoGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapLocationToGroundDestroyIfNoGround", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFieldSpawnComponent), &Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround_MetaData[] = {
		{ "Category", "FieldSpawnCompBools" },
		{ "ModuleRelativePath", "FieldSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround_SetBit(void* Obj)
	{
		((UFieldSpawnComponent*)Obj)->bSnapLocationToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapLocationToGround", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFieldSpawnComponent), &Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSpawnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_LineOfSightRadiusCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bShouldCheckLineOfSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxDistanceSnapGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_SnapGroundTraceOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_MaxAllowedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapRotationToGroundNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGroundDestroyIfNoGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSpawnComponent_Statics::NewProp_bSnapLocationToGround,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFieldSpawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSpawnComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFieldSpawnComponent_Statics::ClassParams = {
		&UFieldSpawnComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFieldSpawnComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFieldSpawnComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFieldSpawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFieldSpawnComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFieldSpawnComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFieldSpawnComponent, 4292374626);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFieldSpawnComponent(Z_Construct_UClass_UFieldSpawnComponent, &UFieldSpawnComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UFieldSpawnComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSpawnComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
