// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/PommelThrowDrawMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePommelThrowDrawMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UPommelThrowDrawMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UPommelThrowDrawMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
// End Cross Module References
	void UPommelThrowDrawMotion::StaticRegisterNativesUPommelThrowDrawMotion()
	{
	}
	UClass* Z_Construct_UClass_UPommelThrowDrawMotion_NoRegister()
	{
		return UPommelThrowDrawMotion::StaticClass();
	}
	struct Z_Construct_UClass_UPommelThrowDrawMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying1P_MetaData[];
#endif
		static void NewProp_bIsPlaying1P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFiredLocally_MetaData[];
#endif
		static void NewProp_bHasFiredLocally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFiredLocally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdStageEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdStageEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondStageEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondStageEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstStageEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstStageEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedEquipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPommelThrowDrawMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PommelThrowDrawMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_CurrentMontage_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_CurrentMontage = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPommelThrowDrawMotion, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_CurrentMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_CurrentMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	void Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P_SetBit(void* Obj)
	{
		((UPommelThrowDrawMotion*)Obj)->bIsPlaying1P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlaying1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPommelThrowDrawMotion), &Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	void Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally_SetBit(void* Obj)
	{
		((UPommelThrowDrawMotion*)Obj)->bHasFiredLocally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasFiredLocally", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPommelThrowDrawMotion), &Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_ThirdStageEnd_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_ThirdStageEnd = { UE4CodeGen_Private::EPropertyClass::Float, "ThirdStageEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPommelThrowDrawMotion, ThirdStageEnd), METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_ThirdStageEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_ThirdStageEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_SecondStageEnd_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_SecondStageEnd = { UE4CodeGen_Private::EPropertyClass::Float, "SecondStageEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPommelThrowDrawMotion, SecondStageEnd), METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_SecondStageEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_SecondStageEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_FirstStageEnd_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_FirstStageEnd = { UE4CodeGen_Private::EPropertyClass::Float, "FirstStageEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPommelThrowDrawMotion, FirstStageEnd), METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_FirstStageEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_FirstStageEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_Stage = { UE4CodeGen_Private::EPropertyClass::Byte, "Stage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPommelThrowDrawMotion, Stage), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_Stage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_Stage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_RangedEquipment_MetaData[] = {
		{ "Category", "PommelThrowDrawMotion" },
		{ "ModuleRelativePath", "PommelThrowDrawMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_RangedEquipment = { UE4CodeGen_Private::EPropertyClass::Object, "RangedEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPommelThrowDrawMotion, RangedEquipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_RangedEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_RangedEquipment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPommelThrowDrawMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_CurrentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bIsPlaying1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_bHasFiredLocally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_ThirdStageEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_SecondStageEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_FirstStageEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPommelThrowDrawMotion_Statics::NewProp_RangedEquipment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPommelThrowDrawMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPommelThrowDrawMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPommelThrowDrawMotion_Statics::ClassParams = {
		&UPommelThrowDrawMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPommelThrowDrawMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPommelThrowDrawMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPommelThrowDrawMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPommelThrowDrawMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPommelThrowDrawMotion, 241855698);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPommelThrowDrawMotion(Z_Construct_UClass_UPommelThrowDrawMotion, &UPommelThrowDrawMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UPommelThrowDrawMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPommelThrowDrawMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
