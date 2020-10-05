// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauWebAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauWebAPI() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWebAPI_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWebAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauWebAPI_Authenticate();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAuthStatus();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauWebAPI_IsAvailable();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers();
// End Cross Module References
	void UMordhauWebAPI::StaticRegisterNativesUMordhauWebAPI()
	{
		UClass* Class = UMordhauWebAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authenticate", &UMordhauWebAPI::execAuthenticate },
			{ "GetAuthStatus", &UMordhauWebAPI::execGetAuthStatus },
			{ "IsAvailable", &UMordhauWebAPI::execIsAvailable },
			{ "ProcessRequestQueue", &UMordhauWebAPI::execProcessRequestQueue },
			{ "RankBackendServers", &UMordhauWebAPI::execRankBackendServers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics
	{
		struct MordhauWebAPI_eventAuthenticate_Parms
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
	void Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauWebAPI_eventAuthenticate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauWebAPI_eventAuthenticate_Parms), &Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWebAPIFns" },
		{ "ModuleRelativePath", "MordhauWebAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauWebAPI, "Authenticate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWebAPI_eventAuthenticate_Parms), Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauWebAPI_Authenticate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauWebAPI_Authenticate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics
	{
		struct MordhauWebAPI_eventGetAuthStatus_Parms
		{
			EAuthStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauWebAPI_eventGetAuthStatus_Parms, ReturnValue), Z_Construct_UEnum_Mordhau_EAuthStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWebAPIFns" },
		{ "ModuleRelativePath", "MordhauWebAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauWebAPI, "GetAuthStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWebAPI_eventGetAuthStatus_Parms), Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics
	{
		struct MordhauWebAPI_eventIsAvailable_Parms
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
	void Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauWebAPI_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauWebAPI_eventIsAvailable_Parms), &Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWebAPIFns" },
		{ "ModuleRelativePath", "MordhauWebAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauWebAPI, "IsAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWebAPI_eventIsAvailable_Parms), Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauWebAPI_IsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauWebAPI_IsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWebAPIFns" },
		{ "ModuleRelativePath", "MordhauWebAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauWebAPI, "ProcessRequestQueue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics
	{
		struct MordhauWebAPI_eventRankBackendServers_Parms
		{
			int32 InPingedServerCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InPingedServerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::NewProp_InPingedServerCount = { UE4CodeGen_Private::EPropertyClass::Int, "InPingedServerCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWebAPI_eventRankBackendServers_Parms, InPingedServerCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::NewProp_InPingedServerCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWebAPIFns" },
		{ "ModuleRelativePath", "MordhauWebAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauWebAPI, "RankBackendServers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWebAPI_eventRankBackendServers_Parms), Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauWebAPI_NoRegister()
	{
		return UMordhauWebAPI::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauWebAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauWebAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauWebAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauWebAPI_Authenticate, "Authenticate" }, // 1991288828
		{ &Z_Construct_UFunction_UMordhauWebAPI_GetAuthStatus, "GetAuthStatus" }, // 3943179437
		{ &Z_Construct_UFunction_UMordhauWebAPI_IsAvailable, "IsAvailable" }, // 2714138372
		{ &Z_Construct_UFunction_UMordhauWebAPI_ProcessRequestQueue, "ProcessRequestQueue" }, // 1852381297
		{ &Z_Construct_UFunction_UMordhauWebAPI_RankBackendServers, "RankBackendServers" }, // 3024729977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWebAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauWebAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauWebAPI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauWebAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauWebAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauWebAPI_Statics::ClassParams = {
		&UMordhauWebAPI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauWebAPI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauWebAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauWebAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauWebAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauWebAPI, 3542324373);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauWebAPI(Z_Construct_UClass_UMordhauWebAPI, &UMordhauWebAPI::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauWebAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauWebAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
