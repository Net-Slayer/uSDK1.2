// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauGameSession() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameSession_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_AddAdmin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_AllowJoin();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_AllowsJoin();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_BanPlayer();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_KickPlayer();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer();
	MORDHAUONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
	void AMordhauGameSession::StaticRegisterNativesAMordhauGameSession()
	{
		UClass* Class = AMordhauGameSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAdmin", &AMordhauGameSession::execAddAdmin },
			{ "AllowJoin", &AMordhauGameSession::execAllowJoin },
			{ "AllowsJoin", &AMordhauGameSession::execAllowsJoin },
			{ "BanPlayer", &AMordhauGameSession::execBanPlayer },
			{ "BanPlayerWithDuration", &AMordhauGameSession::execBanPlayerWithDuration },
			{ "KickPlayer", &AMordhauGameSession::execKickPlayer },
			{ "RemoveAdmin", &AMordhauGameSession::execRemoveAdmin },
			{ "TriggerRewardDrop", &AMordhauGameSession::execTriggerRewardDrop },
			{ "TriggerRewardDropForPlayer", &AMordhauGameSession::execTriggerRewardDropForPlayer },
			{ "UnbanPlayer", &AMordhauGameSession::execUnbanPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics
	{
		struct MordhauGameSession_eventAddAdmin_Parms
		{
			APlayerController* AdminPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdminPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::NewProp_AdminPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "AdminPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventAddAdmin_Parms, AdminPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::NewProp_AdminPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "AddAdmin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameSession_eventAddAdmin_Parms), Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_AddAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_AddAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics
	{
		struct MordhauGameSession_eventAllowJoin_Parms
		{
			bool bInAllowJoin;
		};
		static void NewProp_bInAllowJoin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowJoin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::NewProp_bInAllowJoin_SetBit(void* Obj)
	{
		((MordhauGameSession_eventAllowJoin_Parms*)Obj)->bInAllowJoin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::NewProp_bInAllowJoin = { UE4CodeGen_Private::EPropertyClass::Bool, "bInAllowJoin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameSession_eventAllowJoin_Parms), &Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::NewProp_bInAllowJoin_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::NewProp_bInAllowJoin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "AllowJoin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameSession_eventAllowJoin_Parms), Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_AllowJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_AllowJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics
	{
		struct MordhauGameSession_eventAllowsJoin_Parms
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
	void Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameSession_eventAllowsJoin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameSession_eventAllowsJoin_Parms), &Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "AllowsJoin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameSession_eventAllowsJoin_Parms), Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_AllowsJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_AllowsJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics
	{
		struct MordhauGameSession_eventBanPlayer_Parms
		{
			APlayerController* BannedPlayer;
			FText BanReason;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BanReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BannedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameSession_eventBanPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameSession_eventBanPlayer_Parms), &Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BanReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BanReason = { UE4CodeGen_Private::EPropertyClass::Text, "BanReason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventBanPlayer_Parms, BanReason), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BanReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BanReason_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BannedPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "BannedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventBanPlayer_Parms, BannedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BanReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::NewProp_BannedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "BanPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameSession_eventBanPlayer_Parms), Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_BanPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_BanPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics
	{
		struct MordhauGameSession_eventBanPlayerWithDuration_Parms
		{
			APlayerController* BannedPlayer;
			int32 BanDuration;
			FText BanReason;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_BanReason;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BanDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BannedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameSession_eventBanPlayerWithDuration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameSession_eventBanPlayerWithDuration_Parms), &Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanReason = { UE4CodeGen_Private::EPropertyClass::Text, "BanReason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventBanPlayerWithDuration_Parms, BanReason), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanReason_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanDuration = { UE4CodeGen_Private::EPropertyClass::Int, "BanDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventBanPlayerWithDuration_Parms, BanDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BannedPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "BannedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventBanPlayerWithDuration_Parms, BannedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BanDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::NewProp_BannedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "BanPlayerWithDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameSession_eventBanPlayerWithDuration_Parms), Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics
	{
		struct MordhauGameSession_eventKickPlayer_Parms
		{
			APlayerController* KickedPlayer;
			FText KickReason;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KickReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameSession_eventKickPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameSession_eventKickPlayer_Parms), &Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickReason = { UE4CodeGen_Private::EPropertyClass::Text, "KickReason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventKickPlayer_Parms, KickReason), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickReason_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickedPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "KickedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventKickPlayer_Parms, KickedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::NewProp_KickedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "KickPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameSession_eventKickPlayer_Parms), Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_KickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_KickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics
	{
		struct MordhauGameSession_eventRemoveAdmin_Parms
		{
			APlayerController* AdminPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdminPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::NewProp_AdminPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "AdminPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventRemoveAdmin_Parms, AdminPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::NewProp_AdminPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "RemoveAdmin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameSession_eventRemoveAdmin_Parms), Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "TriggerRewardDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics
	{
		struct MordhauGameSession_eventTriggerRewardDropForPlayer_Parms
		{
			APlayerController* Player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventTriggerRewardDropForPlayer_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "TriggerRewardDropForPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameSession_eventTriggerRewardDropForPlayer_Parms), Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics
	{
		struct MordhauGameSession_eventUnbanPlayer_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameSession_eventUnbanPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameSession_eventUnbanPlayer_Parms), &Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameSession_eventUnbanPlayer_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauGameSessionFns" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameSession, "UnbanPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameSession_eventUnbanPlayer_Parms), Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauGameSession_NoRegister()
	{
		return AMordhauGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BannedPlayers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BannedPlayers_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BannedPlayers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Admins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Admins;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Admins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdminPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdminPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauGameSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauGameSession_AddAdmin, "AddAdmin" }, // 2364955299
		{ &Z_Construct_UFunction_AMordhauGameSession_AllowJoin, "AllowJoin" }, // 2514825055
		{ &Z_Construct_UFunction_AMordhauGameSession_AllowsJoin, "AllowsJoin" }, // 3997263562
		{ &Z_Construct_UFunction_AMordhauGameSession_BanPlayer, "BanPlayer" }, // 2888593061
		{ &Z_Construct_UFunction_AMordhauGameSession_BanPlayerWithDuration, "BanPlayerWithDuration" }, // 3325419532
		{ &Z_Construct_UFunction_AMordhauGameSession_KickPlayer, "KickPlayer" }, // 2786066065
		{ &Z_Construct_UFunction_AMordhauGameSession_RemoveAdmin, "RemoveAdmin" }, // 233699364
		{ &Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDrop, "TriggerRewardDrop" }, // 2314541176
		{ &Z_Construct_UFunction_AMordhauGameSession_TriggerRewardDropForPlayer, "TriggerRewardDropForPlayer" }, // 2861208074
		{ &Z_Construct_UFunction_AMordhauGameSession_UnbanPlayer, "UnbanPlayer" }, // 3945096099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MordhauGameSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_MetaData[] = {
		{ "Category", "MordhauGameSession" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers = { UE4CodeGen_Private::EPropertyClass::Map, "BannedPlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameSession, BannedPlayers), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "BannedPlayers_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "BannedPlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins_MetaData[] = {
		{ "Category", "MordhauGameSession" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins = { UE4CodeGen_Private::EPropertyClass::Array, "Admins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameSession, Admins), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Admins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_AdminPassword_MetaData[] = {
		{ "Category", "MordhauGameSession" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_AdminPassword = { UE4CodeGen_Private::EPropertyClass::Str, "AdminPassword", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameSession, AdminPassword), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_AdminPassword_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_AdminPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerPassword_MetaData[] = {
		{ "Category", "MordhauGameSession" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerPassword = { UE4CodeGen_Private::EPropertyClass::Str, "ServerPassword", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameSession, ServerPassword), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerPassword_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "MordhauGameSession" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerName = { UE4CodeGen_Private::EPropertyClass::Str, "ServerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameSession, ServerName), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_MaxSlots_MetaData[] = {
		{ "Category", "MordhauGameSession" },
		{ "ModuleRelativePath", "MordhauGameSession.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_MaxSlots = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSlots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameSession, MaxSlots), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_MaxSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_MaxSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_BannedPlayers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_Admins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_AdminPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameSession_Statics::NewProp_MaxSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauGameSession_Statics::ClassParams = {
		&AMordhauGameSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauGameSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauGameSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauGameSession, 901129019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauGameSession(Z_Construct_UClass_AMordhauGameSession, &AMordhauGameSession::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
