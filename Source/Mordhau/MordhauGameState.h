// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Mordhau.h"
#include "Engine.h"
#include "MordhauGameState.generated.h"

/**
 * 
 */

USTRUCT()
struct FEmpty_array
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere)
		TArray<int> nonsense;

};
USTRUCT(BlueprintType)
struct FCapturePointGroup
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*>                       CapturePoints;
};
UCLASS()
class MORDHAU_API AMordhauGameState : public AGameState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMordhauUtilityLibrary* utilityRef;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	FSTRUCT_VoteKickInfo VoteKickInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      NextBudgetTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class AParticleSystemActor*>                ParticleSystemActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class AAdvancedCharacter*>                  CharacterDistanceArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TMap<class AAdvancedCharacter*, int>               CharacterToDistanceArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class AAdvancedCharacter*>   RagdollDistanceArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TMap<int, class USkeletalMesh*>                EquipmentMeshCacheMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class APreSkinnedPoseOracle*                       PreSkinnedPoseOracle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UClass*                                      MetaData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableClientStats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableChat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableScoreboard;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowHealthRegen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotLimitPlaceables;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bOverrideArmorSpeedAndAccelerationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              OverrideArmorSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              OverrideArmorAccelerationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllPlayersHaveMarkers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                MatchDurationMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TMap<int, class AMapCameraActor*>                  MapCameraActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              DefaultEndMatchMapChangeTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              EndMatchMapChangeEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              PostMatchScreenDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              DefaultWarmupTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSkipWarmupInDevBuild;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bBlockInputInWarmup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                MinPlayersToStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              WarmupEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotGoToNextMapOnMatchEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotShowPostMatchScreen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowSpawning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      TeamCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<float>                                      TeamScores;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsTeamMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bEnforceTeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<struct FLinearColor>                        TeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<FString>                             TeamNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<struct FLinearColor>                        SecondaryTeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class AControlPoint*>                       AllCapturePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                Team1CapturePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                Team2CapturePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              Team1TopologicalProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              Team2TopologicalProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<struct FCapturePointGroup>                  CapturePointTopologicalOrdering;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              LastBotVoiceCommandTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              LastBotEmoteTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              LastBotClimbTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauGameState|General")
		TSet<TSubclassOf<AMordhauEquipment>> BannedEquipment;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                             PushTopologicalProgressAttackingTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                            bUsePushTopologicalProgress;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	struct FSTRUCT_SkirmishRoundInfo RoundInfo;
	////UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	struct FSTRUCT_SkirmishRoundInfo RoundInfo_0;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	struct FSTRUCT_MatchEndInfo MatchEndInfo;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//TEnumAsByte<E_SkirmishRoundStage> LastObservedRoundStage;

	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		FLinearColor GetSecondaryTeamColor(int Team);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		FString GetTeamName(int Team);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void IncrementIntStatValueChecked(class UMordhauStats* Target, class UObject* World, struct FStatInt Stat);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void UpdateCapturePointData();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldTickThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldPaintGearWithTeamColors();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void GetPlayerCountsPerTeam(TArray<int>& ReturnValue, bool bOnlyLiving, bool bOnlyWithValidProfiles);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		int GetCurrentFrame();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		class USkeletalMesh* GetEquipmentMeshFromCache(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		int GetEquipmentCacheHash(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void GetBindPoseTransform(FTransform& transformTmp, class USkeletalMesh* Mesh, const FName& SocketName);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		class AMapCameraActor* GetAppropriateMapCameraActor(class APlayerController* Controller);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
		bool ShouldBlockPawnInput();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
		void LocalPlayerChangedTeam();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
		bool IsFriendly(class AActor* ActorA, class AActor* ActorB);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
		FLinearColor GetTeamColor(int Team);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
		bool CanImmediatelyChangeProfile(class AController* Controller);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void GetScoreboardTimeInProgress(struct FTimespan& Time);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void GetScoreboardTime(struct FTimespan& Time);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void GetScoreboardObjectiveName(FText& NewParam);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void GetScoreboardTeamObjectiveValue(int Team, FString& Output);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void OnRep_MatchEndInfo();
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void HandleMatchEndInfo();
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void GetKillfeedColor(class APlayerState* PlayerState, struct FLinearColor& Color);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void GetChatColor(class APlayerState* PlayerState, struct FLinearColor& Color);
	/*UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
		void ShouldHideSpawnInfoText(bool& Hide);*/
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "GameStateEvents")
	//	void OnRep_VoteKickInfo();
};