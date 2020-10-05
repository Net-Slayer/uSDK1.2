// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/StaticMeshMordhauActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshMordhauActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AStaticMeshMordhauActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AStaticMeshMordhauActor();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AStaticMeshMordhauActor::StaticRegisterNativesAStaticMeshMordhauActor()
	{
	}
	UClass* Z_Construct_UClass_AStaticMeshMordhauActor_NoRegister()
	{
		return AStaticMeshMordhauActor::StaticClass();
	}
	struct Z_Construct_UClass_AStaticMeshMordhauActor_Statics
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
	UObject* (*const Z_Construct_UClass_AStaticMeshMordhauActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshMordhauActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StaticMeshMordhauActor.h" },
		{ "ModuleRelativePath", "StaticMeshMordhauActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshMordhauActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "StaticMeshMordhauActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StaticMeshMordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStaticMeshMordhauActor_Statics::NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AStaticMeshMordhauActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshMordhauActor_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshMordhauActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticMeshMordhauActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshMordhauActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticMeshMordhauActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMeshMordhauActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticMeshMordhauActor_Statics::ClassParams = {
		&AStaticMeshMordhauActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AStaticMeshMordhauActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshMordhauActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStaticMeshMordhauActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStaticMeshMordhauActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticMeshMordhauActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticMeshMordhauActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticMeshMordhauActor, 4180856254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticMeshMordhauActor(Z_Construct_UClass_AStaticMeshMordhauActor, &AStaticMeshMordhauActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AStaticMeshMordhauActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshMordhauActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
