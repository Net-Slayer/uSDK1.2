// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/HeadWearable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadWearable() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UHeadWearable_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UHeadWearable();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWearable();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UHeadWearable_GetCoifWearable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum();
// End Cross Module References
	void UHeadWearable::StaticRegisterNativesUHeadWearable()
	{
		UClass* Class = UHeadWearable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCoifWearable", &UHeadWearable::execGetCoifWearable },
			{ "GetCoifWearablesNum", &UHeadWearable::execGetCoifWearablesNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics
	{
		struct HeadWearable_eventGetCoifWearable_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadWearable_eventGetCoifWearable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadWearable_eventGetCoifWearable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "HeadWearableFns" },
		{ "ModuleRelativePath", "HeadWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadWearable, "GetCoifWearable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HeadWearable_eventGetCoifWearable_Parms), Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadWearable_GetCoifWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadWearable_GetCoifWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics
	{
		struct HeadWearable_eventGetCoifWearablesNum_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadWearable_eventGetCoifWearablesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "HeadWearableFns" },
		{ "ModuleRelativePath", "HeadWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadWearable, "GetCoifWearablesNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HeadWearable_eventGetCoifWearablesNum_Parms), Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeadWearable_NoRegister()
	{
		return UHeadWearable::StaticClass();
	}
	struct Z_Construct_UClass_UHeadWearable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoifWearables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CoifWearables;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CoifWearables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCoif_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultCoif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadWearable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauWearable,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeadWearable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeadWearable_GetCoifWearable, "GetCoifWearable" }, // 2699824900
		{ &Z_Construct_UFunction_UHeadWearable_GetCoifWearablesNum, "GetCoifWearablesNum" }, // 2796484705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadWearable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HeadWearable.h" },
		{ "ModuleRelativePath", "HeadWearable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables_MetaData[] = {
		{ "Category", "HeadWearable" },
		{ "ModuleRelativePath", "HeadWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables = { UE4CodeGen_Private::EPropertyClass::Array, "CoifWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UHeadWearable, CoifWearables), METADATA_PARAMS(Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "CoifWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadWearable_Statics::NewProp_DefaultCoif_MetaData[] = {
		{ "Category", "HeadWearable" },
		{ "ModuleRelativePath", "HeadWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeadWearable_Statics::NewProp_DefaultCoif = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultCoif", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHeadWearable, DefaultCoif), nullptr, METADATA_PARAMS(Z_Construct_UClass_UHeadWearable_Statics::NewProp_DefaultCoif_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHeadWearable_Statics::NewProp_DefaultCoif_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeadWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadWearable_Statics::NewProp_CoifWearables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeadWearable_Statics::NewProp_DefaultCoif,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadWearable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadWearable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeadWearable_Statics::ClassParams = {
		&UHeadWearable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UHeadWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHeadWearable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHeadWearable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHeadWearable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadWearable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeadWearable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeadWearable, 1839141531);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadWearable(Z_Construct_UClass_UHeadWearable, &UHeadWearable::StaticClass, TEXT("/Script/Mordhau"), TEXT("UHeadWearable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadWearable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
