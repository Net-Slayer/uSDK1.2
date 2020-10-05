// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ProgressActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AProgressActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AProgressActor();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AProgressActor::StaticRegisterNativesAProgressActor()
	{
	}
	UClass* Z_Construct_UClass_AProgressActor_NoRegister()
	{
		return AProgressActor::StaticClass();
	}
	struct Z_Construct_UClass_AProgressActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgressActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgressActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProgressActor.h" },
		{ "ModuleRelativePath", "ProgressActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgressActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgressActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProgressActor_Statics::ClassParams = {
		&AProgressActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProgressActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProgressActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProgressActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProgressActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProgressActor, 3001587733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProgressActor(Z_Construct_UClass_AProgressActor, &AProgressActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AProgressActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgressActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
