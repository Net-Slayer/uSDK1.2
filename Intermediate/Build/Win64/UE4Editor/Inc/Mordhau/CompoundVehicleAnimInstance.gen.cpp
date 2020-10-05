// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CompoundVehicleAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompoundVehicleAnimInstance() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UCompoundVehicleAnimInstance_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UCompoundVehicleAnimInstance();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UCompoundVehicleAnimInstance::StaticRegisterNativesUCompoundVehicleAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UCompoundVehicleAnimInstance_NoRegister()
	{
		return UCompoundVehicleAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CompoundVehicleAnimInstance.h" },
		{ "ModuleRelativePath", "CompoundVehicleAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompoundVehicleAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::ClassParams = {
		&UCompoundVehicleAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompoundVehicleAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompoundVehicleAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompoundVehicleAnimInstance, 4000737707);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompoundVehicleAnimInstance(Z_Construct_UClass_UCompoundVehicleAnimInstance, &UCompoundVehicleAnimInstance::StaticClass, TEXT("/Script/Mordhau"), TEXT("UCompoundVehicleAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompoundVehicleAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
