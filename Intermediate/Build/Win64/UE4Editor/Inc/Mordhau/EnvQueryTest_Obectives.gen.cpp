// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EnvQueryTest_Obectives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Obectives() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEnvQueryTest_Obectives_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEnvQueryTest_Obectives();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UEnvQueryTest_Obectives::StaticRegisterNativesUEnvQueryTest_Obectives()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Obectives_NoRegister()
	{
		return UEnvQueryTest_Obectives::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Obectives_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryTest_Obectives.h" },
		{ "ModuleRelativePath", "EnvQueryTest_Obectives.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Obectives>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::ClassParams = {
		&UEnvQueryTest_Obectives::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Obectives()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_Obectives_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Obectives, 2481126046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Obectives(Z_Construct_UClass_UEnvQueryTest_Obectives, &UEnvQueryTest_Obectives::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEnvQueryTest_Obectives"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Obectives);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
