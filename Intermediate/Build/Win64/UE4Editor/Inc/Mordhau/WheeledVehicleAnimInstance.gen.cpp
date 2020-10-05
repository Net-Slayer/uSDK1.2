// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/WheeledVehicleAnimInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheeledVehicleAnimInstance() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UWheeledVehicleAnimInstance_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UWheeledVehicleAnimInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UWheeledVehicleAnimInstance::StaticRegisterNativesUWheeledVehicleAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UWheeledVehicleAnimInstance_NoRegister()
	{
		return UWheeledVehicleAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WheeledVehicleAnimInstance.h" },
		{ "ModuleRelativePath", "WheeledVehicleAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWheeledVehicleAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::ClassParams = {
		&UWheeledVehicleAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWheeledVehicleAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWheeledVehicleAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWheeledVehicleAnimInstance, 2409159672);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWheeledVehicleAnimInstance(Z_Construct_UClass_UWheeledVehicleAnimInstance, &UWheeledVehicleAnimInstance::StaticClass, TEXT("/Script/Mordhau"), TEXT("UWheeledVehicleAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWheeledVehicleAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
