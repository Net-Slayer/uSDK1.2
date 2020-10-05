// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauUserWidget() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauUserWidget_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWidgetComponent_NoRegister();
// End Cross Module References
	void UMordhauUserWidget::StaticRegisterNativesUMordhauUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UMordhauUserWidget_NoRegister()
	{
		return UMordhauUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentWidgetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauUserWidget.h" },
		{ "ModuleRelativePath", "MordhauUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauUserWidget_Statics::NewProp_ParentWidgetComponent_MetaData[] = {
		{ "Category", "MordhauUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauUserWidget_Statics::NewProp_ParentWidgetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ParentWidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UMordhauUserWidget, ParentWidgetComponent), Z_Construct_UClass_UMordhauWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauUserWidget_Statics::NewProp_ParentWidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauUserWidget_Statics::NewProp_ParentWidgetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauUserWidget_Statics::NewProp_ParentWidgetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauUserWidget_Statics::ClassParams = {
		&UMordhauUserWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_UMordhauUserWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauUserWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauUserWidget, 1747205815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauUserWidget(Z_Construct_UClass_UMordhauUserWidget, &UMordhauUserWidget::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
