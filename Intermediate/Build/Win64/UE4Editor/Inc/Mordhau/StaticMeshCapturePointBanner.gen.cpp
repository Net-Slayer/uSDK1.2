// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/StaticMeshCapturePointBanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshCapturePointBanner() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AStaticMeshCapturePointBanner_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AStaticMeshCapturePointBanner();
	MORDHAU_API UClass* Z_Construct_UClass_ACapturePointBanner();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AStaticMeshCapturePointBanner::StaticRegisterNativesAStaticMeshCapturePointBanner()
	{
	}
	UClass* Z_Construct_UClass_AStaticMeshCapturePointBanner_NoRegister()
	{
		return AStaticMeshCapturePointBanner::StaticClass();
	}
	struct Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapturePointBanner,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StaticMeshCapturePointBanner.h" },
		{ "ModuleRelativePath", "StaticMeshCapturePointBanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "StaticMeshCapturePointBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StaticMeshCapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AStaticMeshCapturePointBanner, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMeshCapturePointBanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::ClassParams = {
		&AStaticMeshCapturePointBanner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticMeshCapturePointBanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticMeshCapturePointBanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticMeshCapturePointBanner, 4208153574);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticMeshCapturePointBanner(Z_Construct_UClass_AStaticMeshCapturePointBanner, &AStaticMeshCapturePointBanner::StaticClass, TEXT("/Script/Mordhau"), TEXT("AStaticMeshCapturePointBanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshCapturePointBanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
