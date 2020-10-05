// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauGameSession.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API AMordhauGameSession : public AGameSession
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameSession")
	int                                                MaxSlots;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameSession")
	FString                                     ServerName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameSession")
	FString                                     ServerPassword;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameSession")
	FString                                     AdminPassword;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameSession")
	TArray<int>                                   Admins;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameSession")
	TMap<int, int>                            BannedPlayers;
	
	
	





	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	bool UnbanPlayer(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	void TriggerRewardDropForPlayer(class APlayerController* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	void TriggerRewardDrop();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	void RemoveAdmin(class APlayerController* AdminPlayer);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	bool KickPlayer(class APlayerController* KickedPlayer, const FText& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	bool BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const FText& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")	
	bool BanPlayer(class APlayerController* BannedPlayer, const FText& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	bool AllowsJoin();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	void AllowJoin(bool bInAllowJoin);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSessionFns")
	void AddAdmin(class APlayerController* AdminPlayer);

};
