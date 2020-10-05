// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ThudderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThudderComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UThudderComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UThudderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UThudderComponent_DoTick();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FScriptMulticastDelegate();
// End Cross Module References
	void UThudderComponent::StaticRegisterNativesUThudderComponent()
	{
		UClass* Class = UThudderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoTick", &UThudderComponent::execDoTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThudderComponent_DoTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThudderComponent_DoTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Thudder" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThudderComponent_DoTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThudderComponent, "DoTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThudderComponent_DoTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThudderComponent_DoTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThudderComponent_DoTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThudderComponent_DoTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThudderComponent_NoRegister()
	{
		return UThudderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UThudderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextThudTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NextThudTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThudMinVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThudMinVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenThuds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenThuds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitoredBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MonitoredBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitoredComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonitoredComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyIfBoneIsSimulatingPhysics_MetaData[];
#endif
		static void NewProp_bOnlyIfBoneIsSimulatingPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfBoneIsSimulatingPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnThud_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnThud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThudderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThudderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThudderComponent_DoTick, "DoTick" }, // 648608918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ThudderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_CurrentVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, CurrentVelocity), METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_CurrentVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_CurrentVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_PreviousVelocity_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_PreviousVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, PreviousVelocity), METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_PreviousVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_PreviousVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_NextThudTime_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_NextThudTime = { UE4CodeGen_Private::EPropertyClass::Float, "NextThudTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, NextThudTime), METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_NextThudTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_NextThudTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_ThudMinVelocityThreshold_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_ThudMinVelocityThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ThudMinVelocityThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, ThudMinVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_ThudMinVelocityThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_ThudMinVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_MinTimeBetweenThuds_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_MinTimeBetweenThuds = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeBetweenThuds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, MinTimeBetweenThuds), METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_MinTimeBetweenThuds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_MinTimeBetweenThuds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredBone_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredBone = { UE4CodeGen_Private::EPropertyClass::Name, "MonitoredBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, MonitoredBone), METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredBone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredComponent_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MonitoredComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UThudderComponent, MonitoredComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	void Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics_SetBit(void* Obj)
	{
		((UThudderComponent*)Obj)->bOnlyIfBoneIsSimulatingPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyIfBoneIsSimulatingPhysics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UThudderComponent), &Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThudderComponent_Statics::NewProp_OnThud_MetaData[] = {
		{ "Category", "ThudderComponent" },
		{ "ModuleRelativePath", "ThudderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThudderComponent_Statics::NewProp_OnThud = { UE4CodeGen_Private::EPropertyClass::Struct, "OnThud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UThudderComponent, OnThud), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::NewProp_OnThud_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::NewProp_OnThud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThudderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_CurrentVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_PreviousVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_NextThudTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_ThudMinVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_MinTimeBetweenThuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_MonitoredComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_bOnlyIfBoneIsSimulatingPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThudderComponent_Statics::NewProp_OnThud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThudderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThudderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThudderComponent_Statics::ClassParams = {
		&UThudderComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UThudderComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UThudderComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UThudderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThudderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThudderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThudderComponent, 2343110005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThudderComponent(Z_Construct_UClass_UThudderComponent, &UThudderComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UThudderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThudderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
