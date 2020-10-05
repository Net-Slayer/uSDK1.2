// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauGameInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString                                     RecipesString;

	//FServerSearchResult                         ServerSession;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString                                     ServerPassword;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bServerFull;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                ChangeLevelCounter;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText                                       NetworkErrorText;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString                                     AuthTicket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*>                              GameModes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*>                              Maps;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FText>                               Tips;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    OnPartyUpdated;

	//EServerRegion                                      CurrentMatchmakingRegion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString>                             CurrentMatchmakingGameModes;
	

UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void UpdateParty(bool bSendProfile);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void Shutdown();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameInstanceEvents")
	void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameInstanceEvents")
	void ShowNetworkErrorDialog();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauGameInstanceEvents")
	void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void ShowInviteDialog();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetPartyState(EPartyState PartyState);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetPartyMemberProfile(const struct FSteamID& SteamID, const struct FPlayerProfile& Profile);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetPartyMatchmakingLobbyID(const struct FSteamID& LobbyId);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetPartyLeader(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetPartyGameServer(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetNetworkError(const FText& ErrorText);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetMatchmakingMemberData();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SetMatchmakingGameServer(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void SaveConfig();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void LogMatchmakingState(const FString& Message);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void LeaveParty();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool LeaveMatchmakingLobby();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void KickPartyMember(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void JoinPartyGameServer();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool JoinMatchmakingLobbyByID(const struct FSteamID& LobbyId);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool JoinMatchmakingLobby(const struct FLobbySearchResult& SearchResult);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool IsPartyReadyForMatchmaking();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool IsPartyMember(const struct FSteamID& SteamID);

UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
bool CloseMatchmakingLobby();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void Init();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	EPartyState GetPartyState();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	int GetPartySize();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	int GetPartyMMR();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	FString GetPartyMemberStatus(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void GetPartyMemberServerAddress(const struct FSteamID& SteamID, struct FServerAddress ServerAddress, bool bWasSuccessful);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	TArray<struct FSteamID> GetPartyMembers();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool GetPartyMemberProfile(const struct FSteamID& SteamID, struct FPlayerProfile Profile);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	struct FSteamID GetPartyMatchmakingLobbyID();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	struct FSteamID GetPartyLobbyID();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	struct FSteamID GetPartyLeader();
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauGameInstanceFns")
	static int GetMinMatchmakingMembers();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	int GetMaxMatchmakingMembers();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void GetMatchmakingServerAddress(struct FServerAddress ServerAddress, bool bWasSuccessful);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	TArray<struct FSteamID> GetMatchmakingMembers();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	struct FSteamID GetMatchmakingLobbyOwner();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	struct FSteamID GetMatchmakingLobbyID();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	struct FMapInfo GetMapInfo(const FString& MapName);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	FString GetAuthTicket();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool CreateMatchmakingLobby(TArray<FString> InGameModes, EServerRegion InRegion);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool ClientTravelSession(const struct FServerSearchResult& SearchResult, const FString& Password);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool ClientTravel(const FString& MapName, int PlayerCount);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void ClearPartyMemberProfile(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void ClearPartyMatchmakingLobbyID();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void ClearPartyGameServer();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void ClearMatchmakingGameServer();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool CanLeaveParty();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	bool CanInviteToParty();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void CancelAuthTicket();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void BPStopRecordingReplay();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void BPStopPlayingReplay();
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void BPStartRecordingReplay(const FString& InName, const FString& FriendlyName, TArray<FString> AdditionalOptions);
UFUNCTION(BlueprintCallable, Category = "MordhauGameInstanceFns")
	void BPPlayReplay(const FString& InName, TArray<FString> AdditionalOptions);

};
