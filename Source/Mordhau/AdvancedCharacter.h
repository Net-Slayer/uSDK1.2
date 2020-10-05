// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include		 "Mordhau_classes.hpp"
#include "Engine/EngineTypes.h"
#include "Components/AudioComponent.h"
#include "Delegate.h"
#include "Mordhau.h"
#include "AdvancedCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDied, class AAdvancedCharacter*, Character);//(OnCharacterDied);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDestroyed, class AAdvancedCharacter*, Character);//(OnCharacterDied);
UCLASS()
class MORDHAU_API AAdvancedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAdvancedCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	// Sets default values for this character's properties
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	uint8 Team;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	uint8 Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 ReplicatedHealth;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float TurnRateCap;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float ReceivedDamageModifier;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	bool bIsDead;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float NextHealthTick;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float HealthRegenDelay;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	bool bIgnoreGameStateHealthRegenRestriction;  
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float KnockbackFlinch;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float RagdollFallingMinTime;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float RagdollFallingMinVelocityToGetUp;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float AirborneTime;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	bool bIsRagdollFalling;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	bool bIsUsingRagdollFallingCollision;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float OutOfBoundsKillTime;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float RagdollFallingGetUpDuration;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              TurnLimit;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              RagdollFallingStartTime;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              JumpCooldown;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float bTurnRateIgnoresCap;

	UPROPERTY(BlueprintAssignable, Category = "AdvancedCharDelegates")
		FOnCharacterDied OnCharacterDied;
	UPROPERTY(BlueprintAssignable, Category = "AdvancedCharDelegates")
		FOnCharacterDestroyed OnCharacterDestroyed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharInts")
		int                                                TickSkip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharInts")
		int                                                AnimationTickSkip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharInts")
		int                                                OutOfBoundsCounter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharInts")
		int                                                UniqueAdvancedCharacterIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharInts")
		int                                                FootstepAudioComponentCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharInts")
		int                                                DedicatedServerAnimFrameSkipLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              OutOfBoundsSince;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingFromPerchRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              IsBurningSmoothed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DistanceIntoFireFieldSmoothed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DistanceIntoFireField;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DistanceIntoSmokeFieldSmoothed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DistanceIntoSmokeField;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              MouseSmoothedTurnValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              MouseSmoothingTurnVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              MouseSmoothedLookUpValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              MouseSmoothingLookUpVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LODDeltaTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LastNonZeroVelocityTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DissolveDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DissolveValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LastSetDissolveValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DistanceToCamera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FancyMeshEffectsTurnOnDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FancyMeshEffectsTurnOffDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LastPossessionTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              MeshPauseAnimsLifetime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingGetUpDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingGetUpStartTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingStartTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingBlendOutSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingMinTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingMinVelocityToGetUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollFallingTimeAtMinVelocityToGetUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              PhysicsBlendWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              PhysicsBlendTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              PhysicsBlendSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              JumpCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              AirborneTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              SmokeDistanceMaxValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              SmokeDistanceSmoothInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              IsBurningSmoothInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FireDistanceMaxValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FireDistanceSmoothInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FireDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FireDamageTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              FireEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LastFireDamageTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              SpawnTurnValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookDownLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              TurnLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpValueSmoothingTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpValueSmoothingFrom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpValueSmoothingStartTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              TurnRateCap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              TurnRateCapTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpRateCap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpRateCapTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              TurnCapRemaining;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookUpCapRemaining;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              CurrentLocationLagInduction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LocationLagInductionTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LocationLagInductionChangeSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LocationLagInductionCounterweight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              CurrentLookLagInduction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookLagInductionTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookLagInductionChangeSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LookLagInductionCounterweight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              BleedingOutRemainingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              HealthRegenDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              HealthRegenTickRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              NextHealthTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              OutOfBoundsKillTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              ReceivedDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              ReceivedTeamDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              ReceivedFireDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              ReceivedRangedDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              ReceivedDamageAbsorption;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              KnockbackFlinch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              DeathTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollStartTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              AdditiveOverrideEndTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              AdditiveOverrideStartTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LastFlinchAdditiveTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              LastSetBloodIntensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              RagdollForceMultIfDmgAgent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharFloats")
		float                                              ReflectMeleeDamagePercentage;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bForceLongDeathYell;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool bDisableHealingItems;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsDead;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsBurning;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsRagdollFalling;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsUsingRagdollFallingCollision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bQueuedDismemberIsPartial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bQueuedDismemberIsBluntForce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bCanReceiveClientsideHits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bSkipAnimPoseOnClientWhenNotRendered;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bFancyMeshEffects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bForceMaxQuality;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bWasEverPossessedByLocalPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bMeshesReceiveDecals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bTurnUsesControllerInputYawScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bAddForwardAxisToMovementInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bAddRightAxisToMovementInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bTurnRateIgnoresCap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bPerformCustomDepthHighlight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsHighlighted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsInteractable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bAnimUpdateRateOptimizations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsNonCombatCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bWillStopMelee;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bWillBleedOutOnKill;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsBleedingOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIgnoreGameStateHealthRegenRestriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsAllowedOutOfBounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bForceRagdollIfDmgAgent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bIsAirborneFromJump;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bJumped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBools")
		bool                                               bHasLastChance;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8                                               LastChanceHealAmount;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class AMordhauProjectile*                          CurrentProjectile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UClass*                                      MarkerWidgetComponentClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UClass*                                      MarkerWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UMordhauWidgetComponent*                     MarkerWidgetComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class ULateTickComponent*                          LateTickComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UPhysicsAsset*                               RagdollFallingPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UPhysicsAsset*                               RagdollFallingFromPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UParticleSystem*                             DeathParticles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UClass*                                      HitEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		class UParticleSystem*                             BurningParticles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AMordhauPlayerController>     InstanceOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AMasterField>                 CurrentSmokeField;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AMasterField>                 CurrentFireField;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AController>                  FireInstigator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AActor>                       FireAgent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AActor>                       LastDamageAgent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AActor>                       LastDamageSource;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class AController>                  LastDamageInstigator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TWeakObjectPtr<class UParticleSystemComponent>     CurrentBurningParticles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TArray<class USkeletalMeshComponent*>              BloodReceivingSkeletalMeshes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharClasses")
		TArray<class UMaterialInstanceDynamic*> DissolveMaterialInstances;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		class USoundCue*                                   BurningSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		class USoundCue*                                   FallDamageSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		TWeakObjectPtr<class UAudioComponent>              CurrentBurningSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		TArray<class UAudioComponent*>                     FootstepAudioComponents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		class USoundCue*                                   HurtYell;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		class USoundCue*                                   DeathYell;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharAudio")
		TWeakObjectPtr<class UAudioComponent>              DeathScreamPtr;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
		struct FNetDamage                                  NetDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
		TArray<struct FSphericalLimbBounds>                SphericalLimbs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
		TArray<struct FWoundMaterialData>                  Wounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
		TArray<struct FFloatAndVector>                     DelayedLookDeltas;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
		TArray<struct FFloatAndVector>                     DelayedLocationDeltas;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
	//struct FPrePhysTickFunction                        PrePhysTickFunction;

	/*struct FScriptMulticastDelegate                    OnCharacterDied;*/
	/*UPROPERTY(BlueprintAssignable, EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharStructs")
	struct FScriptMulticastDelegate                    OnCharacterDestroyed;*/
	//UPROPERTY(BlueprintAssignable, Category = "AdvancedCharStructs")



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       RagdollFallingFromCollisionProfile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       QueuedForDismember;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       DistanceToCameraBoneToUse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       RagdollFallingProfileName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       RagdollFallingApplyForceBoneName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       MarkerWidgetAttachSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       DeathParticlesSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       BurningAttachSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       FallDamageSoundAttachToBone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       AdditiveOverrideType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharNames")
		FName                                       LastFlinchAdditiveName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EPhysicalSurface>                      CharacterSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                             DistanceToCameraHeuristic;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8                                      Team;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8									   CharacterFlags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8                                      Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8                                      HealthRegenPerTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8                                      MaxWounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharBytes")
		uint8                                      LastWound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharGeometric")
		struct FVector                                     MoveCompVelocityBeforeDeath;
	struct FVector                                     RagdollFallingApplyForce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharGeometric")
		struct FVector                                     RagdollFallingApplyForceAir;
	struct FVector                                     LastObservedLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharGeometric")
		struct FVector                                     AccumulatedLocationLag;
	struct FVector                                     LastObservedLook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharGeometric")
		struct FVector                                     AccumulatedLookLag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AdvancedCharGeometric")
		struct FTransform                                  MarkerWidgetRelativeTransform;


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void StopBurningCosmetic();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void StartBurningCosmetic();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void ServerTrip();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void ServerSuicide();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void ServerLookUp(float NewLookUp);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnTookDamage(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnKilled(class AController* EventInstigator);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnInteractionEnd();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHit(class AActor* Actor, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHighlightStart();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHighlightEnd();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHealthChanged();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, const struct FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnAfterDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		bool CanInteract(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		bool CanBleedOutFromHit(const struct FHitResult& HitResult, EMordhauDamageType Type, uint8 SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void BPLODTick(float DeltaTime);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void ApplyRagdollForce(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void ReceiveMordhauDamage(float Damage, const struct FHitResult& HitResult, EMordhauDamageType DamageType, uint8 SubDamageType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		float ModifyDamage(float DamageAmount, EMordhauDamageType DamageType, const struct FHitResult& HitInfo, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	


	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void TurnNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void TurnAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void Turn(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void Suicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void StopRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void StopHealthRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void StartRagdollWithBlend(float BlendDuration);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void StartRagdoll();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void SetOnSmoke(class AMasterField* SmokeField);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void SetOnFire(class AMasterField* FireField);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void SetLookLagInductionTarget(float Amount, float ChangeSpeed);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void SetLocationLagInductionTarget(float Amount, float ChangeSpeed);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void SetIsRagdollFalling(bool bInIsRagdollFalling);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void SetAdditiveOverrideType(const FName& NewType, float Duration);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void ResetLookLagInductionTarget();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void ResetLocationLagInductionTarget();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void ResetLagInductionTargets();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void ResetAdditiveOverrideType();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void RequestTrip();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void RequestSuicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void RequestMeshEnablePhysics(float Duration);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void ReplicateHealth();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const FName& bone, bool bFindOptimalSpot);

	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_Team();

	
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void OnRep_SpawnTurnValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void OnRep_ReplicatedLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void OnRep_ReplicatedHealth();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void OnRep_ReplicatedCharacterFlags(uint8 OldValue);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void OnRep_NetDamage();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void OffsetHealth(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void LookUpNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void LookUpAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void LookUp(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void LeftOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void EnteredOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void DouseFire();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void BeginFlinchAdditiveOverride(const FName& FlinchOverrideName, const FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void AssignNetDamage(uint8 InType, uint8 InSubType, uint8 InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const FName& bone, class AActor* Agent, EMordhauDamageType DamageType, uint8 DamageSubType);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharVoidFns")
		void AddTurnDegrees(float Delta);

	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		UAudioComponent* PlayCharacterSound(class USoundBase* Sound, FName Bone, FVector InLocation, FVector AttachLocation, bool Attach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);

	//return ReturnAudioComp;




	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool IsOutOfBounds();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool IsLocallyPlayerControlled();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool IsLocallyControlledOrUncontrolled();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool IsAirborne();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool GetIsDead();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool GetIsBurning();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool GetBestStickyLocation(const struct FVector& InLocation, struct FVector OutLocation, struct FVector OutNormal, FName OutBone);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharBoolFns")
		bool Trip();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float GetRawLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float GetOutOfBoundsTimeUntilDeath();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float GetLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float GetDistanceIntoSmokeFieldSmoothed();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float GetDistanceIntoSmokeField();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFloatFns")
		float GetAdditiveOverrideTypeNormalizedTime();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		uint8 GetArmorTierForBone(const FName& BoneName);
	//UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
	//	class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> AttachType, const FName& Socket, bool bForce);
	//	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
	//	class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const FName& bone, const struct FVector& InLocation, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);


	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		FName GetAdditiveOverrideType();


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnExceededTimeOutOfBounds();















	//UFUNCTION()
	//bool IsLocallyPlayerControlled();
	//UFUNCTION()
	//voidReplicatedHealth();
	/*
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool GetIsDead();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void Suicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		bool Trip();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsOutOfBounds();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsLocallyPlayerControlled();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void SetIsRagdollFalling(bool bInIsRagdollFalling);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void StopHealthRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void TurnAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void LookUpAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void LeftOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsAirborne();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void AddTurnDegrees(float Delta);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void EnteredOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void StartRagdoll();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void LookUp(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		bool IsLocallyControlledOrUncontrolled();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		float GetOutOfBoundsTimeUntilDeath();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		bool GetIsBurning();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void RequestSuicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void AssignNetDamage(uint8 InType, uint8 InSubType, uint8 InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		uint8 GetArmorTierForBone(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void OffsetHealth(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const FName& bone, const struct FVector& InLocation, uint8 AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, uint8 AttachType, const FName& Socket, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const FName& bone, bool bFindOptimalSpot);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		bool CanInteract(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		bool CanBleedOutFromHit(const FHitResult& HitResult, EMordhauDamageType Type, uint8 SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		float MordhauTakeDamage(float DamageAmount, const FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnAfterDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, const FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHealthChanged();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHighlightEnd();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHighlightStart();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHit(class AActor* Actor, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnInteractionEnd();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnKilled(class AController* EventInstigator);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnTookDamage(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void StartBurningCosmetic();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void StopBurningCosmetic();*/
};
