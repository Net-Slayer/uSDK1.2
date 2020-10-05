// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauInventoryItem() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EItemRarity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UMordhauInventoryItem::StaticRegisterNativesUMordhauInventoryItem()
	{
	}
	UClass* Z_Construct_UClass_UMordhauInventoryItem_NoRegister()
	{
		return UMordhauInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDefID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauInventoryItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauInventoryItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity_MetaData[] = {
		{ "Category", "MordhauInventoryItem" },
		{ "ModuleRelativePath", "MordhauInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity = { UE4CodeGen_Private::EPropertyClass::Enum, "ItemRarity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventoryItem, ItemRarity), Z_Construct_UEnum_Mordhau_EItemRarity, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "MordhauInventoryItem" },
		{ "ModuleRelativePath", "MordhauInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemName = { UE4CodeGen_Private::EPropertyClass::Text, "ItemName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventoryItem, ItemName), METADATA_PARAMS(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemDefID_MetaData[] = {
		{ "Category", "MordhauInventoryItem" },
		{ "ModuleRelativePath", "MordhauInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventoryItem, ItemDefID), METADATA_PARAMS(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemDefID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemDefID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "MordhauInventoryItem" },
		{ "ModuleRelativePath", "MordhauInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemIcon = { UE4CodeGen_Private::EPropertyClass::Object, "ItemIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventoryItem, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemDefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventoryItem_Statics::NewProp_ItemIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauInventoryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauInventoryItem_Statics::ClassParams = {
		&UMordhauInventoryItem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMordhauInventoryItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventoryItem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauInventoryItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauInventoryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauInventoryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauInventoryItem, 116314980);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauInventoryItem(Z_Construct_UClass_UMordhauInventoryItem, &UMordhauInventoryItem::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauInventoryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauInventoryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
