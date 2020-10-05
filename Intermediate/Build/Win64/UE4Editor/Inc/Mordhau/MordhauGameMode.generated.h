// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AActor;
class AController;
class APlayerStart;
class APlayerState;
enum class EMordhauDamageType : uint8;
#ifdef MORDHAU_MordhauGameMode_generated_h
#error "MordhauGameMode.generated.h already included, missing '#pragma once' in MordhauGameMode.h"
#endif
#define MORDHAU_MordhauGameMode_generated_h

#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_RPC_WRAPPERS \
	virtual FString GetNextMap_Implementation(); \
	virtual bool CanChamber_Implementation(APawn* Source, APawn* Target); \
	virtual bool CanClash_Implementation(APawn* Source, APawn* Target); \
	virtual bool CanDealDamage_Implementation(AActor* DamageSource, AActor* DamageTarget); \
	virtual bool ControllerCanRestart_Implementation(AController* Controller); \
	virtual float GetDamageFactor_Implementation(AActor* DamageSource, AActor* DamageTarget); \
	virtual float GetSpawnpointPreference_Implementation(APlayerStart* PlayerStart, AController* Player); \
	virtual bool IsSpawnpointAllowed_Implementation(APlayerStart* PlayerStart, AController* Player); \
	virtual void MatchTimeRanOut_Implementation(); \
	virtual void RequestedAssignTeam_Implementation(AController* Controller, int32 Team); \
	virtual void OnAssistsChanged_Implementation(APlayerState* State, int32 OldValue); \
	virtual void OnDeathsChanged_Implementation(APlayerState* State, int32 OldValue); \
	virtual void OnKilled_Implementation(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, AActor* DamageSource, AActor* DamageAgent); \
	virtual void OnKillsChanged_Implementation(APlayerState* State, int32 OldValue); \
	virtual void OnScoreChanged_Implementation(APlayerState* State, float OldValue); \
	virtual void OnTeamScoreChanged_Implementation(int32 Team, float OldValue); \
	virtual void RemoveBots_Implementation(int32 Amount, int32 Team); \
	virtual void AddBots_Implementation(int32 Amount, int32 Team); \
 \
	DECLARE_FUNCTION(execGetNextMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNextMap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanChamber) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Source); \
		P_GET_OBJECT(APawn,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanChamber_Implementation(Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanClash) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Source); \
		P_GET_OBJECT(APawn,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanClash_Implementation(Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDealDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamageSource); \
		P_GET_OBJECT(AActor,Z_Param_DamageTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDealDamage_Implementation(Z_Param_DamageSource,Z_Param_DamageTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execControllerCanRestart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ControllerCanRestart_Implementation(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageFactor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamageSource); \
		P_GET_OBJECT(AActor,Z_Param_DamageTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDamageFactor_Implementation(Z_Param_DamageSource,Z_Param_DamageTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpawnpointPreference) \
	{ \
		P_GET_OBJECT(APlayerStart,Z_Param_PlayerStart); \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpawnpointPreference_Implementation(Z_Param_PlayerStart,Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpawnpointAllowed) \
	{ \
		P_GET_OBJECT(APlayerStart,Z_Param_PlayerStart); \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpawnpointAllowed_Implementation(Z_Param_PlayerStart,Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchTimeRanOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MatchTimeRanOut_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestedAssignTeam) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestedAssignTeam_Implementation(Z_Param_Controller,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAssistsChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAssistsChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDeathsChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeathsChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKilled) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Killer); \
		P_GET_OBJECT(AController,Z_Param_KilledPlayer); \
		P_GET_OBJECT(APawn,Z_Param_KilledPawn); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_Type); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SubType); \
		P_GET_OBJECT(AActor,Z_Param_DamageSource); \
		P_GET_OBJECT(AActor,Z_Param_DamageAgent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKilled_Implementation(Z_Param_Killer,Z_Param_KilledPlayer,Z_Param_KilledPawn,EMordhauDamageType(Z_Param_Type),Z_Param_SubType,Z_Param_DamageSource,Z_Param_DamageAgent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKillsChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKillsChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnScoreChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnScoreChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTeamScoreChanged) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTeamScoreChanged_Implementation(Z_Param_Team,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBots_Implementation(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBots_Implementation(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTeamScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTeamScore(Z_Param_Team,Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ChangeLevel(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapVoteCounts) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byte1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapVoteCounts(Z_Param_Out_byte1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapVoteMaps) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_string2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapVoteMaps(Z_Param_Out_string2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextMaps) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_string1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNextMaps(Z_Param_Out_string1,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeamScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeamScore(Z_Param_Team,Z_Param_Amount); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetNextMap_Implementation(); \
	virtual bool CanChamber_Implementation(APawn* Source, APawn* Target); \
	virtual bool CanClash_Implementation(APawn* Source, APawn* Target); \
	virtual bool CanDealDamage_Implementation(AActor* DamageSource, AActor* DamageTarget); \
	virtual bool ControllerCanRestart_Implementation(AController* Controller); \
	virtual float GetDamageFactor_Implementation(AActor* DamageSource, AActor* DamageTarget); \
	virtual float GetSpawnpointPreference_Implementation(APlayerStart* PlayerStart, AController* Player); \
	virtual bool IsSpawnpointAllowed_Implementation(APlayerStart* PlayerStart, AController* Player); \
	virtual void MatchTimeRanOut_Implementation(); \
	virtual void RequestedAssignTeam_Implementation(AController* Controller, int32 Team); \
	virtual void OnAssistsChanged_Implementation(APlayerState* State, int32 OldValue); \
	virtual void OnDeathsChanged_Implementation(APlayerState* State, int32 OldValue); \
	virtual void OnKilled_Implementation(AController* Killer, AController* KilledPlayer, APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, AActor* DamageSource, AActor* DamageAgent); \
	virtual void OnKillsChanged_Implementation(APlayerState* State, int32 OldValue); \
	virtual void OnScoreChanged_Implementation(APlayerState* State, float OldValue); \
	virtual void OnTeamScoreChanged_Implementation(int32 Team, float OldValue); \
	virtual void RemoveBots_Implementation(int32 Amount, int32 Team); \
	virtual void AddBots_Implementation(int32 Amount, int32 Team); \
 \
	DECLARE_FUNCTION(execGetNextMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetNextMap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanChamber) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Source); \
		P_GET_OBJECT(APawn,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanChamber_Implementation(Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanClash) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Source); \
		P_GET_OBJECT(APawn,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanClash_Implementation(Z_Param_Source,Z_Param_Target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDealDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamageSource); \
		P_GET_OBJECT(AActor,Z_Param_DamageTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDealDamage_Implementation(Z_Param_DamageSource,Z_Param_DamageTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execControllerCanRestart) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ControllerCanRestart_Implementation(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDamageFactor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamageSource); \
		P_GET_OBJECT(AActor,Z_Param_DamageTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDamageFactor_Implementation(Z_Param_DamageSource,Z_Param_DamageTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpawnpointPreference) \
	{ \
		P_GET_OBJECT(APlayerStart,Z_Param_PlayerStart); \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpawnpointPreference_Implementation(Z_Param_PlayerStart,Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpawnpointAllowed) \
	{ \
		P_GET_OBJECT(APlayerStart,Z_Param_PlayerStart); \
		P_GET_OBJECT(AController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpawnpointAllowed_Implementation(Z_Param_PlayerStart,Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchTimeRanOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MatchTimeRanOut_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestedAssignTeam) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestedAssignTeam_Implementation(Z_Param_Controller,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAssistsChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAssistsChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDeathsChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDeathsChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKilled) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Killer); \
		P_GET_OBJECT(AController,Z_Param_KilledPlayer); \
		P_GET_OBJECT(APawn,Z_Param_KilledPawn); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_Type); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SubType); \
		P_GET_OBJECT(AActor,Z_Param_DamageSource); \
		P_GET_OBJECT(AActor,Z_Param_DamageAgent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKilled_Implementation(Z_Param_Killer,Z_Param_KilledPlayer,Z_Param_KilledPawn,EMordhauDamageType(Z_Param_Type),Z_Param_SubType,Z_Param_DamageSource,Z_Param_DamageAgent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKillsChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnKillsChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnScoreChanged) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_State); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnScoreChanged_Implementation(Z_Param_State,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTeamScoreChanged) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTeamScoreChanged_Implementation(Z_Param_Team,Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBots_Implementation(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBots_Implementation(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTeamScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTeamScore(Z_Param_Team,Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ChangeLevel(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapVoteCounts) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_byte1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapVoteCounts(Z_Param_Out_byte1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapVoteMaps) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_string2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapVoteMaps(Z_Param_Out_string2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextMaps) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_string1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNextMaps(Z_Param_Out_string1,Z_Param_Count); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeamScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTeamScore(Z_Param_Team,Z_Param_Amount); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_EVENT_PARMS \
	struct MordhauGameMode_eventAddBots_Parms \
	{ \
		int32 Amount; \
		int32 Team; \
	}; \
	struct MordhauGameMode_eventCanChamber_Parms \
	{ \
		APawn* Source; \
		APawn* Target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventCanChamber_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventCanClash_Parms \
	{ \
		APawn* Source; \
		APawn* Target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventCanClash_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventCanDealDamage_Parms \
	{ \
		AActor* DamageSource; \
		AActor* DamageTarget; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventCanDealDamage_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventControllerCanRestart_Parms \
	{ \
		AController* Controller; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventControllerCanRestart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventGetDamageFactor_Parms \
	{ \
		AActor* DamageSource; \
		AActor* DamageTarget; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventGetDamageFactor_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventGetNextMap_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct MordhauGameMode_eventGetSpawnpointPreference_Parms \
	{ \
		APlayerStart* PlayerStart; \
		AController* Player; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventGetSpawnpointPreference_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventIsSpawnpointAllowed_Parms \
	{ \
		APlayerStart* PlayerStart; \
		AController* Player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameMode_eventIsSpawnpointAllowed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameMode_eventOnAssistsChanged_Parms \
	{ \
		APlayerState* State; \
		int32 OldValue; \
	}; \
	struct MordhauGameMode_eventOnDeathsChanged_Parms \
	{ \
		APlayerState* State; \
		int32 OldValue; \
	}; \
	struct MordhauGameMode_eventOnKilled_Parms \
	{ \
		AController* Killer; \
		AController* KilledPlayer; \
		APawn* KilledPawn; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		AActor* DamageSource; \
		AActor* DamageAgent; \
	}; \
	struct MordhauGameMode_eventOnKillsChanged_Parms \
	{ \
		APlayerState* State; \
		int32 OldValue; \
	}; \
	struct MordhauGameMode_eventOnMatchStateChanged_Parms \
	{ \
		FName OldState; \
		FName NewState; \
	}; \
	struct MordhauGameMode_eventOnScoreChanged_Parms \
	{ \
		APlayerState* State; \
		float OldValue; \
	}; \
	struct MordhauGameMode_eventOnTeamScoreChanged_Parms \
	{ \
		int32 Team; \
		float OldValue; \
	}; \
	struct MordhauGameMode_eventRemoveBots_Parms \
	{ \
		int32 Amount; \
		int32 Team; \
	}; \
	struct MordhauGameMode_eventRequestedAssignTeam_Parms \
	{ \
		AController* Controller; \
		int32 Team; \
	};


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauGameMode(); \
	friend struct Z_Construct_UClass_AMordhauGameMode_Statics; \
public: \
	DECLARE_CLASS(AMordhauGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauGameMode) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauGameMode(); \
	friend struct Z_Construct_UClass_AMordhauGameMode_Statics; \
public: \
	DECLARE_CLASS(AMordhauGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauGameMode) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauGameMode(AMordhauGameMode&&); \
	NO_API AMordhauGameMode(const AMordhauGameMode&); \
public:


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauGameMode(AMordhauGameMode&&); \
	NO_API AMordhauGameMode(const AMordhauGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauGameMode)


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauGameMode_h_52_PROLOG \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_INCLASS \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauGameMode_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameMode_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
