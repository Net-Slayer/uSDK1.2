// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CharacterHair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHair() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UCharacterHair_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UCharacterHair();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UCharacterHair::StaticRegisterNativesUCharacterHair()
	{
	}
	UClass* Z_Construct_UClass_UCharacterHair_NoRegister()
	{
		return UCharacterHair::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterHair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Albedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Albedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterHair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterHair.h" },
		{ "ModuleRelativePath", "CharacterHair.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHair_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "CharacterHair" },
		{ "ModuleRelativePath", "CharacterHair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHair_Statics::NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Object, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterHair, Normal), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHair_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterHair_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHair_Statics::NewProp_Albedo_MetaData[] = {
		{ "Category", "CharacterHair" },
		{ "ModuleRelativePath", "CharacterHair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHair_Statics::NewProp_Albedo = { UE4CodeGen_Private::EPropertyClass::Object, "Albedo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterHair, Albedo), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHair_Statics::NewProp_Albedo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterHair_Statics::NewProp_Albedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHair_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CharacterHair" },
		{ "ModuleRelativePath", "CharacterHair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHair_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterHair, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHair_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterHair_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterHair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHair_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHair_Statics::NewProp_Albedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHair_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterHair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterHair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterHair_Statics::ClassParams = {
		&UCharacterHair::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCharacterHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCharacterHair_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterHair_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharacterHair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterHair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterHair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterHair, 1394630914);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterHair(Z_Construct_UClass_UCharacterHair, &UCharacterHair::StaticClass, TEXT("/Script/Mordhau"), TEXT("UCharacterHair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterHair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
