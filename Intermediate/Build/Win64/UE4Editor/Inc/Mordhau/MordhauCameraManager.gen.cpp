// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauCameraManager() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCameraManager_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_EnterMapView();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP();
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister();
// End Cross Module References
	static FName NAME_AMordhauCameraManager_OnHitFlash = FName(TEXT("OnHitFlash"));
	void AMordhauCameraManager::OnHitFlash(bool bIsDirectional, AActor* Source)
	{
		MordhauCameraManager_eventOnHitFlash_Parms Parms;
		Parms.bIsDirectional=bIsDirectional ? true : false;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauCameraManager_OnHitFlash),&Parms);
	}
	void AMordhauCameraManager::StaticRegisterNativesAMordhauCameraManager()
	{
		UClass* Class = AMordhauCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterCustomization", &AMordhauCameraManager::execEnterCustomization },
			{ "EnterMapView", &AMordhauCameraManager::execEnterMapView },
			{ "GetCameraCache", &AMordhauCameraManager::execGetCameraCache },
			{ "GetCameraStyleBP", &AMordhauCameraManager::execGetCameraStyleBP },
			{ "GetIsInCustomization", &AMordhauCameraManager::execGetIsInCustomization },
			{ "GetIsInMapView", &AMordhauCameraManager::execGetIsInMapView },
			{ "GetViewTargetBP", &AMordhauCameraManager::execGetViewTargetBP },
			{ "LeaveCustomization", &AMordhauCameraManager::execLeaveCustomization },
			{ "LeaveMapView", &AMordhauCameraManager::execLeaveMapView },
			{ "SetCameraStyleBP", &AMordhauCameraManager::execSetCameraStyleBP },
			{ "SetViewTargetBP", &AMordhauCameraManager::execSetViewTargetBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics
	{
		struct MordhauCameraManager_eventEnterCustomization_Parms
		{
			AActor* CustomizationTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::NewProp_CustomizationTarget = { UE4CodeGen_Private::EPropertyClass::Object, "CustomizationTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventEnterCustomization_Parms, CustomizationTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::NewProp_CustomizationTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "EnterCustomization", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventEnterCustomization_Parms), Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_EnterMapView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_EnterMapView_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_EnterMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "EnterMapView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_EnterMapView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_EnterMapView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_EnterMapView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_EnterMapView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics
	{
		struct MordhauCameraManager_eventGetCameraCache_Parms
		{
			FMinimalViewInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventGetCameraCache_Parms, ReturnValue), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "GetCameraCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventGetCameraCache_Parms), Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics
	{
		struct MordhauCameraManager_eventGetCameraStyleBP_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventGetCameraStyleBP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "GetCameraStyleBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventGetCameraStyleBP_Parms), Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics
	{
		struct MordhauCameraManager_eventGetIsInCustomization_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauCameraManager_eventGetIsInCustomization_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauCameraManager_eventGetIsInCustomization_Parms), &Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "GetIsInCustomization", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventGetIsInCustomization_Parms), Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics
	{
		struct MordhauCameraManager_eventGetIsInMapView_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauCameraManager_eventGetIsInMapView_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauCameraManager_eventGetIsInMapView_Parms), &Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "GetIsInMapView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventGetIsInMapView_Parms), Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics
	{
		struct MordhauCameraManager_eventGetViewTargetBP_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventGetViewTargetBP_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "GetViewTargetBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventGetViewTargetBP_Parms), Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "LeaveCustomization", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "LeaveMapView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static void NewProp_bIsDirectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirectional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventOnHitFlash_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::NewProp_bIsDirectional_SetBit(void* Obj)
	{
		((MordhauCameraManager_eventOnHitFlash_Parms*)Obj)->bIsDirectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::NewProp_bIsDirectional = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDirectional", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauCameraManager_eventOnHitFlash_Parms), &Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::NewProp_bIsDirectional_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::NewProp_bIsDirectional,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerEvent" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "OnHitFlash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauCameraManager_eventOnHitFlash_Parms), Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics
	{
		struct MordhauCameraManager_eventSetCameraStyleBP_Parms
		{
			FName NewCameraStyle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCameraStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewCameraStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::NewProp_NewCameraStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::NewProp_NewCameraStyle = { UE4CodeGen_Private::EPropertyClass::Name, "NewCameraStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventSetCameraStyleBP_Parms, NewCameraStyle), METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::NewProp_NewCameraStyle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::NewProp_NewCameraStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::NewProp_NewCameraStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "SetCameraStyleBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauCameraManager_eventSetCameraStyleBP_Parms), Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics
	{
		struct MordhauCameraManager_eventSetViewTargetBP_Parms
		{
			AActor* NewTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::NewProp_NewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "NewTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauCameraManager_eventSetViewTargetBP_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraManagerFns" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauCameraManager, "SetViewTargetBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauCameraManager_eventSetViewTargetBP_Parms), Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauCameraManager_NoRegister()
	{
		return AMordhauCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlashDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitFlashDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlashSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HitFlashSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHitFlashDirectional_MetaData[];
#endif
		static void NewProp_bIsHitFlashDirectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHitFlashDirectional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlashValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitFlashValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlashFadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitFlashFadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlashStayDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitFlashStayDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlashFadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitFlashFadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_QueuedViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastViewInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastViewInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInMainMenu_MetaData[];
#endif
		static void NewProp_bIsInMainMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogMultiplierChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtmosphericFogMultiplierChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtmosphericFog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauCameraManager_EnterCustomization, "EnterCustomization" }, // 747486419
		{ &Z_Construct_UFunction_AMordhauCameraManager_EnterMapView, "EnterMapView" }, // 3354255599
		{ &Z_Construct_UFunction_AMordhauCameraManager_GetCameraCache, "GetCameraCache" }, // 3871387444
		{ &Z_Construct_UFunction_AMordhauCameraManager_GetCameraStyleBP, "GetCameraStyleBP" }, // 2167986093
		{ &Z_Construct_UFunction_AMordhauCameraManager_GetIsInCustomization, "GetIsInCustomization" }, // 500269289
		{ &Z_Construct_UFunction_AMordhauCameraManager_GetIsInMapView, "GetIsInMapView" }, // 1669510432
		{ &Z_Construct_UFunction_AMordhauCameraManager_GetViewTargetBP, "GetViewTargetBP" }, // 298268682
		{ &Z_Construct_UFunction_AMordhauCameraManager_LeaveCustomization, "LeaveCustomization" }, // 2955257652
		{ &Z_Construct_UFunction_AMordhauCameraManager_LeaveMapView, "LeaveMapView" }, // 1077466907
		{ &Z_Construct_UFunction_AMordhauCameraManager_OnHitFlash, "OnHitFlash" }, // 2684399854
		{ &Z_Construct_UFunction_AMordhauCameraManager_SetCameraStyleBP, "SetCameraStyleBP" }, // 1514279072
		{ &Z_Construct_UFunction_AMordhauCameraManager_SetViewTargetBP, "SetViewTargetBP" }, // 3108847439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauCameraManager.h" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashDegrees_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "HitFlashDegrees", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, HitFlashDegrees), METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashDegrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashSource_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashSource = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HitFlashSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, HitFlashSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional_SetBit(void* Obj)
	{
		((AMordhauCameraManager*)Obj)->bIsHitFlashDirectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHitFlashDirectional", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauCameraManager), &Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashValue_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashValue = { UE4CodeGen_Private::EPropertyClass::Float, "HitFlashValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, HitFlashValue), METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeOutDuration_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "HitFlashFadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, HitFlashFadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashStayDuration_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashStayDuration = { UE4CodeGen_Private::EPropertyClass::Float, "HitFlashStayDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, HitFlashStayDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashStayDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashStayDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeInDuration_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "HitFlashFadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, HitFlashFadeInDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_QueuedViewTarget_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_QueuedViewTarget = { UE4CodeGen_Private::EPropertyClass::WeakObject, "QueuedViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, QueuedViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_QueuedViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_QueuedViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_LastViewInfo_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_LastViewInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LastViewInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, LastViewInfo), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_LastViewInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_LastViewInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu_SetBit(void* Obj)
	{
		((AMordhauCameraManager*)Obj)->bIsInMainMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauCameraManager), &Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFogMultiplierChangeSpeed_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFogMultiplierChangeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "AtmosphericFogMultiplierChangeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, AtmosphericFogMultiplierChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFogMultiplierChangeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFogMultiplierChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFog_MetaData[] = {
		{ "Category", "MordhauCameraManager" },
		{ "ModuleRelativePath", "MordhauCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFog = { UE4CodeGen_Private::EPropertyClass::Object, "AtmosphericFog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauCameraManager, AtmosphericFog), Z_Construct_UClass_AAtmosphericFog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFog_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsHitFlashDirectional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashStayDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_HitFlashFadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_QueuedViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_LastViewInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_bIsInMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFogMultiplierChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauCameraManager_Statics::NewProp_AtmosphericFog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauCameraManager_Statics::ClassParams = {
		&AMordhauCameraManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauCameraManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauCameraManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauCameraManager, 1677110966);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauCameraManager(Z_Construct_UClass_AMordhauCameraManager, &AMordhauCameraManager::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
