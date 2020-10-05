// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauShield() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauShield_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauShield();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void AMordhauShield::StaticRegisterNativesAMordhauShield()
	{
	}
	UClass* Z_Construct_UClass_AMordhauShield_NoRegister()
	{
		return AMordhauShield::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowShieldWall_MetaData[];
#endif
		static void NewProp_bAllowShieldWall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowShieldWall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBlockMeleePassively_MetaData[];
#endif
		static void NewProp_bCanBlockMeleePassively_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBlockMeleePassively;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveBlockDamageModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PassiveBlockDamageModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauShield_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauShield.h" },
		{ "ModuleRelativePath", "MordhauShield.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall_MetaData[] = {
		{ "Category", "Mordhau Shield" },
		{ "ModuleRelativePath", "MordhauShield.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall_SetBit(void* Obj)
	{
		((AMordhauShield*)Obj)->bAllowShieldWall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowShieldWall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauShield), &Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively_MetaData[] = {
		{ "Category", "Mordhau Shield" },
		{ "ModuleRelativePath", "MordhauShield.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively_SetBit(void* Obj)
	{
		((AMordhauShield*)Obj)->bCanBlockMeleePassively = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBlockMeleePassively", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauShield), &Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauShield_Statics::NewProp_PassiveBlockDamageModifier_MetaData[] = {
		{ "Category", "Mordhau Shield" },
		{ "ModuleRelativePath", "MordhauShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauShield_Statics::NewProp_PassiveBlockDamageModifier = { UE4CodeGen_Private::EPropertyClass::Float, "PassiveBlockDamageModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauShield, PassiveBlockDamageModifier), METADATA_PARAMS(Z_Construct_UClass_AMordhauShield_Statics::NewProp_PassiveBlockDamageModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauShield_Statics::NewProp_PassiveBlockDamageModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauShield_Statics::NewProp_bAllowShieldWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauShield_Statics::NewProp_bCanBlockMeleePassively,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauShield_Statics::NewProp_PassiveBlockDamageModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauShield_Statics::ClassParams = {
		&AMordhauShield::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMordhauShield_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauShield_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauShield_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauShield, 3327602650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauShield(Z_Construct_UClass_AMordhauShield, &AMordhauShield::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
