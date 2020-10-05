// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauGameMode() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameMode_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_AddBots();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_AddTeamScore();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_CanChamber();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_CanClash();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_CanDealDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_ChangeLevel();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_GetNextMap();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_GetNextMaps();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnKilled();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMordhauDamageType();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_RemoveBots();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameMode_SetTeamScore();
// End Cross Module References
	static FName NAME_AMordhauGameMode_AddBots = FName(TEXT("AddBots"));
	void AMordhauGameMode::AddBots(int32 Amount, int32 Team)
	{
		MordhauGameMode_eventAddBots_Parms Parms;
		Parms.Amount=Amount;
		Parms.Team=Team;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_AddBots),&Parms);
	}
	static FName NAME_AMordhauGameMode_CanChamber = FName(TEXT("CanChamber"));
	bool AMordhauGameMode::CanChamber(APawn* Source, APawn* Target)
	{
		MordhauGameMode_eventCanChamber_Parms Parms;
		Parms.Source=Source;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_CanChamber),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_CanClash = FName(TEXT("CanClash"));
	bool AMordhauGameMode::CanClash(APawn* Source, APawn* Target)
	{
		MordhauGameMode_eventCanClash_Parms Parms;
		Parms.Source=Source;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_CanClash),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_CanDealDamage = FName(TEXT("CanDealDamage"));
	bool AMordhauGameMode::CanDealDamage(AActor* DamageSource, AActor* DamageTarget)
	{
		MordhauGameMode_eventCanDealDamage_Parms Parms;
		Parms.DamageSource=DamageSource;
		Parms.DamageTarget=DamageTarget;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_CanDealDamage),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_ControllerCanRestart = FName(TEXT("ControllerCanRestart"));
	bool AMordhauGameMode::ControllerCanRestart(AController* Controller)
	{
		MordhauGameMode_eventControllerCanRestart_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_ControllerCanRestart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_GetDamageFactor = FName(TEXT("GetDamageFactor"));
	float AMordhauGameMode::GetDamageFactor(AActor* DamageSource, AActor* DamageTarget)
	{
		MordhauGameMode_eventGetDamageFactor_Parms Parms;
		Parms.DamageSource=DamageSource;
		Parms.DamageTarget=DamageTarget;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_GetDamageFactor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_GetNextMap = FName(TEXT("GetNextMap"));
	FString AMordhauGameMode::GetNextMap()
	{
		MordhauGameMode_eventGetNextMap_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_GetNextMap),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_GetSpawnpointPreference = FName(TEXT("GetSpawnpointPreference"));
	float AMordhauGameMode::GetSpawnpointPreference(APlayerStart* PlayerStart, AController* Player)
	{
		MordhauGameMode_eventGetSpawnpointPreference_Parms Parms;
		Parms.PlayerStart=PlayerStart;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_GetSpawnpointPreference),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_IsSpawnpointAllowed = FName(TEXT("IsSpawnpointAllowed"));
	bool AMordhauGameMode::IsSpawnpointAllowed(APlayerStart* PlayerStart, AController* Player)
	{
		MordhauGameMode_eventIsSpawnpointAllowed_Parms Parms;
		Parms.PlayerStart=PlayerStart;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_IsSpawnpointAllowed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameMode_MatchTimeRanOut = FName(TEXT("MatchTimeRanOut"));
	void AMordhauGameMode::MatchTimeRanOut()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_MatchTimeRanOut),NULL);
	}
	static FName NAME_AMordhauGameMode_OnAssistsChanged = FName(TEXT("OnAssistsChanged"));
	void AMordhauGameMode::OnAssistsChanged(APlayerState* State, int32 OldValue)
	{
		MordhauGameMode_eventOnAssistsChanged_Parms Parms;
		Parms.State=State;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnAssistsChanged),&Parms);
	}
	static FName NAME_AMordhauGameMode_OnDeathsChanged = FName(TEXT("OnDeathsChanged"));
	void AMordhauGameMode::OnDeathsChanged(APlayerState* State, int32 OldValue)
	{
		MordhauGameMode_eventOnDeathsChanged_Parms Parms;
		Parms.State=State;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnDeathsChanged),&Parms);
	}
	static FName NAME_AMordhauGameMode_OnKilled = FName(TEXT("OnKilled"));
	void AMordhauGameMode::OnKilled(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, AActor* DamageSource, AActor* DamageAgent)
	{
		MordhauGameMode_eventOnKilled_Parms Parms;
		Parms.Killer=Killer;
		Parms.KilledPlayer=KilledPlayer;
		Parms.KilledPawn=KilledPawn;
		Parms.Type=Type;
		Parms.SubType=SubType;
		Parms.DamageSource=DamageSource;
		Parms.DamageAgent=DamageAgent;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnKilled),&Parms);
	}
	static FName NAME_AMordhauGameMode_OnKillsChanged = FName(TEXT("OnKillsChanged"));
	void AMordhauGameMode::OnKillsChanged(APlayerState* State, int32 OldValue)
	{
		MordhauGameMode_eventOnKillsChanged_Parms Parms;
		Parms.State=State;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnKillsChanged),&Parms);
	}
	static FName NAME_AMordhauGameMode_OnMatchStateChanged = FName(TEXT("OnMatchStateChanged"));
	void AMordhauGameMode::OnMatchStateChanged(FName const& OldState, FName const& NewState)
	{
		MordhauGameMode_eventOnMatchStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnMatchStateChanged),&Parms);
	}
	static FName NAME_AMordhauGameMode_OnScoreChanged = FName(TEXT("OnScoreChanged"));
	void AMordhauGameMode::OnScoreChanged(APlayerState* State, float OldValue)
	{
		MordhauGameMode_eventOnScoreChanged_Parms Parms;
		Parms.State=State;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnScoreChanged),&Parms);
	}
	static FName NAME_AMordhauGameMode_OnTeamScoreChanged = FName(TEXT("OnTeamScoreChanged"));
	void AMordhauGameMode::OnTeamScoreChanged(int32 Team, float OldValue)
	{
		MordhauGameMode_eventOnTeamScoreChanged_Parms Parms;
		Parms.Team=Team;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_OnTeamScoreChanged),&Parms);
	}
	static FName NAME_AMordhauGameMode_RemoveBots = FName(TEXT("RemoveBots"));
	void AMordhauGameMode::RemoveBots(int32 Amount, int32 Team)
	{
		MordhauGameMode_eventRemoveBots_Parms Parms;
		Parms.Amount=Amount;
		Parms.Team=Team;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_RemoveBots),&Parms);
	}
	static FName NAME_AMordhauGameMode_RequestedAssignTeam = FName(TEXT("RequestedAssignTeam"));
	void AMordhauGameMode::RequestedAssignTeam(AController* Controller, int32 Team)
	{
		MordhauGameMode_eventRequestedAssignTeam_Parms Parms;
		Parms.Controller=Controller;
		Parms.Team=Team;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameMode_RequestedAssignTeam),&Parms);
	}
	void AMordhauGameMode::StaticRegisterNativesAMordhauGameMode()
	{
		UClass* Class = AMordhauGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBots", &AMordhauGameMode::execAddBots },
			{ "AddTeamScore", &AMordhauGameMode::execAddTeamScore },
			{ "CanChamber", &AMordhauGameMode::execCanChamber },
			{ "CanClash", &AMordhauGameMode::execCanClash },
			{ "CanDealDamage", &AMordhauGameMode::execCanDealDamage },
			{ "ChangeLevel", &AMordhauGameMode::execChangeLevel },
			{ "ControllerCanRestart", &AMordhauGameMode::execControllerCanRestart },
			{ "GetDamageFactor", &AMordhauGameMode::execGetDamageFactor },
			{ "GetMapVoteCounts", &AMordhauGameMode::execGetMapVoteCounts },
			{ "GetMapVoteMaps", &AMordhauGameMode::execGetMapVoteMaps },
			{ "GetNextMap", &AMordhauGameMode::execGetNextMap },
			{ "GetNextMaps", &AMordhauGameMode::execGetNextMaps },
			{ "GetSpawnpointPreference", &AMordhauGameMode::execGetSpawnpointPreference },
			{ "IsSpawnpointAllowed", &AMordhauGameMode::execIsSpawnpointAllowed },
			{ "MatchTimeRanOut", &AMordhauGameMode::execMatchTimeRanOut },
			{ "OnAssistsChanged", &AMordhauGameMode::execOnAssistsChanged },
			{ "OnDeathsChanged", &AMordhauGameMode::execOnDeathsChanged },
			{ "OnKilled", &AMordhauGameMode::execOnKilled },
			{ "OnKillsChanged", &AMordhauGameMode::execOnKillsChanged },
			{ "OnScoreChanged", &AMordhauGameMode::execOnScoreChanged },
			{ "OnTeamScoreChanged", &AMordhauGameMode::execOnTeamScoreChanged },
			{ "RemoveBots", &AMordhauGameMode::execRemoveBots },
			{ "RequestedAssignTeam", &AMordhauGameMode::execRequestedAssignTeam },
			{ "SetTeamScore", &AMordhauGameMode::execSetTeamScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventAddBots_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventAddBots_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "AddBots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventAddBots_Parms), Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_AddBots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_AddBots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics
	{
		struct MordhauGameMode_eventAddTeamScore_Parms
		{
			int32 Team;
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventAddTeamScore_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventAddTeamScore_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeFns" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "AddTeamScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameMode_eventAddTeamScore_Parms), Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_AddTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_AddTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameMode_eventCanChamber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameMode_eventCanChamber_Parms), &Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventCanChamber_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventCanChamber_Parms, Source), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "CanChamber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventCanChamber_Parms), Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_CanChamber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_CanChamber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameMode_eventCanClash_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameMode_eventCanClash_Parms), &Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventCanClash_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventCanClash_Parms, Source), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "CanClash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventCanClash_Parms), Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_CanClash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_CanClash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameMode_eventCanDealDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameMode_eventCanDealDamage_Parms), &Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_DamageTarget = { UE4CodeGen_Private::EPropertyClass::Object, "DamageTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventCanDealDamage_Parms, DamageTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_DamageSource = { UE4CodeGen_Private::EPropertyClass::Object, "DamageSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventCanDealDamage_Parms, DamageSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_DamageTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::NewProp_DamageSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "CanDealDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventCanDealDamage_Parms), Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_CanDealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_CanDealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics
	{
		struct MordhauGameMode_eventChangeLevel_Parms
		{
			FString LevelName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameMode_eventChangeLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameMode_eventChangeLevel_Parms), &Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_LevelName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventChangeLevel_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_LevelName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeFns" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "ChangeLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameMode_eventChangeLevel_Parms), Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_ChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_ChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameMode_eventControllerCanRestart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameMode_eventControllerCanRestart_Parms), &Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventControllerCanRestart_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "ControllerCanRestart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventControllerCanRestart_Parms), Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetDamageFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::NewProp_DamageTarget = { UE4CodeGen_Private::EPropertyClass::Object, "DamageTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetDamageFactor_Parms, DamageTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::NewProp_DamageSource = { UE4CodeGen_Private::EPropertyClass::Object, "DamageSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetDamageFactor_Parms, DamageSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::NewProp_DamageTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::NewProp_DamageSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = \"GameModeEvents\")\n       FString GetNextMaps();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "GetDamageFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventGetDamageFactor_Parms), Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics
	{
		struct MordhauGameMode_eventGetMapVoteCounts_Parms
		{
			TArray<uint8> byte1;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_byte1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_byte1_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::NewProp_byte1 = { UE4CodeGen_Private::EPropertyClass::Array, "byte1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetMapVoteCounts_Parms, byte1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::NewProp_byte1_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "byte1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::NewProp_byte1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::NewProp_byte1_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeFns" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "GetMapVoteCounts", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameMode_eventGetMapVoteCounts_Parms), Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics
	{
		struct MordhauGameMode_eventGetMapVoteMaps_Parms
		{
			TArray<FString> string2;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_string2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string2_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::NewProp_string2 = { UE4CodeGen_Private::EPropertyClass::Array, "string2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetMapVoteMaps_Parms, string2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::NewProp_string2_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "string2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::NewProp_string2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::NewProp_string2_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeFns" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "GetMapVoteMaps", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameMode_eventGetMapVoteMaps_Parms), Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetNextMap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "GetNextMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventGetNextMap_Parms), Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_GetNextMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_GetNextMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics
	{
		struct MordhauGameMode_eventGetNextMaps_Parms
		{
			TArray<FString> string1;
			int32 Count;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_string1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_string1_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::NewProp_Count = { UE4CodeGen_Private::EPropertyClass::Int, "Count", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetNextMaps_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::NewProp_string1 = { UE4CodeGen_Private::EPropertyClass::Array, "string1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetNextMaps_Parms, string1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::NewProp_string1_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "string1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::NewProp_string1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::NewProp_string1_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeFns" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "GetNextMaps", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameMode_eventGetNextMaps_Parms), Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_GetNextMaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_GetNextMaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetSpawnpointPreference_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetSpawnpointPreference_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::NewProp_PlayerStart = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventGetSpawnpointPreference_Parms, PlayerStart), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::NewProp_PlayerStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "GetSpawnpointPreference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventGetSpawnpointPreference_Parms), Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameMode_eventIsSpawnpointAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameMode_eventIsSpawnpointAllowed_Parms), &Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventIsSpawnpointAllowed_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_PlayerStart = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventIsSpawnpointAllowed_Parms, PlayerStart), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::NewProp_PlayerStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "IsSpawnpointAllowed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventIsSpawnpointAllowed_Parms), Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "MatchTimeRanOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::NewProp_OldValue = { UE4CodeGen_Private::EPropertyClass::Int, "OldValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnAssistsChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Object, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnAssistsChanged_Parms, State), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnAssistsChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventOnAssistsChanged_Parms), Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::NewProp_OldValue = { UE4CodeGen_Private::EPropertyClass::Int, "OldValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnDeathsChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Object, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnDeathsChanged_Parms, State), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnDeathsChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventOnDeathsChanged_Parms), Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageAgent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_DamageAgent = { UE4CodeGen_Private::EPropertyClass::Object, "DamageAgent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, DamageAgent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_DamageSource = { UE4CodeGen_Private::EPropertyClass::Object, "DamageSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, DamageSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_SubType = { UE4CodeGen_Private::EPropertyClass::Byte, "SubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, SubType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, Type), Z_Construct_UEnum_Mordhau_EMordhauDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_KilledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "KilledPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, KilledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_KilledPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "KilledPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, KilledPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_Killer = { UE4CodeGen_Private::EPropertyClass::Object, "Killer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKilled_Parms, Killer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_DamageAgent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_DamageSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_SubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_KilledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_KilledPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::NewProp_Killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnKilled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventOnKilled_Parms), Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::NewProp_OldValue = { UE4CodeGen_Private::EPropertyClass::Int, "OldValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKillsChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Object, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnKillsChanged_Parms, State), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnKillsChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventOnKillsChanged_Parms), Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_NewState = { UE4CodeGen_Private::EPropertyClass::Name, "NewState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnMatchStateChanged_Parms, NewState), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_NewState_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_NewState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_OldState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_OldState = { UE4CodeGen_Private::EPropertyClass::Name, "OldState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnMatchStateChanged_Parms, OldState), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_OldState_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_OldState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnMatchStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(MordhauGameMode_eventOnMatchStateChanged_Parms), Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::NewProp_OldValue = { UE4CodeGen_Private::EPropertyClass::Float, "OldValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnScoreChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Object, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnScoreChanged_Parms, State), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnScoreChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventOnScoreChanged_Parms), Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::NewProp_OldValue = { UE4CodeGen_Private::EPropertyClass::Float, "OldValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnTeamScoreChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventOnTeamScoreChanged_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"GameModeFns\")\n       void Broadcast(class AActor* Sender, const FString& Msg, const FName& Type);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "OnTeamScoreChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventOnTeamScoreChanged_Parms), Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventRemoveBots_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Int, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventRemoveBots_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "RemoveBots", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventRemoveBots_Parms), Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_RemoveBots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_RemoveBots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventRequestedAssignTeam_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventRequestedAssignTeam_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeEvents" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "RequestedAssignTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauGameMode_eventRequestedAssignTeam_Parms), Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics
	{
		struct MordhauGameMode_eventSetTeamScore_Parms
		{
			int32 Team;
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventSetTeamScore_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameMode_eventSetTeamScore_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeFns" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
		{ "ToolTip", "struct SkirmishRoundInfo RoundInfo;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameMode, "SetTeamScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameMode_eventSetTeamScore_Parms), Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameMode_SetTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameMode_SetTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauGameMode_NoRegister()
	{
		return AMordhauGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapVoteMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapVoteMaps;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapVoteMaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuicideDecrementsKills_MetaData[];
#endif
		static void NewProp_bSuicideDecrementsKills_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuicideDecrementsKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeamKillsIncrementKilledDeaths_MetaData[];
#endif
		static void NewProp_bTeamKillsIncrementKilledDeaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeamKillsIncrementKilledDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeamKillsDecrementKillerKills_MetaData[];
#endif
		static void NewProp_bTeamKillsDecrementKillerKills_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeamKillsDecrementKillerKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamKillTeamScoreChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeamKillTeamScoreChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamKillScoreChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeamKillScoreChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillTeamScoreChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillTeamScoreChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillScoreChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillScoreChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssistDamageToCountAsKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AssistDamageToCountAsKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssistScoreFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssistScoreFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScoringDisabled_MetaData[];
#endif
		static void NewProp_bIsScoringDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScoringDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableStamina_MetaData[];
#endif
		static void NewProp_bDisableStamina_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDamage_MetaData[];
#endif
		static void NewProp_bDisableDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnProtectionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnProtectionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamDamageFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeamDamageFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerIsTravelling_MetaData[];
#endif
		static void NewProp_bServerIsTravelling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerIsTravelling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorseRespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorseRespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatapultRespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CatapultRespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallistaRespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BallistaRespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEquipmentDoesNotDespawn_MetaData[];
#endif
		static void NewProp_bEquipmentDoesNotDespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquipmentDoesNotDespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayersDropAllGearOnDeath_MetaData[];
#endif
		static void NewProp_bPlayersDropAllGearOnDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayersDropAllGearOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayersSpawnInWaves_MetaData[];
#endif
		static void NewProp_bPlayersSpawnInWaves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayersSpawnInWaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesSlowPlayerSpawning_MetaData[];
#endif
		static void NewProp_bUsesSlowPlayerSpawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesSlowPlayerSpawning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerRespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchTimeRanOut_MetaData[];
#endif
		static void NewProp_bMatchTimeRanOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchTimeRanOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlySpawningStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentlySpawningStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlySpawningPlayerStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlySpawningPlayerStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlySpawningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlySpawningController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnQueue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapRotation;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapRotation_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauGameMode_AddBots, "AddBots" }, // 1501687800
		{ &Z_Construct_UFunction_AMordhauGameMode_AddTeamScore, "AddTeamScore" }, // 3446806398
		{ &Z_Construct_UFunction_AMordhauGameMode_CanChamber, "CanChamber" }, // 3680458014
		{ &Z_Construct_UFunction_AMordhauGameMode_CanClash, "CanClash" }, // 1043858200
		{ &Z_Construct_UFunction_AMordhauGameMode_CanDealDamage, "CanDealDamage" }, // 1362817370
		{ &Z_Construct_UFunction_AMordhauGameMode_ChangeLevel, "ChangeLevel" }, // 2621909204
		{ &Z_Construct_UFunction_AMordhauGameMode_ControllerCanRestart, "ControllerCanRestart" }, // 3165339612
		{ &Z_Construct_UFunction_AMordhauGameMode_GetDamageFactor, "GetDamageFactor" }, // 1629553570
		{ &Z_Construct_UFunction_AMordhauGameMode_GetMapVoteCounts, "GetMapVoteCounts" }, // 2112212426
		{ &Z_Construct_UFunction_AMordhauGameMode_GetMapVoteMaps, "GetMapVoteMaps" }, // 498502331
		{ &Z_Construct_UFunction_AMordhauGameMode_GetNextMap, "GetNextMap" }, // 313723737
		{ &Z_Construct_UFunction_AMordhauGameMode_GetNextMaps, "GetNextMaps" }, // 1349790156
		{ &Z_Construct_UFunction_AMordhauGameMode_GetSpawnpointPreference, "GetSpawnpointPreference" }, // 3655565924
		{ &Z_Construct_UFunction_AMordhauGameMode_IsSpawnpointAllowed, "IsSpawnpointAllowed" }, // 626108646
		{ &Z_Construct_UFunction_AMordhauGameMode_MatchTimeRanOut, "MatchTimeRanOut" }, // 2644140139
		{ &Z_Construct_UFunction_AMordhauGameMode_OnAssistsChanged, "OnAssistsChanged" }, // 706910983
		{ &Z_Construct_UFunction_AMordhauGameMode_OnDeathsChanged, "OnDeathsChanged" }, // 2555745796
		{ &Z_Construct_UFunction_AMordhauGameMode_OnKilled, "OnKilled" }, // 153986888
		{ &Z_Construct_UFunction_AMordhauGameMode_OnKillsChanged, "OnKillsChanged" }, // 1336927627
		{ &Z_Construct_UFunction_AMordhauGameMode_OnMatchStateChanged, "OnMatchStateChanged" }, // 972288561
		{ &Z_Construct_UFunction_AMordhauGameMode_OnScoreChanged, "OnScoreChanged" }, // 2891872561
		{ &Z_Construct_UFunction_AMordhauGameMode_OnTeamScoreChanged, "OnTeamScoreChanged" }, // 3534364829
		{ &Z_Construct_UFunction_AMordhauGameMode_RemoveBots, "RemoveBots" }, // 2643450415
		{ &Z_Construct_UFunction_AMordhauGameMode_RequestedAssignTeam, "RequestedAssignTeam" }, // 4063265153
		{ &Z_Construct_UFunction_AMordhauGameMode_SetTeamScore, "SetTeamScore" }, // 3823526282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MordhauGameMode.h" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FGameModeName\n{\n       FString                                     Name;\n       FSoftClassPath                              GameMode;\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps = { UE4CodeGen_Private::EPropertyClass::Array, "MapVoteMaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, MapVoteMaps), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "MapVoteMaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bSuicideDecrementsKills = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuicideDecrementsKills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bTeamKillsIncrementKilledDeaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeamKillsIncrementKilledDeaths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bTeamKillsDecrementKillerKills = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeamKillsDecrementKillerKills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillTeamScoreChange_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillTeamScoreChange = { UE4CodeGen_Private::EPropertyClass::Float, "TeamKillTeamScoreChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, TeamKillTeamScoreChange), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillTeamScoreChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillTeamScoreChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillScoreChange_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillScoreChange = { UE4CodeGen_Private::EPropertyClass::Float, "TeamKillScoreChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, TeamKillScoreChange), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillScoreChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillScoreChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillTeamScoreChange_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillTeamScoreChange = { UE4CodeGen_Private::EPropertyClass::Float, "KillTeamScoreChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, KillTeamScoreChange), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillTeamScoreChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillTeamScoreChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillScoreChange_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillScoreChange = { UE4CodeGen_Private::EPropertyClass::Float, "KillScoreChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, KillScoreChange), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillScoreChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillScoreChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistDamageToCountAsKill_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistDamageToCountAsKill = { UE4CodeGen_Private::EPropertyClass::Int, "AssistDamageToCountAsKill", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, AssistDamageToCountAsKill), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistDamageToCountAsKill_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistDamageToCountAsKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistScoreFactor_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistScoreFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AssistScoreFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, AssistScoreFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistScoreFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistScoreFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bIsScoringDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsScoringDisabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bDisableStamina = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableStamina", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bDisableDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnProtectionDuration_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnProtectionDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnProtectionDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, SpawnProtectionDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnProtectionDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnProtectionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamDamageFactor_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamDamageFactor = { UE4CodeGen_Private::EPropertyClass::Float, "TeamDamageFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, TeamDamageFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamDamageFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamDamageFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_DamageFactor_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_DamageFactor = { UE4CodeGen_Private::EPropertyClass::Float, "DamageFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, DamageFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_DamageFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_DamageFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bServerIsTravelling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling = { UE4CodeGen_Private::EPropertyClass::Bool, "bServerIsTravelling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_HorseRespawnTime_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_HorseRespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "HorseRespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, HorseRespawnTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_HorseRespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_HorseRespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CatapultRespawnTime_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CatapultRespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "CatapultRespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, CatapultRespawnTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CatapultRespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CatapultRespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_BallistaRespawnTime_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_BallistaRespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "BallistaRespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, BallistaRespawnTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_BallistaRespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_BallistaRespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bEquipmentDoesNotDespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn = { UE4CodeGen_Private::EPropertyClass::Bool, "bEquipmentDoesNotDespawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bPlayersDropAllGearOnDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayersDropAllGearOnDeath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bPlayersSpawnInWaves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayersSpawnInWaves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bUsesSlowPlayerSpawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesSlowPlayerSpawning", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_PlayerRespawnTime_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_PlayerRespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "PlayerRespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, PlayerRespawnTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_PlayerRespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_PlayerRespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut_SetBit(void* Obj)
	{
		((AMordhauGameMode*)Obj)->bMatchTimeRanOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bMatchTimeRanOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameMode), &Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningStage_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningStage = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentlySpawningStage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, CurrentlySpawningStage), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningStage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningPlayerStart_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningPlayerStart = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentlySpawningPlayerStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, CurrentlySpawningPlayerStart), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningPlayerStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningPlayerStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningController_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningController = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentlySpawningController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, CurrentlySpawningController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, SpawnQueue), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation_MetaData[] = {
		{ "Category", "MordhauGameMode" },
		{ "ModuleRelativePath", "MordhauGameMode.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nTArray<FGameModeName>                       MapPrefixes;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation = { UE4CodeGen_Private::EPropertyClass::Array, "MapRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameMode, MapRotation), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "MapRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapVoteMaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bSuicideDecrementsKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsIncrementKilledDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bTeamKillsDecrementKillerKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillTeamScoreChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamKillScoreChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillTeamScoreChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_KillScoreChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistDamageToCountAsKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_AssistScoreFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bIsScoringDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bDisableDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnProtectionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_TeamDamageFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_DamageFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bServerIsTravelling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_HorseRespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CatapultRespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_BallistaRespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bEquipmentDoesNotDespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersDropAllGearOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bPlayersSpawnInWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bUsesSlowPlayerSpawning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_PlayerRespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_bMatchTimeRanOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningPlayerStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_CurrentlySpawningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_SpawnQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameMode_Statics::NewProp_MapRotation_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauGameMode_Statics::ClassParams = {
		&AMordhauGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauGameMode, 556083627);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauGameMode(Z_Construct_UClass_AMordhauGameMode, &AMordhauGameMode::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
