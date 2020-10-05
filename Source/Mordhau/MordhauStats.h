// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "MordhauStats.generated.h"

/**
 * 
 */




























UCLASS(Blueprintable)
class MORDHAU_API UMordhauStats : public UObject
{
	GENERATED_BODY()
	
public:
	
UPROPERTY(EditAnywhere, BlueprintReadWrite) 
struct FStatInt                                    GameVersion;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    Blocks;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    Chambers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    ProjectilesDeflected;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    ProjectilesBlocked;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    Battlecries;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    Disarms;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    Kills;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    Assists;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    KillsOneMatch;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    AssistsOneMatch;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    KillsOneLife;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    DamageTakenOneLife;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    HeadsDecapitated;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    ProjectileHeadHits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    ProjectileTorsoHits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    ProjectileLegHits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    MeleeHeadHits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    MeleeTorsoHits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    MeleeLegHits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    KillsOneAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    FireKills;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    CouchedHeadKills;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    LadderKills;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    TrampleKills;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    FunRank;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FStatInt                                    FunRankSamples;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                TheABCs;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                LivedToTell;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                Highlander;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                KeepsComingOff;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                EagleEye;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                Yoink;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                JusticeFromGrave;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                NotSparta;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAchievement                                BurningMan;


UFUNCTION(BlueprintCallable, Category = "StatFunctions", meta = (WorldContext = "WorldContextObject"))
void IncrementIntStatValueChecked(class UWorld* World, const struct FStatInt& Stat);

//ACHIEVEMENT FUNCTIONS, MIGHT BE RISKY TO MESS WITH
	/*
	void UpdateUserAvgRate(const struct FStatAvgRate& Stat, const struct FSteamID& SteamID, float CountThisSession, float SessionLength, ECallResult* CallResult);
	void UpdateAvgRate(const struct FStatAvgRate& Stat, float CountThisSession, float SessionLength, ECallResult* CallResult);
	void UnlockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult);
	void UnlockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult);
	void StoreUserStats(const struct FSteamID& SteamID, ECallResult* CallResult);
	void StoreStats(ECallResult* CallResult);
	void SetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, int Value, ECallResult* CallResult);
	void SetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, float Value, ECallResult* CallResult);
	void SetIntValue(const struct FStatInt& Stat, int Value, ECallResult* CallResult);
	void SetFloatValue(const struct FStatFloat& Stat, float Value, ECallResult* CallResult);
	void ResetAllStats(bool bAchievementsToo, ECallResult* CallResult);
	void RequestUserStats(const struct FSteamID& SteamID, ECallResult* CallResult);
	void RequestStats(ECallResult* CallResult);
	void LockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult);
	void LockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult);
	void IsUserAchievementUnlocked(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult, bool* bIsUnlocked);
	void IsAchievementUnlocked(const struct FAchievement& Achievement, ECallResult* CallResult, bool* bIsUnlocked);
	
	void GetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, int* Value);
	void GetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, float* Value);
	int GetUnlockIntValue(const struct FProgressAchievementInt& Achievement);
	float GetUnlockFloatValue(const struct FProgressAchievementFloat& Achievement);
	int GetMaxIntValue(const struct FStatInt& Stat);
	float GetMaxFloatValue(const struct FStatFloat& Stat);
	void GetIntValue(const struct FStatInt& Stat, ECallResult* CallResult, int* Value);
	bool GetIntStatValueByName(const struct FString& StatName, int* OutValue);
	struct FStatInt GetIntStat(const struct FProgressAchievementInt& Achievement);
	void GetFloatValue(const struct FStatFloat& Stat, ECallResult* CallResult, float* Value);
	struct FStatFloat GetFloatStat(const struct FProgressAchievementFloat& Achievement);
	*/
	
};
