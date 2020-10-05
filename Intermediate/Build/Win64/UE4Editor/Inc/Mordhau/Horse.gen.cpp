// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/Horse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorse() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AHorse_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AHorse();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauVehicle();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_CalculateBumpDamage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_GetIsInRearingMode();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_OnRep_Rearing();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_RequestRearing();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_ServerRequestRearing();
	MORDHAU_API UFunction* Z_Construct_UFunction_AHorse_SpawnTurd();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EHorseGear();
// End Cross Module References
	static FName NAME_AHorse_ServerRequestRearing = FName(TEXT("ServerRequestRearing"));
	void AHorse::ServerRequestRearing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHorse_ServerRequestRearing),NULL);
	}
	static FName NAME_AHorse_SpawnTurd = FName(TEXT("SpawnTurd"));
	void AHorse::SpawnTurd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHorse_SpawnTurd),NULL);
	}
	void AHorse::StaticRegisterNativesAHorse()
	{
		UClass* Class = AHorse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateBumpDamage", &AHorse::execCalculateBumpDamage },
			{ "GetIsInRearingMode", &AHorse::execGetIsInRearingMode },
			{ "OnBumpCapsuleOverlapped", &AHorse::execOnBumpCapsuleOverlapped },
			{ "OnRep_Rearing", &AHorse::execOnRep_Rearing },
			{ "OnRep_ReplicatedRearing", &AHorse::execOnRep_ReplicatedRearing },
			{ "RequestRearing", &AHorse::execRequestRearing },
			{ "SecondaryTurnNotAbsolute", &AHorse::execSecondaryTurnNotAbsolute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics
	{
		struct Horse_eventCalculateBumpDamage_Parms
		{
			FVector OurWorldVelocity;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurWorldVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OurWorldVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Horse_eventCalculateBumpDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_OurWorldVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_OurWorldVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "OurWorldVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Horse_eventCalculateBumpDamage_Parms, OurWorldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_OurWorldVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_OurWorldVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::NewProp_OurWorldVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "CalculateBumpDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(Horse_eventCalculateBumpDamage_Parms), Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_CalculateBumpDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_CalculateBumpDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics
	{
		struct Horse_eventGetIsInRearingMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Horse_eventGetIsInRearingMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Horse_eventGetIsInRearingMode_Parms), &Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "GetIsInRearingMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Horse_eventGetIsInRearingMode_Parms), Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_GetIsInRearingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_GetIsInRearingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics
	{
		struct Horse_eventOnBumpCapsuleOverlapped_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Horse_eventOnBumpCapsuleOverlapped_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Horse_eventOnBumpCapsuleOverlapped_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Horse_eventOnBumpCapsuleOverlapped_Parms), &Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Horse_eventOnBumpCapsuleOverlapped_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Horse_eventOnBumpCapsuleOverlapped_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Horse_eventOnBumpCapsuleOverlapped_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Horse_eventOnBumpCapsuleOverlapped_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "OnBumpCapsuleOverlapped", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(Horse_eventOnBumpCapsuleOverlapped_Parms), Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_OnRep_Rearing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_OnRep_Rearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_OnRep_Rearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "OnRep_Rearing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_OnRep_Rearing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnRep_Rearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_OnRep_Rearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_OnRep_Rearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "OnRep_ReplicatedRearing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_RequestRearing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_RequestRearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_RequestRearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "RequestRearing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_RequestRearing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_RequestRearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_RequestRearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_RequestRearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics
	{
		struct Horse_eventSecondaryTurnNotAbsolute_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Horse_eventSecondaryTurnNotAbsolute_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseFunctions" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "SecondaryTurnNotAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Horse_eventSecondaryTurnNotAbsolute_Parms), Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_ServerRequestRearing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_ServerRequestRearing_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseEvents" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_ServerRequestRearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "ServerRequestRearing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_ServerRequestRearing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_ServerRequestRearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_ServerRequestRearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_ServerRequestRearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorse_SpawnTurd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorse_SpawnTurd_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorseEvents" },
		{ "ModuleRelativePath", "Horse.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SkeletalMeshComp\")\nclass ULODSkeletalMeshComponent* CharacterMesh0;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"HorseMovementComp\")\nclass UHorseMovementComponent* HorsemovementComponent;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"HorseMovementComp\")\nclass UHorseMovementComponent* CharMoveComp;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorse_SpawnTurd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorse, "SpawnTurd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorse_SpawnTurd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHorse_SpawnTurd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorse_SpawnTurd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorse_SpawnTurd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHorse_NoRegister()
	{
		return AHorse::StaticClass();
	}
	struct Z_Construct_UClass_AHorse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DesiredGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BumpCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BumpCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageBySpeedModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackDamageBySpeedModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BumpDamageBySpeedModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BumpDamageBySpeedModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiderRearingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RiderRearingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KnockbackSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rearing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumGearToCouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinimumGearToCouch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinimumGearToCouch_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRearing_MetaData[];
#endif
		static void NewProp_bIsRearing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRearingRealTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRearingRealTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRearingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRearingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearingTimeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearingTimeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RearingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RearingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackForceVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackForceVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KnockbackForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTurdSpawnCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastTurdSpawnCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurdSpawnChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurdSpawnChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurdSpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurdSpawnInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHorse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHorse_CalculateBumpDamage, "CalculateBumpDamage" }, // 161561858
		{ &Z_Construct_UFunction_AHorse_GetIsInRearingMode, "GetIsInRearingMode" }, // 1823868449
		{ &Z_Construct_UFunction_AHorse_OnBumpCapsuleOverlapped, "OnBumpCapsuleOverlapped" }, // 527110432
		{ &Z_Construct_UFunction_AHorse_OnRep_Rearing, "OnRep_Rearing" }, // 1680203197
		{ &Z_Construct_UFunction_AHorse_OnRep_ReplicatedRearing, "OnRep_ReplicatedRearing" }, // 1385587251
		{ &Z_Construct_UFunction_AHorse_RequestRearing, "RequestRearing" }, // 3563324609
		{ &Z_Construct_UFunction_AHorse_SecondaryTurnNotAbsolute, "SecondaryTurnNotAbsolute" }, // 1218452818
		{ &Z_Construct_UFunction_AHorse_ServerRequestRearing, "ServerRequestRearing" }, // 3563116716
		{ &Z_Construct_UFunction_AHorse_SpawnTurd, "SpawnTurd" }, // 2326914564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Horse.h" },
		{ "ModuleRelativePath", "Horse.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_DesiredGear_MetaData[] = {
		{ "Category", "Integers" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_DesiredGear = { UE4CodeGen_Private::EPropertyClass::Int, "DesiredGear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, DesiredGear), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_DesiredGear_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_DesiredGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_BumpCapsule_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_BumpCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "BumpCapsule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AHorse, BumpCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_BumpCapsule_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_BumpCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_AttackDamageBySpeedModifierCurve_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_AttackDamageBySpeedModifierCurve = { UE4CodeGen_Private::EPropertyClass::Object, "AttackDamageBySpeedModifierCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, AttackDamageBySpeedModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_AttackDamageBySpeedModifierCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_AttackDamageBySpeedModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_BumpDamageBySpeedModifierCurve_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_BumpDamageBySpeedModifierCurve = { UE4CodeGen_Private::EPropertyClass::Object, "BumpDamageBySpeedModifierCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, BumpDamageBySpeedModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_BumpDamageBySpeedModifierCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_BumpDamageBySpeedModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_RiderRearingCurve_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_RiderRearingCurve = { UE4CodeGen_Private::EPropertyClass::Object, "RiderRearingCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, RiderRearingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_RiderRearingCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_RiderRearingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackSound_MetaData[] = {
		{ "Category", "ClassRefs" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackSound = { UE4CodeGen_Private::EPropertyClass::Object, "KnockbackSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, KnockbackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_Rearing_MetaData[] = {
		{ "Category", "Bytes" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_Rearing = { UE4CodeGen_Private::EPropertyClass::Byte, "Rearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, Rearing), nullptr, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_Rearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_Rearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch_MetaData[] = {
		{ "Category", "Enums" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch = { UE4CodeGen_Private::EPropertyClass::Enum, "MinimumGearToCouch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, MinimumGearToCouch), Z_Construct_UEnum_Mordhau_EHorseGear, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing_MetaData[] = {
		{ "Category", "Booleans" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	void Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing_SetBit(void* Obj)
	{
		((AHorse*)Obj)->bIsRearing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AHorse), &Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingRealTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingRealTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastRearingRealTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, LastRearingRealTime), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingRealTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingRealTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingTime_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastRearingTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, LastRearingTime), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_RearingTimeOut_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_RearingTimeOut = { UE4CodeGen_Private::EPropertyClass::Float, "RearingTimeOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, RearingTimeOut), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_RearingTimeOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_RearingTimeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_RearingDuration_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_RearingDuration = { UE4CodeGen_Private::EPropertyClass::Float, "RearingDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, RearingDuration), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_RearingDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_RearingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackDamage_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackDamage = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, KnockbackDamage), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForceVelocityFactor_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForceVelocityFactor = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackForceVelocityFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, KnockbackForceVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForceVelocityFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForceVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForce_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForce = { UE4CodeGen_Private::EPropertyClass::Float, "KnockbackForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, KnockbackForce), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_LastTurdSpawnCheck_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_LastTurdSpawnCheck = { UE4CodeGen_Private::EPropertyClass::Float, "LastTurdSpawnCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, LastTurdSpawnCheck), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_LastTurdSpawnCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_LastTurdSpawnCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnChance_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnChance = { UE4CodeGen_Private::EPropertyClass::Float, "TurdSpawnChance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, TurdSpawnChance), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnChance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnInterval_MetaData[] = {
		{ "Category", "Floats" },
		{ "ModuleRelativePath", "Horse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnInterval = { UE4CodeGen_Private::EPropertyClass::Float, "TurdSpawnInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHorse, TurdSpawnInterval), METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_DesiredGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_BumpCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_AttackDamageBySpeedModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_BumpDamageBySpeedModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_RiderRearingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_Rearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_MinimumGearToCouch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_bIsRearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingRealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_LastRearingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_RearingTimeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_RearingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForceVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_KnockbackForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_LastTurdSpawnCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorse_Statics::NewProp_TurdSpawnInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHorse_Statics::ClassParams = {
		&AHorse::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AHorse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHorse_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHorse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHorse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHorse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHorse, 589629659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHorse(Z_Construct_UClass_AHorse, &AHorse::StaticClass, TEXT("/Script/Mordhau"), TEXT("AHorse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
