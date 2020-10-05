// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ATurret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATurret() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AATurret_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AATurret();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AATurret::StaticRegisterNativesAATurret()
	{
	}
	UClass* Z_Construct_UClass_AATurret_NoRegister()
	{
		return AATurret::StaticClass();
	}
	struct Z_Construct_UClass_AATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvancedCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATurret_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ATurret.h" },
		{ "ModuleRelativePath", "ATurret.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AATurret_Statics::ClassParams = {
		&AATurret::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AATurret_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AATurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AATurret, 2419036578);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AATurret(Z_Construct_UClass_AATurret, &AATurret::StaticClass, TEXT("/Script/Mordhau"), TEXT("AATurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
