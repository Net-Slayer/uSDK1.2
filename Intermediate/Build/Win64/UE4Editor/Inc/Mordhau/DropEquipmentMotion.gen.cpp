// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/DropEquipmentMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropEquipmentMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UDropEquipmentMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UDropEquipmentMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
// End Cross Module References
	void UDropEquipmentMotion::StaticRegisterNativesUDropEquipmentMotion()
	{
	}
	UClass* Z_Construct_UClass_UDropEquipmentMotion_NoRegister()
	{
		return UDropEquipmentMotion::StaticClass();
	}
	struct Z_Construct_UClass_UDropEquipmentMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDropped_MetaData[];
#endif
		static void NewProp_bHasDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroppingEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppingEquipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDroppingRightHand_MetaData[];
#endif
		static void NewProp_bIsDroppingRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDroppingRightHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropEquipmentMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropEquipmentMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DropEquipmentMotion.h" },
		{ "ModuleRelativePath", "DropEquipmentMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "DropEquipmentMotion.h" },
	};
#endif
	void Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped_SetBit(void* Obj)
	{
		((UDropEquipmentMotion*)Obj)->bHasDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDropped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDropEquipmentMotion), &Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DropTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "DropEquipmentMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DropTime = { UE4CodeGen_Private::EPropertyClass::Float, "DropTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDropEquipmentMotion, DropTime), METADATA_PARAMS(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DropTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DropTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "Anims" },
		{ "ModuleRelativePath", "DropEquipmentMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDropEquipmentMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DroppingEquipment_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "DropEquipmentMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DroppingEquipment = { UE4CodeGen_Private::EPropertyClass::Object, "DroppingEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDropEquipmentMotion, DroppingEquipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DroppingEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DroppingEquipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "DropEquipmentMotion.h" },
	};
#endif
	void Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand_SetBit(void* Obj)
	{
		((UDropEquipmentMotion*)Obj)->bIsDroppingRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDroppingRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDropEquipmentMotion), &Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropEquipmentMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bHasDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DropTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_DroppingEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropEquipmentMotion_Statics::NewProp_bIsDroppingRightHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropEquipmentMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropEquipmentMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDropEquipmentMotion_Statics::ClassParams = {
		&UDropEquipmentMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UDropEquipmentMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDropEquipmentMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDropEquipmentMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDropEquipmentMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDropEquipmentMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDropEquipmentMotion, 2206037680);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDropEquipmentMotion(Z_Construct_UClass_UDropEquipmentMotion, &UDropEquipmentMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UDropEquipmentMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropEquipmentMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
