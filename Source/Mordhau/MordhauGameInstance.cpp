// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameInstance.h"

UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FSteamID ReturnID;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
TArray<struct FSteamID> ReturnIDArray;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
EPartyState ReturnPartyState;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FMapInfo ReturnMapInfo;

void UMordhauGameInstance::UpdateParty(bool bSendProfile)
{}
void UMordhauGameInstance::Shutdown()
{}
void UMordhauGameInstance::ShowInviteDialog()
{}
void UMordhauGameInstance::SetPartyState(EPartyState PartyState)
{}
void UMordhauGameInstance::SetPartyMemberProfile(const struct FSteamID& SteamID, const struct FPlayerProfile& Profile)
{}
void UMordhauGameInstance::SetPartyMatchmakingLobbyID(const struct FSteamID& LobbyId)
{}
void UMordhauGameInstance::SetPartyLeader(const struct FSteamID& SteamID)
{}
void UMordhauGameInstance::SetPartyGameServer(const struct FServerSearchResult& SearchResult)
{}
void UMordhauGameInstance::SetNetworkError(const FText& ErrorText)
{}
void UMordhauGameInstance::SetMatchmakingMemberData()
{}
void UMordhauGameInstance::SetMatchmakingGameServer(const struct FServerSearchResult& SearchResult)
{}
void UMordhauGameInstance::SaveConfig()
{}
void UMordhauGameInstance::LogMatchmakingState(const FString& Message)
{}
void UMordhauGameInstance::LeaveParty()
{}
void UMordhauGameInstance::KickPartyMember(const struct FSteamID& SteamID)
{}
void UMordhauGameInstance::JoinPartyGameServer()
{}
bool UMordhauGameInstance::CloseMatchmakingLobby()
{
	return false;
}
void UMordhauGameInstance::Init()
{}
void UMordhauGameInstance::GetPartyMemberServerAddress(const struct FSteamID& SteamID, struct FServerAddress ServerAddress, bool bWasSuccessful)
{}
void UMordhauGameInstance::GetMatchmakingServerAddress(struct FServerAddress ServerAddress, bool bWasSuccessful)
{}
void UMordhauGameInstance::ClearPartyMemberProfile(const struct FSteamID& SteamID)
{}
void UMordhauGameInstance::ClearPartyMatchmakingLobbyID()
{}
void UMordhauGameInstance::ClearPartyGameServer()
{}
void UMordhauGameInstance::ClearMatchmakingGameServer()
{}
void UMordhauGameInstance::CancelAuthTicket()
{}
void UMordhauGameInstance::BPStopRecordingReplay()
{}
void UMordhauGameInstance::BPStopPlayingReplay()
{}
void UMordhauGameInstance::BPStartRecordingReplay(const FString& InName, const FString& FriendlyName, TArray<FString> AdditionalOptions)
{}
void UMordhauGameInstance::BPPlayReplay(const FString& InName, TArray<FString> AdditionalOptions)
{}


bool UMordhauGameInstance::CanInviteToParty()
{
return 1;
}
bool UMordhauGameInstance::CanLeaveParty()
{
return 1;
}
bool UMordhauGameInstance::CreateMatchmakingLobby(TArray<FString> InGameModes, EServerRegion InRegion)
{
return 1;
}
bool UMordhauGameInstance::GetPartyMemberProfile(const struct FSteamID& SteamID, struct FPlayerProfile Profile)
{
return 1;
}
bool UMordhauGameInstance::IsPartyReadyForMatchmaking()
{
return 1;
}
bool UMordhauGameInstance::IsPartyMember(const struct FSteamID& SteamID)
{
return 1;
}
bool UMordhauGameInstance::LeaveMatchmakingLobby()
{
return 1;
}
bool UMordhauGameInstance::JoinMatchmakingLobbyByID(const struct FSteamID& LobbyId)
{
return 1;
}
bool UMordhauGameInstance::JoinMatchmakingLobby(const struct FLobbySearchResult& SearchResult)
{
return 1;
}
bool UMordhauGameInstance::ClientTravelSession(const struct FServerSearchResult& SearchResult, const FString& Password)
{
return 1;
}
bool UMordhauGameInstance::ClientTravel(const FString& MapName, int PlayerCount)
{
return 1;
}
int UMordhauGameInstance::GetPartySize()
{
return 1;
}
int UMordhauGameInstance::GetPartyMMR()
{
return 1;
}
int UMordhauGameInstance::GetMinMatchmakingMembers()
{
return 1;
}
int UMordhauGameInstance::GetMaxMatchmakingMembers()
{
return 1;
}


FString UMordhauGameInstance::GetPartyMemberStatus(const struct FSteamID& SteamID)
{
	return "1";
}
FString UMordhauGameInstance::GetAuthTicket()
{
	return "1";
}

struct FSteamID UMordhauGameInstance::GetPartyMatchmakingLobbyID()
{
	return ReturnID;
}
struct FSteamID UMordhauGameInstance::GetPartyLobbyID()
	{
	return ReturnID;
	}
struct FSteamID UMordhauGameInstance::GetPartyLeader()
	{
	return ReturnID;
	}
struct FSteamID UMordhauGameInstance::GetMatchmakingLobbyOwner()
	{
	return ReturnID;
	}
struct FSteamID UMordhauGameInstance::GetMatchmakingLobbyID()
	{
	return ReturnID;
	}


struct FMapInfo UMordhauGameInstance::GetMapInfo(const FString& MapName)
{
	return ReturnMapInfo;
}
EPartyState UMordhauGameInstance::GetPartyState()
{
	return ReturnPartyState;
}

TArray<struct FSteamID> UMordhauGameInstance::GetPartyMembers()
{
	return ReturnIDArray;
}
TArray<struct FSteamID> UMordhauGameInstance::GetMatchmakingMembers()
{
	return ReturnIDArray;
}






