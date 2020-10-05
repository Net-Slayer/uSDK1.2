// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/SkeletalMeshMordhauActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshMordhauActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ASkeletalMeshMordhauActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ASkeletalMeshMordhauActor();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASkeletalMeshMordhauActor::StaticRegisterNativesASkeletalMeshMordhauActor()
	{
	}
	UClass* Z_Construct_UClass_ASkeletalMeshMordhauActor_NoRegister()
	{
		return ASkeletalMeshMordhauActor::StaticClass();
	}
	struct Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletalMeshMordhauActor.h" },
		{ "ModuleRelativePath", "SkeletalMeshMordhauActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "SkeletalMeshMordhauActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SkeletalMeshMordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::NewProp_SkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshMordhauActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::NewProp_SkeletalMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkeletalMeshMordhauActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::ClassParams = {
		&ASkeletalMeshMordhauActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkeletalMeshMordhauActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASkeletalMeshMordhauActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkeletalMeshMordhauActor, 526369691);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkeletalMeshMordhauActor(Z_Construct_UClass_ASkeletalMeshMordhauActor, &ASkeletalMeshMordhauActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("ASkeletalMeshMordhauActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkeletalMeshMordhauActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
