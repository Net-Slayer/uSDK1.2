// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauCameraComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauCameraComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FName NAME_UMordhauCameraComponent_UpdateCamera = FName(TEXT("UpdateCamera"));
	void UMordhauCameraComponent::UpdateCamera()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMordhauCameraComponent_UpdateCamera),NULL);
	}
	void UMordhauCameraComponent::StaticRegisterNativesUMordhauCameraComponent()
	{
	}
	struct Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauCameraCompEvent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauCameraComponent, "UpdateCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauCameraComponent_NoRegister()
	{
		return UMordhauCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousCharacterMeshLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousCharacterMeshLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraZoomScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLocationScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraLocationScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHipsLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousHipsLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedHipsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothedHipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCameraStyleChangeBlendDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MapCameraStyleChangeBlendDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraStyleChangeBlendDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraStyleChangeBlendDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBlendingCameraStyle_MetaData[];
#endif
		static void NewProp_bIsBlendingCameraStyle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlendingCameraStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraStyleBlendingTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraStyleBlendingTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraStyleBlendingFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraStyleBlendingFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapToThirdRotationBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapToThirdRotationBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapToFirstRotationBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapToFirstRotationBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapToThirdBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapToThirdBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapToFirstBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapToFirstBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstToThirdBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstToThirdBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdToFirstBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdToFirstBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnOnThirdPersonModelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnOnThirdPersonModelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnOnFirstPersonModelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnOnFirstPersonModelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHeadTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousHeadTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedHeadRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothedHeadRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedHeadLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothedHeadLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadCameraRotationSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadCameraRotationSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadCameraLocationSmoothMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadCameraLocationSmoothMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadCameraLocationSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadCameraLocationSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonTeleportThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonTeleportThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonHipsSmoothLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonHipsSmoothLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonHipsSmoothSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonHipsSmoothSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingCameraDisableChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingCameraDisableChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingCameraActivateChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingCameraActivateChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonAimingCameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonAimingCameraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonCameraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicCameraRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CinematicCameraRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonCinematicCameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonCinematicCameraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCinematicCameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonCinematicCameraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumCinematicCameraBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumCinematicCameraBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicCameraBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CinematicCameraBlendWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauCameraComponent_UpdateCamera, "UpdateCamera" }, // 1672879965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "MordhauCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousCharacterMeshLocation_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousCharacterMeshLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousCharacterMeshLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, PreviousCharacterMeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousCharacterMeshLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousCharacterMeshLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraZoomScaleCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraZoomScaleCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CameraZoomScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CameraZoomScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraZoomScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraZoomScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraLocationScaleCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraLocationScaleCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CameraLocationScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CameraLocationScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraLocationScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraLocationScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHipsLocation_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHipsLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousHipsLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, PreviousHipsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHipsLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHipsLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHipsOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHipsOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SmoothedHipsOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, SmoothedHipsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHipsOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapCameraStyleChangeBlendDuration_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapCameraStyleChangeBlendDuration = { UE4CodeGen_Private::EPropertyClass::Float, "MapCameraStyleChangeBlendDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, MapCameraStyleChangeBlendDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapCameraStyleChangeBlendDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapCameraStyleChangeBlendDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleChangeBlendDuration_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleChangeBlendDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CameraStyleChangeBlendDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CameraStyleChangeBlendDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleChangeBlendDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleChangeBlendDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
		{ "ToolTip", "struct FPOV                                        LastCameraStyleChangeCameraPOV;\nstruct FPOV                                        LastVehicleCameraPOV;\nstruct FPOV                                        LastNonVehicleCameraPOV;\nstruct FPOV                                        LastCameraPOV;" },
	};
