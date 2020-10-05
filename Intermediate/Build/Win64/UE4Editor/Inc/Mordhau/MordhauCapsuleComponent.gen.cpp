// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauCapsuleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauCapsuleComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauCapsuleComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauCapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UMordhauCapsuleComponent::StaticRegisterNativesUMordhauCapsuleComponent()
	{
	}
	UClass* Z_Construct_UClass_UMordhauCapsuleComponent_NoRegister()
	{
		return UMordhauCapsuleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauCapsuleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauCapsuleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCapsuleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "MordhauCapsuleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauCapsuleComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauCapsuleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauCapsuleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauCapsuleComponent_Statics::ClassParams = {
		&UMordhauCapsuleComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauCapsuleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauCapsuleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauCapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauCapsuleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauCapsuleComponent, 3754534749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauCapsuleComponent(Z_Construct_UClass_UMordhauCapsuleComponent, &UMordhauCapsuleComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauCapsuleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauCapsuleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
