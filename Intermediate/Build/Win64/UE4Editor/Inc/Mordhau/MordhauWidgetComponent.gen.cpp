// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauWidgetComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWidgetComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameState_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCameraManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UMordhauWidgetComponent::StaticRegisterNativesUMordhauWidgetComponent()
	{
		UClass* Class = UMordhauWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerStateAlwaysSee", &UMordhauWidgetComponent::execSetPlayerStateAlwaysSee },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics
	{
		struct MordhauWidgetComponent_eventSetPlayerStateAlwaysSee_Parms
		{
			APlayerState* PlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWidgetComponent_eventSetPlayerStateAlwaysSee_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWidgetCompFn" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauWidgetComponent, "SetPlayerStateAlwaysSee", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWidgetComponent_eventSetPlayerStateAlwaysSee_Parms), Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauWidgetComponent_NoRegister()
	{
		return UMordhauWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityWeightInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityWeightInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartakesInSortedVisibilityQueue_MetaData[];
#endif
		static void NewProp_PartakesInSortedVisibilityQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PartakesInSortedVisibilityQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSlowHideOverride_MetaData[];
#endif
		static void NewProp_bIsSlowHideOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlowHideOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerCameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerCameraManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSkip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameSkip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetTeamRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ViewTargetTeamRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesViewTargetTeamRestriction_MetaData[];
#endif
		static void NewProp_bUsesViewTargetTeamRestriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesViewTargetTeamRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInMainMenu_MetaData[];
#endif
		static void NewProp_bShowInMainMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInMapView_MetaData[];
#endif
		static void NewProp_bShowInMapView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInMapView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateAlwaysSee_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerStateAlwaysSee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideVisible_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OverrideVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleToCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleToCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsDistanceToCameraStringUpdated_MetaData[];
#endif
		static void NewProp_bWantsDistanceToCameraStringUpdated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsDistanceToCameraStringUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCameraString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DistanceToCameraString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToCameraZPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCameraZPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetCullAngleZPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidgetCullAngleZPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetCullAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetCullAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldSpaceZOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauWidgetComponent_SetPlayerStateAlwaysSee, "SetPlayerStateAlwaysSee" }, // 3161081119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "MordhauWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeight_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeight = { UE4CodeGen_Private::EPropertyClass::Float, "VisibilityWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, VisibilityWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeightInterpolationSpeed_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeightInterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "VisibilityWeightInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, VisibilityWeightInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeightInterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeightInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue_SetBit(void* Obj)
	{
		((UMordhauWidgetComponent*)Obj)->PartakesInSortedVisibilityQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue = { UE4CodeGen_Private::EPropertyClass::Bool, "PartakesInSortedVisibilityQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauWidgetComponent), &Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride_SetBit(void* Obj)
	{
		((UMordhauWidgetComponent*)Obj)->bIsSlowHideOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSlowHideOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauWidgetComponent), &Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedGameState_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedGameState = { UE4CodeGen_Private::EPropertyClass::Object, "CachedGameState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, CachedGameState), Z_Construct_UClass_AMordhauGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedGameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedPlayerCameraManager_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedPlayerCameraManager = { UE4CodeGen_Private::EPropertyClass::Object, "CachedPlayerCameraManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, CachedPlayerCameraManager), Z_Construct_UClass_AMordhauCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedPlayerCameraManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedPlayerCameraManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_FrameSkip_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_FrameSkip = { UE4CodeGen_Private::EPropertyClass::Int, "FrameSkip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, FrameSkip), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_FrameSkip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_FrameSkip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_ViewTargetTeamRestriction_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_ViewTargetTeamRestriction = { UE4CodeGen_Private::EPropertyClass::Int, "ViewTargetTeamRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, ViewTargetTeamRestriction), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_ViewTargetTeamRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_ViewTargetTeamRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction_SetBit(void* Obj)
	{
		((UMordhauWidgetComponent*)Obj)->bUsesViewTargetTeamRestriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesViewTargetTeamRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauWidgetComponent), &Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu_SetBit(void* Obj)
	{
		((UMordhauWidgetComponent*)Obj)->bShowInMainMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowInMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauWidgetComponent), &Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView_SetBit(void* Obj)
	{
		((UMordhauWidgetComponent*)Obj)->bShowInMapView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowInMapView", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauWidgetComponent), &Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PlayerStateAlwaysSee_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PlayerStateAlwaysSee = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PlayerStateAlwaysSee", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, PlayerStateAlwaysSee), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PlayerStateAlwaysSee_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PlayerStateAlwaysSee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_OverrideVisible_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_OverrideVisible = { UE4CodeGen_Private::EPropertyClass::Int, "OverrideVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, OverrideVisible), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_OverrideVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_OverrideVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_AngleToCamera_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_AngleToCamera = { UE4CodeGen_Private::EPropertyClass::Float, "AngleToCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, AngleToCamera), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_AngleToCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_AngleToCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated_SetBit(void* Obj)
	{
		((UMordhauWidgetComponent*)Obj)->bWantsDistanceToCameraStringUpdated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsDistanceToCameraStringUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauWidgetComponent), &Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraString_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraString = { UE4CodeGen_Private::EPropertyClass::Str, "DistanceToCameraString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, DistanceToCameraString), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraString_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_TextParameter_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_TextParameter = { UE4CodeGen_Private::EPropertyClass::Str, "TextParameter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, TextParameter), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_TextParameter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_TextParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCamera_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCamera = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceToCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, DistanceToCamera), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraZPositionOffset_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraZPositionOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceToCameraZPositionOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, DistanceToCameraZPositionOffset), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraZPositionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraZPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngleZPositionOffset_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngleZPositionOffset = { UE4CodeGen_Private::EPropertyClass::Float, "WidgetCullAngleZPositionOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, WidgetCullAngleZPositionOffset), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngleZPositionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngleZPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngle_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetCullAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, WidgetCullAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WorldSpaceZOffset_MetaData[] = {
		{ "Category", "MordhauWidgetComponent" },
		{ "ModuleRelativePath", "MordhauWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WorldSpaceZOffset = { UE4CodeGen_Private::EPropertyClass::Float, "WorldSpaceZOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauWidgetComponent, WorldSpaceZOffset), METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WorldSpaceZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WorldSpaceZOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_VisibilityWeightInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PartakesInSortedVisibilityQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bIsSlowHideOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_CachedPlayerCameraManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_FrameSkip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_ViewTargetTeamRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bUsesViewTargetTeamRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bShowInMapView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_PlayerStateAlwaysSee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_OverrideVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_AngleToCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_bWantsDistanceToCameraStringUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_TextParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_DistanceToCameraZPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngleZPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WidgetCullAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauWidgetComponent_Statics::NewProp_WorldSpaceZOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauWidgetComponent_Statics::ClassParams = {
		&UMordhauWidgetComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMordhauWidgetComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauWidgetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauWidgetComponent, 1858575599);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauWidgetComponent(Z_Construct_UClass_UMordhauWidgetComponent, &UMordhauWidgetComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
