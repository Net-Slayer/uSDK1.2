// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/Emblem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblem() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEmblem_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEmblem();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UEmblem::StaticRegisterNativesUEmblem()
	{
	}
	UClass* Z_Construct_UClass_UEmblem_NoRegister()
	{
		return UEmblem::StaticClass();
	}
	struct Z_Construct_UClass_UEmblem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmblem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmblem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Emblem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Emblem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmblem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmblem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmblem_Statics::ClassParams = {
		&UEmblem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEmblem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEmblem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmblem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmblem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmblem, 3863541134);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmblem(Z_Construct_UClass_UEmblem, &UEmblem::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEmblem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmblem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
