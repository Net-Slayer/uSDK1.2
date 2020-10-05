// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauPlayerState() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerState_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddAssists();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddDeaths();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddKills();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddScore();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_BanPlayer();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_GetSteamID();
	MORDHAUONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCharacter_NoRegister();
// End Cross Module References
	void AMordhauPlayerState::StaticRegisterNativesAMordhauPlayerState()
	{
		UClass* Class = AMordhauPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAssists", &AMordhauPlayerState::execAddAssists },
			{ "AddDeaths", &AMordhauPlayerState::execAddDeaths },
			{ "AddKills", &AMordhauPlayerState::execAddKills },
			{ "AddScore", &AMordhauPlayerState::execAddScore },
			{ "BanPlayer", &AMordhauPlayerState::execBanPlayer },
			{ "GetSteamID", &AMordhauPlayerState::execGetSteamID },
			{ "OnRep_Assists", &AMordhauPlayerState::execOnRep_Assists },
			{ "OnRep_DeathsAndFlags", &AMordhauPlayerState::execOnRep_DeathsAndFlags },
			{ "OnRep_Kills", &AMordhauPlayerState::execOnRep_Kills },
			{ "OnRep_Team", &AMordhauPlayerState::execOnRep_Team },
			{ "SetPlayerName", &AMordhauPlayerState::execSetPlayerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics
	{
		struct MordhauPlayerState_eventAddAssists_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventAddAssists_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "AddAssists", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauPlayerState_eventAddAssists_Parms), Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddAssists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_AddAssists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics
	{
		struct MordhauPlayerState_eventAddDeaths_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventAddDeaths_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "AddDeaths", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauPlayerState_eventAddDeaths_Parms), Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddDeaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_AddDeaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics
	{
		struct MordhauPlayerState_eventAddKills_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventAddKills_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "AddKills", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauPlayerState_eventAddKills_Parms), Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_AddKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics
	{
		struct MordhauPlayerState_eventAddScore_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventAddScore_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "AddScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauPlayerState_eventAddScore_Parms), Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics
	{
		struct MordhauPlayerState_eventBanPlayer_Parms
		{
			int32 BanDuration;
			FString BanReason;
			bool bIsGlobalBan;
		};
		static void NewProp_bIsGlobalBan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalBan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BanReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BanDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_bIsGlobalBan_SetBit(void* Obj)
	{
		((MordhauPlayerState_eventBanPlayer_Parms*)Obj)->bIsGlobalBan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_bIsGlobalBan = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGlobalBan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauPlayerState_eventBanPlayer_Parms), &Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_bIsGlobalBan_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanReason = { UE4CodeGen_Private::EPropertyClass::Str, "BanReason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventBanPlayer_Parms, BanReason), METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanDuration = { UE4CodeGen_Private::EPropertyClass::Int, "BanDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventBanPlayer_Parms, BanDuration), METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanDuration_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_bIsGlobalBan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::NewProp_BanDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "BanPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauPlayerState_eventBanPlayer_Parms), Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_BanPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_BanPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics
	{
		struct MordhauPlayerState_eventGetSteamID_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "GetSteamID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(MordhauPlayerState_eventGetSteamID_Parms), Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "OnRep_Assists", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "OnRep_DeathsAndFlags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "OnRep_Kills", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "OnRep_Team", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics
	{
		struct MordhauPlayerState_eventSetPlayerName_Parms
		{
			FString S;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::NewProp_S = { UE4CodeGen_Private::EPropertyClass::Str, "S", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerState_eventSetPlayerName_Parms, S), METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::NewProp_S_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::NewProp_S_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::NewProp_S,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStateFns" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerState, "SetPlayerName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauPlayerState_eventSetPlayerName_Parms), Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauPlayerState_NoRegister()
	{
		return AMordhauPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledLocalPlayerCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_KilledLocalPlayerCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledbyLocalPlayerCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_KilledbyLocalPlayerCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFriend_MetaData[];
#endif
		static void NewProp_bIsFriend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathsAndFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeathsAndFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMuted_MetaData[];
#endif
		static void NewProp_bIsMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMuted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAdmin_MetaData[];
#endif
		static void NewProp_bIsAdmin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMordhauCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LastMordhauCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPartyMember_MetaData[];
#endif
		static void NewProp_bIsPartyMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assists_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Assists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Badge_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Badge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalStableShortID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LocalStableShortID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingMedian_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PingMedian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurMedianPingIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurMedianPingIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedianPingsSorted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MedianPingsSorted;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MedianPingsSorted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedianPings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MedianPings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MedianPings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauPlayerState_AddAssists, "AddAssists" }, // 3973067951
		{ &Z_Construct_UFunction_AMordhauPlayerState_AddDeaths, "AddDeaths" }, // 1901082590
		{ &Z_Construct_UFunction_AMordhauPlayerState_AddKills, "AddKills" }, // 2472850600
		{ &Z_Construct_UFunction_AMordhauPlayerState_AddScore, "AddScore" }, // 167332545
		{ &Z_Construct_UFunction_AMordhauPlayerState_BanPlayer, "BanPlayer" }, // 4178653196
		{ &Z_Construct_UFunction_AMordhauPlayerState_GetSteamID, "GetSteamID" }, // 3013516878
		{ &Z_Construct_UFunction_AMordhauPlayerState_OnRep_Assists, "OnRep_Assists" }, // 4020101607
		{ &Z_Construct_UFunction_AMordhauPlayerState_OnRep_DeathsAndFlags, "OnRep_DeathsAndFlags" }, // 878386464
		{ &Z_Construct_UFunction_AMordhauPlayerState_OnRep_Kills, "OnRep_Kills" }, // 395881632
		{ &Z_Construct_UFunction_AMordhauPlayerState_OnRep_Team, "OnRep_Team" }, // 4157238751
		{ &Z_Construct_UFunction_AMordhauPlayerState_SetPlayerName, "SetPlayerName" }, // 411583375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MordhauPlayerState.h" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledLocalPlayerCounter_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledLocalPlayerCounter = { UE4CodeGen_Private::EPropertyClass::Int, "KilledLocalPlayerCounter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, KilledLocalPlayerCounter), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledLocalPlayerCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledLocalPlayerCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledbyLocalPlayerCounter_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledbyLocalPlayerCounter = { UE4CodeGen_Private::EPropertyClass::Int, "KilledbyLocalPlayerCounter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, KilledbyLocalPlayerCounter), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledbyLocalPlayerCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledbyLocalPlayerCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend_SetBit(void* Obj)
	{
		((AMordhauPlayerState*)Obj)->bIsFriend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFriend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauPlayerState), &Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_DeathsAndFlags_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_DeathsAndFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "DeathsAndFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, DeathsAndFlags), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_DeathsAndFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_DeathsAndFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((AMordhauPlayerState*)Obj)->bIsAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAlive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauPlayerState), &Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted_SetBit(void* Obj)
	{
		((AMordhauPlayerState*)Obj)->bIsMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMuted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauPlayerState), &Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin_SetBit(void* Obj)
	{
		((AMordhauPlayerState*)Obj)->bIsAdmin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAdmin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauPlayerState), &Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LastMordhauCharacter_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LastMordhauCharacter = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LastMordhauCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, LastMordhauCharacter), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LastMordhauCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LastMordhauCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember_SetBit(void* Obj)
	{
		((AMordhauPlayerState*)Obj)->bIsPartyMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPartyMember", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauPlayerState), &Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Assists_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Assists = { UE4CodeGen_Private::EPropertyClass::Int, "Assists", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, Assists), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Assists_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Assists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Badge_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Badge = { UE4CodeGen_Private::EPropertyClass::Byte, "Badge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, Badge), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Badge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Badge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Rank = { UE4CodeGen_Private::EPropertyClass::Int, "Rank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, Rank), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Rank_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, Team), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Team_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Kills_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Kills = { UE4CodeGen_Private::EPropertyClass::Int, "Kills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, Kills), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Kills_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LocalStableShortID_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LocalStableShortID = { UE4CodeGen_Private::EPropertyClass::Int, "LocalStableShortID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, LocalStableShortID), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LocalStableShortID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LocalStableShortID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_PingMedian_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_PingMedian = { UE4CodeGen_Private::EPropertyClass::Float, "PingMedian", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, PingMedian), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_PingMedian_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_PingMedian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_CurMedianPingIndex_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_CurMedianPingIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CurMedianPingIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, CurMedianPingIndex), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_CurMedianPingIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_CurMedianPingIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted = { UE4CodeGen_Private::EPropertyClass::Array, "MedianPingsSorted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, MedianPingsSorted), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "MedianPingsSorted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings_MetaData[] = {
		{ "Category", "MordhauPlayerState" },
		{ "ModuleRelativePath", "MordhauPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings = { UE4CodeGen_Private::EPropertyClass::Array, "MedianPings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerState, MedianPings), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "MedianPings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledLocalPlayerCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_KilledbyLocalPlayerCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_DeathsAndFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsMuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LastMordhauCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_bIsPartyMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Assists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Badge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_LocalStableShortID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_PingMedian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_CurMedianPingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPingsSorted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerState_Statics::NewProp_MedianPings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauPlayerState_Statics::ClassParams = {
		&AMordhauPlayerState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauPlayerState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauPlayerState, 3747795066);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauPlayerState(Z_Construct_UClass_AMordhauPlayerState, &AMordhauPlayerState::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
