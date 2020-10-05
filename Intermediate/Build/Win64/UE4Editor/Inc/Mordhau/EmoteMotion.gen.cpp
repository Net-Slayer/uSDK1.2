// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EmoteMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmoteMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UEmoteMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UEmoteMotion();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UEmoteMotion_DoDrop();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UEmoteMotion::StaticRegisterNativesUEmoteMotion()
	{
		UClass* Class = UEmoteMotion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoDrop", &UEmoteMotion::execDoDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics
	{
		struct EmoteMotion_eventDoDrop_Parms
		{
			AMordhauEquipment* Equipment;
			FVector Force;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equipment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Force = { UE4CodeGen_Private::EPropertyClass::Struct, "Force", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EmoteMotion_eventDoDrop_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Force_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Equipment = { UE4CodeGen_Private::EPropertyClass::Object, "Equipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EmoteMotion_eventDoDrop_Parms, Equipment), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::NewProp_Equipment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "EnvironmentMoveFn" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmoteMotion, "DoDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(EmoteMotion_eventDoDrop_Parms), Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmoteMotion_DoDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmoteMotion_DoDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEmoteMotion_NoRegister()
	{
		return UEmoteMotion::StaticClass();
	}
	struct Z_Construct_UClass_UEmoteMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HidRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HidRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HidLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HidLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStartedMainMontageTransitionOut_MetaData[];
#endif
		static void NewProp_bHasStartedMainMontageTransitionOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStartedMainMontageTransitionOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStartedMainMontage_MetaData[];
#endif
		static void NewProp_bHasStartedMainMontage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStartedMainMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasIn1P_MetaData[];
#endif
		static void NewProp_bWasIn1P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasIn1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandDropForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandDropForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropRightHand_MetaData[];
#endif
		static void NewProp_bDropRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandDropForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandDropForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropLeftHand_MetaData[];
#endif
		static void NewProp_bDropLeftHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropLeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnequipRightHand_MetaData[];
#endif
		static void NewProp_bUnequipRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnequipRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnequipLeftHand_MetaData[];
#endif
		static void NewProp_bUnequipLeftHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnequipLeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideRightHand_MetaData[];
#endif
		static void NewProp_bHideRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideLeftHand_MetaData[];
#endif
		static void NewProp_bHideLeftHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce3P_MetaData[];
#endif
		static void NewProp_bForce3P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce3P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTransitionOutMontageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTransitionOutMontageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMontageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMontageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionOutMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransitionOutMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionInMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransitionInMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnCaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TurnCaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CancelBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CancelTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanEmoteAfter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CanEmoteAfter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmoteMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauMotion,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEmoteMotion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEmoteMotion_DoDrop, "DoDrop" }, // 4205507216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmoteMotion.h" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidRight_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidRight = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HidRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, HidRight), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidLeft_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidLeft = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HidLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, HidLeft), Z_Construct_UClass_AMordhauEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bHasStartedMainMontageTransitionOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStartedMainMontageTransitionOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bHasStartedMainMontage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStartedMainMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bWasIn1P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasIn1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_RightHandDropForce_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_RightHandDropForce = { UE4CodeGen_Private::EPropertyClass::Struct, "RightHandDropForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, RightHandDropForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_RightHandDropForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_RightHandDropForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bDropRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bDropRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_LeftHandDropForce_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_LeftHandDropForce = { UE4CodeGen_Private::EPropertyClass::Struct, "LeftHandDropForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, LeftHandDropForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_LeftHandDropForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_LeftHandDropForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bDropLeftHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bDropLeftHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bUnequipRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bUnequipRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bUnequipLeftHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bUnequipLeftHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bHideRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bHideLeftHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideLeftHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	void Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P_SetBit(void* Obj)
	{
		((UEmoteMotion*)Obj)->bForce3P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P = { UE4CodeGen_Private::EPropertyClass::Bool, "bForce3P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEmoteMotion), &Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartTransitionOutMontageTime_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartTransitionOutMontageTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTransitionOutMontageTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, StartTransitionOutMontageTime), METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartTransitionOutMontageTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartTransitionOutMontageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartMontageTime_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartMontageTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartMontageTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, StartMontageTime), METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartMontageTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartMontageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionOutMontage_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionOutMontage = { UE4CodeGen_Private::EPropertyClass::Object, "TransitionOutMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, TransitionOutMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionOutMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionOutMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionInMontage_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionInMontage = { UE4CodeGen_Private::EPropertyClass::Object, "TransitionInMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, TransitionInMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionInMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionInMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TurnCaps_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TurnCaps = { UE4CodeGen_Private::EPropertyClass::Struct, "TurnCaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, TurnCaps), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TurnCaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TurnCaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelBlendTime_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelBlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "CancelBlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, CancelBlendTime), METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelBlendTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelTime_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelTime = { UE4CodeGen_Private::EPropertyClass::Float, "CancelTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, CancelTime), METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CanEmoteAfter_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CanEmoteAfter = { UE4CodeGen_Private::EPropertyClass::Float, "CanEmoteAfter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, CanEmoteAfter), METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CanEmoteAfter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CanEmoteAfter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "EmoteMotion" },
		{ "ModuleRelativePath", "EmoteMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEmoteMotion, Duration), METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEmoteMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_HidLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontageTransitionOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHasStartedMainMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bWasIn1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_RightHandDropForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_LeftHandDropForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bDropLeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bUnequipLeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bHideLeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_bForce3P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartTransitionOutMontageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_StartMontageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionOutMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TransitionInMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_TurnCaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CancelTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_CanEmoteAfter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmoteMotion_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmoteMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmoteMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmoteMotion_Statics::ClassParams = {
		&UEmoteMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEmoteMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEmoteMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEmoteMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmoteMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmoteMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmoteMotion, 2162672463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmoteMotion(Z_Construct_UClass_UEmoteMotion, &UEmoteMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UEmoteMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmoteMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
