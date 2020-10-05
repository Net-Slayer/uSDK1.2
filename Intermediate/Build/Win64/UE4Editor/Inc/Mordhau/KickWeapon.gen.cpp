// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/KickWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKickWeapon() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AKickWeapon_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AKickWeapon();
	MORDHAU_API UClass* Z_Construct_UClass_AVirtualWeapon();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	void AKickWeapon::StaticRegisterNativesAKickWeapon()
	{
	}
	UClass* Z_Construct_UClass_AKickWeapon_NoRegister()
	{
		return AKickWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AKickWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickComboAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickComboAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickRiposteAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickRiposteAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKickWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVirtualWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKickWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KickWeapon.h" },
		{ "ModuleRelativePath", "KickWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickBounce_MetaData[] = {
		{ "Category", "KickWeapon" },
		{ "ModuleRelativePath", "KickWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickBounce = { UE4CodeGen_Private::EPropertyClass::Object, "KickBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKickWeapon, KickBounce), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickComboAnimation_MetaData[] = {
		{ "Category", "KickWeapon" },
		{ "ModuleRelativePath", "KickWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickComboAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "KickComboAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKickWeapon, KickComboAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickComboAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickComboAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickRiposteAnimation_MetaData[] = {
		{ "Category", "KickWeapon" },
		{ "ModuleRelativePath", "KickWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickRiposteAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "KickRiposteAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKickWeapon, KickRiposteAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickRiposteAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickRiposteAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickAnimation_MetaData[] = {
		{ "Category", "KickWeapon" },
		{ "ModuleRelativePath", "KickWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "KickAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKickWeapon, KickAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKickWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickComboAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickRiposteAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKickWeapon_Statics::NewProp_KickAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKickWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKickWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKickWeapon_Statics::ClassParams = {
		&AKickWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AKickWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AKickWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AKickWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKickWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKickWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKickWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKickWeapon, 613893544);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKickWeapon(Z_Construct_UClass_AKickWeapon, &AKickWeapon::StaticClass, TEXT("/Script/Mordhau"), TEXT("AKickWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKickWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
