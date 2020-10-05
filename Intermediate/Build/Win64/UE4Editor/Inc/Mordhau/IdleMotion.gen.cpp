// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/IdleMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UIdleMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UIdleMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UIdleMotion::StaticRegisterNativesUIdleMotion()
	{
	}
	UClass* Z_Construct_UClass_UIdleMotion_NoRegister()
	{
		return UIdleMotion::StaticClass();
	}
	struct Z_Construct_UClass_UIdleMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IdleMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IdleMotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIdleMotion_Statics::ClassParams = {
		&UIdleMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UIdleMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIdleMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIdleMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIdleMotion, 1388517704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIdleMotion(Z_Construct_UClass_UIdleMotion, &UIdleMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UIdleMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
