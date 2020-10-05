// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/FistWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFistWeapon() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AFistWeapon_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AFistWeapon();
	MORDHAU_API UClass* Z_Construct_UClass_AVirtualWeapon();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AFistWeapon::StaticRegisterNativesAFistWeapon()
	{
	}
	UClass* Z_Construct_UClass_AFistWeapon_NoRegister()
	{
		return AFistWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFistWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFistWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVirtualWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFistWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FistWeapon.h" },
		{ "ModuleRelativePath", "FistWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFistWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFistWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFistWeapon_Statics::ClassParams = {
		&AFistWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFistWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFistWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFistWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFistWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFistWeapon, 3944216304);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFistWeapon(Z_Construct_UClass_AFistWeapon, &AFistWeapon::StaticClass, TEXT("/Script/Mordhau"), TEXT("AFistWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFistWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
