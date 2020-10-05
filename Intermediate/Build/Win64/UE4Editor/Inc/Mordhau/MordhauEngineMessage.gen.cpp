// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauEngineMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauEngineMessage() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauEngineMessage_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauEngineMessage();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UMordhauEngineMessage::StaticRegisterNativesUMordhauEngineMessage()
	{
	}
	UClass* Z_Construct_UClass_UMordhauEngineMessage_NoRegister()
	{
		return UMordhauEngineMessage::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauEngineMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauEngineMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauEngineMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauEngineMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauEngineMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauEngineMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauEngineMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauEngineMessage_Statics::ClassParams = {
		&UMordhauEngineMessage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauEngineMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauEngineMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauEngineMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauEngineMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauEngineMessage, 3302438020);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauEngineMessage(Z_Construct_UClass_UMordhauEngineMessage, &UMordhauEngineMessage::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauEngineMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauEngineMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
