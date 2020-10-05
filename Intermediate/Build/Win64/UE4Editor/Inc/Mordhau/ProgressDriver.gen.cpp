// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ProgressDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressDriver() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AProgressDriver_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AProgressDriver();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AProgressDriver::StaticRegisterNativesAProgressDriver()
	{
	}
	UClass* Z_Construct_UClass_AProgressDriver_NoRegister()
	{
		return AProgressDriver::StaticClass();
	}
	struct Z_Construct_UClass_AProgressDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgressDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgressDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProgressDriver.h" },
		{ "ModuleRelativePath", "ProgressDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgressDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgressDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProgressDriver_Statics::ClassParams = {
		&AProgressDriver::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProgressDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProgressDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProgressDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProgressDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProgressDriver, 676123671);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProgressDriver(Z_Construct_UClass_AProgressDriver, &AProgressDriver::StaticClass, TEXT("/Script/Mordhau"), TEXT("AProgressDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgressDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
