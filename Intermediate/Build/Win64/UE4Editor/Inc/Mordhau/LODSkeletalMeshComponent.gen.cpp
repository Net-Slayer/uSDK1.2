// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/LODSkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSkeletalMeshComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ULODSkeletalMeshComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ULODSkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
// End Cross Module References
	void ULODSkeletalMeshComponent::StaticRegisterNativesULODSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_ULODSkeletalMeshComponent_NoRegister()
	{
		return ULODSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULODSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNextTick_MetaData[];
#endif
		static void NewProp_bForceNextTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNextTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateLODIfPreventTicking_MetaData[];
#endif
		static void NewProp_bUpdateLODIfPreventTicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateLODIfPreventTicking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventTicking_MetaData[];
#endif
		static void NewProp_bPreventTicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventTicking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipTransformUpdate_MetaData[];
#endif
		static void NewProp_bSkipTransformUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipTransformUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothLODTransitionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClothLODTransitionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothClothLODTransition_MetaData[];
#endif
		static void NewProp_bSmoothClothLODTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothClothLODTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLODDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesUntilNextLODTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesUntilNextLODTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesSinceLastLODTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesSinceLastLODTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSkippedThisFrame_MetaData[];
#endif
		static void NewProp_bHasSkippedThisFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSkippedThisFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLODDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLODDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "LODSkeletalMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick_SetBit(void* Obj)
	{
		((ULODSkeletalMeshComponent*)Obj)->bForceNextTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceNextTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULODSkeletalMeshComponent), &Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking_SetBit(void* Obj)
	{
		((ULODSkeletalMeshComponent*)Obj)->bUpdateLODIfPreventTicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateLODIfPreventTicking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULODSkeletalMeshComponent), &Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking_SetBit(void* Obj)
	{
		((ULODSkeletalMeshComponent*)Obj)->bPreventTicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreventTicking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULODSkeletalMeshComponent), &Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate_SetBit(void* Obj)
	{
		((ULODSkeletalMeshComponent*)Obj)->bSkipTransformUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipTransformUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULODSkeletalMeshComponent), &Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_ClothLODTransitionSpeed_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_ClothLODTransitionSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ClothLODTransitionSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULODSkeletalMeshComponent, ClothLODTransitionSpeed), METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_ClothLODTransitionSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_ClothLODTransitionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition_SetBit(void* Obj)
	{
		((ULODSkeletalMeshComponent*)Obj)->bSmoothClothLODTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothClothLODTransition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULODSkeletalMeshComponent), &Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_MaxLODDeltaTime_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_MaxLODDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLODDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULODSkeletalMeshComponent, MaxLODDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_MaxLODDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_MaxLODDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesUntilNextLODTick_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesUntilNextLODTick = { UE4CodeGen_Private::EPropertyClass::Int, "FramesUntilNextLODTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULODSkeletalMeshComponent, FramesUntilNextLODTick), METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesUntilNextLODTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesUntilNextLODTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesSinceLastLODTick_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesSinceLastLODTick = { UE4CodeGen_Private::EPropertyClass::Int, "FramesSinceLastLODTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULODSkeletalMeshComponent, FramesSinceLastLODTick), METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesSinceLastLODTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesSinceLastLODTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame_SetBit(void* Obj)
	{
		((ULODSkeletalMeshComponent*)Obj)->bHasSkippedThisFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasSkippedThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULODSkeletalMeshComponent), &Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LastLODDeltaTime_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LastLODDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastLODDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULODSkeletalMeshComponent, LastLODDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LastLODDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LastLODDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LODDeltaTime_MetaData[] = {
		{ "Category", "LODSkeletalMeshComponent" },
		{ "ModuleRelativePath", "LODSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LODDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "LODDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULODSkeletalMeshComponent, LODDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LODDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LODDeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bForceNextTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bUpdateLODIfPreventTicking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bPreventTicking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSkipTransformUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_ClothLODTransitionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bSmoothClothLODTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_MaxLODDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesUntilNextLODTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_FramesSinceLastLODTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_bHasSkippedThisFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LastLODDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::NewProp_LODDeltaTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::ClassParams = {
		&ULODSkeletalMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULODSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULODSkeletalMeshComponent, 1426174686);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULODSkeletalMeshComponent(Z_Construct_UClass_ULODSkeletalMeshComponent, &ULODSkeletalMeshComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("ULODSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
