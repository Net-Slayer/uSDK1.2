// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauMotion() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauMotion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_OnBegin();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_OnEnded();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_OnLateTick();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_OnLeave();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_OnTick();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_ProcessAttack();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_ProcessBlock();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EBlockType();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauMotion_ProcessFeint();
// End Cross Module References
	static FName NAME_UMordhauMotion_OnBegin = FName(TEXT("OnBegin"));
	void UMordhauMotion::OnBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_OnBegin),NULL);
	}
	static FName NAME_UMordhauMotion_OnEnded = FName(TEXT("OnEnded"));
	void UMordhauMotion::OnEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_OnEnded),NULL);
	}
	static FName NAME_UMordhauMotion_OnLateTick = FName(TEXT("OnLateTick"));
	void UMordhauMotion::OnLateTick(float DeltaTime)
	{
		MordhauMotion_eventOnLateTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_OnLateTick),&Parms);
	}
	static FName NAME_UMordhauMotion_OnLeave = FName(TEXT("OnLeave"));
	void UMordhauMotion::OnLeave(bool Interrupted)
	{
		MordhauMotion_eventOnLeave_Parms Parms;
		Parms.Interrupted=Interrupted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_OnLeave),&Parms);
	}
	static FName NAME_UMordhauMotion_OnTick = FName(TEXT("OnTick"));
	void UMordhauMotion::OnTick(float DeltaTime)
	{
		MordhauMotion_eventOnTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_OnTick),&Parms);
	}
	static FName NAME_UMordhauMotion_ProcessAttack = FName(TEXT("ProcessAttack"));
	bool UMordhauMotion::ProcessAttack(EAttackMove Move, float Angle)
	{
		MordhauMotion_eventProcessAttack_Parms Parms;
		Parms.Move=Move;
		Parms.Angle=Angle;
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_ProcessAttack),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMordhauMotion_ProcessBlock = FName(TEXT("ProcessBlock"));
	bool UMordhauMotion::ProcessBlock(EBlockType Type)
	{
		MordhauMotion_eventProcessBlock_Parms Parms;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_ProcessBlock),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMordhauMotion_ProcessFeint = FName(TEXT("ProcessFeint"));
	bool UMordhauMotion::ProcessFeint()
	{
		MordhauMotion_eventProcessFeint_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UMordhauMotion_ProcessFeint),&Parms);
		return !!Parms.ReturnValue;
	}
	void UMordhauMotion::StaticRegisterNativesUMordhauMotion()
	{
	}
	struct Z_Construct_UFunction_UMordhauMotion_OnBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_OnBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_OnBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "OnBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_OnBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_OnBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_OnBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_OnEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_OnEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_OnEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "OnEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_OnEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_OnEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_OnEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauMotion_eventOnLateTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "OnLateTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauMotion_eventOnLateTick_Parms), Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_OnLateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_OnLateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics
	{
		static void NewProp_Interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Interrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::NewProp_Interrupted_SetBit(void* Obj)
	{
		((MordhauMotion_eventOnLeave_Parms*)Obj)->Interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::NewProp_Interrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "Interrupted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauMotion_eventOnLeave_Parms), &Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::NewProp_Interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::NewProp_Interrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "OnLeave", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauMotion_eventOnLeave_Parms), Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_OnLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_OnLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_OnTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauMotion_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "OnTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauMotion_eventOnTick_Parms), Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauMotion_eventProcessAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauMotion_eventProcessAttack_Parms), &Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauMotion_eventProcessAttack_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauMotion_eventProcessAttack_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::NewProp_Move_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "ProcessAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauMotion_eventProcessAttack_Parms), Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_ProcessAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_ProcessAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauMotion_eventProcessBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauMotion_eventProcessBlock_Parms), &Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauMotion_eventProcessBlock_Parms, Type), Z_Construct_UEnum_Mordhau_EBlockType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "ProcessBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauMotion_eventProcessBlock_Parms), Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_ProcessBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_ProcessBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauMotion_eventProcessFeint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauMotion_eventProcessFeint_Parms), &Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauMotionEvents" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauMotion, "ProcessFeint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauMotion_eventProcessFeint_Parms), Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauMotion_ProcessFeint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauMotion_ProcessFeint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauMotion_NoRegister()
	{
		return UMordhauMotion::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLegBendingChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightLegBendingChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsRightLegBending_MetaData[];
#endif
		static void NewProp_bWantsRightLegBending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsRightLegBending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTorsoBlendSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftTorsoBlendSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesLeftTorsoBlend_MetaData[];
#endif
		static void NewProp_bUsesLeftTorsoBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesLeftTorsoBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDedicatedServerAnimLOD_MetaData[];
#endif
		static void NewProp_bAllowDedicatedServerAnimLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDedicatedServerAnimLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlocksRegen_MetaData[];
#endif
		static void NewProp_bBlocksRegen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlocksRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffhandIKDistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffhandIKDistanceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffhandIKDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffhandIKDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticTransformChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CosmeticTransformChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffhandIKChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffhandIKChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffhandIsRightHand_MetaData[];
#endif
		static void NewProp_bOffhandIsRightHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffhandIsRightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForcesOffhandIK_MetaData[];
#endif
		static void NewProp_bForcesOffhandIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForcesOffhandIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablesChaseMechanic_MetaData[];
#endif
		static void NewProp_bDisablesChaseMechanic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablesChaseMechanic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablesOffhandIK_MetaData[];
#endif
		static void NewProp_bDisablesOffhandIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablesOffhandIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablesCosmeticWeaponTransform_MetaData[];
#endif
		static void NewProp_bDisablesCosmeticWeaponTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablesCosmeticWeaponTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequires3PArmsSync_MetaData[];
#endif
		static void NewProp_bRequires3PArmsSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequires3PArmsSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablesAtmospherics_MetaData[];
#endif
		static void NewProp_bDisablesAtmospherics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablesAtmospherics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBlock_MetaData[];
#endif
		static void NewProp_bCanBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEmote_MetaData[];
#endif
		static void NewProp_bCanEmote_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEmote;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackpedalSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackpedalSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFlinchable_MetaData[];
#endif
		static void NewProp_bIsFlinchable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFlinchable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmedByAuthorityTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConfirmedByAuthorityTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasConfirmedByAuthority_MetaData[];
#endif
		static void NewProp_bWasConfirmedByAuthority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasConfirmedByAuthority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiatedLocally_MetaData[];
#endif
		static void NewProp_bInitiatedLocally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiatedLocally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComingFromMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComingFromMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRealTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRealTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauMotion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauMotion_OnBegin, "OnBegin" }, // 1509314380
		{ &Z_Construct_UFunction_UMordhauMotion_OnEnded, "OnEnded" }, // 4147610699
		{ &Z_Construct_UFunction_UMordhauMotion_OnLateTick, "OnLateTick" }, // 679956735
		{ &Z_Construct_UFunction_UMordhauMotion_OnLeave, "OnLeave" }, // 1998376059
		{ &Z_Construct_UFunction_UMordhauMotion_OnTick, "OnTick" }, // 3004238914
		{ &Z_Construct_UFunction_UMordhauMotion_ProcessAttack, "ProcessAttack" }, // 1323936675
		{ &Z_Construct_UFunction_UMordhauMotion_ProcessBlock, "ProcessBlock" }, // 3139576633
		{ &Z_Construct_UFunction_UMordhauMotion_ProcessFeint, "ProcessFeint" }, // 2230226459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauMotion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_RightLegBendingChangeSpeed_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_RightLegBendingChangeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RightLegBendingChangeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, RightLegBendingChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_RightLegBendingChangeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_RightLegBendingChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bWantsRightLegBending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsRightLegBending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeftTorsoBlendSpeed_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeftTorsoBlendSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LeftTorsoBlendSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, LeftTorsoBlendSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeftTorsoBlendSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeftTorsoBlendSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bUsesLeftTorsoBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesLeftTorsoBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bAllowDedicatedServerAnimLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDedicatedServerAnimLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bBlocksRegen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlocksRegen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMin_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMin = { UE4CodeGen_Private::EPropertyClass::Float, "OffhandIKDistanceMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, OffhandIKDistanceMin), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMax_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMax = { UE4CodeGen_Private::EPropertyClass::Float, "OffhandIKDistanceMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, OffhandIKDistanceMax), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_CosmeticTransformChangeSpeed_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_CosmeticTransformChangeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CosmeticTransformChangeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, CosmeticTransformChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_CosmeticTransformChangeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_CosmeticTransformChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKChangeSpeed_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKChangeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "OffhandIKChangeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, OffhandIKChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKChangeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bOffhandIsRightHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bOffhandIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bForcesOffhandIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK = { UE4CodeGen_Private::EPropertyClass::Bool, "bForcesOffhandIK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bDisablesChaseMechanic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisablesChaseMechanic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bDisablesOffhandIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisablesOffhandIK", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bDisablesCosmeticWeaponTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisablesCosmeticWeaponTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bRequires3PArmsSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequires3PArmsSync", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bDisablesAtmospherics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisablesAtmospherics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bCanBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bCanAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bCanEmote = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEmote", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_BackpedalSpeedFactor_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_BackpedalSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "BackpedalSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, BackpedalSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_BackpedalSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_BackpedalSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
		{ "ToolTip", "UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)\nEMovementRestriction                               MovementRestriction;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_SpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_SpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bIsFlinchable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFlinchable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ConfirmedByAuthorityTime_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ConfirmedByAuthorityTime = { UE4CodeGen_Private::EPropertyClass::Float, "ConfirmedByAuthorityTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, ConfirmedByAuthorityTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ConfirmedByAuthorityTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ConfirmedByAuthorityTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bWasConfirmedByAuthority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasConfirmedByAuthority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	void Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally_SetBit(void* Obj)
	{
		((UMordhauMotion*)Obj)->bInitiatedLocally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitiatedLocally", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMordhauMotion), &Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeaveTime_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeaveTime = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, LeaveTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeaveTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeaveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Float, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, EndTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_EndTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, StartTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ExpectedDelay_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ExpectedDelay = { UE4CodeGen_Private::EPropertyClass::Float, "ExpectedDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, ExpectedDelay), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ExpectedDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ExpectedDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ComingFromMotion_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ComingFromMotion = { UE4CodeGen_Private::EPropertyClass::Object, "ComingFromMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, ComingFromMotion), Z_Construct_UClass_UMordhauMotion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ComingFromMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ComingFromMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartRealTime_MetaData[] = {
		{ "Category", "MordhauMotion" },
		{ "ModuleRelativePath", "MordhauMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartRealTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartRealTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UMordhauMotion, StartRealTime), METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartRealTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartRealTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_RightLegBendingChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWantsRightLegBending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeftTorsoBlendSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bUsesLeftTorsoBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bAllowDedicatedServerAnimLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bBlocksRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_CosmeticTransformChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_OffhandIKChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bOffhandIsRightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bForcesOffhandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesChaseMechanic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesOffhandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesCosmeticWeaponTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bRequires3PArmsSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bDisablesAtmospherics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bCanEmote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_BackpedalSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_SpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bIsFlinchable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ConfirmedByAuthorityTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bWasConfirmedByAuthority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_bInitiatedLocally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_LeaveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ExpectedDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_ComingFromMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauMotion_Statics::NewProp_StartRealTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauMotion_Statics::ClassParams = {
		&UMordhauMotion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMordhauMotion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauMotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauMotion, 657115745);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauMotion(Z_Construct_UClass_UMordhauMotion, &UMordhauMotion::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
