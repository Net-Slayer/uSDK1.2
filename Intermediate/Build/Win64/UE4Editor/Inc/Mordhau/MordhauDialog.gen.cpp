// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauDialog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauDialog() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauDialog_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauDialog();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauDialog_Hide();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauDialog_Show();
// End Cross Module References
	static FName NAME_UMordhauDialog_Hide = FName(TEXT("Hide"));
	void UMordhauDialog::Hide()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMordhauDialog_Hide),NULL);
	}
	static FName NAME_UMordhauDialog_Show = FName(TEXT("Show"));
	void UMordhauDialog::Show()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMordhauDialog_Show),NULL);
	}
	void UMordhauDialog::StaticRegisterNativesUMordhauDialog()
	{
	}
	struct Z_Construct_UFunction_UMordhauDialog_Hide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauDialog_Hide_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauDialogEvents" },
		{ "ModuleRelativePath", "MordhauDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauDialog_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauDialog, "Hide", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauDialog_Hide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauDialog_Hide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauDialog_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauDialog_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauDialog_Show_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauDialog_Show_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauDialogEvents" },
		{ "ModuleRelativePath", "MordhauDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauDialog_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauDialog, "Show", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauDialog_Show_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauDialog_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauDialog_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauDialog_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauDialog_NoRegister()
	{
		return UMordhauDialog::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauDialog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauDialog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauDialog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauDialog_Hide, "Hide" }, // 3769195488
		{ &Z_Construct_UFunction_UMordhauDialog_Show, "Show" }, // 803034067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauDialog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauDialog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauDialog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauDialog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauDialog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauDialog_Statics::ClassParams = {
		&UMordhauDialog::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauDialog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauDialog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauDialog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauDialog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauDialog, 2054432474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauDialog(Z_Construct_UClass_UMordhauDialog, &UMordhauDialog::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauDialog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauDialog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
