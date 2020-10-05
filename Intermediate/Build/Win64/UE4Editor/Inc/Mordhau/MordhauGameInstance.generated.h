// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
struct FServerSearchResult;
enum class EServerRegion : uint8;
struct FMapInfo;
struct FServerAddress;
struct FPlayerProfile;
enum class EPartyState : uint8;
struct FLobbySearchResult;
#ifdef MORDHAU_MordhauGameInstance_generated_h
#error "MordhauGameInstance.generated.h already included, missing '#pragma once' in MordhauGameInstance.h"
#endif
#define MORDHAU_MordhauGameInstance_generated_h

#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBPPlayReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InName); \
		P_GET_TARRAY(FString,Z_Param_AdditionalOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPPlayReplay(Z_Param_InName,Z_Param_AdditionalOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPStartRecordingReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_GET_TARRAY(FString,Z_Param_AdditionalOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPStartRecordingReplay(Z_Param_InName,Z_Param_FriendlyName,Z_Param_AdditionalOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPStopPlayingReplay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPStopPlayingReplay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPStopRecordingReplay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPStopRecordingReplay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelAuthTicket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelAuthTicket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInviteToParty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInviteToParty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanLeaveParty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanLeaveParty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMatchmakingGameServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMatchmakingGameServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPartyGameServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPartyGameServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPartyMatchmakingLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPartyMatchmakingLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPartyMemberProfile) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPartyMemberProfile(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClientTravel(Z_Param_MapName,Z_Param_PlayerCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravelSession) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClientTravelSession(Z_Param_Out_SearchResult,Z_Param_Password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMatchmakingLobby) \
	{ \
		P_GET_TARRAY(FString,Z_Param_InGameModes); \
		P_GET_ENUM(EServerRegion,Z_Param_InRegion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateMatchmakingLobby(Z_Param_InGameModes,EServerRegion(Z_Param_InRegion)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAuthTicket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAuthTicket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMapInfo*)Z_Param__Result=P_THIS->GetMapInfo(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetMatchmakingLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingLobbyOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetMatchmakingLobbyOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSteamID>*)Z_Param__Result=P_THIS->GetMatchmakingMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingServerAddress) \
	{ \
		P_GET_STRUCT(FServerAddress,Z_Param_ServerAddress); \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMatchmakingServerAddress(Z_Param_ServerAddress,Z_Param_bWasSuccessful); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxMatchmakingMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxMatchmakingMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinMatchmakingMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauGameInstance::GetMinMatchmakingMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyLeader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetPartyLeader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetPartyLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMatchmakingLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetPartyMatchmakingLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMemberProfile) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT(FPlayerProfile,Z_Param_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPartyMemberProfile(Z_Param_Out_SteamID,Z_Param_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSteamID>*)Z_Param__Result=P_THIS->GetPartyMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMemberServerAddress) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT(FServerAddress,Z_Param_ServerAddress); \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPartyMemberServerAddress(Z_Param_Out_SteamID,Z_Param_ServerAddress,Z_Param_bWasSuccessful); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMemberStatus) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPartyMemberStatus(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMMR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPartyMMR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartySize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPartySize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPartyState*)Z_Param__Result=P_THIS->GetPartyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseMatchmakingLobby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CloseMatchmakingLobby(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartyMember) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPartyMember(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartyReadyForMatchmaking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPartyReadyForMatchmaking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinMatchmakingLobby) \
	{ \
		P_GET_STRUCT_REF(FLobbySearchResult,Z_Param_Out_SearchResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JoinMatchmakingLobby(Z_Param_Out_SearchResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinMatchmakingLobbyByID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_LobbyId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JoinMatchmakingLobbyByID(Z_Param_Out_LobbyId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinPartyGameServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JoinPartyGameServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickPartyMember) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KickPartyMember(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveMatchmakingLobby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LeaveMatchmakingLobby(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveParty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveParty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMatchmakingState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogMatchmakingState(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMatchmakingGameServer) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_SearchResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMatchmakingGameServer(Z_Param_Out_SearchResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMatchmakingMemberData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMatchmakingMemberData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNetworkError) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_ErrorText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNetworkError(Z_Param_Out_ErrorText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyGameServer) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_SearchResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyGameServer(Z_Param_Out_SearchResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyLeader) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyLeader(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyMatchmakingLobbyID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_LobbyId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyMatchmakingLobbyID(Z_Param_Out_LobbyId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyMemberProfile) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FPlayerProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyMemberProfile(Z_Param_Out_SteamID,Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyState) \
	{ \
		P_GET_ENUM(EPartyState,Z_Param_PartyState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyState(EPartyState(Z_Param_PartyState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInviteDialog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowInviteDialog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateParty) \
	{ \
		P_GET_UBOOL(Z_Param_bSendProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateParty(Z_Param_bSendProfile); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBPPlayReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InName); \
		P_GET_TARRAY(FString,Z_Param_AdditionalOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPPlayReplay(Z_Param_InName,Z_Param_AdditionalOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPStartRecordingReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_GET_TARRAY(FString,Z_Param_AdditionalOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPStartRecordingReplay(Z_Param_InName,Z_Param_FriendlyName,Z_Param_AdditionalOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPStopPlayingReplay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPStopPlayingReplay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPStopRecordingReplay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPStopRecordingReplay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelAuthTicket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelAuthTicket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInviteToParty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInviteToParty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanLeaveParty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanLeaveParty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMatchmakingGameServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMatchmakingGameServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPartyGameServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPartyGameServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPartyMatchmakingLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPartyMatchmakingLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearPartyMemberProfile) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearPartyMemberProfile(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClientTravel(Z_Param_MapName,Z_Param_PlayerCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientTravelSession) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_SearchResult); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ClientTravelSession(Z_Param_Out_SearchResult,Z_Param_Password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMatchmakingLobby) \
	{ \
		P_GET_TARRAY(FString,Z_Param_InGameModes); \
		P_GET_ENUM(EServerRegion,Z_Param_InRegion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateMatchmakingLobby(Z_Param_InGameModes,EServerRegion(Z_Param_InRegion)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAuthTicket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAuthTicket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMapInfo*)Z_Param__Result=P_THIS->GetMapInfo(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetMatchmakingLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingLobbyOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetMatchmakingLobbyOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSteamID>*)Z_Param__Result=P_THIS->GetMatchmakingMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingServerAddress) \
	{ \
		P_GET_STRUCT(FServerAddress,Z_Param_ServerAddress); \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMatchmakingServerAddress(Z_Param_ServerAddress,Z_Param_bWasSuccessful); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxMatchmakingMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxMatchmakingMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinMatchmakingMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauGameInstance::GetMinMatchmakingMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyLeader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetPartyLeader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetPartyLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMatchmakingLobbyID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetPartyMatchmakingLobbyID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMemberProfile) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT(FPlayerProfile,Z_Param_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPartyMemberProfile(Z_Param_Out_SteamID,Z_Param_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMembers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSteamID>*)Z_Param__Result=P_THIS->GetPartyMembers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMemberServerAddress) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT(FServerAddress,Z_Param_ServerAddress); \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPartyMemberServerAddress(Z_Param_Out_SteamID,Z_Param_ServerAddress,Z_Param_bWasSuccessful); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMemberStatus) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPartyMemberStatus(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyMMR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPartyMMR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartySize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPartySize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPartyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EPartyState*)Z_Param__Result=P_THIS->GetPartyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseMatchmakingLobby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CloseMatchmakingLobby(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartyMember) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPartyMember(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartyReadyForMatchmaking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPartyReadyForMatchmaking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinMatchmakingLobby) \
	{ \
		P_GET_STRUCT_REF(FLobbySearchResult,Z_Param_Out_SearchResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JoinMatchmakingLobby(Z_Param_Out_SearchResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinMatchmakingLobbyByID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_LobbyId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JoinMatchmakingLobbyByID(Z_Param_Out_LobbyId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinPartyGameServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JoinPartyGameServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickPartyMember) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KickPartyMember(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveMatchmakingLobby) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LeaveMatchmakingLobby(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveParty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveParty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMatchmakingState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogMatchmakingState(Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMatchmakingGameServer) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_SearchResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMatchmakingGameServer(Z_Param_Out_SearchResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMatchmakingMemberData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMatchmakingMemberData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNetworkError) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_ErrorText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNetworkError(Z_Param_Out_ErrorText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyGameServer) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_SearchResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyGameServer(Z_Param_Out_SearchResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyLeader) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyLeader(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyMatchmakingLobbyID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_LobbyId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyMatchmakingLobbyID(Z_Param_Out_LobbyId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyMemberProfile) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FPlayerProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyMemberProfile(Z_Param_Out_SteamID,Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartyState) \
	{ \
		P_GET_ENUM(EPartyState,Z_Param_PartyState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartyState(EPartyState(Z_Param_PartyState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowInviteDialog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowInviteDialog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutdown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Shutdown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateParty) \
	{ \
		P_GET_UBOOL(Z_Param_bSendProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateParty(Z_Param_bSendProfile); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_EVENT_PARMS \
	struct MordhauGameInstance_eventShowJoiningDialog_Parms \
	{ \
		FServerSearchResult SearchResult; \
	}; \
	struct MordhauGameInstance_eventShowPasswordDialog_Parms \
	{ \
		FServerSearchResult SearchResult; \
	};


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauGameInstance(); \
	friend struct Z_Construct_UClass_UMordhauGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMordhauGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauGameInstance)


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauGameInstance(); \
	friend struct Z_Construct_UClass_UMordhauGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMordhauGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauGameInstance)


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauGameInstance(UMordhauGameInstance&&); \
	NO_API UMordhauGameInstance(const UMordhauGameInstance&); \
public:


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauGameInstance(UMordhauGameInstance&&); \
	NO_API UMordhauGameInstance(const UMordhauGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauGameInstance)


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauGameInstance_h_14_PROLOG \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_INCLASS \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
