// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine.h"
#include "MordhauCharacter.h"
#include "Mordhau.h"
#include "MordhauAIController.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ECrowdAvoidanceQuality : uint8
{
	Low = 0,
	Medium = 1,
	Good = 2,
	High = 3,
	ECrowdAvoidanceQuality_MAX = 4
};
UENUM(BlueprintType)
enum class ECrowdSimulationState : uint8
{
	Enabled = 0,
	ObstacleOnly = 1,
	Disabled = 2,
	ECrowdSimulationState_MAX = 3
};
USTRUCT(Blueprintable)
struct FPerceptionInfo
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHearing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8			                                     Team;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UpdateTime;
};
UCLASS()
class MORDHAU_API AMordhauAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	/*
	class UAISenseConfig_Sight*                        SightConfig;
	class UAISenseConfig_Hearing*                      HearingConfig;
	class UAISenseConfig_Damage*                       DamageConfig;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            ReallyCloseEnemyCached;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            LastClosestEnemy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bFirstRun;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RandomFloat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBotProfile*                                 BotProfile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBotBehaviorProfile*                         BehaviorProfile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EnemyScanInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EnemyScanIntervalVariance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAutoRespawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bWantsRespawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NextRespawnTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableAnticipateTurns;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableObstacleAvoidance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableSeparation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableOptimizeVisibility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableOptimizeTopology;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnablePathOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableSlowdownAtGoal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SeparationWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CollisionQueryRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PathOptimizationRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AvoidanceRangeMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECrowdAvoidanceQuality                AvoidanceQuality;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      DefaultNavQueryFilter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      Team1NavQueryFilter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                         Team2NavQueryFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ACustomizationReplicationActor*              CustomizationReplicationActor;


	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, FPerceptionInfo PerceptionInfo);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauAIControllerEvents")
	void OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauAIControllerEvents")
	void OnAfterUnPossess();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauAIControllerEvents")
	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, FPerceptionInfo PerceptionInfo);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauAIControllerEvents")
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, FPerceptionInfo PerceptionInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	int GetTeam();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void GetPerceivedEnemies(TArray<class AMordhauCharacter*>& enemies);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void GetPerceivedAllies(TArray<class AMordhauCharacter*>& allies);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	float GetMotionBasedRandom();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	int GetAllyClearanceSides();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void DestroyController();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	class AMordhauCharacter* GetClosestEnemy();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	class AMordhauCharacter* GetClosestAlly();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		void RefreshCharacterProfile();
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		void RequestVoiceCommand(uint8 Command);
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
			void StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset);
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
			void StartFacingActor2D(class AActor* Actor, float LocationUpOffset);
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
			void StartFacingBone(class USkeletalMeshComponent* SkelMesh, const FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset);
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
			void StartFacingLocation(const struct FVector& WorldLocation);
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
			void StartFacingMovement(float LocationUpOffset);
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		class AActor* GetCurrentlyFacingActor();
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		EAIFacingMode GetCurrentFacingMode();
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		bool PerceivesEnemy();
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		bool PerceivesAlly();
		UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
		class AMordhauCharacter* GetKthClosestOfThree(int Idx);

};