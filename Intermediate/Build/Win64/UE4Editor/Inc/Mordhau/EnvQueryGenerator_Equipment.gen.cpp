// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EnvQueryGenerator_Equipment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Equipment() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Equipment_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Equipment();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UEnvQueryGenerator_Equipment::StaticRegisterNativesUEnvQueryGenerator_Equipment()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Equipment_NoRegister()
	{
		return UEnvQueryGenerator_Equipment::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryGenerator_Equipment.h" },
		{ "ModuleRelativePath", "EnvQueryGenerator_Equipment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Equipment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::ClassParams = {
		&UEnvQueryGenerator_Equipment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Equipment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_Equipment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Equipment, 783775362);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Equipment(Z_Construct_UClass_UEnvQueryGenerator_Equipment, &UEnvQueryGenerator_Equipment::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEnvQueryGenerator_Equipment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Equipment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
