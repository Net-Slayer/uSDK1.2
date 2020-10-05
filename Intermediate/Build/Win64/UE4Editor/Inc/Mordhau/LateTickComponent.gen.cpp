// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/LateTickComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLateTickComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ULateTickComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ULateTickComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void ULateTickComponent::StaticRegisterNativesULateTickComponent()
	{
	}
	UClass* Z_Construct_UClass_ULateTickComponent_NoRegister()
	{
		return ULateTickComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULateTickComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrameTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastFrameTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULateTickComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULateTickComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LateTickComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LateTickComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LastFrameTick_MetaData[] = {
		{ "Category", "LateTickComponent" },
		{ "ModuleRelativePath", "LateTickComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LastFrameTick = { UE4CodeGen_Private::EPropertyClass::Int, "LastFrameTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULateTickComponent, LastFrameTick), METADATA_PARAMS(Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LastFrameTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LastFrameTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LODDeltaTime_MetaData[] = {
		{ "Category", "LateTickComponent" },
		{ "ModuleRelativePath", "LateTickComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LODDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "LODDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULateTickComponent, LODDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LODDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LODDeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULateTickComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LastFrameTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULateTickComponent_Statics::NewProp_LODDeltaTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULateTickComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULateTickComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULateTickComponent_Statics::ClassParams = {
		&ULateTickComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_ULateTickComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULateTickComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULateTickComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULateTickComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULateTickComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULateTickComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULateTickComponent, 1096852040);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULateTickComponent(Z_Construct_UClass_ULateTickComponent, &ULateTickComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("ULateTickComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULateTickComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
