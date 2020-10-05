// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/Perk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerk() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UPerk_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UPerk();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UPerk::StaticRegisterNativesUPerk()
	{
	}
	UClass* Z_Construct_UClass_UPerk_NoRegister()
	{
		return UPerk::StaticClass();
	}
	struct Z_Construct_UClass_UPerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Perk.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Text, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPerk, Description), METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_Cost = { UE4CodeGen_Private::EPropertyClass::Int, "Cost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPerk, Cost), METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerk_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPerk_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Text, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPerk, Name), METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerk_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerk_Statics::ClassParams = {
		&UPerk::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPerk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPerk_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerk, 124521660);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerk(Z_Construct_UClass_UPerk, &UPerk::StaticClass, TEXT("/Script/Mordhau"), TEXT("UPerk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
