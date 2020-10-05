// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/LegsWearable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegsWearable() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ULegsWearable_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ULegsWearable();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWearable();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_ULegsWearable_GetFeetWearable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ULegsWearable::StaticRegisterNativesULegsWearable()
	{
		UClass* Class = ULegsWearable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeetWearable", &ULegsWearable::execGetFeetWearable },
			{ "GetFeetWearablesNum", &ULegsWearable::execGetFeetWearablesNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics
	{
		struct LegsWearable_eventGetFeetWearable_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LegsWearable_eventGetFeetWearable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LegsWearable_eventGetFeetWearable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LegsWearableFns" },
		{ "ModuleRelativePath", "LegsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegsWearable, "GetFeetWearable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LegsWearable_eventGetFeetWearable_Parms), Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegsWearable_GetFeetWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegsWearable_GetFeetWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics
	{
		struct LegsWearable_eventGetFeetWearablesNum_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LegsWearable_eventGetFeetWearablesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "LegsWearableFns" },
		{ "ModuleRelativePath", "LegsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegsWearable, "GetFeetWearablesNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LegsWearable_eventGetFeetWearablesNum_Parms), Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULegsWearable_NoRegister()
	{
		return ULegsWearable::StaticClass();
	}
	struct Z_Construct_UClass_ULegsWearable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetWearables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FeetWearables;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_FeetWearables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFeet_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFeet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsBouncyLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegsBouncyLimits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegsWearable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauWearable,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegsWearable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegsWearable_GetFeetWearable, "GetFeetWearable" }, // 1159229359
		{ &Z_Construct_UFunction_ULegsWearable_GetFeetWearablesNum, "GetFeetWearablesNum" }, // 808965294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegsWearable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LegsWearable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LegsWearable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables_MetaData[] = {
		{ "Category", "LegsWearable" },
		{ "ModuleRelativePath", "LegsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables = { UE4CodeGen_Private::EPropertyClass::Array, "FeetWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ULegsWearable, FeetWearables), METADATA_PARAMS(Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "FeetWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegsWearable_Statics::NewProp_DefaultFeet_MetaData[] = {
		{ "Category", "LegsWearable" },
		{ "ModuleRelativePath", "LegsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULegsWearable_Statics::NewProp_DefaultFeet = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultFeet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULegsWearable, DefaultFeet), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULegsWearable_Statics::NewProp_DefaultFeet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULegsWearable_Statics::NewProp_DefaultFeet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegsWearable_Statics::NewProp_LegsBouncyLimits_MetaData[] = {
		{ "Category", "LegsWearable" },
		{ "ModuleRelativePath", "LegsWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegsWearable_Statics::NewProp_LegsBouncyLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "LegsBouncyLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULegsWearable, LegsBouncyLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULegsWearable_Statics::NewProp_LegsBouncyLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULegsWearable_Statics::NewProp_LegsBouncyLimits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULegsWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegsWearable_Statics::NewProp_FeetWearables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegsWearable_Statics::NewProp_DefaultFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegsWearable_Statics::NewProp_LegsBouncyLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegsWearable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegsWearable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegsWearable_Statics::ClassParams = {
		&ULegsWearable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULegsWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULegsWearable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULegsWearable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULegsWearable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegsWearable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegsWearable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegsWearable, 4029815705);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegsWearable(Z_Construct_UClass_ULegsWearable, &ULegsWearable::StaticClass, TEXT("/Script/Mordhau"), TEXT("ULegsWearable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegsWearable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
