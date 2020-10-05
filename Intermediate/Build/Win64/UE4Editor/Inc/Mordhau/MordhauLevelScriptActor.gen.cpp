// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauLevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauLevelScriptActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauLevelScriptActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AMordhauLevelScriptActor::StaticRegisterNativesAMordhauLevelScriptActor()
	{
	}
	UClass* Z_Construct_UClass_AMordhauLevelScriptActor_NoRegister()
	{
		return AMordhauLevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauLevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauLevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauLevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MordhauLevelScriptActor.h" },
		{ "ModuleRelativePath", "MordhauLevelScriptActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauLevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauLevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauLevelScriptActor_Statics::ClassParams = {
		&AMordhauLevelScriptActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauLevelScriptActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauLevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauLevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauLevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauLevelScriptActor, 32706921);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauLevelScriptActor(Z_Construct_UClass_AMordhauLevelScriptActor, &AMordhauLevelScriptActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauLevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauLevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
