// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/LODStaticMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODStaticMeshActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ALODStaticMeshActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ALODStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UClass* Z_Construct_UClass_ULODStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALODStaticMeshActor::StaticRegisterNativesALODStaticMeshActor()
	{
	}
	UClass* Z_Construct_UClass_ALODStaticMeshActor_NoRegister()
	{
		return ALODStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ALODStaticMeshActor_Statics
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
	UObject* (*const Z_Construct_UClass_ALODStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LODStaticMeshActor.h" },
		{ "ModuleRelativePath", "LODStaticMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "LODStaticMeshActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LODStaticMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALODStaticMeshActor_Statics::NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALODStaticMeshActor, StaticMeshComponent), Z_Construct_UClass_ULODStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALODStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALODStaticMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODStaticMeshActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALODStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALODStaticMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALODStaticMeshActor_Statics::ClassParams = {
		&ALODStaticMeshActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALODStaticMeshActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALODStaticMeshActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALODStaticMeshActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALODStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALODStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALODStaticMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALODStaticMeshActor, 81326601);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALODStaticMeshActor(Z_Construct_UClass_ALODStaticMeshActor, &ALODStaticMeshActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("ALODStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALODStaticMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
