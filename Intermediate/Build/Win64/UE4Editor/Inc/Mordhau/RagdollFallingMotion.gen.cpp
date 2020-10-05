// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/RagdollFallingMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRagdollFallingMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_URagdollFallingMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_URagdollFallingMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void URagdollFallingMotion::StaticRegisterNativesURagdollFallingMotion()
	{
	}
	UClass* Z_Construct_UClass_URagdollFallingMotion_NoRegister()
	{
		return URagdollFallingMotion::StaticClass();
	}
	struct Z_Construct_UClass_URagdollFallingMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGettingUp_MetaData[];
#endif
		static void NewProp_bIsGettingUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGettingUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URagdollFallingMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URagdollFallingMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RagdollFallingMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RagdollFallingMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp_MetaData[] = {
		{ "Category", "RagdollFallingMotion" },
		{ "ModuleRelativePath", "RagdollFallingMotion.h" },
	};
#endif
	void Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp_SetBit(void* Obj)
	{
		((URagdollFallingMotion*)Obj)->bIsGettingUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGettingUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URagdollFallingMotion), &Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URagdollFallingMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URagdollFallingMotion_Statics::NewProp_bIsGettingUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URagdollFallingMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URagdollFallingMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URagdollFallingMotion_Statics::ClassParams = {
		&URagdollFallingMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_URagdollFallingMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_URagdollFallingMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URagdollFallingMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URagdollFallingMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URagdollFallingMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URagdollFallingMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URagdollFallingMotion, 1745972037);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URagdollFallingMotion(Z_Construct_UClass_URagdollFallingMotion, &URagdollFallingMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("URagdollFallingMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URagdollFallingMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
