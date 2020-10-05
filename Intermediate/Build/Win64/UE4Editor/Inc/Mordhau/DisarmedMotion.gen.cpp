// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/DisarmedMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisarmedMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UDisarmedMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UDisarmedMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UDisarmedMotion::StaticRegisterNativesUDisarmedMotion()
	{
	}
	UClass* Z_Construct_UClass_UDisarmedMotion_NoRegister()
	{
		return UDisarmedMotion::StaticClass();
	}
	struct Z_Construct_UClass_UDisarmedMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisarmedMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisarmedMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisarmedMotion.h" },
		{ "ModuleRelativePath", "DisarmedMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisarmedMotion_Statics::NewProp_RecoveryTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "DisarmedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisarmedMotion_Statics::NewProp_RecoveryTime = { UE4CodeGen_Private::EPropertyClass::Float, "RecoveryTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDisarmedMotion, RecoveryTime), METADATA_PARAMS(Z_Construct_UClass_UDisarmedMotion_Statics::NewProp_RecoveryTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDisarmedMotion_Statics::NewProp_RecoveryTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisarmedMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisarmedMotion_Statics::NewProp_RecoveryTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisarmedMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisarmedMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisarmedMotion_Statics::ClassParams = {
		&UDisarmedMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UDisarmedMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDisarmedMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDisarmedMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDisarmedMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisarmedMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisarmedMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisarmedMotion, 454695206);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisarmedMotion(Z_Construct_UClass_UDisarmedMotion, &UDisarmedMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UDisarmedMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisarmedMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
