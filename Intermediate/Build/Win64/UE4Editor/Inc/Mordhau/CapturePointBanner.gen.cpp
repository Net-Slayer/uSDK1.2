// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CapturePointBanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapturePointBanner() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ACapturePointBanner_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ACapturePointBanner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_ACapturePointBanner_InitializeBanner();
	MORDHAU_API UClass* Z_Construct_UClass_AControlPoint_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	static FName NAME_ACapturePointBanner_InitializeBanner = FName(TEXT("InitializeBanner"));
	void ACapturePointBanner::InitializeBanner(AControlPoint* OwningPoint)
	{
		CapturePointBanner_eventInitializeBanner_Parms Parms;
		Parms.OwningPoint=OwningPoint;
		ProcessEvent(FindFunctionChecked(NAME_ACapturePointBanner_InitializeBanner),&Parms);
	}
	static FName NAME_ACapturePointBanner_UpdateVisuals = FName(TEXT("UpdateVisuals"));
	void ACapturePointBanner::UpdateVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACapturePointBanner_UpdateVisuals),NULL);
	}
	void ACapturePointBanner::StaticRegisterNativesACapturePointBanner()
	{
	}
	struct Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::NewProp_OwningPoint = { UE4CodeGen_Private::EPropertyClass::Object, "OwningPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CapturePointBanner_eventInitializeBanner_Parms, OwningPoint), Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::NewProp_OwningPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapturePointBannerEvents" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePointBanner, "InitializeBanner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(CapturePointBanner_eventInitializeBanner_Parms), Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePointBanner_InitializeBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACapturePointBanner_InitializeBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "CapturePointBannerEvents" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACapturePointBanner, "UpdateVisuals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACapturePointBanner_NoRegister()
	{
		return ACapturePointBanner::StaticClass();
	}
	struct Z_Construct_UClass_ACapturePointBanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlagMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RopeMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RopeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FlagMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RopeMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapturePointBanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACapturePointBanner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACapturePointBanner_InitializeBanner, "InitializeBanner" }, // 1575463725
		{ &Z_Construct_UFunction_ACapturePointBanner_UpdateVisuals, "UpdateVisuals" }, // 1248936566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapturePointBanner.h" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialInstance_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "FlagMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, FlagMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialInstance_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "RopeMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, RopeMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeSpeed_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RopeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, RopeSpeed), METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialIndex_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "FlagMaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, FlagMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialIndex_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RopeMaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, RopeMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_CaptureProgress_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_CaptureProgress = { UE4CodeGen_Private::EPropertyClass::Float, "CaptureProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, CaptureProgress), METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_CaptureProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_CaptureProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_ControlPoint_MetaData[] = {
		{ "Category", "CapturePointBanner" },
		{ "ModuleRelativePath", "CapturePointBanner.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_ControlPoint = { UE4CodeGen_Private::EPropertyClass::Object, "ControlPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACapturePointBanner, ControlPoint), Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_ControlPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_ControlPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapturePointBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_FlagMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_RopeMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_CaptureProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapturePointBanner_Statics::NewProp_ControlPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapturePointBanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapturePointBanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapturePointBanner_Statics::ClassParams = {
		&ACapturePointBanner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACapturePointBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACapturePointBanner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACapturePointBanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapturePointBanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapturePointBanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapturePointBanner, 1000336854);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapturePointBanner(Z_Construct_UClass_ACapturePointBanner, &ACapturePointBanner::StaticClass, TEXT("/Script/Mordhau"), TEXT("ACapturePointBanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapturePointBanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
