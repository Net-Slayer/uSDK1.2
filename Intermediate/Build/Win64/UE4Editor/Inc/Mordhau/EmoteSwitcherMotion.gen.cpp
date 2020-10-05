// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EmoteSwitcherMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmoteSwitcherMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEmoteSwitcherMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEmoteSwitcherMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UEmoteSwitcherMotion::StaticRegisterNativesUEmoteSwitcherMotion()
	{
	}
	UClass* Z_Construct_UClass_UEmoteSwitcherMotion_NoRegister()
	{
		return UEmoteSwitcherMotion::StaticClass();
	}
	struct Z_Construct_UClass_UEmoteSwitcherMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchToID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwitchToID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmoteSwitcherMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteSwitcherMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmoteSwitcherMotion.h" },
		{ "ModuleRelativePath", "EmoteSwitcherMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteSwitcherMotion_Statics::NewProp_SwitchToID_MetaData[] = {
		{ "Category", "EmoteSwitcherMotion" },
		{ "ModuleRelativePath", "EmoteSwitcherMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEmoteSwitcherMotion_Statics::NewProp_SwitchToID = { UE4CodeGen_Private::EPropertyClass::Byte, "SwitchToID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteSwitcherMotion, SwitchToID), nullptr, METADATA_PARAMS(Z_Construct_UClass_UEmoteSwitcherMotion_Statics::NewProp_SwitchToID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteSwitcherMotion_Statics::NewProp_SwitchToID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEmoteSwitcherMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteSwitcherMotion_Statics::NewProp_SwitchToID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmoteSwitcherMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmoteSwitcherMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmoteSwitcherMotion_Statics::ClassParams = {
		&UEmoteSwitcherMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UEmoteSwitcherMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEmoteSwitcherMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEmoteSwitcherMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEmoteSwitcherMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmoteSwitcherMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmoteSwitcherMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmoteSwitcherMotion, 2942554709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmoteSwitcherMotion(Z_Construct_UClass_UEmoteSwitcherMotion, &UEmoteSwitcherMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEmoteSwitcherMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmoteSwitcherMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
