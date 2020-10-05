// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauQuest() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauQuest_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauQuest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AMordhauQuest::StaticRegisterNativesAMordhauQuest()
	{
	}
	UClass* Z_Construct_UClass_AMordhauQuest_NoRegister()
	{
		return AMordhauQuest::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauQuest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauQuest.h" },
		{ "ModuleRelativePath", "MordhauQuest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauQuest_Statics::ClassParams = {
		&AMordhauQuest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauQuest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauQuest, 261099647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauQuest(Z_Construct_UClass_AMordhauQuest, &AMordhauQuest::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
