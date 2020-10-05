// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Mordhau_classes.hpp"
#include "AdvancedCharacter.h"
#include "MordhauPlayerController.h"
//#include "MordhauEquipment.h"
#include "Mordhau.h"
#include "Runtime/CoreUObject/Public/UObject/Object.h"
//#include "GameFramework/Actor.h"
#include "MordhauCharacter.generated.h"

/**
 *
 */

 /**/
 /**/

UCLASS(config = Game)
class MORDHAU_API AMordhauCharacter : public AAdvancedCharacter
{
	GENERATED_BODY()
public:

	AMordhauCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class ULODSkeletalMeshComponent*>           SlaveSkeletalMeshComponents;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	class USkeleton*                                   BodySkeleton;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	class USkeletalMesh*                               FPMesh;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	FCharacterProfile                           Profile;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              FallingTimeToRagdoll;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              FallingTime;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              JumpStaminaCost;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              StaminaRegenTickRate;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	int                                                HealthOnKill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Booleans")
		bool                                               bIsUnflinchable;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	float                                              MeleeMissRecoveryModifier;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	int                                                DodgeStaminaCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Booleans")
		bool                                               bHasScaryFace;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              DodgeCooldown;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              DodgeDuration;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              EasyParryUntilTime;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bDestroyEquipmentOnDeath;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              MeleeReleaseModifier;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              StaminaCostModifier;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              MeleeWindupModifier;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//	TArray<class AActor>               ActorsThatDestroyWithUs;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bDoNotUseGrounding;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bIsRightArmDisabled;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bIsRightLegDisabled;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bIsLeftLegDisabled;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bIsLeftArmDisabled;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bIsHoldingBlock;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bDoNotAnimateBreathing;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              ReceivedFireDamageModifierWithFireproofPerk;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              ReceivedDamageModifierWithFriendlyPerk;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//int StaminaRegenPerTick;



	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Bytes")
		uint8 Stamina;



	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float StaminaRegenDelay;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//int                                                StaminaOnKill;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              MovementBoostDurationWithRushPerk;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              MinDelayBetweenBattlecries;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              MinDelayBetweenVoiceCommands;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//bool                                               bIsWrithingInPain;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              MaxThirdPersonFOV;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              CurrentFOVOffset;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FVector                                     CameraLocation1P;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//float                                              UseHoldTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*>                              Motions;



	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//class AMordhauEquipment*                           RightHandEquipment;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<class AMordhauEquipment*>                   Equipment;





	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USkeleton*                                   BodySkeleton;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PhysAsset")
		class UPhysicsAsset*                               BodyRagdollPhysicsAsset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PhysAsset")
		class UPhysicsAsset*                               ShadowPhysicsAsset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          LODMasterMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          HelmetCoifMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          ChestShouldersMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          ArmsGlovesMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          LowerChestMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          LegsBootsMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          HelmetCoifChestMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          LegsBootsChestLowMaterial;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MatInterface")
		class UMaterialInterface*                          ArmsGlovesShouldersMaterial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               ServerMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               Eyes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               FemaleEyes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               LeftArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               LeftArm1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               RightArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               RightArm1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               LeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               LeftHand1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               RightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               RightHand1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               LeftLeg;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               RightLeg;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               LeftFoot;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               RightFoot;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               Torso;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               FPMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               FPDeadMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SkeletalMesh")
		class USkeletalMesh*                               UnifiedMesh;





	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		TWeakObjectPtr<class UAudioComponent>              LastAttackYell;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		TWeakObjectPtr<class UAudioComponent>              LastHurtYell;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundAttenuation*                           FirstPersonAttenuationOver;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   DodgeSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   DodgeSoundLocalPlayer;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   SnappyArmorFoley;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   NonSnappyArmorFoley;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   CrouchStartSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   CrouchEndSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   ReleaseFoley;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   DismembermentGore;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		class USoundCue*                                   BluntDismembermentGore;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		TWeakObjectPtr<class UAudioComponent>              LastArmorFoley;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		TWeakObjectPtr<class UAudioComponent>              LastVoiceCommand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		TWeakObjectPtr<class UAudioComponent>              LastBreath;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Audio")
		TWeakObjectPtr<class UAudioComponent>              LastScream;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RepActor")
		TWeakObjectPtr<class ACustomizationReplicationActor> ReplicatedCustomizationReplicationActor;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ints")
	//int ToolboxPreventionAreaCounter;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool bAllowVehicles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool bAllowDrop;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool bAllowClimbing;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool bCanJumpKick;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsHoldingBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bUseOverrideSpineSpaceAdditive;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsLeftArmDisabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsRightArmDisabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsLeftLegDisabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsRightLegDisabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bRegenerateBakedDefaultFaceValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bDoNotAnimateBreathing;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bDoNotUseGrounding;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsSoundDisabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bDoNotLookAtOthers;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bForceInstantMeshUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bForceMipStreaming;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bMeshesAreInitialized;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bHasInvisibleBody;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bMaterialsAreInitialized;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bWasDodgeCanceled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bDisableBouncy;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsVoiceMuffled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIgnoresTeamColors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bHideEars;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bHideNose;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsWrithingInPain;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bWasHitAfterDeath;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIsFirstPerson;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bShouldBlendLastCameraStyleChange;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bWantsFire;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bWantsBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bWantsFeintOrBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bIgnoreAngularVelocityAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bWantsCharacterRebuild;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bDestroyEquipmentOnDeath;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Booleans")
		bool                                               bCanDodge;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastRequestedVoiceCommandTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              NextAllowedVoiceCommandTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              NoBreathingAtDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              ReducedBreathingVolume;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              FirstPersonAttenuationVolumeMultiplier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              EllipseBubbleLength;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              EllipseBubbleRadius;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              EllipseBubbleMaxHeightDiff;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              UseHoldTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxThirdPersonFOV;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              CurrentFOVOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              CurrentMotionFOVOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MotionFOVOffsetZeroSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              CurrentSpeedFOVOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxSprintFOVOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxSprintFOVOffsetInterpSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastCameraStyleChangeTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              FirstPersonLookUpOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastTrackingUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DeathRaiseHandForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DeathRaiseHeadForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DeathRaiseHipsForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MuffledVoiceLowPassFrequency;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MuffledVoiceVolumeMultiplier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MinDelayBetweenVoiceCommands;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MinDelayBetweenBattlecries;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              TotalChaseTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastChaseTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              TotalChasedTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastChasedTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              EasyParryUntilTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              FallingTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              FallingTimeToRagdoll;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastDodgeTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DodgeDuration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DodgeCooldown;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              StaminaRegenTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              JumpStaminaCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              JumpStaminaCostWithAcrobatPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MovementBoostDurationWithRushPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MovementRestrictionOverrideDurationWithRushPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastEnemyKilledTimeWithMeleeOrRanged;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              KnockbackParry;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              KnockbackWorld;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              KnockbackParried;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              KnockbackClash;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              StaminaRegenDelay;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DamageModifierWithWreckerPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              HealingModifierWithSmithPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              ReceivedFireDamageModifierWithFireproofPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              ReceivedDamageModifierWithFriendlyPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              StaminaCostModifier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MeleeWindupModifier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MeleeComboExtraWindupModifier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MeleeReleaseModifier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MeleeMissRecoveryModifier;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LegDamageBonusModifierAirborne;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              NoticeableLookChangeMinRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastNoticeableLookChange;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastVehicleTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              LastNonVehicleTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              VehicleLeaveStartTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              VehicleEnterStartTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MoveBlockedBySlowMinInterval;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		TArray<float>                                      LODIncreaseDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		TArray<float>                                      LODDecreaseDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              UnifiedMeshDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              SeparatedMeshDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              CurrentCapturePointTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              ClothBlendWeightInterpSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              AttackYellVolumeMultiplierViewTarget;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              VoiceCommandQueueDuration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              FootstepVolumeModifierWithRatPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              FallDamageModifierWithCatPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxDistFromBoneForAnyDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxAngleDistFromBoneForAnyDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxDistFromBoneForFullDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              MaxAngleDistFromBoneForFullDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              RagdollMaxDistFromBoneForAnyDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              RagdollMaxDistFromBoneForFullDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DeathEquipmentRagdollAngularFactor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              DeathEquipmentRagdollTranslationalFactor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              CurrentHuntsmanCooldown;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              HuntsmanCooldown;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Floats")
		float                                              UnFlinchableDamageThreshold;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      Dodge;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      VoiceCommand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      HealthRegenPerTickWithTenaciousPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      StaminaRegenPerTick;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      CameraStyle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      DeathSyncedRandom;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		uint8                                      EquipmentInventorySize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bytes")
		TArray<uint8>                              BreathingLevels;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, float>                          MinimumDamageToExplode;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, float>                          MinimumDamageToDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, float>                          MinimumDamageToPartialDismember;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, class UMordhauWearable*>        WearableProtectionCoverageMap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, int>                            BoneToParentGroupIdx;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<int, int>                                     BoneIdxToSculptableFaceBoneIdx;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<int, int>                                     SelectionBoneIdxToSculptableFaceBoneIdx;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, int>                            BoneNameToSculptableFaceBoneIdx;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Map")
		TMap<FName, class AActor*>   AttachedGoreMeshes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   ScaryFaceRotationLimit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   ScaryFaceTranslationLimit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   ScaryFaceScaleLimit;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   FOVLODDistanceScaleIn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   FOVLODDistanceScaleOut;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FTransform                                  LastMeshTransformWithoutVehicle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FTransform                                  LastMeshTransformWithVehicle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     ClimbTargetLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     QueuedDismemberForceDir;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   PreviousLookValues;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     DodgeDirection;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     DodgeDirectionLocal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     ArmsBouncyLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     SpineBouncyLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     BreastBouncyLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     BellyBouncyLimitsFat;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     BellyBouncyLimitsSlim;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     LegsBouncyLimits;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     CameraLocation1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     CameraLocation1PCosmeticOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     CameraLocation1PFOVOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     CameraLocation1PZoomOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FRotator                                    CameraRotation1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FRotator                                    CameraRotation1PMeshSpace;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     CameraCollisionLocationOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector2D                                   BlockColliderForwardParryDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FTransform                                  LowBlockColliderRelativeOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FTransform                                  HighBlockColliderRelativeOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FTransform                                  OriginalBlockColliderRelativeOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FVector                                     LastRequestedFireOrigin;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Geometric")
		struct FRotator                                    LastRequestedFireRotation;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                QueuedEquipmentSwitch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                DodgeStaminaCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                StaminaOnKill;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                StaminaOnKillWithFuryPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                HealthOnKill;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                HealthOnKillWithBloodlustPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                ExtraStaminaOnHitWithSecondWindPerk;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		int                                                CurrentForcedLOD;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		TArray<int>                                        BakedDefaultFaceValuesTranslate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		TArray<int>                                        BakedDefaultFaceValuesRotate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Integers")
		TArray<int>                                        BakedDefaultFaceValuesScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Splines")
		struct FSpineSpaceAdditive                         OverrideSpineSpaceAdditive;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Splines")
		struct FSpineSpaceAdditive                         SpineSpaceAdditiveTarget;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Splines")
		struct FSpineSpaceAdditive                         SpineSpaceAdditiveFrom;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      OutGoreMeshBlunt;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      OutGoreMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      OutGoreMeshNeck;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      RunLeftHeadBobShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      RunRightHeadBobShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      WalkLeftHeadBobShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      WalkRightHeadBobShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      BlockShakeEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      BlockedShakeEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      FlinchShakeEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      BloodHitEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      BloodMetalHitEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      DodgeCameraShake;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UndefinedClass")
		class UClass*                                      BodyPart;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimMontage*                                InteractWithAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimMontage*                                InteractWith1PAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequenceBase*                           StunAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedJumpAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedLandAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedFallingAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedJumpAnimation1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedLandAnimation1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedFallingAnimation1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		TArray<class UAnimMontage*>                        UnarmedPreviewPoses;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimMontage*                                FaceAttackAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimMontage*                                FaceBattlecryAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimMontage*                                FaceTalkingAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimMontage*                                FaceHurtAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UBlendSpaceBase*                             UnarmedUpperBlendSpace1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedUpperAdditive1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UBlendSpaceBase*                             UnarmedUpperBlendSpace;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedUpperAdditive;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UBlendSpaceBase*                             HorseUnarmedUpperBlendSpace1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               HorseUnarmedUpperAdditive1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UBlendSpaceBase*                             HorseUnarmedUpperBlendSpace;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               HorseUnarmedUpperAdditive;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               UnarmedLowerAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               HorseUnarmedRearing;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               HorseUnarmedRearing1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               HorseUnarmedJump;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Anims")
		class UAnimSequence*                               HorseUnarmedJump1P;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSet<UObject*> DismemberedBones;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSet<UObject*> ActorSetCache;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class ACustomizationReplicationActor>  CustomizationReplicationActor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class AActor>                       LastMovementFrontalHitActor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class UParticleSystemComponent> CurrentBleedOutParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UStaticMeshComponent*                        QuiverStaticMeshComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class AControlPoint*                               CurrentCapturePoint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class AMordhauVehicle*                             CurrentVehicle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class AActor>                       QueuedDismemberAgent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class ASeparatedBodyPart>           SeparatedHead;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TArray<class ASeparatedBodyPart*>   SeparatedBodyParts;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class AActor>                       CurrentlyTracking;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UCurveFloat*                                 CameraLocationScaleCurve;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UCurveFloat*                                 CameraZoomScaleCurve;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UBoxComponent*                               BlockCollider;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UParticleSystem*                             DodgeParticleEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UParticleSystem*                             BleedingOutParticleEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UMordhauMotion*                              Motion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UAttackMotion*                               LastAttackMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TArray<class AActor*>                              ActorIgnoreCache;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TArray<class UMordhauWearable*>                    WearableObjectInstances;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TArray<class AMordhauEquipment*>                   Equipment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class AMordhauEquipment*                           RightHandEquipment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class AMordhauEquipment*                           LeftHandEquipment;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class AActor>                       InteractionTarget;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		TWeakObjectPtr<class AActor>                       RequestedInteractionTarget;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UMordhauCameraComponent*                     MordhauCamera;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class AKickWeapon*                                 KickWeapon;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UParryMotion*                                LastParryMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UFlinchMotion*                               LastFlinchMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UFeintedMotion*                              LastFeintedMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ClassRefs")
		class UEmoteMotion*                                LastEmoteMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FCharacterProfile                           Profile;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		TArray<struct FEmoteEntry>                         CharacterEmotes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		TArray<struct FEmoteEntry>                         UnarmedEmotes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FNetMotion                                   NetMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FNetMotion                                  LocallyPredictedNetMotion;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		TArray<struct FNetMotion>                          UnconfirmedMotionsBacklog;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FNetBlock                                   NetBlock;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FWoundInfo                                  DismemberWoundInfo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		TArray<struct FDamageRecord>                       DamageHistory;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FVehicleTransitionInfo                      VehicleLeaveTransitionInfo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
		struct FVehicleTransitionInfo                      VehicleEnterTransitionInfo;

