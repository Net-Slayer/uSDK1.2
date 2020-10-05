// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/GoreActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoreActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AGoreActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AGoreActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGoreActor::StaticRegisterNativesAGoreActor()
	{
	}
	UClass* Z_Construct_UClass_AGoreActor_NoRegister()
	{
		return AGoreActor::StaticClass();
	}
	struct Z_Construct_UClass_AGoreActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoreActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoreActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoreActor.h" },
		{ "ModuleRelativePath", "GoreActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoreActor_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "GoreActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoreActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoreActor_Statics::NewProp_ParticleSystemComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSystemComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AGoreActor, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoreActor_Statics::NewProp_ParticleSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoreActor_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoreActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "GoreActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoreActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoreActor_Statics::NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AGoreActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoreActor_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoreActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoreActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoreActor_Statics::NewProp_ParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoreActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoreActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoreActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoreActor_Statics::ClassParams = {
		&AGoreActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AGoreActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGoreActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGoreActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGoreActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoreActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoreActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoreActor, 1468300752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoreActor(Z_Construct_UClass_AGoreActor, &AGoreActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AGoreActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoreActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
