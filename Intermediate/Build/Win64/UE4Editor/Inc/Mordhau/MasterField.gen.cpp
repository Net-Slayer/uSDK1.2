// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MasterField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterField() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMasterField_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMasterField();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_BeginFieldDeactivation();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_CreateField();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_GetSubFields();
	MORDHAU_API UClass* Z_Construct_UClass_ASubField_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_SetSubFieldsHidden();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMasterField_UpdateField();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	MORDHAU_API UClass* Z_Construct_UClass_UFieldSpawnComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMasterField_BeginFieldDeactivation = FName(TEXT("BeginFieldDeactivation"));
	void AMasterField::BeginFieldDeactivation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterField_BeginFieldDeactivation),NULL);
	}
	static FName NAME_AMasterField_CreateField = FName(TEXT("CreateField"));
	void AMasterField::CreateField()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterField_CreateField),NULL);
	}
	static FName NAME_AMasterField_DeactivateAndDestroyField = FName(TEXT("DeactivateAndDestroyField"));
	void AMasterField::DeactivateAndDestroyField()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterField_DeactivateAndDestroyField),NULL);
	}
	static FName NAME_AMasterField_UpdateField = FName(TEXT("UpdateField"));
	void AMasterField::UpdateField()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMasterField_UpdateField),NULL);
	}
	void AMasterField::StaticRegisterNativesAMasterField()
	{
		UClass* Class = AMasterField::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeDistanceIntoField", &AMasterField::execComputeDistanceIntoField },
			{ "GetSubFields", &AMasterField::execGetSubFields },
			{ "RecomputeCombinedBoundingBox", &AMasterField::execRecomputeCombinedBoundingBox },
			{ "SetSubFieldsHidden", &AMasterField::execSetSubFieldsHidden },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterField_BeginFieldDeactivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_BeginFieldDeactivation_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldEvents" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_BeginFieldDeactivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "BeginFieldDeactivation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_BeginFieldDeactivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_BeginFieldDeactivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_BeginFieldDeactivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_BeginFieldDeactivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics
	{
		struct MasterField_eventComputeDistanceIntoField_Parms
		{
			FVector Location;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MasterField_eventComputeDistanceIntoField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MasterField_eventComputeDistanceIntoField_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldFunctions" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "ComputeDistanceIntoField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MasterField_eventComputeDistanceIntoField_Parms), Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_CreateField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_CreateField_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldEvents" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_CreateField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "CreateField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_CreateField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_CreateField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_CreateField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_CreateField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldEvents" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "DeactivateAndDestroyField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_GetSubFields_Statics
	{
		struct MasterField_eventGetSubFields_Parms
		{
			TArray<ASubField*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMasterField_GetSubFields_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MasterField_eventGetSubFields_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterField_GetSubFields_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ASubField_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterField_GetSubFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterField_GetSubFields_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterField_GetSubFields_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_GetSubFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldFunctions" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_GetSubFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "GetSubFields", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MasterField_eventGetSubFields_Parms), Z_Construct_UFunction_AMasterField_GetSubFields_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_GetSubFields_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_GetSubFields_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_GetSubFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_GetSubFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_GetSubFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldFunctions" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "RecomputeCombinedBoundingBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics
	{
		struct MasterField_eventSetSubFieldsHidden_Parms
		{
			bool bAreHidden;
		};
		static void NewProp_bAreHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAreHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::NewProp_bAreHidden_SetBit(void* Obj)
	{
		((MasterField_eventSetSubFieldsHidden_Parms*)Obj)->bAreHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::NewProp_bAreHidden = { UE4CodeGen_Private::EPropertyClass::Bool, "bAreHidden", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MasterField_eventSetSubFieldsHidden_Parms), &Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::NewProp_bAreHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::NewProp_bAreHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldFunctions" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "SetSubFieldsHidden", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MasterField_eventSetSubFieldsHidden_Parms), Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_SetSubFieldsHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_SetSubFieldsHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterField_UpdateField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterField_UpdateField_Statics::Function_MetaDataParams[] = {
		{ "Category", "MasterFieldEvents" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterField_UpdateField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterField, "UpdateField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterField_UpdateField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMasterField_UpdateField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterField_UpdateField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMasterField_UpdateField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMasterField_NoRegister()
	{
		return AMasterField::StaticClass();
	}
	struct Z_Construct_UClass_AMasterField_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPresenceTickCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActorPresenceTickCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorPresenceTickCount_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActorPresenceTickCount_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionFilter;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CollisionFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedBoundsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombinedBoundsBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubFields;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFieldSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubFieldSpawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubFieldSpawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBegunDeactivation_MetaData[];
#endif
		static void NewProp_bHasBegunDeactivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBegunDeactivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFieldActive_MetaData[];
#endif
		static void NewProp_bIsFieldActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFieldActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAreSubfieldsHidden_MetaData[];
#endif
		static void NewProp_bAreSubfieldsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAreSubfieldsHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivationStartedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeactivationStartedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldDeactivationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldDeactivationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeactivatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CreatedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterField_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterField_BeginFieldDeactivation, "BeginFieldDeactivation" }, // 588257564
		{ &Z_Construct_UFunction_AMasterField_ComputeDistanceIntoField, "ComputeDistanceIntoField" }, // 4047464543
		{ &Z_Construct_UFunction_AMasterField_CreateField, "CreateField" }, // 1444656826
		{ &Z_Construct_UFunction_AMasterField_DeactivateAndDestroyField, "DeactivateAndDestroyField" }, // 506355976
		{ &Z_Construct_UFunction_AMasterField_GetSubFields, "GetSubFields" }, // 2831365960
		{ &Z_Construct_UFunction_AMasterField_RecomputeCombinedBoundingBox, "RecomputeCombinedBoundingBox" }, // 111888134
		{ &Z_Construct_UFunction_AMasterField_SetSubFieldsHidden, "SetSubFieldsHidden" }, // 1031194295
		{ &Z_Construct_UFunction_AMasterField_UpdateField, "UpdateField" }, // 2499624797
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MasterField.h" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_MetaData[] = {
		{ "Category", "MasterField" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount = { UE4CodeGen_Private::EPropertyClass::Map, "ActorPresenceTickCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, ActorPresenceTickCount), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "ActorPresenceTickCount_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "ActorPresenceTickCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter_MetaData[] = {
		{ "Category", "MasterField" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter = { UE4CodeGen_Private::EPropertyClass::Array, "CollisionFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, CollisionFilter), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "CollisionFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_CombinedBoundsBox_MetaData[] = {
		{ "Category", "MasterField" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_CombinedBoundsBox = { UE4CodeGen_Private::EPropertyClass::Struct, "CombinedBoundsBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, CombinedBoundsBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_CombinedBoundsBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_CombinedBoundsBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields_MetaData[] = {
		{ "Category", "MasterField" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields = { UE4CodeGen_Private::EPropertyClass::Array, "SubFields", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, SubFields), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubFields", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ASubField_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns_MetaData[] = {
		{ "Category", "MasterField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns = { UE4CodeGen_Private::EPropertyClass::Array, "SubFieldSpawns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000800000000d, 1, nullptr, STRUCT_OFFSET(AMasterField, SubFieldSpawns), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubFieldSpawns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFieldSpawnComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation_MetaData[] = {
		{ "Category", "MasterFieldBools" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	void Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation_SetBit(void* Obj)
	{
		((AMasterField*)Obj)->bHasBegunDeactivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBegunDeactivation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMasterField), &Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive_MetaData[] = {
		{ "Category", "MasterFieldBools" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	void Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive_SetBit(void* Obj)
	{
		((AMasterField*)Obj)->bIsFieldActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFieldActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMasterField), &Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden_MetaData[] = {
		{ "Category", "MasterFieldBools" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	void Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden_SetBit(void* Obj)
	{
		((AMasterField*)Obj)->bAreSubfieldsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden = { UE4CodeGen_Private::EPropertyClass::Bool, "bAreSubfieldsHidden", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMasterField), &Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivationStartedTime_MetaData[] = {
		{ "Category", "MasterFieldFloats" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivationStartedTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeactivationStartedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, DeactivationStartedTime), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivationStartedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivationStartedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_FieldFadeOutTime_MetaData[] = {
		{ "Category", "MasterFieldFloats" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_FieldFadeOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "FieldFadeOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, FieldFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_FieldFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_FieldFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_FieldDeactivationTime_MetaData[] = {
		{ "Category", "MasterFieldFloats" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_FieldDeactivationTime = { UE4CodeGen_Private::EPropertyClass::Float, "FieldDeactivationTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, FieldDeactivationTime), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_FieldDeactivationTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_FieldDeactivationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_FieldLifeTime_MetaData[] = {
		{ "Category", "MasterFieldFloats" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_FieldLifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "FieldLifeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, FieldLifeTime), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_FieldLifeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_FieldLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivatedTime_MetaData[] = {
		{ "Category", "MasterFieldFloats" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivatedTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeactivatedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, DeactivatedTime), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivatedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterField_Statics::NewProp_CreatedTime_MetaData[] = {
		{ "Category", "MasterFieldFloats" },
		{ "ModuleRelativePath", "MasterField.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterField_Statics::NewProp_CreatedTime = { UE4CodeGen_Private::EPropertyClass::Float, "CreatedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMasterField, CreatedTime), METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::NewProp_CreatedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::NewProp_CreatedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_ActorPresenceTickCount_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_CollisionFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_CombinedBoundsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_SubFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_SubFieldSpawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_bHasBegunDeactivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_bIsFieldActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_bAreSubfieldsHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivationStartedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_FieldFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_FieldDeactivationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_FieldLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_DeactivatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterField_Statics::NewProp_CreatedTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMasterField_Statics::ClassParams = {
		&AMasterField::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMasterField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMasterField_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMasterField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMasterField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMasterField, 29221339);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMasterField(Z_Construct_UClass_AMasterField, &AMasterField::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMasterField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
