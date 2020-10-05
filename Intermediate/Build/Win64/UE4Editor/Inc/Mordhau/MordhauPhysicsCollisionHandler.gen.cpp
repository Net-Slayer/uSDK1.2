// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauPhysicsCollisionHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauPhysicsCollisionHandler() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauPhysicsCollisionHandler_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauPhysicsCollisionHandler();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UMordhauPhysicsCollisionHandler::StaticRegisterNativesUMordhauPhysicsCollisionHandler()
	{
	}
	UClass* Z_Construct_UClass_UMordhauPhysicsCollisionHandler_NoRegister()
	{
		return UMordhauPhysicsCollisionHandler::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsCollisionHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MordhauPhysicsCollisionHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauPhysicsCollisionHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauPhysicsCollisionHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::ClassParams = {
		&UMordhauPhysicsCollisionHandler::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauPhysicsCollisionHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauPhysicsCollisionHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauPhysicsCollisionHandler, 2793936491);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauPhysicsCollisionHandler(Z_Construct_UClass_UMordhauPhysicsCollisionHandler, &UMordhauPhysicsCollisionHandler::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauPhysicsCollisionHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauPhysicsCollisionHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
