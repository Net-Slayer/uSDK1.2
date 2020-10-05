// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauEquipmentPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauEquipmentPart() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauEquipmentPart_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauEquipmentPart();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UMordhauEquipmentPart::StaticRegisterNativesUMordhauEquipmentPart()
	{
	}
	UClass* Z_Construct_UClass_UMordhauEquipmentPart_NoRegister()
	{
		return UMordhauEquipmentPart::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauEquipmentPart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasColor3_MetaData[];
#endif
		static void NewProp_bHasColor3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasColor3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasColor2_MetaData[];
#endif
		static void NewProp_bHasColor2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasColor2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasColor1_MetaData[];
#endif
		static void NewProp_bHasColor1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasColor1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTrailFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondTrailFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxiliarySkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxiliarySkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauEquipmentPart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MordhauEquipmentPart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3_SetBit(void* Obj)
	{
		((UMordhauEquipmentPart*)Obj)->bHasColor3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasColor3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauEquipmentPart), &Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2_SetBit(void* Obj)
	{
		((UMordhauEquipmentPart*)Obj)->bHasColor2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasColor2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauEquipmentPart), &Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1_SetBit(void* Obj)
	{
		((UMordhauEquipmentPart*)Obj)->bHasColor1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasColor1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauEquipmentPart), &Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SecondTrailFactor_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SecondTrailFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SecondTrailFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauEquipmentPart, SecondTrailFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SecondTrailFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SecondTrailFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_TrailFactor_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_TrailFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TrailFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauEquipmentPart, TrailFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_TrailFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_TrailFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_AuxiliarySkeletalMesh_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_AuxiliarySkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "AuxiliarySkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauEquipmentPart, AuxiliarySkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_AuxiliarySkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_AuxiliarySkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "MordhauEquipmentPart" },
		{ "ModuleRelativePath", "MordhauEquipmentPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauEquipmentPart, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauEquipmentPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_bHasColor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SecondTrailFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_TrailFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_AuxiliarySkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauEquipmentPart_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauEquipmentPart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauEquipmentPart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauEquipmentPart_Statics::ClassParams = {
		&UMordhauEquipmentPart::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMordhauEquipmentPart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauEquipmentPart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauEquipmentPart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauEquipmentPart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauEquipmentPart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauEquipmentPart, 2777989592);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauEquipmentPart(Z_Construct_UClass_UMordhauEquipmentPart, &UMordhauEquipmentPart::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauEquipmentPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauEquipmentPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
