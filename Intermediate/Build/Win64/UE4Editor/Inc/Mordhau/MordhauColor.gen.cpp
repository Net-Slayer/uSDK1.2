// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauColor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauColor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauColor();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMordhauColor::StaticRegisterNativesUMordhauColor()
	{
	}
	UClass* Z_Construct_UClass_UMordhauColor_NoRegister()
	{
		return UMordhauColor::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauColor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauColor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "MordhauColor" },
		{ "ModuleRelativePath", "MordhauColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauColor_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMordhauColor_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauColor_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauColor_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauColor_Statics::ClassParams = {
		&UMordhauColor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMordhauColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauColor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauColor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauColor, 3140570614);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauColor(Z_Construct_UClass_UMordhauColor, &UMordhauColor::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
