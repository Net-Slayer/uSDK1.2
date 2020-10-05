// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/PhysicsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsProxy() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_APhysicsProxy_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_APhysicsProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APhysicsProxy::StaticRegisterNativesAPhysicsProxy()
	{
	}
	UClass* Z_Construct_UClass_APhysicsProxy_NoRegister()
	{
		return APhysicsProxy::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Original_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Original;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsProxy.h" },
		{ "ModuleRelativePath", "PhysicsProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProxy_Statics::NewProp_IdleTime_MetaData[] = {
		{ "Category", "PhysicsProxy" },
		{ "ModuleRelativePath", "PhysicsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsProxy_Statics::NewProp_IdleTime = { UE4CodeGen_Private::EPropertyClass::Float, "IdleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APhysicsProxy, IdleTime), METADATA_PARAMS(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_IdleTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_IdleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProxy_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "PhysicsProxy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PhysicsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsProxy_Statics::NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhysicsProxy, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "PhysicsProxy" },
		{ "ModuleRelativePath", "PhysicsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APhysicsProxy, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Original_MetaData[] = {
		{ "Category", "PhysicsProxy" },
		{ "ModuleRelativePath", "PhysicsProxy.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Original = { UE4CodeGen_Private::EPropertyClass::Object, "Original", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APhysicsProxy, Original), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Original_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Original_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProxy_Statics::NewProp_IdleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProxy_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsProxy_Statics::NewProp_Original,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsProxy_Statics::ClassParams = {
		&APhysicsProxy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APhysicsProxy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APhysicsProxy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhysicsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsProxy, 1960967392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsProxy(Z_Construct_UClass_APhysicsProxy, &APhysicsProxy::StaticClass, TEXT("/Script/Mordhau"), TEXT("APhysicsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
