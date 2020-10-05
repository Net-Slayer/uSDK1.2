// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauAnimInstance() {}
// Cross Module References
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FFacialBoneSetup();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodePackedDismemberment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauAnimInstance_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauAnimInstance();
	MORDHAU_API UClass* Z_Construct_UClass_UCreatureAnimInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FSpineSpaceAdditive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatSpringState();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNodePackedFaceCustomization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization, Z_Construct_UPackage__Script_Mordhau(), TEXT("AnimNodePackedFaceCustomization"), sizeof(FAnimNodePackedFaceCustomization), Get_Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNodePackedFaceCustomization(FAnimNodePackedFaceCustomization::StaticStruct, TEXT("/Script/Mordhau"), TEXT("AnimNodePackedFaceCustomization"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFAnimNodePackedFaceCustomization
{
	FScriptStruct_Mordhau_StaticRegisterNativesFAnimNodePackedFaceCustomization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNodePackedFaceCustomization")),new UScriptStruct::TCppStructOps<FAnimNodePackedFaceCustomization>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFAnimNodePackedFaceCustomization;
	struct Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceCustomizationBonesTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FaceCustomizationBonesTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceCustomizationBonesTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceCustomizationSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FaceCustomizationSetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceCustomizationSetup_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodePackedFaceCustomization>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms_MetaData[] = {
		{ "Category", "AnimNodePackedFaceCustomization" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "FaceCustomizationBonesTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNodePackedFaceCustomization, FaceCustomizationBonesTransforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FaceCustomizationBonesTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup_MetaData[] = {
		{ "Category", "AnimNodePackedFaceCustomization" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup = { UE4CodeGen_Private::EPropertyClass::Array, "FaceCustomizationSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNodePackedFaceCustomization, FaceCustomizationSetup), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FaceCustomizationSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFacialBoneSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationBonesTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::NewProp_FaceCustomizationSetup_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"AnimNodePackedFaceCustomization",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimNodePackedFaceCustomization),
		alignof(FAnimNodePackedFaceCustomization),
		Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNodePackedFaceCustomization"), sizeof(FAnimNodePackedFaceCustomization), Get_Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization_CRC() { return 355916211U; }
class UScriptStruct* FAnimNodePackedDismemberment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodePackedDismemberment, Z_Construct_UPackage__Script_Mordhau(), TEXT("AnimNodePackedDismemberment"), sizeof(FAnimNodePackedDismemberment), Get_Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNodePackedDismemberment(FAnimNodePackedDismemberment::StaticStruct, TEXT("/Script/Mordhau"), TEXT("AnimNodePackedDismemberment"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFAnimNodePackedDismemberment
{
	FScriptStruct_Mordhau_StaticRegisterNativesFAnimNodePackedDismemberment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNodePackedDismemberment")),new UScriptStruct::TCppStructOps<FAnimNodePackedDismemberment>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFAnimNodePackedDismemberment;
	struct Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DismemberedBonesIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DismemberedBonesIndices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DismemberedBonesIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FFloatSpringState\n{\n       GENERATED_BODY()\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodePackedDismemberment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices_MetaData[] = {
		{ "Category", "AnimNodePackedDismemberment" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices = { UE4CodeGen_Private::EPropertyClass::Array, "DismemberedBonesIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNodePackedDismemberment, DismemberedBonesIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "DismemberedBonesIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::NewProp_DismemberedBonesIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"AnimNodePackedDismemberment",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimNodePackedDismemberment),
		alignof(FAnimNodePackedDismemberment),
		Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodePackedDismemberment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNodePackedDismemberment"), sizeof(FAnimNodePackedDismemberment), Get_Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNodePackedDismemberment_CRC() { return 2989662693U; }
class UScriptStruct* FFacialBoneSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FFacialBoneSetup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFacialBoneSetup, Z_Construct_UPackage__Script_Mordhau(), TEXT("FacialBoneSetup"), sizeof(FFacialBoneSetup), Get_Z_Construct_UScriptStruct_FFacialBoneSetup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFacialBoneSetup(FFacialBoneSetup::StaticStruct, TEXT("/Script/Mordhau"), TEXT("FacialBoneSetup"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFFacialBoneSetup
{
	FScriptStruct_Mordhau_StaticRegisterNativesFFacialBoneSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FacialBoneSetup")),new UScriptStruct::TCppStructOps<FFacialBoneSetup>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFFacialBoneSetup;
	struct Z_Construct_UScriptStruct_FFacialBoneSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateZRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotateZRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateYRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotateYRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateXRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotateXRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleZRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleYRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleYRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleXRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleXRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslateZRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslateZRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslateYRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslateYRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslateXRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslateXRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymmetryTwinBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SymmetryTwinBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymmetryTwinBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SymmetryTwinBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildBones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChildBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionBiasFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionBiasFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSymmetrical_MetaData[];
#endif
		static void NewProp_bIsSymmetrical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSymmetrical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionBoneOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectionBoneOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFacialBoneSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateZRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateZRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RotateZRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, RotateZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateZRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateZRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateYRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateYRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RotateYRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, RotateYRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateYRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateYRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateXRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateXRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RotateXRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, RotateXRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateXRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateXRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleZRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleZRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleZRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, ScaleZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleZRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleZRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleYRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleYRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleYRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, ScaleYRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleYRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleYRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleXRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleXRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleXRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, ScaleXRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleXRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleXRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateZRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateZRange = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslateZRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, TranslateZRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateZRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateZRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateYRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateYRange = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslateYRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, TranslateYRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateYRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateYRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateXRange_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateXRange = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslateXRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, TranslateXRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateXRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateXRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneName_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "SymmetryTwinBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, SymmetryTwinBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneIndex_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SymmetryTwinBoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, SymmetryTwinBoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones = { UE4CodeGen_Private::EPropertyClass::Array, "ChildBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, ChildBones), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ChildBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBiasFactor_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBiasFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SelectionBiasFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, SelectionBiasFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBiasFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBiasFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical_SetBit(void* Obj)
	{
		((FFacialBoneSetup*)Obj)->bIsSymmetrical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSymmetrical", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFacialBoneSetup), &Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBoneOverride_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBoneOverride = { UE4CodeGen_Private::EPropertyClass::Name, "SelectionBoneOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, SelectionBoneOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBoneOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBoneOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "FacialBoneSetup" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FFacialBoneSetup, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateZRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateYRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_RotateXRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleZRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleYRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ScaleXRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateZRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateYRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_TranslateXRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SymmetryTwinBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_ChildBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBiasFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_bIsSymmetrical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_SelectionBoneOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"FacialBoneSetup",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFacialBoneSetup),
		alignof(FFacialBoneSetup),
		Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFacialBoneSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFacialBoneSetup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FacialBoneSetup"), sizeof(FFacialBoneSetup), Get_Z_Construct_UScriptStruct_FFacialBoneSetup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFacialBoneSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFacialBoneSetup_CRC() { return 3575640089U; }
	void UMordhauAnimInstance::StaticRegisterNativesUMordhauAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMordhauAnimInstance_NoRegister()
	{
		return UMordhauAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_JiggleBouncyWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_JiggleBouncyWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_ShoulderOffset1PWith1PWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_ShoulderOffset1PWith1PWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_HandSpringWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_HandSpringWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_SpringPitchYawValueRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_SpringPitchYawValueRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_RightWeaponBoneBaseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_RightWeaponBoneBaseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_RightWeaponBoneBaseTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_RightWeaponBoneBaseTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LowerBodyRotationOffsetInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LowerBodyRotationOffsetInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericsWeightWithAnimLOD0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtmosphericsWeightWithAnimLOD0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_ArmsBendRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_ArmsBendRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_RightLegBendRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_RightLegBendRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_SpineBendRotationAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_SpineBendRotationAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_HipsBendRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_HipsBendRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_SpineBendRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_SpineBendRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_BounceDuckWithBounceWeightInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_BounceDuckWithBounceWeightInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_BounceDuckWithBounceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_BounceDuckWithBounceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_StopBounceHips_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_StopBounceHips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_StopBounceInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_StopBounceInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_StopBounceLightWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_StopBounceLightWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_StopBounceMediumWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_StopBounceMediumWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_RootRotationOffsetInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_RootRotationOffsetInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_RightHandIKWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_RightHandIKWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LeftHandIKWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_LeftHandIKWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_FaceUpperLids_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_FaceUpperLids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotFirstPersonWithAtmospherics_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotFirstPersonWithAtmospherics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_GroundingLeftFootTranslationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_GroundingLeftFootTranslationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_GroundingRightFootTranslationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_GroundingRightFootTranslationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_GroundingLeftFootRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_GroundingLeftFootRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_GroundingRightFootRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_GroundingRightFootRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_SpineBendBlendWeightThird_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_SpineBendBlendWeightThird;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_SpineBendBlendWeightHalf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_SpineBendBlendWeightHalf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_IsNotFemale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_IsNotFemale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_FirstPersonNotDeadWith3PArmsSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_FirstPersonNotDeadWith3PArmsSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_FirstPersonZoomOffsetAndCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_FirstPersonZoomOffsetAndCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_FirstPersonZoomOffsetInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_FirstPersonZoomOffsetInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_FirstPersonNotDead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_FirstPersonNotDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_ArmsShoulderFlinchInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_ArmsShoulderFlinchInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_HipsFlinchRotationInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_HipsFlinchRotationInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_HipsFlinchTranslationInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_HipsFlinchTranslationInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_IsNotDrivingFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_IsNotDrivingFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_BreathAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_BreathAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_TrackingWeightAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_TrackingWeightAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBHipsZOverrideAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_LBHipsZOverrideAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBCrouchOffsetInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBCrouchOffsetInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBCrouchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBCrouchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHelper_LBVelocityIsZero_MetaData[];
#endif
		static void NewProp_bHelper_LBVelocityIsZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHelper_LBVelocityIsZero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_UBVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBDirectionOffsetSlowHipsZInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBDirectionOffsetSlowHipsZInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBDirectionOffsetSlowHipsZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBDirectionOffsetSlowHipsZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBDirectionOffsetSlowRotatorInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBDirectionOffsetSlowRotatorInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBDirectionOffsetSlowRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_LBDirectionOffsetSlowRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHelper_LBFootShufflingRight_MetaData[];
#endif
		static void NewProp_bHelper_LBFootShufflingRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHelper_LBFootShufflingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBFootShufflingPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_LBFootShufflingPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHelper_LBFootShuffling_MetaData[];
#endif
		static void NewProp_bHelper_LBFootShuffling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHelper_LBFootShuffling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBSpineArmsCompensationRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_UBSpineArmsCompensationRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBSpineArmsCompensationAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_UBSpineArmsCompensationAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBCrouchShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_UBCrouchShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBCrouchHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_UBCrouchHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBCrouchArms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_UBCrouchArms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBCrouchForearms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_UBCrouchForearms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBCrouchSpine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Helper_UBCrouchSpine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_LBCrouchAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_LBCrouchAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_UBCrouchAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Helper_UBCrouchAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadFlinchTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadFlinchTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadFlinchRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadFlinchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckFlinchTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckFlinchTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckFlinchRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckFlinchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1FlinchTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine1FlinchTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1FlinchRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine1FlinchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineFlinchTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineFlinchTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineFlinchRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineFlinchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBackFlinchTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerBackFlinchTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBackFlinchRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerBackFlinchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsFlinchTranslationInternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsFlinchTranslationInternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsFlinchTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsFlinchTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsFlinchRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsFlinchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFlinchSpineRotationsCombined_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFlinchSpineRotationsCombined;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchHitSpineIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FlinchHitSpineIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchHipsTranslationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlinchHipsTranslationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchTranslationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlinchTranslationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchRotationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlinchRotationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationNonHipsFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationNonHipsFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDirHipsZFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDirHipsZFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchHipsZFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchHipsZFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchPitchYawFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchPitchYawFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchYawAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchYawAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchPitchAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchPitchAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchTranslationBlendOutSpeedFast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchTranslationBlendOutSpeedFast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchRotationBlendOutSpeedFast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchRotationBlendOutSpeedFast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchTranslationBlendOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchTranslationBlendOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchRotationBlendOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchRotationBlendOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchTranslationBlendInSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchTranslationBlendInSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchRotationBlendInSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchRotationBlendInSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchBlendInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchBlendInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchFreezeBlendInAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchFreezeBlendInAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchFreezeTranslationBlendInSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchFreezeTranslationBlendInSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchFreezeRotationBlendInSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchFreezeRotationBlendInSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlinchFreezeBlendInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlinchFreezeBlendInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectRotationStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitEffectRotationStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitEffectRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectIKLocationStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitEffectIKLocationStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectIKLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitEffectIKLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectDisableSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitEffectDisableSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLocationSlideSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitEffectLocationSlideSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectIKWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitEffectIKWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBallistaReloading_MetaData[];
#endif
		static void NewProp_bBallistaReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBallistaReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSeatRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleSeatRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleActorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleActorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleSeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleSeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleRightFootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleRightFootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleLeftFootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleLeftFootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleRightFootTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleRightFootTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleLeftFootTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleLeftFootTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleLookUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleLookUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleRightHandTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleRightHandTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleLeftHandTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleLeftHandTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleAnimRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleAnimRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleAnimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleAnimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rearing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Couching_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Couching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHorseRearing_MetaData[];
#endif
		static void NewProp_bIsHorseRearing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHorseRearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentLowerA_MetaData[];
#endif
		static void NewProp_bIsCurrentLowerA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentLowerA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseUpperRearing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorseUpperRearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyAnimationB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowerBodyAnimationB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyAnimationA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowerBodyAnimationA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentUpperA_MetaData[];
#endif
		static void NewProp_bIsCurrentUpperA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentUpperA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperAdditiveB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperAdditiveB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBlendSpaceBBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperBlendSpaceBBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBlendSpaceB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBlendSpaceB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperAdditiveA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperAdditiveA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBlendSpaceABlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperBlendSpaceABlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBlendSpaceA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBlendSpaceA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyBlendSpaceBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerBodyBlendSpaceBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltParryPushAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AltParryPushAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryPushAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParryPushAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParryAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwayWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwayWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwayRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwayRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedDrawnAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedDrawnAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftStabChambered_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftStabChambered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightStabChambered_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightStabChambered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightStrikeBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightStrikeBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftStrikeBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftStrikeBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightStabBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightStabBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftStabBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftStabBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTorsoBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftTorsoBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineSpaceAdditive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineSpaceAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisarmDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisarmDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arms3PSyncWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Arms3PSyncWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericsWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtmosphericsWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIsEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftHandIsEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineArmsCompensationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpineArmsCompensationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBendBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpineBendBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLegBendBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightLegBendBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookUpValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterCompensateRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CounterCompensateRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterCompensateLookWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterCompensateLookWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyBreathFactorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerBodyBreathFactorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyBreathFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerBodyBreathFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyBreathInternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerBodyBreathInternal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Breath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Breath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideNose_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HideNose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideEars_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HideEars;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookingAtRotationEyes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookingAtRotationEyes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookingAtRotationHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookingAtRotationHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookingAtRotationNeck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookingAtRotationNeck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRightArmDismembered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsRightArmDismembered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightShoulderDismemberedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightShoulderDismemberedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeftArmDismembered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsLeftArmDismembered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftShoulderDismemberedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftShoulderDismemberedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckDismemberedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckDismemberedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHeadDismembered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsHeadDismembered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strong_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strong;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skinny_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Skinny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightUpLegAdjustT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightUpLegAdjustT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftUpLegAdjustT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftUpLegAdjustT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArmAdjustT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightArmAdjustT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArmAdjustT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftArmAdjustT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineAdjustT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineAdjustT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBackBellyT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerBackBellyT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreastsT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreastsT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyFactorLegs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyFactorLegs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyFactorBelly_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyFactorBelly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyFactorArms_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyFactorArms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyFactorBreasts_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyFactorBreasts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyFastVelocityLagTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyFastVelocityLagTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncySlowVelocityLagTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncySlowVelocityLagTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncyMagnitudeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncyMagnitudeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FallingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffhandIsRightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffhandIsRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandGripRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandGripRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandGripPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandGripPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandGripPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandGripPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffhandIKWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffhandIKWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKOffsetWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightHandIKOffsetWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandIKOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderOffset1PWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShoulderOffset1PWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftShoulderOffset1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftShoulderOffset1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightShoulderOffset1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightShoulderOffset1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlideCompensationWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSlideCompensationWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlideVectorInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSlideVectorInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSlideVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSlideVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightWeaponBoneBaseTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightWeaponBoneBaseTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCollisionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCollisionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonZoomOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonZoomOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNotFirstPersonFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsNotFirstPersonFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFirstPersonFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsFirstPersonFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFirstPerson_MetaData[];
#endif
		static void NewProp_bIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSpringWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandSpringWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringPitchYawMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringPitchYawMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringPitchYawDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringPitchYawDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringPitchYawStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringPitchYawStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawSpringState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchSpringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchSpringState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringPitchYawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringPitchYawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedMovementDirectionInCompSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimatedMovementDirectionInCompSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityLowerBodyWindow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityLowerBodyWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityLowerBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityLowerBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteAngularVelocityLowerBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsoluteAngularVelocityLowerBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopDuckFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopDuckFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTiltFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopTiltFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastVelocityLagTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastVelocityLagTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowVelocityLagTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowVelocityLagTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceDuckLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceDuckLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceDuck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BounceDuck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBounceLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopBounceLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBounceWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopBounceWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBackBlendSpace_MetaData[];
#endif
		static void NewProp_bUseBackBlendSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBackBlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdPersonVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedWarping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedWarping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAnimRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAnimRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimRateFactor1PMaxSprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRateFactor1PMaxSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneToZeroAtWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OneToZeroAtWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionOffsetSlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionOffsetSlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionOffsetSlowInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionOffsetSlowInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionWithOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionWithOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCorrectionAnimRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementCorrectionAnimRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCorrectionHipsInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementCorrectionHipsInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCorrectionHips_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementCorrectionHips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerBodyRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerBodyRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDrivingFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsDrivingFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTransitionComponentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleTransitionComponentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTransitionComponentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VehicleTransitionComponentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTransitionBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleTransitionBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTransitionAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleTransitionAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpringMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSpringMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSpringDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchSpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncrouchSpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpringLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrouchSpringLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrouchSpringState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnclampedFastSmoothedIsCrouching_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnclampedFastSmoothedIsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastSmoothedIsCrouching_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastSmoothedIsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlowClimbingB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsSlowClimbingB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbRotationB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbRotationB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbLedgeOffsetB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbLedgeOffsetB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbOffsetEndOffsetB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbOffsetEndOffsetB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbOffsetB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbOffsetB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClimbingB_MetaData[];
#endif
		static void NewProp_bIsClimbingB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbingB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbRotationA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbRotationA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlowClimbingA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsSlowClimbingA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbLedgeOffsetA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbLedgeOffsetA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbOffsetEndOffsetA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbOffsetEndOffsetA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbOffsetA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClimbOffsetA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClimbingA_MetaData[];
#endif
		static void NewProp_bIsClimbingA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbingA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFemale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsFemale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLOD1Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLOD1Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLOD0Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLOD0Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentlyRenderedNonAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecentlyRenderedNonAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentlyRendered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecentlyRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLOD1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLOD1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLOD0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLOD0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDedicatedServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathSyncedRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeathSyncedRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetUpRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetUpRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetUpAnimationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetUpAnimationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGetUpFront_MetaData[];
#endif
		static void NewProp_bIsGetUpFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGetUpFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPerformInstantAnimSwitch_MetaData[];
#endif
		static void NewProp_bShouldPerformInstantAnimSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPerformInstantAnimSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force1PMeshCorrectionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Force1PMeshCorrectionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRagdollFallingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRagdollFallingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasRagdollFalling_MetaData[];
#endif
		static void NewProp_bWasRagdollFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasRagdollFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainAnimationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MainAnimationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintFootstepParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SprintFootstepParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprintFootstepParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchFootstepParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CrouchFootstepParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchFootstepParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousRightHandEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PreviousRightHandEquipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dismemberment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dismemberment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalScaledTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalScaledTimeSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCreatureAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MordhauAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_JiggleBouncyWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_JiggleBouncyWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_JiggleBouncyWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_JiggleBouncyWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_JiggleBouncyWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_JiggleBouncyWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ShoulderOffset1PWith1PWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ShoulderOffset1PWith1PWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_ShoulderOffset1PWith1PWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_ShoulderOffset1PWith1PWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ShoulderOffset1PWith1PWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ShoulderOffset1PWith1PWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HandSpringWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HandSpringWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_HandSpringWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_HandSpringWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HandSpringWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HandSpringWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpringPitchYawValueRotator_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpringPitchYawValueRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_SpringPitchYawValueRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_SpringPitchYawValueRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpringPitchYawValueRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpringPitchYawValueRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_RightWeaponBoneBaseRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_RightWeaponBoneBaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_RightWeaponBoneBaseTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_RightWeaponBoneBaseTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LowerBodyRotationOffsetInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LowerBodyRotationOffsetInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LowerBodyRotationOffsetInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LowerBodyRotationOffsetInverse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LowerBodyRotationOffsetInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LowerBodyRotationOffsetInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeightWithAnimLOD0_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeightWithAnimLOD0 = { UE4CodeGen_Private::EPropertyClass::Float, "AtmosphericsWeightWithAnimLOD0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AtmosphericsWeightWithAnimLOD0), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeightWithAnimLOD0_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeightWithAnimLOD0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsBendRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsBendRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_ArmsBendRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_ArmsBendRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsBendRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsBendRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightLegBendRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightLegBendRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_RightLegBendRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_RightLegBendRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightLegBendRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightLegBendRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotationAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotationAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_SpineBendRotationAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_SpineBendRotationAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotationAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotationAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsBendRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsBendRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_HipsBendRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_HipsBendRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsBendRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsBendRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_SpineBendRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_SpineBendRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeightInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeightInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_BounceDuckWithBounceWeightInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_BounceDuckWithBounceWeightInverse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeightInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeightInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeight = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_BounceDuckWithBounceWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_BounceDuckWithBounceWeight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceHips_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceHips = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_StopBounceHips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_StopBounceHips), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceHips_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceHips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_StopBounceInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_StopBounceInverse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceLightWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceLightWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_StopBounceLightWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_StopBounceLightWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceLightWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceLightWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceMediumWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceMediumWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_StopBounceMediumWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_StopBounceMediumWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceMediumWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceMediumWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RootRotationOffsetInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RootRotationOffsetInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_RootRotationOffsetInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_RootRotationOffsetInverse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RootRotationOffsetInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RootRotationOffsetInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightHandIKWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightHandIKWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_RightHandIKWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_RightHandIKWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightHandIKWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightHandIKWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LeftHandIKWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LeftHandIKWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_LeftHandIKWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LeftHandIKWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LeftHandIKWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LeftHandIKWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FaceUpperLids_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FaceUpperLids = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_FaceUpperLids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_FaceUpperLids), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FaceUpperLids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FaceUpperLids_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NotFirstPersonWithAtmospherics_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NotFirstPersonWithAtmospherics = { UE4CodeGen_Private::EPropertyClass::Float, "NotFirstPersonWithAtmospherics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, NotFirstPersonWithAtmospherics), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NotFirstPersonWithAtmospherics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NotFirstPersonWithAtmospherics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootTranslationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootTranslationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_GroundingLeftFootTranslationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_GroundingLeftFootTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootTranslationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootTranslationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootTranslationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootTranslationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_GroundingRightFootTranslationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_GroundingRightFootTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootTranslationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootTranslationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootRotationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_GroundingLeftFootRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_GroundingLeftFootRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootRotationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_GroundingRightFootRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_GroundingRightFootRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightThird_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightThird = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_SpineBendBlendWeightThird", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_SpineBendBlendWeightThird), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightThird_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightThird_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightHalf_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightHalf = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_SpineBendBlendWeightHalf", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_SpineBendBlendWeightHalf), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightHalf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightHalf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotFemale_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotFemale = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_IsNotFemale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_IsNotFemale), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotFemale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotFemale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDeadWith3PArmsSync_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDeadWith3PArmsSync = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_FirstPersonNotDeadWith3PArmsSync", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_FirstPersonNotDeadWith3PArmsSync), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDeadWith3PArmsSync_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDeadWith3PArmsSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_CameraCollisionOffsetWithNot3PArmsSync", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_CameraCollisionOffsetWithNot3PArmsSync), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetAndCollision_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetAndCollision = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_FirstPersonZoomOffsetAndCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_FirstPersonZoomOffsetAndCollision), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetAndCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetAndCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_FirstPersonZoomOffsetInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_FirstPersonZoomOffsetInverse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDead_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDead = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_FirstPersonNotDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_FirstPersonNotDead), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsShoulderFlinchInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsShoulderFlinchInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_ArmsShoulderFlinchInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_ArmsShoulderFlinchInverse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsShoulderFlinchInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsShoulderFlinchInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchRotationInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchRotationInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_HipsFlinchRotationInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_HipsFlinchRotationInverse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchRotationInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchRotationInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchTranslationInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchTranslationInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_HipsFlinchTranslationInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_HipsFlinchTranslationInverse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchTranslationInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchTranslationInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotDrivingFloat_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotDrivingFloat = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_IsNotDrivingFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_IsNotDrivingFloat), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotDrivingFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotDrivingFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BreathAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BreathAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_BreathAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_BreathAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BreathAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BreathAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_TrackingWeightAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_TrackingWeightAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_TrackingWeightAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_TrackingWeightAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_TrackingWeightAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_TrackingWeightAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBHipsZOverrideAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBHipsZOverrideAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_LBHipsZOverrideAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBHipsZOverrideAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBHipsZOverrideAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBHipsZOverrideAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffsetInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffsetInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBCrouchOffsetInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBCrouchOffsetInverse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffsetInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffsetInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBCrouchOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBCrouchOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bHelper_LBVelocityIsZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero = { UE4CodeGen_Private::EPropertyClass::Bool, "bHelper_LBVelocityIsZero", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBVelocity_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_UBVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBVelocity), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBDirectionOffsetSlowFootRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBDirectionOffsetSlowFootRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBDirectionOffsetSlowHipsZInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBDirectionOffsetSlowHipsZInverse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZ_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZ = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBDirectionOffsetSlowHipsZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBDirectionOffsetSlowHipsZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotatorInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotatorInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBDirectionOffsetSlowRotatorInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBDirectionOffsetSlowRotatorInverse), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotatorInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotatorInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotator_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_LBDirectionOffsetSlowRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBDirectionOffsetSlowRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bHelper_LBFootShufflingRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight = { UE4CodeGen_Private::EPropertyClass::Bool, "bHelper_LBFootShufflingRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBFootShufflingPlayRate_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBFootShufflingPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_LBFootShufflingPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBFootShufflingPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBFootShufflingPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBFootShufflingPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bHelper_LBFootShuffling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling = { UE4CodeGen_Private::EPropertyClass::Bool, "bHelper_LBFootShuffling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationRotator_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_UBSpineArmsCompensationRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBSpineArmsCompensationRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationRotator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_UBSpineArmsCompensationAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBSpineArmsCompensationAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchShoulder_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchShoulder = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_UBCrouchShoulder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBCrouchShoulder), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchShoulder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchHead_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchHead = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_UBCrouchHead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBCrouchHead), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchHead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchArms_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchArms = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_UBCrouchArms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBCrouchArms), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchArms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchArms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchForearms_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchForearms = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_UBCrouchForearms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBCrouchForearms), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchForearms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchForearms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchSpine_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchSpine = { UE4CodeGen_Private::EPropertyClass::Struct, "Helper_UBCrouchSpine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBCrouchSpine), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchSpine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchSpine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_LBCrouchAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_LBCrouchAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "Helper_UBCrouchAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Helper_UBCrouchAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadFlinchTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HeadFlinchTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadFlinchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HeadFlinchRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "NeckFlinchTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, NeckFlinchTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NeckFlinchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, NeckFlinchRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "Spine1FlinchTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Spine1FlinchTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Spine1FlinchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Spine1FlinchRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "SpineFlinchTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpineFlinchTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "SpineFlinchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpineFlinchRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "LowerBackFlinchTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBackFlinchTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "LowerBackFlinchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBackFlinchRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslationInternal_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslationInternal = { UE4CodeGen_Private::EPropertyClass::Struct, "HipsFlinchTranslationInternal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HipsFlinchTranslationInternal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslationInternal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslationInternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "HipsFlinchTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HipsFlinchTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "HipsFlinchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HipsFlinchRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CurrentFlinchSpineRotationsCombined_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CurrentFlinchSpineRotationsCombined = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentFlinchSpineRotationsCombined", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CurrentFlinchSpineRotationsCombined), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CurrentFlinchSpineRotationsCombined_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CurrentFlinchSpineRotationsCombined_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchStartTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchStartTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHitSpineIdx_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHitSpineIdx = { UE4CodeGen_Private::EPropertyClass::Int, "FlinchHitSpineIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchHitSpineIdx), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHitSpineIdx_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHitSpineIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsTranslationTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsTranslationTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "FlinchHipsTranslationTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchHipsTranslationTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsTranslationTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsTranslationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "FlinchTranslationTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchTranslationTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "FlinchRotationTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchRotationTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TranslationNonHipsFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TranslationNonHipsFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TranslationNonHipsFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, TranslationNonHipsFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TranslationNonHipsFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TranslationNonHipsFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponDirHipsZFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponDirHipsZFactor = { UE4CodeGen_Private::EPropertyClass::Float, "WeaponDirHipsZFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, WeaponDirHipsZFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponDirHipsZFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponDirHipsZFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsZFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsZFactor = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchHipsZFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchHipsZFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsZFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsZFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchYawFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchYawFactor = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchPitchYawFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchPitchYawFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchYawFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchYawFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchYawAmount_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchYawAmount = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchYawAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchYawAmount), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchYawAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchYawAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchAmount_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchAmount = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchPitchAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchPitchAmount), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeedFast_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeedFast = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchTranslationBlendOutSpeedFast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchTranslationBlendOutSpeedFast), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeedFast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeedFast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeedFast_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeedFast = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchRotationBlendOutSpeedFast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchRotationBlendOutSpeedFast), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeedFast_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeedFast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchTranslationBlendOutSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchTranslationBlendOutSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchRotationBlendOutSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchRotationBlendOutSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendInSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendInSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchTranslationBlendInSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchTranslationBlendInSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendInSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendInSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendInSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendInSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchRotationBlendInSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchRotationBlendInSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendInSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendInSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchBlendInDuration_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchBlendInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchBlendInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchBlendInDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchBlendInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchBlendInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInAlpha_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchFreezeBlendInAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchFreezeBlendInAlpha), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeTranslationBlendInSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeTranslationBlendInSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchFreezeTranslationBlendInSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchFreezeTranslationBlendInSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeTranslationBlendInSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeTranslationBlendInSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeRotationBlendInSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeRotationBlendInSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchFreezeRotationBlendInSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchFreezeRotationBlendInSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeRotationBlendInSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeRotationBlendInSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInDuration_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FlinchFreezeBlendInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FlinchFreezeBlendInDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotationStart_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotationStart = { UE4CodeGen_Private::EPropertyClass::Struct, "HitEffectRotationStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectRotationStart), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotationStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotationStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitEffectRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocationStart_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocationStart = { UE4CodeGen_Private::EPropertyClass::Struct, "HitEffectIKLocationStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectIKLocationStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocationStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocationStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitEffectIKLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectIKLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectDisableSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectDisableSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "HitEffectDisableSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectDisableSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectDisableSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectDisableSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectLocationSlideSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectLocationSlideSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "HitEffectLocationSlideSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectLocationSlideSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectLocationSlideSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectLocationSlideSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKWeight = { UE4CodeGen_Private::EPropertyClass::Float, "HitEffectIKWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HitEffectIKWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bBallistaReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading = { UE4CodeGen_Private::EPropertyClass::Bool, "bBallistaReloading", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeatRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeatRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleSeatRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleSeatRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeatRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeatRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRotationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleActorRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleActorRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleActorRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleActorRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleActorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeat_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeat = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleSeat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleSeat), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleDirection_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleDirection = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleDirection), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleVelocity_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleVelocity), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleRightFootRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleRightFootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleLeftFootRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleLeftFootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleRightFootTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleRightFootTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleLeftFootTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleLeftFootTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLookUp_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLookUp = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleLookUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleLookUp), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLookUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLookUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTurn_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTurn = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleTurn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleTurn), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTurn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightHandTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightHandTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleRightHandTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleRightHandTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightHandTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightHandTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftHandTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftHandTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleLeftHandTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleLeftHandTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftHandTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftHandTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimRate_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimRate = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleAnimRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleAnimRate), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimTime = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleAnimTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleAnimTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Lean = { UE4CodeGen_Private::EPropertyClass::Float, "Lean", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Lean), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Lean_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Rearing_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Rearing = { UE4CodeGen_Private::EPropertyClass::Float, "Rearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Rearing), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Rearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Rearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Couching_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Couching = { UE4CodeGen_Private::EPropertyClass::Float, "Couching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Couching), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Couching_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Couching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsHorseRearing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHorseRearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsCurrentLowerA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCurrentLowerA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HorseUpperRearing_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HorseUpperRearing = { UE4CodeGen_Private::EPropertyClass::Object, "HorseUpperRearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HorseUpperRearing), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HorseUpperRearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HorseUpperRearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationB = { UE4CodeGen_Private::EPropertyClass::Object, "LowerBodyAnimationB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyAnimationB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationA = { UE4CodeGen_Private::EPropertyClass::Object, "LowerBodyAnimationA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyAnimationA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsCurrentUpperA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCurrentUpperA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveB = { UE4CodeGen_Private::EPropertyClass::Object, "UpperAdditiveB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UpperAdditiveB), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceBBlendTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceBBlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "UpperBlendSpaceBBlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UpperBlendSpaceBBlendTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceBBlendTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceBBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceB = { UE4CodeGen_Private::EPropertyClass::Object, "UpperBlendSpaceB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UpperBlendSpaceB), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveA = { UE4CodeGen_Private::EPropertyClass::Object, "UpperAdditiveA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UpperAdditiveA), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceABlendTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceABlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "UpperBlendSpaceABlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UpperBlendSpaceABlendTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceABlendTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceABlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceA = { UE4CodeGen_Private::EPropertyClass::Object, "UpperBlendSpaceA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UpperBlendSpaceA), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBlendSpaceBlendTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBlendSpaceBlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "LowerBodyBlendSpaceBlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyBlendSpaceBlendTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBlendSpaceBlendTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBlendSpaceBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AltParryPushAdditive_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AltParryPushAdditive = { UE4CodeGen_Private::EPropertyClass::Object, "AltParryPushAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AltParryPushAdditive), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AltParryPushAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AltParryPushAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryPushAdditive_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryPushAdditive = { UE4CodeGen_Private::EPropertyClass::Object, "ParryPushAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ParryPushAdditive), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryPushAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryPushAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryAdditive_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryAdditive = { UE4CodeGen_Private::EPropertyClass::Object, "ParryAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ParryAdditive), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayWeight = { UE4CodeGen_Private::EPropertyClass::Float, "SwayWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SwayWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "SwayRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SwayRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RangedDrawnAdditive_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RangedDrawnAdditive = { UE4CodeGen_Private::EPropertyClass::Object, "RangedDrawnAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RangedDrawnAdditive), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RangedDrawnAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RangedDrawnAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabChambered_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabChambered = { UE4CodeGen_Private::EPropertyClass::Object, "LeftStabChambered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftStabChambered), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabChambered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabChambered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabChambered_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabChambered = { UE4CodeGen_Private::EPropertyClass::Object, "RightStabChambered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightStabChambered), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabChambered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabChambered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStrikeBounce_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStrikeBounce = { UE4CodeGen_Private::EPropertyClass::Object, "RightStrikeBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightStrikeBounce), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStrikeBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStrikeBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStrikeBounce_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStrikeBounce = { UE4CodeGen_Private::EPropertyClass::Object, "LeftStrikeBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftStrikeBounce), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStrikeBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStrikeBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabBounce_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabBounce = { UE4CodeGen_Private::EPropertyClass::Object, "RightStabBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightStabBounce), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabBounce_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabBounce = { UE4CodeGen_Private::EPropertyClass::Object, "LeftStabBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftStabBounce), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftTorsoBlendWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftTorsoBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "LeftTorsoBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftTorsoBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftTorsoBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftTorsoBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineSpaceAdditive_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineSpaceAdditive = { UE4CodeGen_Private::EPropertyClass::Struct, "SpineSpaceAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpineSpaceAdditive), Z_Construct_UScriptStruct_FSpineSpaceAdditive, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineSpaceAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineSpaceAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DisarmDirection_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DisarmDirection = { UE4CodeGen_Private::EPropertyClass::Float, "DisarmDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, DisarmDirection), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DisarmDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DisarmDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BlockDirection_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BlockDirection = { UE4CodeGen_Private::EPropertyClass::Float, "BlockDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BlockDirection), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BlockDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BlockDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Arms3PSyncWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Arms3PSyncWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Arms3PSyncWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Arms3PSyncWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Arms3PSyncWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Arms3PSyncWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeight = { UE4CodeGen_Private::EPropertyClass::Float, "AtmosphericsWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AtmosphericsWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandIsEmpty_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandIsEmpty = { UE4CodeGen_Private::EPropertyClass::Float, "LeftHandIsEmpty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftHandIsEmpty), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandIsEmpty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandIsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TurnValue_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TurnValue = { UE4CodeGen_Private::EPropertyClass::Float, "TurnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, TurnValue), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TurnValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TurnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineArmsCompensationFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineArmsCompensationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SpineArmsCompensationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpineArmsCompensationFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineArmsCompensationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineArmsCompensationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineBendBlendWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineBendBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "SpineBendBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpineBendBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineBendBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineBendBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightLegBendBlendWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightLegBendBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "RightLegBendBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightLegBendBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightLegBendBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightLegBendBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookUpValue_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookUpValue = { UE4CodeGen_Private::EPropertyClass::Float, "LookUpValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LookUpValue), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookUpValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookUpValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "CounterCompensateRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CounterCompensateRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateLookWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateLookWeight = { UE4CodeGen_Private::EPropertyClass::Float, "CounterCompensateLookWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CounterCompensateLookWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateLookWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateLookWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactorTarget_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactorTarget = { UE4CodeGen_Private::EPropertyClass::Float, "LowerBodyBreathFactorTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyBreathFactorTarget), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactorTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactor = { UE4CodeGen_Private::EPropertyClass::Float, "LowerBodyBreathFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyBreathFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathInternal_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathInternal = { UE4CodeGen_Private::EPropertyClass::Float, "LowerBodyBreathInternal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyBreathInternal), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathInternal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathInternal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Breath_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Breath = { UE4CodeGen_Private::EPropertyClass::Float, "Breath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Breath), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Breath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Breath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideNose_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideNose = { UE4CodeGen_Private::EPropertyClass::Float, "HideNose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HideNose), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideNose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideNose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideEars_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideEars = { UE4CodeGen_Private::EPropertyClass::Float, "HideEars", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HideEars), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideEars_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideEars_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationEyes_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationEyes = { UE4CodeGen_Private::EPropertyClass::Struct, "LookingAtRotationEyes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LookingAtRotationEyes), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationEyes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationEyes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationHead_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationHead = { UE4CodeGen_Private::EPropertyClass::Struct, "LookingAtRotationHead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LookingAtRotationHead), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationHead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationNeck_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationNeck = { UE4CodeGen_Private::EPropertyClass::Struct, "LookingAtRotationNeck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LookingAtRotationNeck), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationNeck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationNeck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TrackingWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TrackingWeight = { UE4CodeGen_Private::EPropertyClass::Float, "TrackingWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, TrackingWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TrackingWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TrackingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsRightArmDismembered_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsRightArmDismembered = { UE4CodeGen_Private::EPropertyClass::Float, "IsRightArmDismembered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsRightArmDismembered), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsRightArmDismembered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsRightArmDismembered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderDismemberedRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderDismemberedRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RightShoulderDismemberedRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightShoulderDismemberedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderDismemberedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderDismemberedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsLeftArmDismembered_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsLeftArmDismembered = { UE4CodeGen_Private::EPropertyClass::Float, "IsLeftArmDismembered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsLeftArmDismembered), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsLeftArmDismembered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsLeftArmDismembered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderDismemberedRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderDismemberedRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftShoulderDismemberedRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftShoulderDismemberedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderDismemberedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderDismemberedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckDismemberedRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckDismemberedRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NeckDismemberedRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, NeckDismemberedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckDismemberedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckDismemberedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsHeadDismembered_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsHeadDismembered = { UE4CodeGen_Private::EPropertyClass::Float, "IsHeadDismembered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsHeadDismembered), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsHeadDismembered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsHeadDismembered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Strong_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Strong = { UE4CodeGen_Private::EPropertyClass::Float, "Strong", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Strong), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Strong_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Strong_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Skinny_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Skinny = { UE4CodeGen_Private::EPropertyClass::Float, "Skinny", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Skinny), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Skinny_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Skinny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Fat_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Fat = { UE4CodeGen_Private::EPropertyClass::Float, "Fat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Fat), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Fat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Fat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightUpLegAdjustT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightUpLegAdjustT = { UE4CodeGen_Private::EPropertyClass::Struct, "RightUpLegAdjustT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightUpLegAdjustT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightUpLegAdjustT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightUpLegAdjustT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftUpLegAdjustT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftUpLegAdjustT = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftUpLegAdjustT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftUpLegAdjustT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftUpLegAdjustT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftUpLegAdjustT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightArmAdjustT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightArmAdjustT = { UE4CodeGen_Private::EPropertyClass::Struct, "RightArmAdjustT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightArmAdjustT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightArmAdjustT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightArmAdjustT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftArmAdjustT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftArmAdjustT = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftArmAdjustT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftArmAdjustT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftArmAdjustT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftArmAdjustT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineAdjustT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineAdjustT = { UE4CodeGen_Private::EPropertyClass::Struct, "SpineAdjustT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpineAdjustT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineAdjustT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineAdjustT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackBellyT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackBellyT = { UE4CodeGen_Private::EPropertyClass::Struct, "LowerBackBellyT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBackBellyT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackBellyT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackBellyT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BreastsT_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BreastsT = { UE4CodeGen_Private::EPropertyClass::Struct, "BreastsT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BreastsT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BreastsT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BreastsT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorLegs_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorLegs = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyFactorLegs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyFactorLegs), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorLegs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorLegs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBelly_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBelly = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyFactorBelly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyFactorBelly), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBelly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBelly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorArms_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorArms = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyFactorArms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyFactorArms), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorArms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorArms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBreasts_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBreasts = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyFactorBreasts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyFactorBreasts), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBreasts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBreasts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyInterpSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFastVelocityLagTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFastVelocityLagTime = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyFastVelocityLagTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyFastVelocityLagTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFastVelocityLagTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFastVelocityLagTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncySlowVelocityLagTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncySlowVelocityLagTime = { UE4CodeGen_Private::EPropertyClass::Float, "BouncySlowVelocityLagTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncySlowVelocityLagTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncySlowVelocityLagTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncySlowVelocityLagTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyMagnitudeOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyMagnitudeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "BouncyMagnitudeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BouncyMagnitudeOffset), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyMagnitudeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyMagnitudeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LandAnimation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LandAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "LandAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LandAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LandAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LandAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FallingAnimation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FallingAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FallingAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FallingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FallingAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FallingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_JumpAnimation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_JumpAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "JumpAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, JumpAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_JumpAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_JumpAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIsRightHand_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIsRightHand = { UE4CodeGen_Private::EPropertyClass::Float, "OffhandIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, OffhandIsRightHand), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIsRightHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIsRightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RightHandGripRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightHandGripRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripPosition_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "RightHandGripPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightHandGripPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandGripPosition_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandGripPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftHandGripPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftHandGripPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandGripPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandGripPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIKWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIKWeight = { UE4CodeGen_Private::EPropertyClass::Float, "OffhandIKWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, OffhandIKWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIKWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIKWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffsetWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffsetWeight = { UE4CodeGen_Private::EPropertyClass::Float, "RightHandIKOffsetWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightHandIKOffsetWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffsetWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffsetWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RightHandIKOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightHandIKOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ShoulderOffset1PWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ShoulderOffset1PWeight = { UE4CodeGen_Private::EPropertyClass::Float, "ShoulderOffset1PWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ShoulderOffset1PWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ShoulderOffset1PWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ShoulderOffset1PWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderOffset1P_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderOffset1P = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftShoulderOffset1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LeftShoulderOffset1P), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderOffset1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderOffset1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderOffset1P_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderOffset1P = { UE4CodeGen_Private::EPropertyClass::Struct, "RightShoulderOffset1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightShoulderOffset1P), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderOffset1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderOffset1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideCompensationWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideCompensationWeight = { UE4CodeGen_Private::EPropertyClass::Float, "WeaponSlideCompensationWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, WeaponSlideCompensationWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideCompensationWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideCompensationWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVectorInverse_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVectorInverse = { UE4CodeGen_Private::EPropertyClass::Struct, "WeaponSlideVectorInverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, WeaponSlideVectorInverse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVectorInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVectorInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVector_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVector = { UE4CodeGen_Private::EPropertyClass::Struct, "WeaponSlideVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, WeaponSlideVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightWeaponBoneBaseTransform_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightWeaponBoneBaseTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "RightWeaponBoneBaseTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RightWeaponBoneBaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightWeaponBoneBaseTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightWeaponBoneBaseTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CameraCollisionOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CameraCollisionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraCollisionOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CameraCollisionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CameraCollisionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CameraCollisionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FirstPersonZoomOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FirstPersonZoomOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "FirstPersonZoomOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FirstPersonZoomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FirstPersonZoomOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FirstPersonZoomOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsNotFirstPersonFloat_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsNotFirstPersonFloat = { UE4CodeGen_Private::EPropertyClass::Float, "IsNotFirstPersonFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsNotFirstPersonFloat), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsNotFirstPersonFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsNotFirstPersonFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFirstPersonFloat_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFirstPersonFloat = { UE4CodeGen_Private::EPropertyClass::Float, "IsFirstPersonFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsFirstPersonFloat), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFirstPersonFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFirstPersonFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFirstPerson", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HandSpringWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HandSpringWeight = { UE4CodeGen_Private::EPropertyClass::Float, "HandSpringWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, HandSpringWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HandSpringWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HandSpringWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawMass_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawMass = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringPitchYawMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpringPitchYawMass), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawDamping_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawDamping = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringPitchYawDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpringPitchYawDamping), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawStiffness_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawStiffness = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringPitchYawStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpringPitchYawStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_YawSpringState_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_YawSpringState = { UE4CodeGen_Private::EPropertyClass::Struct, "YawSpringState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, YawSpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_YawSpringState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_YawSpringState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PitchSpringState_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PitchSpringState = { UE4CodeGen_Private::EPropertyClass::Struct, "PitchSpringState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, PitchSpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PitchSpringState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PitchSpringState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawValue_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawValue = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringPitchYawValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpringPitchYawValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityPitch_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityPitch = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocityPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AngularVelocityPitch), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimatedMovementDirectionInCompSpace_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimatedMovementDirectionInCompSpace = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimatedMovementDirectionInCompSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AnimatedMovementDirectionInCompSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimatedMovementDirectionInCompSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimatedMovementDirectionInCompSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBodyWindow_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBodyWindow = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocityLowerBodyWindow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AngularVelocityLowerBodyWindow), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBodyWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBodyWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBody_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBody = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocityLowerBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AngularVelocityLowerBody), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AbsoluteAngularVelocityLowerBody_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AbsoluteAngularVelocityLowerBody = { UE4CodeGen_Private::EPropertyClass::Float, "AbsoluteAngularVelocityLowerBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AbsoluteAngularVelocityLowerBody), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AbsoluteAngularVelocityLowerBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AbsoluteAngularVelocityLowerBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AngularVelocity), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityInterpSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "AngularVelocityInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AngularVelocityInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopDuckFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopDuckFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StopDuckFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, StopDuckFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopDuckFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopDuckFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopTiltFactor_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopTiltFactor = { UE4CodeGen_Private::EPropertyClass::Float, "StopTiltFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, StopTiltFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopTiltFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopTiltFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastVelocityLagTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastVelocityLagTime = { UE4CodeGen_Private::EPropertyClass::Float, "FastVelocityLagTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FastVelocityLagTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastVelocityLagTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastVelocityLagTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SlowVelocityLagTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SlowVelocityLagTime = { UE4CodeGen_Private::EPropertyClass::Float, "SlowVelocityLagTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SlowVelocityLagTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SlowVelocityLagTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SlowVelocityLagTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuckLimit_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuckLimit = { UE4CodeGen_Private::EPropertyClass::Float, "BounceDuckLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BounceDuckLimit), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuckLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuckLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuck_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuck = { UE4CodeGen_Private::EPropertyClass::Struct, "BounceDuck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BounceDuck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceInterpSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BounceInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, BounceInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceLimit_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "StopBounceLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, StopBounceLimit), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceWorld_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceWorld = { UE4CodeGen_Private::EPropertyClass::Struct, "StopBounceWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, StopBounceWorld), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounce_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounce = { UE4CodeGen_Private::EPropertyClass::Struct, "StopBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, StopBounce), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bUseBackBlendSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseBackBlendSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ThirdPersonVelocity_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ThirdPersonVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "ThirdPersonVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ThirdPersonVelocity), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ThirdPersonVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ThirdPersonVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpeedWarping_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpeedWarping = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedWarping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SpeedWarping), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpeedWarping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpeedWarping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementAnimRate_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementAnimRate = { UE4CodeGen_Private::EPropertyClass::Float, "MovementAnimRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, MovementAnimRate), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementAnimRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementAnimRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementSpeedScale_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementSpeedScale = { UE4CodeGen_Private::EPropertyClass::Float, "MovementSpeedScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, MovementSpeedScale), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementSpeedScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementSpeedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimRateFactor1PMaxSprint_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimRateFactor1PMaxSprint = { UE4CodeGen_Private::EPropertyClass::Float, "AnimRateFactor1PMaxSprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AnimRateFactor1PMaxSprint), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimRateFactor1PMaxSprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimRateFactor1PMaxSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OneToZeroAtWalkSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OneToZeroAtWalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "OneToZeroAtWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, OneToZeroAtWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OneToZeroAtWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OneToZeroAtWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SmoothedVelocity_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SmoothedVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "SmoothedVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SmoothedVelocity), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SmoothedVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SmoothedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Float, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Velocity), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Velocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlow_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlow = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionOffsetSlow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, DirectionOffsetSlow), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlowInterpSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlowInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionOffsetSlowInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, DirectionOffsetSlowInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlowInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlowInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, DirectionOffset), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionWithOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionWithOffset = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionWithOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, DirectionWithOffset), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionWithOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionWithOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionAnimRate_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionAnimRate = { UE4CodeGen_Private::EPropertyClass::Float, "MovementCorrectionAnimRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, MovementCorrectionAnimRate), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionAnimRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionAnimRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHipsInterpSpeed_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHipsInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MovementCorrectionHipsInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, MovementCorrectionHipsInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHipsInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHipsInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHips_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHips = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementCorrectionHips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, MovementCorrectionHips), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHips_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Float, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyRotationOffset_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LowerBodyRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LowerBodyRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDrivingFloat_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDrivingFloat = { UE4CodeGen_Private::EPropertyClass::Float, "IsDrivingFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsDrivingFloat), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDrivingFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDrivingFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleTransitionComponentRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleTransitionComponentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentLocation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "VehicleTransitionComponentLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleTransitionComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionBlendWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "VehicleTransitionBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleTransitionBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionAnimation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "VehicleTransitionAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, VehicleTransitionAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringMass_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringMass = { UE4CodeGen_Private::EPropertyClass::Float, "CrouchSpringMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CrouchSpringMass), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringDamping_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringDamping = { UE4CodeGen_Private::EPropertyClass::Float, "CrouchSpringDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CrouchSpringDamping), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UncrouchSpringStiffness_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UncrouchSpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "UncrouchSpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UncrouchSpringStiffness), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UncrouchSpringStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UncrouchSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringStiffness_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "CrouchSpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CrouchSpringStiffness), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringLimits_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "CrouchSpringLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CrouchSpringLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringState_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringState = { UE4CodeGen_Private::EPropertyClass::Struct, "CrouchSpringState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CrouchSpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UnclampedFastSmoothedIsCrouching_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UnclampedFastSmoothedIsCrouching = { UE4CodeGen_Private::EPropertyClass::Float, "UnclampedFastSmoothedIsCrouching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, UnclampedFastSmoothedIsCrouching), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UnclampedFastSmoothedIsCrouching_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UnclampedFastSmoothedIsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastSmoothedIsCrouching_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastSmoothedIsCrouching = { UE4CodeGen_Private::EPropertyClass::Float, "FastSmoothedIsCrouching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FastSmoothedIsCrouching), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastSmoothedIsCrouching_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastSmoothedIsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingB = { UE4CodeGen_Private::EPropertyClass::Float, "IsSlowClimbingB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsSlowClimbingB), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationB = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbRotationB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbRotationB), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetB = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbLedgeOffsetB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbLedgeOffsetB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetB = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbOffsetEndOffsetB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbOffsetEndOffsetB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetB = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbOffsetB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbOffsetB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsClimbingB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsClimbingB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationA = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbRotationA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbRotationA), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingA = { UE4CodeGen_Private::EPropertyClass::Float, "IsSlowClimbingA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsSlowClimbingA), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetA = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbLedgeOffsetA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbLedgeOffsetA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetA = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbOffsetEndOffsetA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbOffsetEndOffsetA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetA = { UE4CodeGen_Private::EPropertyClass::Struct, "ClimbOffsetA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, ClimbOffsetA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsClimbingA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsClimbingA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFemale_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFemale = { UE4CodeGen_Private::EPropertyClass::Float, "IsFemale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsFemale), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFemale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFemale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1Distance_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1Distance = { UE4CodeGen_Private::EPropertyClass::Float, "AnimLOD1Distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AnimLOD1Distance), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0Distance_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0Distance = { UE4CodeGen_Private::EPropertyClass::Float, "AnimLOD0Distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AnimLOD0Distance), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0Distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRenderedNonAuth_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRenderedNonAuth = { UE4CodeGen_Private::EPropertyClass::Float, "RecentlyRenderedNonAuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RecentlyRenderedNonAuth), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRenderedNonAuth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRenderedNonAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRendered_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRendered = { UE4CodeGen_Private::EPropertyClass::Float, "RecentlyRendered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, RecentlyRendered), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRendered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1 = { UE4CodeGen_Private::EPropertyClass::Float, "AnimLOD1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AnimLOD1), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0 = { UE4CodeGen_Private::EPropertyClass::Float, "AnimLOD0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, AnimLOD0), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDedicatedServer_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Float, "IsDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, IsDedicatedServer), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DeathSyncedRandom_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DeathSyncedRandom = { UE4CodeGen_Private::EPropertyClass::Byte, "DeathSyncedRandom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, DeathSyncedRandom), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DeathSyncedRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DeathSyncedRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpRotation_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "GetUpRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, GetUpRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpAnimationDuration_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpAnimationDuration = { UE4CodeGen_Private::EPropertyClass::Float, "GetUpAnimationDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, GetUpAnimationDuration), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpAnimationDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpAnimationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bIsGetUpFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGetUpFront", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bShouldPerformInstantAnimSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldPerformInstantAnimSwitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Force1PMeshCorrectionWeight_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Force1PMeshCorrectionWeight = { UE4CodeGen_Private::EPropertyClass::Float, "Force1PMeshCorrectionWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Force1PMeshCorrectionWeight), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Force1PMeshCorrectionWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Force1PMeshCorrectionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LastRagdollFallingTime_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LastRagdollFallingTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastRagdollFallingTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, LastRagdollFallingTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LastRagdollFallingTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LastRagdollFallingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling_SetBit(void* Obj)
	{
		((UMordhauAnimInstance*)Obj)->bWasRagdollFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasRagdollFalling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauAnimInstance), &Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MainAnimationType_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MainAnimationType = { UE4CodeGen_Private::EPropertyClass::Name, "MainAnimationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, MainAnimationType), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MainAnimationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MainAnimationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FootstepSound_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FootstepSound = { UE4CodeGen_Private::EPropertyClass::Object, "FootstepSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FootstepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FootstepSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FootstepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles = { UE4CodeGen_Private::EPropertyClass::Array, "SprintFootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, SprintFootstepParticles), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SprintFootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles = { UE4CodeGen_Private::EPropertyClass::Array, "CrouchFootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, CrouchFootstepParticles), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CrouchFootstepParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PreviousRightHandEquipment_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PreviousRightHandEquipment = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PreviousRightHandEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, PreviousRightHandEquipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PreviousRightHandEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PreviousRightHandEquipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Dismemberment_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Dismemberment = { UE4CodeGen_Private::EPropertyClass::Struct, "Dismemberment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, Dismemberment), Z_Construct_UScriptStruct_FAnimNodePackedDismemberment, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Dismemberment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Dismemberment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FaceCustomization_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FaceCustomization = { UE4CodeGen_Private::EPropertyClass::Struct, "FaceCustomization", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, FaceCustomization), Z_Construct_UScriptStruct_FAnimNodePackedFaceCustomization, METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FaceCustomization_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FaceCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_InternalScaledTimeSeconds_MetaData[] = {
		{ "Category", "MordhauAnimInstance" },
		{ "ModuleRelativePath", "MordhauAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_InternalScaledTimeSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "InternalScaledTimeSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauAnimInstance, InternalScaledTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_InternalScaledTimeSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_InternalScaledTimeSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_JiggleBouncyWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ShoulderOffset1PWith1PWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HandSpringWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpringPitchYawValueRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightWeaponBoneBaseTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LowerBodyRotationOffsetInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeightWithAnimLOD0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsBendRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightLegBendRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotationAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsBendRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeightInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BounceDuckWithBounceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceHips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceLightWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_StopBounceMediumWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RootRotationOffsetInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_RightHandIKWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LeftHandIKWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FaceUpperLids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NotFirstPersonWithAtmospherics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootTranslationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootTranslationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingLeftFootRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_GroundingRightFootRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightThird,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_SpineBendBlendWeightHalf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotFemale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDeadWith3PArmsSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_CameraCollisionOffsetWithNot3PArmsSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetAndCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonZoomOffsetInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_FirstPersonNotDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_ArmsShoulderFlinchInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchRotationInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_HipsFlinchTranslationInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_IsNotDrivingFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_BreathAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_TrackingWeightAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBHipsZOverrideAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffsetInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBVelocityIsZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowFootRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowHipsZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotatorInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBDirectionOffsetSlowRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShufflingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBFootShufflingPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bHelper_LBFootShuffling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBSpineArmsCompensationAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchArms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchForearms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchSpine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_LBCrouchAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Helper_UBCrouchAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HeadFlinchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckFlinchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Spine1FlinchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineFlinchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackFlinchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslationInternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HipsFlinchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CurrentFlinchSpineRotationsCombined,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHitSpineIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsTranslationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TranslationNonHipsFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponDirHipsZFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchHipsZFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchYawFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchYawAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchPitchAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeedFast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeedFast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchTranslationBlendInSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchRotationBlendInSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchBlendInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeTranslationBlendInSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeRotationBlendInSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FlinchFreezeBlendInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocationStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectDisableSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectLocationSlideSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HitEffectIKWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bBallistaReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeatRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleActorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleSeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightFootTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftFootTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLookUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleRightHandTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleLeftHandTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleAnimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Lean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Rearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Couching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsHorseRearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentLowerA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HorseUpperRearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyAnimationA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsCurrentUpperA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceBBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperAdditiveA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceABlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UpperBlendSpaceA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBlendSpaceBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AltParryPushAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryPushAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ParryAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SwayRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RangedDrawnAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabChambered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabChambered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStrikeBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStrikeBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightStabBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftStabBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftTorsoBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineSpaceAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DisarmDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BlockDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Arms3PSyncWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AtmosphericsWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandIsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TurnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineArmsCompensationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineBendBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightLegBendBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookUpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CounterCompensateLookWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyBreathInternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Breath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideNose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HideEars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationEyes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LookingAtRotationNeck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_TrackingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsRightArmDismembered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderDismemberedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsLeftArmDismembered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderDismemberedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_NeckDismemberedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsHeadDismembered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Strong,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Skinny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Fat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightUpLegAdjustT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftUpLegAdjustT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightArmAdjustT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftArmAdjustT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpineAdjustT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBackBellyT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BreastsT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorLegs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBelly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorArms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFactorBreasts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyFastVelocityLagTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncySlowVelocityLagTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BouncyMagnitudeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LandAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FallingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_JumpAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandGripPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftHandGripPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OffhandIKWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffsetWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightHandIKOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ShoulderOffset1PWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LeftShoulderOffset1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightShoulderOffset1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideCompensationWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVectorInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_WeaponSlideVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RightWeaponBoneBaseTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CameraCollisionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FirstPersonZoomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsNotFirstPersonFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFirstPersonFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_HandSpringWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_YawSpringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PitchSpringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpringPitchYawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimatedMovementDirectionInCompSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBodyWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityLowerBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AbsoluteAngularVelocityLowerBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AngularVelocityInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopDuckFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopTiltFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastVelocityLagTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SlowVelocityLagTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuckLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceDuck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_BounceInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounceWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_StopBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bUseBackBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ThirdPersonVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SpeedWarping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementAnimRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementSpeedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimRateFactor1PMaxSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_OneToZeroAtWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SmoothedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffsetSlowInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DirectionWithOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionAnimRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHipsInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MovementCorrectionHips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LowerBodyRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDrivingFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionComponentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_VehicleTransitionAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UncrouchSpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchSpringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_UnclampedFastSmoothedIsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FastSmoothedIsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbRotationA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsSlowClimbingA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbLedgeOffsetA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetEndOffsetA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_ClimbOffsetA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsClimbingA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsFemale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRenderedNonAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_RecentlyRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_AnimLOD0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_IsDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_DeathSyncedRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_GetUpAnimationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bIsGetUpFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bShouldPerformInstantAnimSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Force1PMeshCorrectionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_LastRagdollFallingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_bWasRagdollFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_MainAnimationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FootstepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_SprintFootstepParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_CrouchFootstepParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_PreviousRightHandEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_Dismemberment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_FaceCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauAnimInstance_Statics::NewProp_InternalScaledTimeSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauAnimInstance_Statics::ClassParams = {
		&UMordhauAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UMordhauAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauAnimInstance, 4064895562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauAnimInstance(Z_Construct_UClass_UMordhauAnimInstance, &UMordhauAnimInstance::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
