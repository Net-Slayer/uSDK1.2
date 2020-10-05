// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EnvQueryGenerator_Objectives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Objectives() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Objectives_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Objectives();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UEnvQueryGenerator_Objectives::StaticRegisterNativesUEnvQueryGenerator_Objectives()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Objectives_NoRegister()
	{
		return UEnvQueryGenerator_Objectives::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryGenerator_Objectives.h" },
		{ "ModuleRelativePath", "EnvQueryGenerator_Objectives.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Objectives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::ClassParams = {
		&UEnvQueryGenerator_Objectives::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Objectives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_Objectives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Objectives, 998752590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Objectives(Z_Construct_UClass_UEnvQueryGenerator_Objectives, &UEnvQueryGenerator_Objectives::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEnvQueryGenerator_Objectives"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Objectives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
