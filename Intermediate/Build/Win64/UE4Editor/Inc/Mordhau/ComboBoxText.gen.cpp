// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ComboBoxText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxText() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UComboBoxText_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UComboBoxText();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_AddOption();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_ClearOptions();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_ClearSelection();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_FindOptionIndex();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_GetOptionCount();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_GetSelectedOption();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_RefreshOptions();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_RemoveOption();
	MORDHAU_API UFunction* Z_Construct_UFunction_UComboBoxText_SetSelectedOption();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FScriptMulticastDelegate();
// End Cross Module References
	void UComboBoxText::StaticRegisterNativesUComboBoxText()
	{
		UClass* Class = UComboBoxText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOption", &UComboBoxText::execAddOption },
			{ "ClearOptions", &UComboBoxText::execClearOptions },
			{ "ClearSelection", &UComboBoxText::execClearSelection },
			{ "FindOptionIndex", &UComboBoxText::execFindOptionIndex },
			{ "GetOptionAtIndex", &UComboBoxText::execGetOptionAtIndex },
			{ "GetOptionCount", &UComboBoxText::execGetOptionCount },
			{ "GetSelectedOption", &UComboBoxText::execGetSelectedOption },
			{ "OnOpeningEvent__DelegateSignature", &UComboBoxText::execOnOpeningEvent__DelegateSignature },
			{ "RefreshOptions", &UComboBoxText::execRefreshOptions },
			{ "RemoveOption", &UComboBoxText::execRemoveOption },
			{ "SetSelectedOption", &UComboBoxText::execSetSelectedOption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboBoxText_AddOption_Statics
	{
		struct ComboBoxText_eventAddOption_Parms
		{
			FText Option;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_AddOption_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboBoxText_AddOption_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Text, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventAddOption_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_AddOption_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_AddOption_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_AddOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_AddOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_AddOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "AddOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ComboBoxText_eventAddOption_Parms), Z_Construct_UFunction_UComboBoxText_AddOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_AddOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_AddOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_AddOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_AddOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_AddOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_ClearOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_ClearOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_ClearOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "ClearOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_ClearOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_ClearOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_ClearOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_ClearOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "ClearSelection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_ClearSelection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics
	{
		struct ComboBoxText_eventFindOptionIndex_Parms
		{
			FText Option;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventFindOptionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Text, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventFindOptionIndex_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "FindOptionIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ComboBoxText_eventFindOptionIndex_Parms), Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_FindOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_FindOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics
	{
		struct ComboBoxText_eventGetOptionAtIndex_Parms
		{
			int32 Index;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventGetOptionAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventGetOptionAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "GetOptionAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxText_eventGetOptionAtIndex_Parms), Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics
	{
		struct ComboBoxText_eventGetOptionCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventGetOptionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "GetOptionCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxText_eventGetOptionCount_Parms), Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_GetOptionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_GetOptionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics
	{
		struct ComboBoxText_eventGetSelectedOption_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "GetSelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxText_eventGetSelectedOption_Parms), Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_GetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_GetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "OnOpeningEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_RefreshOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_RefreshOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_RefreshOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "RefreshOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_RefreshOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_RefreshOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_RefreshOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_RefreshOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics
	{
		struct ComboBoxText_eventRemoveOption_Parms
		{
			FText Option;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboBoxText_eventRemoveOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ComboBoxText_eventRemoveOption_Parms), &Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Text, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventRemoveOption_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "RemoveOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ComboBoxText_eventRemoveOption_Parms), Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_RemoveOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_RemoveOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics
	{
		struct ComboBoxText_eventSetSelectedOption_Parms
		{
			FText Option;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Text, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ComboBoxText_eventSetSelectedOption_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBoxFns" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxText, "SetSelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ComboBoxText_eventSetSelectedOption_Parms), Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxText_SetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxText_SetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComboBoxText_NoRegister()
	{
		return UComboBoxText::StaticClass();
	}
	struct Z_Construct_UClass_UComboBoxText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpening_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnOpening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnSelectionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGamepadNavigationMode_MetaData[];
#endif
		static void NewProp_EnableGamepadNavigationMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGamepadNavigationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasDownArrow_MetaData[];
#endif
		static void NewProp_HasDownArrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasDownArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxListHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxListHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SelectedOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOptions;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultOptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBoxText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboBoxText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxText_AddOption, "AddOption" }, // 4149700006
		{ &Z_Construct_UFunction_UComboBoxText_ClearOptions, "ClearOptions" }, // 1180938299
		{ &Z_Construct_UFunction_UComboBoxText_ClearSelection, "ClearSelection" }, // 1805774957
		{ &Z_Construct_UFunction_UComboBoxText_FindOptionIndex, "FindOptionIndex" }, // 2088119894
		{ &Z_Construct_UFunction_UComboBoxText_GetOptionAtIndex, "GetOptionAtIndex" }, // 4016083594
		{ &Z_Construct_UFunction_UComboBoxText_GetOptionCount, "GetOptionCount" }, // 1894815071
		{ &Z_Construct_UFunction_UComboBoxText_GetSelectedOption, "GetSelectedOption" }, // 4025959389
		{ &Z_Construct_UFunction_UComboBoxText_OnOpeningEvent__DelegateSignature, "OnOpeningEvent__DelegateSignature" }, // 3866969622
		{ &Z_Construct_UFunction_UComboBoxText_RefreshOptions, "RefreshOptions" }, // 1048694880
		{ &Z_Construct_UFunction_UComboBoxText_RemoveOption, "RemoveOption" }, // 3702626712
		{ &Z_Construct_UFunction_UComboBoxText_SetSelectedOption, "SetSelectedOption" }, // 3642212026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ComboBoxText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnOpening_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnOpening = { UE4CodeGen_Private::EPropertyClass::Struct, "OnOpening", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxText, OnOpening), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnOpening_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnOpening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nstruct FScriptDelegate                             OnGenerateWidgetEvent;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnSelectionChanged = { UE4CodeGen_Private::EPropertyClass::Struct, "OnSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxText, OnSelectionChanged), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnSelectionChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnSelectionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nstruct FSlateFontInfo                              Font;\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\nFSlateColor                                 ForegroundColor;" },
	};
#endif
	void Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UComboBoxText*)Obj)->bIsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxText), &Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	void Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode_SetBit(void* Obj)
	{
		((UComboBoxText*)Obj)->EnableGamepadNavigationMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableGamepadNavigationMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxText), &Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	void Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow_SetBit(void* Obj)
	{
		((UComboBoxText*)Obj)->HasDownArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow = { UE4CodeGen_Private::EPropertyClass::Bool, "HasDownArrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxText), &Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_MaxListHeight_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nstruct FComboBoxStyle                              WidgetStyle;\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\nstruct FTableRowStyle                              ItemStyle;//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//struct FMargin                                     ContentPadding;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_MaxListHeight = { UE4CodeGen_Private::EPropertyClass::Float, "MaxListHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxText, MaxListHeight), METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_MaxListHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_MaxListHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_SelectedOption_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_SelectedOption = { UE4CodeGen_Private::EPropertyClass::Text, "SelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxText, SelectedOption), METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_SelectedOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_SelectedOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions_MetaData[] = {
		{ "Category", "ComboBoxText" },
		{ "ModuleRelativePath", "ComboBoxText.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxText, DefaultOptions), METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions_Inner = { UE4CodeGen_Private::EPropertyClass::Text, "DefaultOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnOpening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_OnSelectionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_bIsFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_EnableGamepadNavigationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_HasDownArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_MaxListHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_SelectedOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxText_Statics::NewProp_DefaultOptions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBoxText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxText_Statics::ClassParams = {
		&UComboBoxText::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UComboBoxText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UComboBoxText_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UComboBoxText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBoxText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComboBoxText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboBoxText, 3459259962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBoxText(Z_Construct_UClass_UComboBoxText, &UComboBoxText::StaticClass, TEXT("/Script/Mordhau"), TEXT("UComboBoxText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
