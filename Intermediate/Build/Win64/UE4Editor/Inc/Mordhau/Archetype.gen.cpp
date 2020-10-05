// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/Archetype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchetype() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UArchetype_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UArchetype();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UArchetype::StaticRegisterNativesUArchetype()
	{
	}
	UClass* Z_Construct_UClass_UArchetype_NoRegister()
	{
		return UArchetype::StaticClass();
	}
	struct Z_Construct_UClass_UArchetype_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchetype_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchetype_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Archetype.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Archetype.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchetype_Statics::NewProp_CharacterPoints_MetaData[] = {
		{ "Category", "Archetype" },
		{ "ModuleRelativePath", "Archetype.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UArchetype_Statics::NewProp_CharacterPoints = { UE4CodeGen_Private::EPropertyClass::Int, "CharacterPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UArchetype, CharacterPoints), METADATA_PARAMS(Z_Construct_UClass_UArchetype_Statics::NewProp_CharacterPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArchetype_Statics::NewProp_CharacterPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchetype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchetype_Statics::NewProp_CharacterPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchetype_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchetype>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArchetype_Statics::ClassParams = {
		&UArchetype::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UArchetype_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UArchetype_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UArchetype_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UArchetype_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchetype()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArchetype_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArchetype, 2793327076);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArchetype(Z_Construct_UClass_UArchetype, &UArchetype::StaticClass, TEXT("/Script/Mordhau"), TEXT("UArchetype"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchetype);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
