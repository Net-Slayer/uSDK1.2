// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EmoteCancelMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmoteCancelMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEmoteCancelMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEmoteCancelMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UEmoteCancelMotion::StaticRegisterNativesUEmoteCancelMotion()
	{
	}
	UClass* Z_Construct_UClass_UEmoteCancelMotion_NoRegister()
	{
		return UEmoteCancelMotion::StaticClass();
	}
	struct Z_Construct_UClass_UEmoteCancelMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmoteCancelMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteCancelMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmoteCancelMotion.h" },
		{ "ModuleRelativePath", "EmoteCancelMotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmoteCancelMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmoteCancelMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmoteCancelMotion_Statics::ClassParams = {
		&UEmoteCancelMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEmoteCancelMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEmoteCancelMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmoteCancelMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmoteCancelMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmoteCancelMotion, 1266818302);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmoteCancelMotion(Z_Construct_UClass_UEmoteCancelMotion, &UEmoteCancelMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEmoteCancelMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmoteCancelMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
