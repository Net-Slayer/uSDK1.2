// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ReloadMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UReloadMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UReloadMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
// End Cross Module References
	void UReloadMotion::StaticRegisterNativesUReloadMotion()
	{
	}
	UClass* Z_Construct_UClass_UReloadMotion_NoRegister()
	{
		return UReloadMotion::StaticClass();
	}
	struct Z_Construct_UClass_UReloadMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reload1PEquipmentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reload1PEquipmentMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadEquipmentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadEquipmentMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reload1PMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reload1PMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipmentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentEquipmentMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_RangedEquipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReloadMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReloadTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReachTime_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReachTime = { UE4CodeGen_Private::EPropertyClass::Float, "ReachTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, ReachTime), METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReachTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReachTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentReloadSound_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentReloadSound = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentReloadSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008000d, 1, nullptr, STRUCT_OFFSET(UReloadMotion, CurrentReloadSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentReloadSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PEquipmentMontage_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PEquipmentMontage = { UE4CodeGen_Private::EPropertyClass::Object, "Reload1PEquipmentMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, Reload1PEquipmentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PEquipmentMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PEquipmentMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadEquipmentMontage_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadEquipmentMontage = { UE4CodeGen_Private::EPropertyClass::Object, "ReloadEquipmentMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, ReloadEquipmentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadEquipmentMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadEquipmentMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PMontage_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PMontage = { UE4CodeGen_Private::EPropertyClass::Object, "Reload1PMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, Reload1PMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadMontage = { UE4CodeGen_Private::EPropertyClass::Object, "ReloadMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentEquipmentMontage_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentEquipmentMontage = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentEquipmentMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, CurrentEquipmentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentEquipmentMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentEquipmentMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentMontage_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentMontage = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadMotion_Statics::NewProp_RangedEquipment_MetaData[] = {
		{ "Category", "ReloadMotion" },
		{ "ModuleRelativePath", "ReloadMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UReloadMotion_Statics::NewProp_RangedEquipment = { UE4CodeGen_Private::EPropertyClass::WeakObject, "RangedEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UReloadMotion, RangedEquipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::NewProp_RangedEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::NewProp_RangedEquipment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReloadMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReachTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PEquipmentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadEquipmentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_Reload1PMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_ReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentEquipmentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_CurrentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadMotion_Statics::NewProp_RangedEquipment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReloadMotion_Statics::ClassParams = {
		&UReloadMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UReloadMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UReloadMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReloadMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReloadMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReloadMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReloadMotion, 2433278603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReloadMotion(Z_Construct_UClass_UReloadMotion, &UReloadMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UReloadMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
