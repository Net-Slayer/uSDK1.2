// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauWeapon() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWeapon();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FAttackInfo();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnBlocked();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EBlockedReason();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EBlockType();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnHit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_RequestBlock();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauWeapon_UpdateTrail();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MORDHAU_API UClass* Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMovementRestriction();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FActorSetAndArray();
// End Cross Module References
	static FName NAME_AMordhauWeapon_OnAttackStarted = FName(TEXT("OnAttackStarted"));
	void AMordhauWeapon::OnAttackStarted(EAttackMove Move, float Angle)
	{
		MordhauWeapon_eventOnAttackStarted_Parms Parms;
		Parms.Move=Move;
		Parms.Angle=Angle;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnAttackStarted),&Parms);
	}
	static FName NAME_AMordhauWeapon_OnAttackStopped = FName(TEXT("OnAttackStopped"));
	void AMordhauWeapon::OnAttackStopped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnAttackStopped),NULL);
	}
	static FName NAME_AMordhauWeapon_OnBlocked = FName(TEXT("OnBlocked"));
	void AMordhauWeapon::OnBlocked(EBlockedReason Reason, EAttackMove Move)
	{
		MordhauWeapon_eventOnBlocked_Parms Parms;
		Parms.Reason=Reason;
		Parms.Move=Move;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnBlocked),&Parms);
	}
	static FName NAME_AMordhauWeapon_OnBlockStarted = FName(TEXT("OnBlockStarted"));
	void AMordhauWeapon::OnBlockStarted(EBlockType Type)
	{
		MordhauWeapon_eventOnBlockStarted_Parms Parms;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnBlockStarted),&Parms);
	}
	static FName NAME_AMordhauWeapon_OnCosmeticHit = FName(TEXT("OnCosmeticHit"));
	void AMordhauWeapon::OnCosmeticHit(EAttackMove Move, FHitResult const& Hit)
	{
		MordhauWeapon_eventOnCosmeticHit_Parms Parms;
		Parms.Move=Move;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnCosmeticHit),&Parms);
	}
	static FName NAME_AMordhauWeapon_OnHit = FName(TEXT("OnHit"));
	void AMordhauWeapon::OnHit(AActor* Actor, EAttackMove Move, FName const& bone, FVector const& WorldLocation, uint8 Tier, uint8 SurfaceType)
	{
		MordhauWeapon_eventOnHit_Parms Parms;
		Parms.Actor=Actor;
		Parms.Move=Move;
		Parms.bone=bone;
		Parms.WorldLocation=WorldLocation;
		Parms.Tier=Tier;
		Parms.SurfaceType=SurfaceType;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnHit),&Parms);
	}
	static FName NAME_AMordhauWeapon_OnWasBlocked = FName(TEXT("OnWasBlocked"));
	void AMordhauWeapon::OnWasBlocked(EBlockedReason Reason, EAttackMove Move, uint8 SurfaceType)
	{
		MordhauWeapon_eventOnWasBlocked_Parms Parms;
		Parms.Reason=Reason;
		Parms.Move=Move;
		Parms.SurfaceType=SurfaceType;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_OnWasBlocked),&Parms);
	}
	static FName NAME_AMordhauWeapon_RequestBlock = FName(TEXT("RequestBlock"));
	bool AMordhauWeapon::RequestBlock(EBlockType BlockType, bool bAllowFTP)
	{
		MordhauWeapon_eventRequestBlock_Parms Parms;
		Parms.BlockType=BlockType;
		Parms.bAllowFTP=bAllowFTP ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauWeapon_RequestBlock),&Parms);
		return !!Parms.ReturnValue;
	}
	void AMordhauWeapon::StaticRegisterNativesAMordhauWeapon()
	{
		UClass* Class = AMordhauWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseAttackInfo", &AMordhauWeapon::execGetBaseAttackInfo },
			{ "IncreaseBloodLevel", &AMordhauWeapon::execIncreaseBloodLevel },
			{ "OnAttackStarted", &AMordhauWeapon::execOnAttackStarted },
			{ "OnAttackStopped", &AMordhauWeapon::execOnAttackStopped },
			{ "OnBlocked", &AMordhauWeapon::execOnBlocked },
			{ "OnBlockStarted", &AMordhauWeapon::execOnBlockStarted },
			{ "OnCosmeticHit", &AMordhauWeapon::execOnCosmeticHit },
			{ "OnHit", &AMordhauWeapon::execOnHit },
			{ "OnWasBlocked", &AMordhauWeapon::execOnWasBlocked },
			{ "RequestBlock", &AMordhauWeapon::execRequestBlock },
			{ "UpdateTrail", &AMordhauWeapon::execUpdateTrail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics
	{
		struct MordhauWeapon_eventGetBaseAttackInfo_Parms
		{
			FAttackInfo atkInfo;
			EAttackMove Move;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_atkInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventGetBaseAttackInfo_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::NewProp_atkInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "atkInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventGetBaseAttackInfo_Parms, atkInfo), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::NewProp_Move_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::NewProp_atkInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponFns" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "GetBaseAttackInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauWeapon_eventGetBaseAttackInfo_Parms), Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics
	{
		struct MordhauWeapon_eventIncreaseBloodLevel_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventIncreaseBloodLevel_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponFns" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "IncreaseBloodLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWeapon_eventIncreaseBloodLevel_Parms), Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnAttackStarted_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnAttackStarted_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::NewProp_Move_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnAttackStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MordhauWeapon_eventOnAttackStarted_Parms), Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnAttackStopped", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnBlocked_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Reason = { UE4CodeGen_Private::EPropertyClass::Enum, "Reason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnBlocked_Parms, Reason), Z_Construct_UEnum_Mordhau_EBlockedReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Reason_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Move_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::NewProp_Reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnBlocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MordhauWeapon_eventOnBlocked_Parms), Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnBlockStarted_Parms, Type), Z_Construct_UEnum_Mordhau_EBlockType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnBlockStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MordhauWeapon_eventOnBlockStarted_Parms), Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnCosmeticHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnCosmeticHit_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::NewProp_Move_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnCosmeticHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(MordhauWeapon_eventOnCosmeticHit_Parms), Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_SurfaceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnHit_Parms, SurfaceType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Tier = { UE4CodeGen_Private::EPropertyClass::Byte, "Tier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnHit_Parms, Tier), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnHit_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnHit_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_bone_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnHit_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnHit_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Tier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Move_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C00, sizeof(MordhauWeapon_eventOnHit_Parms), Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_SurfaceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnWasBlocked_Parms, SurfaceType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnWasBlocked_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Reason = { UE4CodeGen_Private::EPropertyClass::Enum, "Reason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventOnWasBlocked_Parms, Reason), Z_Construct_UEnum_Mordhau_EBlockedReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Reason_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Move_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::NewProp_Reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponEvents" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "OnWasBlocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MordhauWeapon_eventOnWasBlocked_Parms), Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowFTP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowFTP;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlockType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauWeapon_eventRequestBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauWeapon_eventRequestBlock_Parms), &Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_bAllowFTP_SetBit(void* Obj)
	{
		((MordhauWeapon_eventRequestBlock_Parms*)Obj)->bAllowFTP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_bAllowFTP = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowFTP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauWeapon_eventRequestBlock_Parms), &Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_bAllowFTP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_BlockType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlockType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventRequestBlock_Parms, BlockType), Z_Construct_UEnum_Mordhau_EBlockType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_BlockType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_bAllowFTP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_BlockType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::NewProp_BlockType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponFns" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "RequestBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(MordhauWeapon_eventRequestBlock_Parms), Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_RequestBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_RequestBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics
	{
		struct MordhauWeapon_eventUpdateTrail_Parms
		{
			float Weight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauWeapon_eventUpdateTrail_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::NewProp_Weight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauWeaponFns" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauWeapon, "UpdateTrail", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauWeapon_eventUpdateTrail_Parms), Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauWeapon_UpdateTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauWeapon_UpdateTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauWeapon_NoRegister()
	{
		return AMordhauWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastObservedTraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastObservedTraceDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTrailTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTrailTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTrailFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondTrailFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSecondRegularAttacksUseBlood2_MetaData[];
#endif
		static void NewProp_bSecondRegularAttacksUseBlood2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondRegularAttacksUseBlood2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegularAttacksUseBlood2_MetaData[];
#endif
		static void NewProp_bRegularAttacksUseBlood2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegularAttacksUseBlood2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondDefaultTrailFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDefaultTrailFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTrailFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTrailFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTrailRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondTrailRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTrailUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondTrailUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayedHitEffect_MetaData[];
#endif
		static void NewProp_bPlayedHitEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayedHitEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodLevel2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodLevel2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodLevel1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodLevel1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodTrailEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodTrailEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingTrailEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingTrailEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingTrailOriginalLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingTrailOriginalLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailTimeBeforeStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailTimeBeforeStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBloodTrailParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentBloodTrailParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSwingTrailParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentSwingTrailParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSlideParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentSlideParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitSoundB_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LastHitSoundB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitSoundA_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LastHitSoundA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSlideStartSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentSlideStartSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlidingStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCurrentSlideWithSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndCurrentSlideWithSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SlidingWith;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlideParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticlesBySurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImpactParticlesBySurface;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactParticlesBySurface_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCancelParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCancelParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodTrailParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodTrailParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingTrailParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwingTrailParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingTrailFadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingTrailFadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodTrailMaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodTrailMaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailExtraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailExtraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailLifeTimeFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailLifeTimeFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasWoodenHandle_MetaData[];
#endif
		static void NewProp_bHasWoodenHandle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasWoodenHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSecondDeriveHandGripFromTracers_MetaData[];
#endif
		static void NewProp_bSecondDeriveHandGripFromTracers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondDeriveHandGripFromTracers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeriveHandGripFromTracers_MetaData[];
#endif
		static void NewProp_bDeriveHandGripFromTracers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeriveHandGripFromTracers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideEndSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlideEndSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideStartSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlideStartSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabWooshSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StabWooshSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeWooshSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrikeWooshSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondEnvironmentHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondEnvironmentHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondStabHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondStabHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondStrikeHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondStrikeHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvironmentHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StabHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrikeHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WooshVolumeMultiplierViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WooshVolumeMultiplierViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentVolumeScaleByDamageOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentVolumeScaleByDamageOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentVolumeScaleByDamageIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentVolumeScaleByDamageIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentPitchScaleByDamageOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentPitchScaleByDamageOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentPitchScaleByDamageIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentPitchScaleByDamageIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasBlockedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WasBlockedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCancelSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCancelSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWeaponAnimationProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondWeaponAnimationProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimationProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponAnimationProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderWeaponAnimationProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LadderWeaponAnimationProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseWeaponAnimationProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HorseWeaponAnimationProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderWeaponAnimationProfileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LadderWeaponAnimationProfileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseWeaponAnimationProfileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HorseWeaponAnimationProfileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWeaponAnimationProfileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SecondWeaponAnimationProfileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimationProfileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponAnimationProfileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClashCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondBlockStaminaClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondBlockStaminaClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondBlockStaminaNegation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondBlockStaminaNegation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockStaminaClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaNegation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockStaminaNegation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMovementRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlockMovementRestriction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockMovementRestriction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondClashNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondClashNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClashNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClashNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHitKnockbackOnTeammates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bHitKnockbackOnTeammates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreEnvironmentTipTracersNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IgnoreEnvironmentTipTracersNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesExtraEnvironmentTracers_MetaData[];
#endif
		static void NewProp_bUsesExtraEnvironmentTracers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesExtraEnvironmentTracers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoostCosmeticTracersBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoostCosmeticTracersBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParryHeld_MetaData[];
#endif
		static void NewProp_bIsParryHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParryHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryBackpedalSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryBackpedalSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberViewToleranceY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChamberViewToleranceY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChamberViewToleranceX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChamberViewToleranceX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackParryViewToleranceY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackParryViewToleranceY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackParryViewToleranceX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackParryViewToleranceX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulParryViewToleranceY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuccessfulParryViewToleranceY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessfulParryViewToleranceX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuccessfulParryViewToleranceX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryViewToleranceY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParryViewToleranceY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryViewToleranceX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParryViewToleranceX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldWallTurnCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldWallTurnCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParrySuccessTurnCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParrySuccessTurnCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryTurnCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParryTurnCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryBoxTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParryBoxTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ParryMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BashAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondKickAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondKickAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KickAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondStrikeAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondStrikeAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrikeAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondCouchAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondCouchAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CouchAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondStabAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondStabAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StabAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondAttackSupersprintDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondAttackSupersprintDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSupersprintDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSupersprintDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlideRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchReleaseAnim1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CouchReleaseAnim1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchReleaseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CouchReleaseAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchLoopAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CouchLoopAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchWindUpAnim1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CouchWindUpAnim1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchWindUpAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CouchWindUpAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCouchOnHorseback_MetaData[];
#endif
		static void NewProp_bCanCouchOnHorseback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCouchOnHorseback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBlockOnHorseback_MetaData[];
#endif
		static void NewProp_bCanBlockOnHorseback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBlockOnHorseback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBlockOnFoot_MetaData[];
#endif
		static void NewProp_bCanBlockOnFoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBlockOnFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBlock_MetaData[];
#endif
		static void NewProp_bCanBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResultCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitResultCache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResultCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticIgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CosmeticIgnoreActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTraceStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastTraceStarts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTraceStarts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastObservedMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastObservedMove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastObservedMove_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousAdditionalTraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousAdditionalTraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousAdditionalTraceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousAdditionalTraceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAdditionalTraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAdditionalTraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAdditionalTraceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAdditionalTraceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousTraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTraceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousTraceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTraceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTraceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSecondHasAdditionalTracers_MetaData[];
#endif
		static void NewProp_bSecondHasAdditionalTracers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondHasAdditionalTracers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAdditionalTracers_MetaData[];
#endif
		static void NewProp_bHasAdditionalTracers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAdditionalTracers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAreCurrentTracersInvalidated_MetaData[];
#endif
		static void NewProp_bAreCurrentTracersInvalidated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAreCurrentTracersInvalidated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bArePreviousTracersValid_MetaData[];
#endif
		static void NewProp_bArePreviousTracersValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bArePreviousTracersValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAreCurrentTracersValid_MetaData[];
#endif
		static void NewProp_bAreCurrentTracersValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAreCurrentTracersValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastWoosh_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LastWoosh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauWeapon_GetBaseAttackInfo, "GetBaseAttackInfo" }, // 3857584105
		{ &Z_Construct_UFunction_AMordhauWeapon_IncreaseBloodLevel, "IncreaseBloodLevel" }, // 1371617601
		{ &Z_Construct_UFunction_AMordhauWeapon_OnAttackStarted, "OnAttackStarted" }, // 1350453636
		{ &Z_Construct_UFunction_AMordhauWeapon_OnAttackStopped, "OnAttackStopped" }, // 3580879049
		{ &Z_Construct_UFunction_AMordhauWeapon_OnBlocked, "OnBlocked" }, // 72781384
		{ &Z_Construct_UFunction_AMordhauWeapon_OnBlockStarted, "OnBlockStarted" }, // 647647384
		{ &Z_Construct_UFunction_AMordhauWeapon_OnCosmeticHit, "OnCosmeticHit" }, // 1753362923
		{ &Z_Construct_UFunction_AMordhauWeapon_OnHit, "OnHit" }, // 1324337977
		{ &Z_Construct_UFunction_AMordhauWeapon_OnWasBlocked, "OnWasBlocked" }, // 582919812
		{ &Z_Construct_UFunction_AMordhauWeapon_RequestBlock, "RequestBlock" }, // 1240204061
		{ &Z_Construct_UFunction_AMordhauWeapon_UpdateTrail, "UpdateTrail" }, // 1131646966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedTraceDirection_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedTraceDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "LastObservedTraceDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastObservedTraceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedTraceDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedTraceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTrailTransform_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTrailTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LastTrailTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastTrailTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTrailTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTrailTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailWeight_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailWeight = { UE4CodeGen_Private::EPropertyClass::Float, "TrailWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailWeight), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailFactor_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SecondTrailFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondTrailFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailFactor_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TrailFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bSecondRegularAttacksUseBlood2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecondRegularAttacksUseBlood2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bRegularAttacksUseBlood2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bRegularAttacksUseBlood2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondDefaultTrailFactor_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondDefaultTrailFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SecondDefaultTrailFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondDefaultTrailFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondDefaultTrailFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondDefaultTrailFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_DefaultTrailFactor_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_DefaultTrailFactor = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultTrailFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, DefaultTrailFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_DefaultTrailFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_DefaultTrailFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailRight_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailRight = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondTrailRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondTrailRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailRight_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailRight = { UE4CodeGen_Private::EPropertyClass::Struct, "TrailRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailUp_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailUp = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondTrailUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondTrailUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailUp_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailUp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrailUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bPlayedHitEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayedHitEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel2_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel2 = { UE4CodeGen_Private::EPropertyClass::Float, "BloodLevel2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BloodLevel2), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel1_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel1 = { UE4CodeGen_Private::EPropertyClass::Float, "BloodLevel1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BloodLevel1), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondLength_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondLength = { UE4CodeGen_Private::EPropertyClass::Float, "SecondLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondLength), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, Length), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailEndTime_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "BloodTrailEndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BloodTrailEndTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailEndTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailEndTime_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "SwingTrailEndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SwingTrailEndTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailEndTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailOriginalLifeTime_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailOriginalLifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "SwingTrailOriginalLifeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SwingTrailOriginalLifeTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailOriginalLifeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailOriginalLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailTimeBeforeStop_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailTimeBeforeStop = { UE4CodeGen_Private::EPropertyClass::Float, "TrailTimeBeforeStop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailTimeBeforeStop), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailTimeBeforeStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailTimeBeforeStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentBloodTrailParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentBloodTrailParticles = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentBloodTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentBloodTrailParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentBloodTrailParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentBloodTrailParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSwingTrailParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSwingTrailParticles = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentSwingTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentSwingTrailParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSwingTrailParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSwingTrailParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideParticles = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentSlideParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentSlideParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundB_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundB = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LastHitSoundB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastHitSoundB), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundB_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundA_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundA = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LastHitSoundA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastHitSoundA), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundA_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideStartSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideStartSound = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentSlideStartSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentSlideStartSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideStartSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideStartSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingStartTime_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SlidingStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SlidingStartTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EndCurrentSlideWithSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EndCurrentSlideWithSound = { UE4CodeGen_Private::EPropertyClass::Object, "EndCurrentSlideWithSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, EndCurrentSlideWithSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EndCurrentSlideWithSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EndCurrentSlideWithSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingWith_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingWith = { UE4CodeGen_Private::EPropertyClass::WeakObject, "SlidingWith", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SlidingWith), Z_Construct_UClass_AMordhauWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingWith_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideParticles = { UE4CodeGen_Private::EPropertyClass::Object, "SlideParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SlideParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface = { UE4CodeGen_Private::EPropertyClass::Array, "ImpactParticlesBySurface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ImpactParticlesBySurface), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ImpactParticlesBySurface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelParticles = { UE4CodeGen_Private::EPropertyClass::Object, "HitCancelParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, HitCancelParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockParticles = { UE4CodeGen_Private::EPropertyClass::Object, "BlockParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BlockParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailParticles = { UE4CodeGen_Private::EPropertyClass::Object, "BloodTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BloodTrailParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailParticles_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailParticles = { UE4CodeGen_Private::EPropertyClass::Object, "SwingTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SwingTrailParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailFadeOutDuration_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailFadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SwingTrailFadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SwingTrailFadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailFadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailMaxDuration_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailMaxDuration = { UE4CodeGen_Private::EPropertyClass::Float, "BloodTrailMaxDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BloodTrailMaxDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailMaxDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailMaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailExtraTime_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailExtraTime = { UE4CodeGen_Private::EPropertyClass::Float, "TrailExtraTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailExtraTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailExtraTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailExtraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailLifeTimeFactor_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailLifeTimeFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TrailLifeTimeFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, TrailLifeTimeFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailLifeTimeFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailLifeTimeFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bHasWoodenHandle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasWoodenHandle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bSecondDeriveHandGripFromTracers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecondDeriveHandGripFromTracers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bDeriveHandGripFromTracers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers = { UE4CodeGen_Private::EPropertyClass::Bool, "bDeriveHandGripFromTracers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideEndSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideEndSound = { UE4CodeGen_Private::EPropertyClass::Object, "SlideEndSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SlideEndSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideEndSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideEndSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideStartSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideStartSound = { UE4CodeGen_Private::EPropertyClass::Object, "SlideStartSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SlideStartSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideStartSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideStartSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabWooshSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabWooshSound = { UE4CodeGen_Private::EPropertyClass::Object, "StabWooshSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, StabWooshSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabWooshSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabWooshSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeWooshSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeWooshSound = { UE4CodeGen_Private::EPropertyClass::Object, "StrikeWooshSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, StrikeWooshSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeWooshSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeWooshSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondEnvironmentHitSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondEnvironmentHitSound = { UE4CodeGen_Private::EPropertyClass::Object, "SecondEnvironmentHitSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondEnvironmentHitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondEnvironmentHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondEnvironmentHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabHitSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabHitSound = { UE4CodeGen_Private::EPropertyClass::Object, "SecondStabHitSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondStabHitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeHitSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeHitSound = { UE4CodeGen_Private::EPropertyClass::Object, "SecondStrikeHitSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondStrikeHitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentHitSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentHitSound = { UE4CodeGen_Private::EPropertyClass::Object, "EnvironmentHitSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, EnvironmentHitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabHitSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabHitSound = { UE4CodeGen_Private::EPropertyClass::Object, "StabHitSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, StabHitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeHitSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeHitSound = { UE4CodeGen_Private::EPropertyClass::Object, "StrikeHitSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, StrikeHitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WooshVolumeMultiplierViewTarget_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WooshVolumeMultiplierViewTarget = { UE4CodeGen_Private::EPropertyClass::Float, "WooshVolumeMultiplierViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, WooshVolumeMultiplierViewTarget), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WooshVolumeMultiplierViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WooshVolumeMultiplierViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageOut_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageOut = { UE4CodeGen_Private::EPropertyClass::Struct, "EnvironmentVolumeScaleByDamageOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, EnvironmentVolumeScaleByDamageOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageIn_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageIn = { UE4CodeGen_Private::EPropertyClass::Struct, "EnvironmentVolumeScaleByDamageIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, EnvironmentVolumeScaleByDamageIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageOut_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageOut = { UE4CodeGen_Private::EPropertyClass::Struct, "EnvironmentPitchScaleByDamageOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, EnvironmentPitchScaleByDamageOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageIn_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageIn = { UE4CodeGen_Private::EPropertyClass::Struct, "EnvironmentPitchScaleByDamageIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, EnvironmentPitchScaleByDamageIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WasBlockedSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WasBlockedSound = { UE4CodeGen_Private::EPropertyClass::Object, "WasBlockedSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, WasBlockedSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WasBlockedSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WasBlockedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelSound = { UE4CodeGen_Private::EPropertyClass::Object, "HitCancelSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, HitCancelSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockedSound_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockedSound = { UE4CodeGen_Private::EPropertyClass::Object, "BlockedSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BlockedSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockedSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfile_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfile = { UE4CodeGen_Private::EPropertyClass::Object, "SecondWeaponAnimationProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondWeaponAnimationProfile), Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfile_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfile = { UE4CodeGen_Private::EPropertyClass::Object, "WeaponAnimationProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, WeaponAnimationProfile), Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfile_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfile = { UE4CodeGen_Private::EPropertyClass::Object, "LadderWeaponAnimationProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LadderWeaponAnimationProfile), Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfile_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfile = { UE4CodeGen_Private::EPropertyClass::Object, "HorseWeaponAnimationProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, HorseWeaponAnimationProfile), Z_Construct_UClass_UMeleeWeaponAnimationProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfileClass_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfileClass = { UE4CodeGen_Private::EPropertyClass::Class, "LadderWeaponAnimationProfileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LadderWeaponAnimationProfileClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfileClass_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfileClass = { UE4CodeGen_Private::EPropertyClass::Class, "HorseWeaponAnimationProfileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, HorseWeaponAnimationProfileClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfileClass_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfileClass = { UE4CodeGen_Private::EPropertyClass::Class, "SecondWeaponAnimationProfileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondWeaponAnimationProfileClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfileClass_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfileClass = { UE4CodeGen_Private::EPropertyClass::Class, "WeaponAnimationProfileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, WeaponAnimationProfileClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockCollider_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockCollider = { UE4CodeGen_Private::EPropertyClass::Object, "BlockCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BlockCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashCollider_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashCollider = { UE4CodeGen_Private::EPropertyClass::Object, "ClashCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ClashCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaClamp_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaClamp = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondBlockStaminaClamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondBlockStaminaClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaClamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaNegation_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaNegation = { UE4CodeGen_Private::EPropertyClass::Float, "SecondBlockStaminaNegation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondBlockStaminaNegation), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaNegation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaNegation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaClamp_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaClamp = { UE4CodeGen_Private::EPropertyClass::Struct, "BlockStaminaClamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BlockStaminaClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaClamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaNegation_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaNegation = { UE4CodeGen_Private::EPropertyClass::Float, "BlockStaminaNegation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BlockStaminaNegation), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaNegation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaNegation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction = { UE4CodeGen_Private::EPropertyClass::Enum, "BlockMovementRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BlockMovementRestriction), Z_Construct_UEnum_Mordhau_EMovementRestriction, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondClashNormal_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondClashNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondClashNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondClashNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondClashNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondClashNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashNormal_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "ClashNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ClashNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHitKnockbackOnTeammates_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHitKnockbackOnTeammates = { UE4CodeGen_Private::EPropertyClass::Float, "bHitKnockbackOnTeammates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, bHitKnockbackOnTeammates), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHitKnockbackOnTeammates_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHitKnockbackOnTeammates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_IgnoreEnvironmentTipTracersNum_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_IgnoreEnvironmentTipTracersNum = { UE4CodeGen_Private::EPropertyClass::Byte, "IgnoreEnvironmentTipTracersNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, IgnoreEnvironmentTipTracersNum), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_IgnoreEnvironmentTipTracersNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_IgnoreEnvironmentTipTracersNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bUsesExtraEnvironmentTracers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesExtraEnvironmentTracers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BoostCosmeticTracersBy_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BoostCosmeticTracersBy = { UE4CodeGen_Private::EPropertyClass::Float, "BoostCosmeticTracersBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BoostCosmeticTracersBy), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BoostCosmeticTracersBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BoostCosmeticTracersBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bIsParryHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsParryHeld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBackpedalSpeedFactor_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBackpedalSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ParryBackpedalSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParryBackpedalSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBackpedalSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBackpedalSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceY_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceY = { UE4CodeGen_Private::EPropertyClass::Struct, "ChamberViewToleranceY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ChamberViewToleranceY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceX_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceX = { UE4CodeGen_Private::EPropertyClass::Struct, "ChamberViewToleranceX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ChamberViewToleranceX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceY_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceY = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackParryViewToleranceY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, AttackParryViewToleranceY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceX_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceX = { UE4CodeGen_Private::EPropertyClass::Struct, "AttackParryViewToleranceX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, AttackParryViewToleranceX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceY_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceY = { UE4CodeGen_Private::EPropertyClass::Struct, "SuccessfulParryViewToleranceY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SuccessfulParryViewToleranceY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceX_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceX = { UE4CodeGen_Private::EPropertyClass::Struct, "SuccessfulParryViewToleranceX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SuccessfulParryViewToleranceX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceY_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceY = { UE4CodeGen_Private::EPropertyClass::Struct, "ParryViewToleranceY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParryViewToleranceY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceX_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceX = { UE4CodeGen_Private::EPropertyClass::Struct, "ParryViewToleranceX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParryViewToleranceX), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ShieldWallTurnCap_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ShieldWallTurnCap = { UE4CodeGen_Private::EPropertyClass::Struct, "ShieldWallTurnCap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ShieldWallTurnCap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ShieldWallTurnCap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ShieldWallTurnCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParrySuccessTurnCap_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParrySuccessTurnCap = { UE4CodeGen_Private::EPropertyClass::Struct, "ParrySuccessTurnCap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParrySuccessTurnCap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParrySuccessTurnCap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParrySuccessTurnCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryTurnCap_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryTurnCap = { UE4CodeGen_Private::EPropertyClass::Struct, "ParryTurnCap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParryTurnCap), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryTurnCap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryTurnCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBoxTransform_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBoxTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ParryBoxTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParryBoxTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBoxTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBoxTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryMask_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryMask = { UE4CodeGen_Private::EPropertyClass::Int, "ParryMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, ParryMask), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackMask_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackMask = { UE4CodeGen_Private::EPropertyClass::Int, "AttackMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, AttackMask), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BashAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BashAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "BashAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, BashAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BashAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BashAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondKickAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondKickAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondKickAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondKickAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondKickAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondKickAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_KickAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_KickAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "KickAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, KickAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_KickAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_KickAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondStrikeAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondStrikeAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "StrikeAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, StrikeAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondCouchAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondCouchAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondCouchAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondCouchAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondCouchAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondCouchAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "CouchAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CouchAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondStabAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondStabAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabAttack_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "StabAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, StabAttack), Z_Construct_UScriptStruct_FAttackInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondAttackSupersprintDuration_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondAttackSupersprintDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SecondAttackSupersprintDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SecondAttackSupersprintDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondAttackSupersprintDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondAttackSupersprintDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackSupersprintDuration_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackSupersprintDuration = { UE4CodeGen_Private::EPropertyClass::Float, "AttackSupersprintDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, AttackSupersprintDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackSupersprintDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackSupersprintDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideRadius_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
		{ "ToolTip", "EDismembermentType                                 StrikeDismembermentType;\nEDismembermentType                                 SecondStrikeDismembermentType;\nEDismembermentType                                 StabDismembermentType;\nEDismembermentType                                 SecondStabDismembermentType;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SlideRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, SlideRadius), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim1P_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim1P = { UE4CodeGen_Private::EPropertyClass::Object, "CouchReleaseAnim1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CouchReleaseAnim1P), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CouchReleaseAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CouchReleaseAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchLoopAnim_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchLoopAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CouchLoopAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CouchLoopAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchLoopAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchLoopAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim1P_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim1P = { UE4CodeGen_Private::EPropertyClass::Object, "CouchWindUpAnim1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CouchWindUpAnim1P), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim = { UE4CodeGen_Private::EPropertyClass::Object, "CouchWindUpAnim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CouchWindUpAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bCanCouchOnHorseback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanCouchOnHorseback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bCanBlockOnHorseback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBlockOnHorseback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bCanBlockOnFoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBlockOnFoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bCanBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache = { UE4CodeGen_Private::EPropertyClass::Array, "HitResultCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, HitResultCache), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResultCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CosmeticIgnoreActors_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CosmeticIgnoreActors = { UE4CodeGen_Private::EPropertyClass::Struct, "CosmeticIgnoreActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CosmeticIgnoreActors), Z_Construct_UScriptStruct_FActorSetAndArray, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CosmeticIgnoreActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CosmeticIgnoreActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts = { UE4CodeGen_Private::EPropertyClass::Array, "LastTraceStarts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastTraceStarts), METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LastTraceStarts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove = { UE4CodeGen_Private::EPropertyClass::Enum, "LastObservedMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastObservedMove), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceEnd_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousAdditionalTraceEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, PreviousAdditionalTraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceStart_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousAdditionalTraceStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, PreviousAdditionalTraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceEnd_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentAdditionalTraceEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentAdditionalTraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceStart_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceStart = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentAdditionalTraceStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentAdditionalTraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceEnd_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousTraceEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, PreviousTraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceStart_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousTraceStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, PreviousTraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceEnd_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTraceEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentTraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceStart_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceStart = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentTraceStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, CurrentTraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bSecondHasAdditionalTracers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecondHasAdditionalTracers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bHasAdditionalTracers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasAdditionalTracers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bAreCurrentTracersInvalidated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated = { UE4CodeGen_Private::EPropertyClass::Bool, "bAreCurrentTracersInvalidated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bArePreviousTracersValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bArePreviousTracersValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid_SetBit(void* Obj)
	{
		((AMordhauWeapon*)Obj)->bAreCurrentTracersValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bAreCurrentTracersValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauWeapon), &Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastWoosh_MetaData[] = {
		{ "Category", "MordhauWeapon" },
		{ "ModuleRelativePath", "MordhauWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastWoosh = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LastWoosh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008002d, 1, nullptr, STRUCT_OFFSET(AMordhauWeapon, LastWoosh), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastWoosh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastWoosh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedTraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTrailTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondRegularAttacksUseBlood2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bRegularAttacksUseBlood2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondDefaultTrailFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_DefaultTrailFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondTrailUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bPlayedHitEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodLevel1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailOriginalLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailTimeBeforeStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentBloodTrailParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSwingTrailParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastHitSoundA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentSlideStartSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EndCurrentSlideWithSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlidingWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ImpactParticlesBySurface_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SwingTrailFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BloodTrailMaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailExtraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_TrailLifeTimeFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasWoodenHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondDeriveHandGripFromTracers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bDeriveHandGripFromTracers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideEndSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideStartSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabWooshSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeWooshSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondEnvironmentHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WooshVolumeMultiplierViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentVolumeScaleByDamageIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_EnvironmentPitchScaleByDamageIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WasBlockedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitCancelSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LadderWeaponAnimationProfileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HorseWeaponAnimationProfileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondWeaponAnimationProfileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_WeaponAnimationProfileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondBlockStaminaNegation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockStaminaNegation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BlockMovementRestriction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondClashNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ClashNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHitKnockbackOnTeammates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_IgnoreEnvironmentTipTracersNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bUsesExtraEnvironmentTracers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BoostCosmeticTracersBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bIsParryHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBackpedalSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ChamberViewToleranceX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackParryViewToleranceX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SuccessfulParryViewToleranceX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryViewToleranceX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ShieldWallTurnCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParrySuccessTurnCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryTurnCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryBoxTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_ParryMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_BashAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondKickAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_KickAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStrikeAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StrikeAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondCouchAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondStabAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_StabAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SecondAttackSupersprintDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_AttackSupersprintDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_SlideRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchReleaseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchLoopAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CouchWindUpAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanCouchOnHorseback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnHorseback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlockOnFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bCanBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_HitResultCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CosmeticIgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastTraceStarts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastObservedMove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousAdditionalTraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentAdditionalTraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_PreviousTraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_CurrentTraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bSecondHasAdditionalTracers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bHasAdditionalTracers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersInvalidated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bArePreviousTracersValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_bAreCurrentTracersValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWeapon_Statics::NewProp_LastWoosh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauWeapon_Statics::ClassParams = {
		&AMordhauWeapon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauWeapon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauWeapon, 3419853254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauWeapon(Z_Construct_UClass_AMordhauWeapon, &AMordhauWeapon::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
