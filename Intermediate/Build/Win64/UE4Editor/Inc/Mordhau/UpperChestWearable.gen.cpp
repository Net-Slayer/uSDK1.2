// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/UpperChestWearable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpperChestWearable() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UUpperChestWearable_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UUpperChestWearable();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWearable();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UUpperChestWearable::StaticRegisterNativesUUpperChestWearable()
	{
		UClass* Class = UUpperChestWearable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArmsWearable", &UUpperChestWearable::execGetArmsWearable },
			{ "GetArmsWearablesNum", &UUpperChestWearable::execGetArmsWearablesNum },
			{ "GetLowerChestWearable", &UUpperChestWearable::execGetLowerChestWearable },
			{ "GetLowerChestWearablesNum", &UUpperChestWearable::execGetLowerChestWearablesNum },
			{ "GetShouldersWearable", &UUpperChestWearable::execGetShouldersWearable },
			{ "GetShouldersWearablesNum", &UUpperChestWearable::execGetShouldersWearablesNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics
	{
		struct UpperChestWearable_eventGetArmsWearable_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetArmsWearable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetArmsWearable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpperChestWearableFns" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpperChestWearable, "GetArmsWearable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UpperChestWearable_eventGetArmsWearable_Parms), Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics
	{
		struct UpperChestWearable_eventGetArmsWearablesNum_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetArmsWearablesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpperChestWearableFns" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpperChestWearable, "GetArmsWearablesNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UpperChestWearable_eventGetArmsWearablesNum_Parms), Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics
	{
		struct UpperChestWearable_eventGetLowerChestWearable_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetLowerChestWearable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetLowerChestWearable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpperChestWearableFns" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpperChestWearable, "GetLowerChestWearable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UpperChestWearable_eventGetLowerChestWearable_Parms), Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics
	{
		struct UpperChestWearable_eventGetLowerChestWearablesNum_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetLowerChestWearablesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpperChestWearableFns" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpperChestWearable, "GetLowerChestWearablesNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UpperChestWearable_eventGetLowerChestWearablesNum_Parms), Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics
	{
		struct UpperChestWearable_eventGetShouldersWearable_Parms
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetShouldersWearable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetShouldersWearable_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpperChestWearableFns" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpperChestWearable, "GetShouldersWearable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UpperChestWearable_eventGetShouldersWearable_Parms), Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics
	{
		struct UpperChestWearable_eventGetShouldersWearablesNum_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpperChestWearable_eventGetShouldersWearablesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpperChestWearableFns" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpperChestWearable, "GetShouldersWearablesNum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UpperChestWearable_eventGetShouldersWearablesNum_Parms), Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpperChestWearable_NoRegister()
	{
		return UUpperChestWearable::StaticClass();
	}
	struct Z_Construct_UClass_UUpperChestWearable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldersWearables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShouldersWearables;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ShouldersWearables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsWearables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmsWearables;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ArmsWearables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerChestWearables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LowerChestWearables;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LowerChestWearables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShoulders_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultShoulders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultArms_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultArms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLowerChest_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultLowerChest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BellyBouncyLimitsSlim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BellyBouncyLimitsSlim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BellyBouncyLimitsFat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BellyBouncyLimitsFat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreastBouncyLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreastBouncyLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBouncyLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineBouncyLimits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpperChestWearable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauWearable,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpperChestWearable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpperChestWearable_GetArmsWearable, "GetArmsWearable" }, // 1762898775
		{ &Z_Construct_UFunction_UUpperChestWearable_GetArmsWearablesNum, "GetArmsWearablesNum" }, // 3566713546
		{ &Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearable, "GetLowerChestWearable" }, // 1897554668
		{ &Z_Construct_UFunction_UUpperChestWearable_GetLowerChestWearablesNum, "GetLowerChestWearablesNum" }, // 318061579
		{ &Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearable, "GetShouldersWearable" }, // 661310493
		{ &Z_Construct_UFunction_UUpperChestWearable_GetShouldersWearablesNum, "GetShouldersWearablesNum" }, // 852949688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UpperChestWearable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables = { UE4CodeGen_Private::EPropertyClass::Array, "ShouldersWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, ShouldersWearables), METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "ShouldersWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables = { UE4CodeGen_Private::EPropertyClass::Array, "ArmsWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, ArmsWearables), METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "ArmsWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables = { UE4CodeGen_Private::EPropertyClass::Array, "LowerChestWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, LowerChestWearables), METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "LowerChestWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultShoulders_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultShoulders = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultShoulders", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, DefaultShoulders), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultShoulders_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultShoulders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultArms_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultArms = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultArms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, DefaultArms), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultArms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultArms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultLowerChest_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultLowerChest = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultLowerChest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, DefaultLowerChest), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultLowerChest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultLowerChest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsSlim_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsSlim = { UE4CodeGen_Private::EPropertyClass::Struct, "BellyBouncyLimitsSlim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, BellyBouncyLimitsSlim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsSlim_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsSlim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsFat_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsFat = { UE4CodeGen_Private::EPropertyClass::Struct, "BellyBouncyLimitsFat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, BellyBouncyLimitsFat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsFat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsFat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BreastBouncyLimits_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BreastBouncyLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "BreastBouncyLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, BreastBouncyLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BreastBouncyLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BreastBouncyLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_SpineBouncyLimits_MetaData[] = {
		{ "Category", "UpperChestWearable" },
		{ "ModuleRelativePath", "UpperChestWearable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_SpineBouncyLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "SpineBouncyLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpperChestWearable, SpineBouncyLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_SpineBouncyLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_SpineBouncyLimits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpperChestWearable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ShouldersWearables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_ArmsWearables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_LowerChestWearables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultShoulders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultArms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_DefaultLowerChest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsSlim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BellyBouncyLimitsFat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_BreastBouncyLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpperChestWearable_Statics::NewProp_SpineBouncyLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpperChestWearable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpperChestWearable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpperChestWearable_Statics::ClassParams = {
		&UUpperChestWearable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UUpperChestWearable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUpperChestWearable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUpperChestWearable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpperChestWearable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpperChestWearable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpperChestWearable, 2131996534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpperChestWearable(Z_Construct_UClass_UUpperChestWearable, &UUpperChestWearable::StaticClass, TEXT("/Script/Mordhau"), TEXT("UUpperChestWearable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpperChestWearable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
