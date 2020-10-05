// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EquipmentModeSwitchMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentModeSwitchMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEquipmentModeSwitchMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEquipmentModeSwitchMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EModeSwitchType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UEquipmentModeSwitchMotion::StaticRegisterNativesUEquipmentModeSwitchMotion()
	{
	}
	UClass* Z_Construct_UClass_UEquipmentModeSwitchMotion_NoRegister()
	{
		return UEquipmentModeSwitchMotion::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFinishedSwitch_MetaData[];
#endif
		static void NewProp_bHasFinishedSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFinishedSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondStageEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondStageEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstStageEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstStageEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwitchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwitchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSwitchingToAlt_MetaData[];
#endif
		static void NewProp_bIsSwitchingToAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSwitchingToAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualReparentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualReparentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualReparentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualReparentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchingEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchingEquipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage2Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stage2Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage1Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stage1Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentModeSwitchMotion.h" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch_SetBit(void* Obj)
	{
		((UEquipmentModeSwitchMotion*)Obj)->bHasFinishedSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasFinishedSwitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEquipmentModeSwitchMotion), &Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage = { UE4CodeGen_Private::EPropertyClass::Byte, "Stage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, Stage), nullptr, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SecondStageEnd_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SecondStageEnd = { UE4CodeGen_Private::EPropertyClass::Float, "SecondStageEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, SecondStageEnd), METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SecondStageEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SecondStageEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_FirstStageEnd_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_FirstStageEnd = { UE4CodeGen_Private::EPropertyClass::Float, "FirstStageEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, FirstStageEnd), METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_FirstStageEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_FirstStageEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType = { UE4CodeGen_Private::EPropertyClass::Enum, "SwitchType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, SwitchType), Z_Construct_UEnum_Mordhau_EModeSwitchType, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt_SetBit(void* Obj)
	{
		((UEquipmentModeSwitchMotion*)Obj)->bIsSwitchingToAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSwitchingToAlt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEquipmentModeSwitchMotion), &Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentRotation_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualReparentRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, VirtualReparentRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentLocation_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "VirtualReparentLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, VirtualReparentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchingEquipment_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchingEquipment = { UE4CodeGen_Private::EPropertyClass::Object, "SwitchingEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, SwitchingEquipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchingEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchingEquipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage2Duration_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage2Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Stage2Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, Stage2Duration), METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage2Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage2Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage1Duration_MetaData[] = {
		{ "Category", "EquipmentModeSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentModeSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage1Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Stage1Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentModeSwitchMotion, Stage1Duration), METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage1Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage1Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bHasFinishedSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SecondStageEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_FirstStageEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_bIsSwitchingToAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_VirtualReparentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_SwitchingEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage2Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::NewProp_Stage1Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentModeSwitchMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::ClassParams = {
		&UEquipmentModeSwitchMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentModeSwitchMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentModeSwitchMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentModeSwitchMotion, 3569654481);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentModeSwitchMotion(Z_Construct_UClass_UEquipmentModeSwitchMotion, &UEquipmentModeSwitchMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEquipmentModeSwitchMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentModeSwitchMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
