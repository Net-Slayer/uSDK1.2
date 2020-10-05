// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/FeintedMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeintedMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UFeintedMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UFeintedMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EFeintType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UFeintedMotion::StaticRegisterNativesUFeintedMotion()
	{
	}
	UClass* Z_Construct_UClass_UFeintedMotion_NoRegister()
	{
		return UFeintedMotion::StaticClass();
	}
	struct Z_Construct_UClass_UFeintedMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueuedMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueuedMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasQueuedMove_MetaData[];
#endif
		static void NewProp_bHasQueuedMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasQueuedMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FromMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FromMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeAndStabLockoutOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrikeAndStabLockoutOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeAndStabLockoutIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrikeAndStabLockoutIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchFeintLockout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CouchFeintLockout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueueWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineSpaceAdditiveBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpineSpaceAdditiveBlendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeintedMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FeintedMotion.h" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedAngle_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedAngle = { UE4CodeGen_Private::EPropertyClass::Float, "QueuedAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, QueuedAngle), METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove = { UE4CodeGen_Private::EPropertyClass::Enum, "QueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, QueuedMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	void Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove_SetBit(void* Obj)
	{
		((UFeintedMotion*)Obj)->bHasQueuedMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasQueuedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFeintedMotion), &Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove = { UE4CodeGen_Private::EPropertyClass::Enum, "FromMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, FromMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, Type), Z_Construct_UEnum_Mordhau_EFeintType, METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutOut_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutOut = { UE4CodeGen_Private::EPropertyClass::Struct, "StrikeAndStabLockoutOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, StrikeAndStabLockoutOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutIn_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutIn = { UE4CodeGen_Private::EPropertyClass::Struct, "StrikeAndStabLockoutIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, StrikeAndStabLockoutIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_CouchFeintLockout_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_CouchFeintLockout = { UE4CodeGen_Private::EPropertyClass::Float, "CouchFeintLockout", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, CouchFeintLockout), METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_CouchFeintLockout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_CouchFeintLockout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueueWindow_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueueWindow = { UE4CodeGen_Private::EPropertyClass::Float, "QueueWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, QueueWindow), METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueueWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueueWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeintedMotion_Statics::NewProp_SpineSpaceAdditiveBlendOutTime_MetaData[] = {
		{ "Category", "FeintedMotion" },
		{ "ModuleRelativePath", "FeintedMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFeintedMotion_Statics::NewProp_SpineSpaceAdditiveBlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "SpineSpaceAdditiveBlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFeintedMotion, SpineSpaceAdditiveBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_SpineSpaceAdditiveBlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::NewProp_SpineSpaceAdditiveBlendOutTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeintedMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueuedMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_bHasQueuedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_FromMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_StrikeAndStabLockoutIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_CouchFeintLockout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_QueueWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeintedMotion_Statics::NewProp_SpineSpaceAdditiveBlendOutTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeintedMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeintedMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFeintedMotion_Statics::ClassParams = {
		&UFeintedMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFeintedMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFeintedMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFeintedMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeintedMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFeintedMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFeintedMotion, 1618267196);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFeintedMotion(Z_Construct_UClass_UFeintedMotion, &UFeintedMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UFeintedMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeintedMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
