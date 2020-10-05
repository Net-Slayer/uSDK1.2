// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/FlinchMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlinchMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UFlinchMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UFlinchMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UFlinchMotion::StaticRegisterNativesUFlinchMotion()
	{
	}
	UClass* Z_Construct_UClass_UFlinchMotion_NoRegister()
	{
		return UFlinchMotion::StaticClass();
	}
	struct Z_Construct_UClass_UFlinchMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryLockOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryLockOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDoneFlinchEffect_MetaData[];
#endif
		static void NewProp_bHasDoneFlinchEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDoneFlinchEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlinchMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlinchMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlinchMotion.h" },
		{ "ModuleRelativePath", "FlinchMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlinchMotion_Statics::NewProp_ParryLockOutTime_MetaData[] = {
		{ "Category", "FlinchMotion" },
		{ "ModuleRelativePath", "FlinchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlinchMotion_Statics::NewProp_ParryLockOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "ParryLockOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFlinchMotion, ParryLockOutTime), METADATA_PARAMS(Z_Construct_UClass_UFlinchMotion_Statics::NewProp_ParryLockOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFlinchMotion_Statics::NewProp_ParryLockOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlinchMotion_Statics::NewProp_FlinchDuration_MetaData[] = {
		{ "Category", "FlinchMotion" },
		{ "ModuleRelativePath", "FlinchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlinchMotion_Statics::NewProp_FlinchDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFlinchMotion, FlinchDuration), METADATA_PARAMS(Z_Construct_UClass_UFlinchMotion_Statics::NewProp_FlinchDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFlinchMotion_Statics::NewProp_FlinchDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect_MetaData[] = {
		{ "Category", "FlinchMotion" },
		{ "ModuleRelativePath", "FlinchMotion.h" },
	};
#endif
	void Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect_SetBit(void* Obj)
	{
		((UFlinchMotion*)Obj)->bHasDoneFlinchEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDoneFlinchEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFlinchMotion), &Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlinchMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlinchMotion_Statics::NewProp_ParryLockOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlinchMotion_Statics::NewProp_FlinchDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlinchMotion_Statics::NewProp_bHasDoneFlinchEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlinchMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlinchMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlinchMotion_Statics::ClassParams = {
		&UFlinchMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFlinchMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFlinchMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFlinchMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFlinchMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlinchMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlinchMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlinchMotion, 4092667832);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlinchMotion(Z_Construct_UClass_UFlinchMotion, &UFlinchMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UFlinchMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlinchMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
