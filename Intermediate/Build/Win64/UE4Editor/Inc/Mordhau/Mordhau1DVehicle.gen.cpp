// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/Mordhau1DVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhau1DVehicle() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhau1DVehicle_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhau1DVehicle();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauVehicle();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged();
// End Cross Module References
	static FName NAME_AMordhau1DVehicle_OnStepChanged = FName(TEXT("OnStepChanged"));
	void AMordhau1DVehicle::OnStepChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhau1DVehicle_OnStepChanged),NULL);
	}
	void AMordhau1DVehicle::StaticRegisterNativesAMordhau1DVehicle()
	{
	}
	struct Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mordhau1DVehicleEvent" },
		{ "ModuleRelativePath", "Mordhau1DVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhau1DVehicle, "OnStepChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhau1DVehicle_NoRegister()
	{
		return AMordhau1DVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMordhau1DVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhau1DVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhau1DVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhau1DVehicle_OnStepChanged, "OnStepChanged" }, // 3953608014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhau1DVehicle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mordhau1DVehicle.h" },
		{ "ModuleRelativePath", "Mordhau1DVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhau1DVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhau1DVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhau1DVehicle_Statics::ClassParams = {
		&AMordhau1DVehicle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhau1DVehicle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhau1DVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhau1DVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhau1DVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhau1DVehicle, 148336142);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhau1DVehicle(Z_Construct_UClass_AMordhau1DVehicle, &AMordhau1DVehicle::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhau1DVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhau1DVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
