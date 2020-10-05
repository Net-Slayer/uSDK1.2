// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameMode.h"
#include "Engine.h"
#include "Mordhau.h"
#include "MordhauGameMode.generated.h"

/**
 * 
 */
/*UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic,
	Melee,
	Ranged,
	Fall,
	Fire
};
*/
/*UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5
};*/
/*USTRUCT(BlueprintType)
struct FSoftObjectPath
{
	FName                                       AssetPathName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FString                                     SubPathString;                                            // 0x0008(0x0010) (ZeroConstructor)
};*/
/*USTRUCT(BlueprintType)
struct FSoftClassPath : public FSoftObjectPath
{

};*/
/*USTRUCT(BlueprintType)
struct FGameModeName
{
	FString                                     Name;
	FSoftClassPath                              GameMode;
};*/
UCLASS()
class MORDHAU_API AMordhauGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//TArray<FGameModeName>                       MapPrefixes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString>                             MapRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AController*>          SpawnQueue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AController*           CurrentlySpawningController;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor*                               CurrentlySpawningPlayerStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                         CurrentlySpawningStage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bMatchTimeRanOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       PlayerRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bUsesSlowPlayerSpawning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bPlayersSpawnInWaves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bPlayersDropAllGearOnDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bEquipmentDoesNotDespawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       BallistaRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       CatapultRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       HorseRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bServerIsTravelling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       DamageFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       TeamDamageFactor = 0.5;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       SpawnProtectionDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bDisableDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bDisableStamina;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bIsScoringDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       AssistScoreFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                               AssistDamageToCountAsKill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       KillScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       KillTeamScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       TeamKillScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                       TeamKillTeamScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bTeamKillsDecrementKillerKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bTeamKillsIncrementKilledDeaths;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                        bSuicideDecrementsKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<FString>                             MapVoteMaps;

	//struct SkirmishRoundInfo RoundInfo;

	UFUNCTION(BlueprintCallable, Category = "GameModeFns")
		void SetTeamScore(int Team, float Amount);

	UFUNCTION(BlueprintCallable, Category = "GameModeFns")
		void GetNextMaps(TArray<FString>& string1, int Count);

	UFUNCTION(BlueprintCallable, Category = "GameModeFns")
		void GetMapVoteMaps(TArray<FString>& string2);
	UFUNCTION(BlueprintCallable, Category = "GameModeFns")
		void GetMapVoteCounts(TArray<uint8>& byte1);
	UFUNCTION(BlueprintCallable, Category = "GameModeFns")
		bool ChangeLevel(const FString& LevelName);

	UFUNCTION(BlueprintCallable, Category = "GameModeFns")
		void AddTeamScore(int Team, float Amount);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void AddBots(int Amount, int Team);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void RemoveBots(int Amount, int Team);
	//UFUNCTION(BlueprintCallable, Category = "GameModeFns")
	//	void Broadcast(class AActor* Sender, const FString& Msg, const FName& Type);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnTeamScoreChanged(int Team, float OldValue);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnScoreChanged(class APlayerState* State, float OldValue);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnKillsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, class AActor* DamageSource, class AActor* DamageAgent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnDeathsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnAssistsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void RequestedAssignTeam(class AController* Controller, int Team);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameModeEvents")
		void OnMatchStateChanged(const FName& OldState, const FName& NewState);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		void MatchTimeRanOut();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		bool IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		float GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameModeEvents")
	//	FString GetNextMaps();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		float GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		bool ControllerCanRestart(class AController* Controller);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		bool CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		bool CanClash(class APawn* Source, class APawn* Target);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		bool CanChamber(class APawn* Source, class APawn* Target);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "GameModeEvents")
		FString GetNextMap();

};