#endif
	void Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle_SetBit(void* Obj)
	{
		((UMordhauCameraComponent*)Obj)->bIsBlendingCameraStyle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsBlendingCameraStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauCameraComponent), &Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingTo_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingTo = { UE4CodeGen_Private::EPropertyClass::Byte, "CameraStyleBlendingTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CameraStyleBlendingTo), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingFrom_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingFrom = { UE4CodeGen_Private::EPropertyClass::Byte, "CameraStyleBlendingFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CameraStyleBlendingFrom), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingFrom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdRotationBlendCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdRotationBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MapToThirdRotationBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, MapToThirdRotationBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdRotationBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdRotationBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstRotationBlendCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstRotationBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MapToFirstRotationBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, MapToFirstRotationBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstRotationBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstRotationBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdBlendCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MapToThirdBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, MapToThirdBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstBlendCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MapToFirstBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, MapToFirstBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstToThirdBlendCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstToThirdBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "FirstToThirdBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, FirstToThirdBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstToThirdBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstToThirdBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdToFirstBlendCurve_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdToFirstBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "ThirdToFirstBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdToFirstBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdToFirstBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdToFirstBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnThirdPersonModelDistance_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnThirdPersonModelDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TurnOnThirdPersonModelDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, TurnOnThirdPersonModelDistance), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnThirdPersonModelDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnThirdPersonModelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnFirstPersonModelDistance_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnFirstPersonModelDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TurnOnFirstPersonModelDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, TurnOnFirstPersonModelDistance), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnFirstPersonModelDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnFirstPersonModelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHeadTransform_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHeadTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousHeadTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, PreviousHeadTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHeadTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHeadTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadRotation_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "SmoothedHeadRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, SmoothedHeadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadLocation_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "SmoothedHeadLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, SmoothedHeadLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraRotationSmoothSpeed_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraRotationSmoothSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DeadCameraRotationSmoothSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, DeadCameraRotationSmoothSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraRotationSmoothSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraRotationSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothMaxDistance_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothMaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DeadCameraLocationSmoothMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, DeadCameraLocationSmoothMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothSpeed_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DeadCameraLocationSmoothSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, DeadCameraLocationSmoothSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonTeleportThreshold_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonTeleportThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ThirdPersonTeleportThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonTeleportThreshold), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonTeleportThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonTeleportThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothLimits_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "ThirdPersonHipsSmoothLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonHipsSmoothLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothSpeed_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ThirdPersonHipsSmoothSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonHipsSmoothSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingBlendWeight_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "AimingBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, AimingBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraDisableChangeSpeed_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraDisableChangeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "AimingCameraDisableChangeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, AimingCameraDisableChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraDisableChangeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraDisableChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraActivateChangeSpeed_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraActivateChangeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "AimingCameraActivateChangeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, AimingCameraActivateChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraActivateChangeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraActivateChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonAimingCameraOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonAimingCameraOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ThirdPersonAimingCameraOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonAimingCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonAimingCameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonAimingCameraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCameraOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCameraOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ThirdPersonCameraOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCameraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonRotationOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ThirdPersonRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraRotationOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "CinematicCameraRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CinematicCameraRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCinematicCameraOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCinematicCameraOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ThirdPersonCinematicCameraOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, ThirdPersonCinematicCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCinematicCameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCinematicCameraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstPersonCinematicCameraOffset_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstPersonCinematicCameraOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "FirstPersonCinematicCameraOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, FirstPersonCinematicCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstPersonCinematicCameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstPersonCinematicCameraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MinimumCinematicCameraBlendWeight_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MinimumCinematicCameraBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumCinematicCameraBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, MinimumCinematicCameraBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MinimumCinematicCameraBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MinimumCinematicCameraBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraBlendWeight_MetaData[] = {
		{ "Category", "MordhauCameraComponent" },
		{ "ModuleRelativePath", "MordhauCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "CinematicCameraBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauCameraComponent, CinematicCameraBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraBlendWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousCharacterMeshLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraZoomScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraLocationScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHipsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapCameraStyleChangeBlendDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleChangeBlendDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_bIsBlendingCameraStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CameraStyleBlendingFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdRotationBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstRotationBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToThirdBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MapToFirstBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstToThirdBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdToFirstBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnThirdPersonModelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_TurnOnFirstPersonModelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_PreviousHeadTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_SmoothedHeadLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraRotationSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_DeadCameraLocationSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonTeleportThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonHipsSmoothSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraDisableChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_AimingCameraActivateChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonAimingCameraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCameraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_ThirdPersonCinematicCameraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_FirstPersonCinematicCameraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_MinimumCinematicCameraBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauCameraComponent_Statics::NewProp_CinematicCameraBlendWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauCameraComponent_Statics::ClassParams = {
		&UMordhauCameraComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMordhauCameraComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauCameraComponent, 3297811665);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauCameraComponent(Z_Construct_UClass_UMordhauCameraComponent, &UMordhauCameraComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
