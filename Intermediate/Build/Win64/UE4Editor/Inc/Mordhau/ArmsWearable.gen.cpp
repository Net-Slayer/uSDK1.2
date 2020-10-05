// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ArmsWearable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmsWearable() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UArmsWearable_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UArmsWearable();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWearable();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UArmsWearable_GetHandsWearable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UArmsWearable::StaticRegisterNativesUArmsWearable()
	{
		UClass* Class = UArmsWearable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandsWearable", &UArmsWearable::execGetHandsWearable },
			{ "GetHandsWearablesNum", &UArmsWearable::execGetHandsWearablesNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics
	{
		struct ArmsWearable_eventGetHandsWearable_Parms
		{
			int32 Index;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ArmsWearable_eventGetHandsWearable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ArmsWearable_eventGetHandsWearable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArmsWearableFns" },
		{ "ModuleRelativePath", "ArmsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArmsWearable, "GetHandsWearable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ArmsWearable_eventGetHandsWearable_Parms), Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArmsWearable_GetHandsWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArmsWearable_GetHandsWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics
	{
		struct ArmsWearable_eventGetHandsWearablesNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ArmsWearable_eventGetHandsWearablesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArmsWearableFns" },
		{ "ModuleRelativePath", "ArmsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArmsWearable, "GetHandsWearablesNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ArmsWearable_eventGetHandsWearablesNum_Parms), Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArmsWearable_NoRegister()
	{
		return UArmsWearable::StaticClass();
	}
	struct Z_Construct_UClass_UArmsWearable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandsWearables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandsWearables;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_HandsWearables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHands_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultHands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsBouncyLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmsBouncyLimits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArmsWearable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauWearable,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArmsWearable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArmsWearable_GetHandsWearable, "GetHandsWearable" }, // 2973307245
		{ &Z_Construct_UFunction_UArmsWearable_GetHandsWearablesNum, "GetHandsWearablesNum" }, // 1141873542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmsWearable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmsWearable.h" },
		{ "ModuleRelativePath", "ArmsWearable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables_MetaData[] = {
		{ "Category", "ArmsWearable" },
		{ "ModuleRelativePath", "ArmsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables = { UE4CodeGen_Private::EPropertyClass::Array, "HandsWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UArmsWearable, HandsWearables), METADATA_PARAMS(Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "HandsWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmsWearable_Statics::NewProp_DefaultHands_MetaData[] = {
		{ "Category", "ArmsWearable" },
		{ "ModuleRelativePath", "ArmsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArmsWearable_Statics::NewProp_DefaultHands = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultHands", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UArmsWearable, DefaultHands), nullptr, METADATA_PARAMS(Z_Construct_UClass_UArmsWearable_Statics::NewProp_DefaultHands_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArmsWearable_Statics::NewProp_DefaultHands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmsWearable_Statics::NewProp_ArmsBouncyLimits_MetaData[] = {
		{ "Category", "ArmsWearable" },
		{ "ModuleRelativePath", "ArmsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArmsWearable_Statics::NewProp_ArmsBouncyLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "ArmsBouncyLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UArmsWearable, ArmsBouncyLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UArmsWearable_Statics::NewProp_ArmsBouncyLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArmsWearable_Statics::NewProp_ArmsBouncyLimits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArmsWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmsWearable_Statics::NewProp_HandsWearables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmsWearable_Statics::NewProp_DefaultHands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmsWearable_Statics::NewProp_ArmsBouncyLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArmsWearable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArmsWearable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArmsWearable_Statics::ClassParams = {
		&UArmsWearable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UArmsWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UArmsWearable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UArmsWearable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UArmsWearable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArmsWearable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArmsWearable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArmsWearable, 1030543980);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArmsWearable(Z_Construct_UClass_UArmsWearable, &UArmsWearable::StaticClass, TEXT("/Script/Mordhau"), TEXT("UArmsWearable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArmsWearable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
