// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/AdvProjectileMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvProjectileMovementComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UAdvProjectileMovementComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvProjectileMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UAdvProjectileMovementComponent::StaticRegisterNativesUAdvProjectileMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UAdvProjectileMovementComponent_NoRegister()
	{
		return UAdvProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragDeceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragDeceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AdvProjectileMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AdvProjectileMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::NewProp_DragDeceleration_MetaData[] = {
		{ "Category", "AdvProjectileMovementComponent" },
		{ "ModuleRelativePath", "AdvProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::NewProp_DragDeceleration = { UE4CodeGen_Private::EPropertyClass::Float, "DragDeceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvProjectileMovementComponent, DragDeceleration), METADATA_PARAMS(Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::NewProp_DragDeceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::NewProp_DragDeceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::NewProp_DragDeceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvProjectileMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::ClassParams = {
		&UAdvProjectileMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvProjectileMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvProjectileMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvProjectileMovementComponent, 2305637720);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvProjectileMovementComponent(Z_Construct_UClass_UAdvProjectileMovementComponent, &UAdvProjectileMovementComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UAdvProjectileMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvProjectileMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
