// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ItemPattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPattern() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UItemPattern_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UItemPattern();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UItemPattern::StaticRegisterNativesUItemPattern()
	{
	}
	UClass* Z_Construct_UClass_UItemPattern_NoRegister()
	{
		return UItemPattern::StaticClass();
	}
	struct Z_Construct_UClass_UItemPattern_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemPattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPattern_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemPattern.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemPattern.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3_MetaData[] = {
		{ "Category", "ItemPattern" },
		{ "ModuleRelativePath", "ItemPattern.h" },
	};
#endif
	void Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3_SetBit(void* Obj)
	{
		((UItemPattern*)Obj)->bHasColor3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3 = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasColor3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UItemPattern), &Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2_MetaData[] = {
		{ "Category", "ItemPattern" },
		{ "ModuleRelativePath", "ItemPattern.h" },
	};
#endif
	void Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2_SetBit(void* Obj)
	{
		((UItemPattern*)Obj)->bHasColor2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasColor2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UItemPattern), &Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1_MetaData[] = {
		{ "Category", "ItemPattern" },
		{ "ModuleRelativePath", "ItemPattern.h" },
	};
#endif
	void Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1_SetBit(void* Obj)
	{
		((UItemPattern*)Obj)->bHasColor1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasColor1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UItemPattern), &Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPattern_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "ItemPattern" },
		{ "ModuleRelativePath", "ItemPattern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemPattern_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UItemPattern, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemPattern_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemPattern_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemPattern_Statics::NewProp_bHasColor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemPattern_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemPattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemPattern_Statics::ClassParams = {
		&UItemPattern::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UItemPattern_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UItemPattern_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UItemPattern_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UItemPattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemPattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemPattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemPattern, 2888754891);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemPattern(Z_Construct_UClass_UItemPattern, &UItemPattern::StaticClass, TEXT("/Script/Mordhau"), TEXT("UItemPattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemPattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