	//UPROPERTY(config, BlueprintReadWrite, EditAnywhere, Category = "Config")
	//float TestConfig;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UnsortedStructs")
	//	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup; NEED TO ADD PROBABLY



			/*UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
			bool PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot);
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 void LeftTeamArea(int OwningTeam);
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 bool IsInKnockback();
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 bool IsInEnemyTeamArea();
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 bool IsInAnyTeamArea();
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 bool IsHoldingBlock();
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 bool HasPerk(uint8 PerkId);
			UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
			 bool CanEasyParry();
			UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
			void EnteredTeamArea(int OwningTeam);
			UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
			void UseReleased();
			UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
			void UsePressed();
			UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
			bool ValidateInteractionTarget(class AActor* TargetActor);
			UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
			void AssignProfile(const struct FCharacterProfile& NewProfile);*/


	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void AssignProfile(const struct FCharacterProfile& NewProfile);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerSetInteractionTarget(class AActor* Target);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		bool TryClimbing();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, uint8 BoneId);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerRequestVoiceCommand(uint8 VoiceRequest);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerRequestPing();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerRequestPassiveInteraction(class AActor* Target);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerRequestDodge(uint8 PackedWorldYaw);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerQueueAttack(EAttackMove Move, uint8 Angle, uint8 MotionID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerDropParry(uint8 MotionID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, uint8 LastAuthObserved);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void OnPostDismember(const FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void OnPostProfileAssigned();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void MoveBlockedBySlow(const struct FHitResult& Impact);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauCharEvents")
		bool ModifyParryResult(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void OnPickedUp(class AMordhauEquipment* Eq);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCharEvents")
		void OnAttackStarted();


	UFUNCTION(BlueprintCallable, Category = "MordhauCharSaveConfig")
		void SaveConfigVar();

	UFUNCTION(BlueprintCallable, Category = "MordhauChar")
	void AssignNetMotionSimple(uint8 MotionType, uint8 Param0, uint8 Param1, uint8 Param2);

	//UPDATE
	UFUNCTION(BlueprintCallable, Category = "MordhauCharUpdateFns")
		void UpdateWearableInstanceColorsAndPatterns();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharUpdateFns")
		void UpdateQuiverMesh();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharUpdateFns")
		void UpdateLOD(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharUpdateFns")
		void UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharUpdateFns")
		void UpdateAllSkeletalMeshComponentMaterials();

	//ACTION
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void UseReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void UsePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		bool TryDismember(const FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void SwitchToFists();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void SwitchEquipmentByIndex(uint8 Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void SwitchEquipment(class AMordhauEquipment* ToSwitch);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopSupersprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopStaminaRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopSprinting();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopMontage(class UAnimMontage* Montage, float FadeOut);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopListenForStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopListenForStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopCurrentVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopCrouching();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopAttackYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StopAnim(float FadeOut);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StartSupersprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StartSprinting();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void StartCrouching();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void SprintReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void SprintPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void ShowEquipmentIfViewTarget();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void FlipAttackSideReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void FlipAttackSidePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void FireReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void FirePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void JumpReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void JumpPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void ListenForStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void ListenForStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void RestockDefaultEquipment(int MaxSlotsToRestock, TArray<class AMordhauEquipment*>& ReturnValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void OffsetStamina(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		bool QueueDismember(const FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);

	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		class ASeparatedBodyPart* Dismember(const FName& bone);

	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		class UAudioComponent* PlaySnappyArmorFoley();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		class UAudioComponent* PlayNonSnappyArmorFoley();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		class UAudioComponent* PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void PlayHurtYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void PlayDeathYell(bool bIsLongYell);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void PlayAttackYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		class UAnimMontage* PlayAnim(class UAnimMontage* Montage, float PlayRate, bool bStopExistingMontages);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		bool PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		bool PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void PerformVoiceCommand(uint8 PackedVoiceCommand);

	//SET
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetQuiver(class UClass* NewQuiver);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetMaxAnimBlendWeight(float MaxAmount, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetMaterialParamsForMergedSlot(const FString& Prefix, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetMaterialParamsForLODMasterSlot(const FString& Slot, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetFaceCustomizationTranslate(const FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetFaceCustomizationScale(const FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetFaceCustomizationRotate(const FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetCurrentlyTracking(class AActor* NewTrackingTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetCameraStyle(uint8 NewStyle, bool bBlendCamera);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetAnimRate(class UAnimMontage* Montage, float NewRate);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharSetFns")
		void SetAnimPosition(class UAnimMontage* Montage, float NewPosition);

	UFUNCTION(BlueprintCallable, Category = "MordhauCharFindFns")
		class AMordhauEquipment* FindEquipmentToRestock(TArray<TSubclassOf<class AMordhauEquipment>> ValidEquipment);

	//REQUEST
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestVoiceCommand(uint8 CommandType, bool bAllowQueue);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestUse();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestToggleWeaponMode();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestRightUpperStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestRightStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestRightStab();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestRightLowerStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestRangedCancel();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		bool RequestParry(EBlockType BlockType, bool bAllowFTP);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestLeftUpperStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestLeftStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestLeftStab();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestLeftLowerStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestJump();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestHolster(uint8 Mode);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestFire();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestFeint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestEmote(uint8 EmoteId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestDrop();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestCouchedAttack();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestClimb(const struct FVector& TargetLocation);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestBash();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharRequestFns")
		void RequestAttack(EAttackMove Move, float Angle);

	//ON REP
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_RightHandEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_ReplicatedVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_ReplicatedStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_ReplicatedNetMotion();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_ReplicatedDodge();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_ReplicatedCustomizationReplicationActor();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_Quiver();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_NetBlock();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_LeftHandEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharOnRepFns")
		void OnRep_Equipment();

	//STATIC IS
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsRightLeg(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsRightArm(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsLeg(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsLeftLeg(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsLeftArm(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsHead(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		static bool IsArm(const FName& bone);

	//IS
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsInKnockback();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsInAnyTeamArea();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsInEnemyTeamArea();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		void EnteredTeamArea(int OwningTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsHoldingBlock();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsViewTarget();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsLocallyPlayerControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsPlayerControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharIsFns")
		bool IsLocallyControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsBoneDismembered(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool IsAnimActive(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool HasPerk(uint8 PerkId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharIsFns")
		bool HasEquipmentHeSpawnedWith();


	//GET
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		void GetMovementRestriction(EMovementRestriction& ReturnValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		class UAudioComponent* GetLastVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		class AMordhauVehicle* GetLastUsedVehicle(float MaximumTimeDiscrepancy);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		class AActor* GetLastMovementFrontalHitActor(float MaxAgeSeconds);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		struct FVector GetFaceCustomizationTranslate(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		void GetFaceCustomizationTransform(const FName& BoneName, struct FTransform& Transformation);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		struct FVector GetFaceCustomizationScale(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		struct FVector GetFaceCustomizationRotate(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		int GetFaceCustomizationBoneIdx(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		bool GetEquipmentIndex(class AMordhauEquipment* Equip, uint8 OutIndex);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		float GetAnimWeight(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		void GetAllFaceSelectionChildBonesRecursive(const FName& ParentBone, TArray<FName>& FaceSelections);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		class ACustomizationReplicationActor* GetCustomizationReplicationActor();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		class AController* GetControllerIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharGetFns")
		class ULODSkeletalMeshComponent* GetClothMesh();

	//MISC
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void ForceUpdateMeshVisibility();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		bool ValidateInteractionTarget(class AActor* TargetActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const struct FVector& ExceptNearThisPoint, float Radius, const FName& NearPointBone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void Holster(class AMordhauEquipment* ToHolster);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void OnActionFailed(const FName& Reason);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void LeftTeamArea(int OwningTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharMiscFns")
		void ReplicateStamina();

	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void EmptyHands();

	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void CycleCamera();


	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void DisableLimb(const FName& BoneName);

	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot1();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot2();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot3();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot4();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot5();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot6();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot7();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot8();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharEquipFns")
		void EquipSlot9();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void FeintOrBlockPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void FeintOrBlockReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void BlockPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharActionFns")
		void BlockReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		bool CanDismember(FName Bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void DropEquipment(class AMordhauEquipment* ToDrop);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		class AController* FindBestKiller(float CutOffTime);
};
