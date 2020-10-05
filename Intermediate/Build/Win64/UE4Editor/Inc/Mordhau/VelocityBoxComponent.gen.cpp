// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/VelocityBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVelocityBoxComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UVelocityBoxComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UVelocityBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FScriptMulticastDelegate();
// End Cross Module References
	void UVelocityBoxComponent::StaticRegisterNativesUVelocityBoxComponent()
	{
	}
	UClass* Z_Construct_UClass_UVelocityBoxComponent_NoRegister()
	{
		return UVelocityBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVelocityBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTriggered_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVelocityAxisAccountForPawnVelocity_MetaData[];
#endif
		static void NewProp_bVelocityAxisAccountForPawnVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVelocityAxisAccountForPawnVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityAxis_MetaData[];
#endif
		static void NewProp_bUseVelocityAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyRunOnAuthority_MetaData[];
#endif
		static void NewProp_bOnlyRunOnAuthority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyRunOnAuthority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVelocityBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "VelocityBoxComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_CurrentVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVelocityBoxComponent, CurrentVelocity), METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_CurrentVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_CurrentVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_PreviousLocation_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_PreviousLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVelocityBoxComponent, PreviousLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_PreviousLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_PreviousLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_OnTriggered_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_OnTriggered = { UE4CodeGen_Private::EPropertyClass::Struct, "OnTriggered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVelocityBoxComponent, OnTriggered), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_OnTriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_OnTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity_SetBit(void* Obj)
	{
		((UVelocityBoxComponent*)Obj)->bVelocityAxisAccountForPawnVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bVelocityAxisAccountForPawnVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVelocityBoxComponent), &Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_VelocityAxis_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_VelocityAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVelocityBoxComponent, VelocityAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_VelocityAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_VelocityAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis_SetBit(void* Obj)
	{
		((UVelocityBoxComponent*)Obj)->bUseVelocityAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVelocityAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVelocityBoxComponent), &Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_TriggerVelocity_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_TriggerVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "TriggerVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVelocityBoxComponent, TriggerVelocity), METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_TriggerVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_TriggerVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority_MetaData[] = {
		{ "Category", "VelocityBoxComponent" },
		{ "ModuleRelativePath", "VelocityBoxComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority_SetBit(void* Obj)
	{
		((UVelocityBoxComponent*)Obj)->bOnlyRunOnAuthority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyRunOnAuthority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVelocityBoxComponent), &Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVelocityBoxComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_CurrentVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_PreviousLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_OnTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bVelocityAxisAccountForPawnVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_VelocityAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bUseVelocityAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_TriggerVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVelocityBoxComponent_Statics::NewProp_bOnlyRunOnAuthority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVelocityBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVelocityBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVelocityBoxComponent_Statics::ClassParams = {
		&UVelocityBoxComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_UVelocityBoxComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVelocityBoxComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVelocityBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVelocityBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVelocityBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVelocityBoxComponent, 1340903793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVelocityBoxComponent(Z_Construct_UClass_UVelocityBoxComponent, &UVelocityBoxComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UVelocityBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVelocityBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
