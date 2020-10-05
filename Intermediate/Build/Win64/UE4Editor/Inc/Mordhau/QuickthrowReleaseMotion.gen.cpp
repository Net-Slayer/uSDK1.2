// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/QuickthrowReleaseMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickthrowReleaseMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UQuickthrowReleaseMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UQuickthrowReleaseMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauProjectile_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
// End Cross Module References
	void UQuickthrowReleaseMotion::StaticRegisterNativesUQuickthrowReleaseMotion()
	{
	}
	UClass* Z_Construct_UClass_UQuickthrowReleaseMotion_NoRegister()
	{
		return UQuickthrowReleaseMotion::StaticClass();
	}
	struct Z_Construct_UClass_UQuickthrowReleaseMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstStageEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstStageEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedLocalProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CreatedLocalProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedEquipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuickthrowReleaseMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "QuickthrowReleaseMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_FirstStageEnd_MetaData[] = {
		{ "Category", "QuickthrowReleaseMotion" },
		{ "ModuleRelativePath", "QuickthrowReleaseMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_FirstStageEnd = { UE4CodeGen_Private::EPropertyClass::Float, "FirstStageEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQuickthrowReleaseMotion, FirstStageEnd), METADATA_PARAMS(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_FirstStageEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_FirstStageEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "QuickthrowReleaseMotion" },
		{ "ModuleRelativePath", "QuickthrowReleaseMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_Stage = { UE4CodeGen_Private::EPropertyClass::Byte, "Stage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQuickthrowReleaseMotion, Stage), nullptr, METADATA_PARAMS(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_Stage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_Stage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_CreatedLocalProjectile_MetaData[] = {
		{ "Category", "QuickthrowReleaseMotion" },
		{ "ModuleRelativePath", "QuickthrowReleaseMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_CreatedLocalProjectile = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CreatedLocalProjectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UQuickthrowReleaseMotion, CreatedLocalProjectile), Z_Construct_UClass_AMordhauProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_CreatedLocalProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_CreatedLocalProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_RangedEquipment_MetaData[] = {
		{ "Category", "QuickthrowReleaseMotion" },
		{ "ModuleRelativePath", "QuickthrowReleaseMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_RangedEquipment = { UE4CodeGen_Private::EPropertyClass::Object, "RangedEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQuickthrowReleaseMotion, RangedEquipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_RangedEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_RangedEquipment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_FirstStageEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_CreatedLocalProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::NewProp_RangedEquipment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickthrowReleaseMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::ClassParams = {
		&UQuickthrowReleaseMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuickthrowReleaseMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuickthrowReleaseMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuickthrowReleaseMotion, 3396315546);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuickthrowReleaseMotion(Z_Construct_UClass_UQuickthrowReleaseMotion, &UQuickthrowReleaseMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UQuickthrowReleaseMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickthrowReleaseMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
