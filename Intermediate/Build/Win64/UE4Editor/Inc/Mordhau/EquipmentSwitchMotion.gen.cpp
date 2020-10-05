// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EquipmentSwitchMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentSwitchMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEquipmentSwitchMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEquipmentSwitchMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_ESwitchStage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UEquipmentSwitchMotion::StaticRegisterNativesUEquipmentSwitchMotion()
	{
		UClass* Class = UEquipmentSwitchMotion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSwitchingTo", &UEquipmentSwitchMotion::execGetSwitchingTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics
	{
		struct EquipmentSwitchMotion_eventGetSwitchingTo_Parms
		{
			AMordhauEquipment* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EquipmentSwitchMotion_eventGetSwitchingTo_Parms, ReturnValue), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "EquipSwitchFn" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentSwitchMotion, "GetSwitchingTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EquipmentSwitchMotion_eventGetSwitchingTo_Parms), Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquipmentSwitchMotion_NoRegister()
	{
		return UEquipmentSwitchMotion::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentSwitchMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVirtualReparentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalVirtualReparentStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchingTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SwitchingTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchingToSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwitchingToSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFinishedSwitch_MetaData[];
#endif
		static void NewProp_bHasFinishedSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFinishedSwitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentSwitchMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentSwitchMotion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentSwitchMotion_GetSwitchingTo, "GetSwitchingTo" }, // 3255100522
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentSwitchMotion.h" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_LocalVirtualReparentStart_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_LocalVirtualReparentStart = { UE4CodeGen_Private::EPropertyClass::Float, "LocalVirtualReparentStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, LocalVirtualReparentStart), METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_LocalVirtualReparentStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_LocalVirtualReparentStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage = { UE4CodeGen_Private::EPropertyClass::Enum, "Stage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, Stage), Z_Construct_UEnum_Mordhau_ESwitchStage, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_ReachEnd_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_ReachEnd = { UE4CodeGen_Private::EPropertyClass::Float, "ReachEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, ReachEnd), METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_ReachEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_ReachEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenRight_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenRight = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HiddenRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, HiddenRight), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenLeft_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenLeft = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HiddenLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, HiddenLeft), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingTo_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingTo = { UE4CodeGen_Private::EPropertyClass::WeakObject, "SwitchingTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, SwitchingTo), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingToSlot_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingToSlot = { UE4CodeGen_Private::EPropertyClass::Byte, "SwitchingToSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEquipmentSwitchMotion, SwitchingToSlot), nullptr, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingToSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingToSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch_MetaData[] = {
		{ "Category", "EquipmentSwitchMotion" },
		{ "ModuleRelativePath", "EquipmentSwitchMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch_SetBit(void* Obj)
	{
		((UEquipmentSwitchMotion*)Obj)->bHasFinishedSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasFinishedSwitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEquipmentSwitchMotion), &Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentSwitchMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_LocalVirtualReparentStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Stage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_ReachEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_HiddenLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_SwitchingToSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentSwitchMotion_Statics::NewProp_bHasFinishedSwitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentSwitchMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentSwitchMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentSwitchMotion_Statics::ClassParams = {
		&UEquipmentSwitchMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEquipmentSwitchMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEquipmentSwitchMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentSwitchMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentSwitchMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentSwitchMotion, 2900079889);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentSwitchMotion(Z_Construct_UClass_UEquipmentSwitchMotion, &UEquipmentSwitchMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEquipmentSwitchMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentSwitchMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
