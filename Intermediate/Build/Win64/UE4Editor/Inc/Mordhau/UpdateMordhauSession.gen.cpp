// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/UpdateMordhauSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateMordhauSession() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UUpdateMordhauSession_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UUpdateMordhauSession();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FServerSearchResult();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FScriptMulticastDelegate();
// End Cross Module References
	void UUpdateMordhauSession::StaticRegisterNativesUUpdateMordhauSession()
	{
		UClass* Class = UUpdateMordhauSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateMordhauSession", &UUpdateMordhauSession::execUpdateMordhauSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics
	{
		struct UpdateMordhauSession_eventUpdateMordhauSession_Parms
		{
			FServerSearchResult Session;
			UUpdateMordhauSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UpdateMordhauSession_eventUpdateMordhauSession_Parms, ReturnValue), Z_Construct_UClass_UUpdateMordhauSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_Session = { UE4CodeGen_Private::EPropertyClass::Struct, "Session", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UpdateMordhauSession_eventUpdateMordhauSession_Parms, Session), Z_Construct_UScriptStruct_FServerSearchResult, METADATA_PARAMS(Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_Session_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_Session_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::NewProp_Session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "UpdateSessionFn" },
		{ "ModuleRelativePath", "UpdateMordhauSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateMordhauSession, "UpdateMordhauSession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(UpdateMordhauSession_eventUpdateMordhauSession_Parms), Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpdateMordhauSession_NoRegister()
	{
		return UUpdateMordhauSession::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateMordhauSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_onFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateMordhauSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateMordhauSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateMordhauSession_UpdateMordhauSession, "UpdateMordhauSession" }, // 4178040755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateMordhauSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UpdateMordhauSession.h" },
		{ "ModuleRelativePath", "UpdateMordhauSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onFailure_MetaData[] = {
		{ "Category", "UpdateMordhauSession" },
		{ "ModuleRelativePath", "UpdateMordhauSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onFailure = { UE4CodeGen_Private::EPropertyClass::Struct, "onFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpdateMordhauSession, onFailure), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onFailure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onSuccess_MetaData[] = {
		{ "Category", "UpdateMordhauSession" },
		{ "ModuleRelativePath", "UpdateMordhauSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onSuccess = { UE4CodeGen_Private::EPropertyClass::Struct, "onSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UUpdateMordhauSession, onSuccess), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpdateMordhauSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateMordhauSession_Statics::NewProp_onSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateMordhauSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateMordhauSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpdateMordhauSession_Statics::ClassParams = {
		&UUpdateMordhauSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UUpdateMordhauSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUpdateMordhauSession_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUpdateMordhauSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUpdateMordhauSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateMordhauSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpdateMordhauSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpdateMordhauSession, 257855530);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdateMordhauSession(Z_Construct_UClass_UUpdateMordhauSession, &UUpdateMordhauSession::StaticClass, TEXT("/Script/Mordhau"), TEXT("UUpdateMordhauSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateMordhauSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
