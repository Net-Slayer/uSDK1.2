// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MapCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapCameraActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMapCameraActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMapCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AMapCameraActor::StaticRegisterNativesAMapCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AMapCameraActor_NoRegister()
	{
		return AMapCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AMapCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogMultiplierOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtmosphericFogMultiplierOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapCameraActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapCameraActor.h" },
		{ "ModuleRelativePath", "MapCameraActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapCameraActor_Statics::NewProp_AtmosphericFogMultiplierOverride_MetaData[] = {
		{ "Category", "MapCameraActor" },
		{ "ModuleRelativePath", "MapCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapCameraActor_Statics::NewProp_AtmosphericFogMultiplierOverride = { UE4CodeGen_Private::EPropertyClass::Float, "AtmosphericFogMultiplierOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMapCameraActor, AtmosphericFogMultiplierOverride), METADATA_PARAMS(Z_Construct_UClass_AMapCameraActor_Statics::NewProp_AtmosphericFogMultiplierOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapCameraActor_Statics::NewProp_AtmosphericFogMultiplierOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapCameraActor_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "MapCameraActor" },
		{ "ModuleRelativePath", "MapCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMapCameraActor_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMapCameraActor, Team), METADATA_PARAMS(Z_Construct_UClass_AMapCameraActor_Statics::NewProp_Team_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMapCameraActor_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapCameraActor_Statics::NewProp_AtmosphericFogMultiplierOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapCameraActor_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapCameraActor_Statics::ClassParams = {
		&AMapCameraActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMapCameraActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMapCameraActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMapCameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMapCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapCameraActor, 3994889059);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapCameraActor(Z_Construct_UClass_AMapCameraActor, &AMapCameraActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMapCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
