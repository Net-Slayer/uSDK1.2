// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauTypes() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauTypes_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UMordhauTypes::StaticRegisterNativesUMordhauTypes()
	{
	}
	UClass* Z_Construct_UClass_UMordhauTypes_NoRegister()
	{
		return UMordhauTypes::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauTypes_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauTypes_Statics::ClassParams = {
		&UMordhauTypes::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauTypes, 3364147039);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauTypes(Z_Construct_UClass_UMordhauTypes, &UMordhauTypes::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
