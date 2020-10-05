// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/StunMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStunMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UStunMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UStunMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void UStunMotion::StaticRegisterNativesUStunMotion()
	{
	}
	UClass* Z_Construct_UClass_UStunMotion_NoRegister()
	{
		return UStunMotion::StaticClass();
	}
	struct Z_Construct_UClass_UStunMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StunDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunGracePeriodExtraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StunGracePeriodExtraTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStunMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStunMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StunMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "StunMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStunMotion_Statics::NewProp_StunDuration_MetaData[] = {
		{ "Category", "StunMotion" },
		{ "ModuleRelativePath", "StunMotion.h" },
		{ "ToolTip", "0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStunMotion_Statics::NewProp_StunDuration = { UE4CodeGen_Private::EPropertyClass::Float, "StunDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStunMotion, StunDuration), METADATA_PARAMS(Z_Construct_UClass_UStunMotion_Statics::NewProp_StunDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStunMotion_Statics::NewProp_StunDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStunMotion_Statics::NewProp_StunGracePeriodExtraTime_MetaData[] = {
		{ "Category", "StunMotion" },
		{ "ModuleRelativePath", "StunMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStunMotion_Statics::NewProp_StunGracePeriodExtraTime = { UE4CodeGen_Private::EPropertyClass::Float, "StunGracePeriodExtraTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStunMotion, StunGracePeriodExtraTime), METADATA_PARAMS(Z_Construct_UClass_UStunMotion_Statics::NewProp_StunGracePeriodExtraTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStunMotion_Statics::NewProp_StunGracePeriodExtraTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStunMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStunMotion_Statics::NewProp_StunDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStunMotion_Statics::NewProp_StunGracePeriodExtraTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStunMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStunMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStunMotion_Statics::ClassParams = {
		&UStunMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UStunMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStunMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStunMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStunMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStunMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStunMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStunMotion, 3971379650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStunMotion(Z_Construct_UClass_UStunMotion, &UStunMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UStunMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStunMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
