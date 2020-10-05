// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Mordhau.h"
#include "MordhauSceneComponent.h"
#include "MordhauActor.generated.h"
/*UENUM(BlueprintType)
enum class EAttackMove : uint8
{
	RightStrike = 0,
	LeftStrike = 1,
	Stab = 2,
	AltStab = 3,
	Kick = 4,
	Bash = 5,
	Couch = 6,
	Ranged = 7,
	EAttackMove_MAX = 8
};
UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5
};*/
UCLASS()
class MORDHAU_API AMordhauActor : public AActor
{
	GENERATED_BODY()

public:

	//AMordhauActor();

	AMordhauActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	// Sets default values for this actor's properties
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	//UMordhauSceneComponent * RootSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauPlayerController>     InstanceOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                      Thud;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   ThudSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   ThudPitchMultiplierRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   ThudVolumeMultiplierRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bShouldReplicateThud;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ThudMinVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ThudMaxVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinDelayBetweenThuds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              NoThudUntilTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bPreventClimbing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStatInt                                    KillsStat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIgnoresBleedOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bForceLongDeathYell;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bReceiveCosmeticHits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              RagdollForceMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bForceRagdollOnDeath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ReplayPriorityFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LastClientsideLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LastDamageNormal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LastDamageLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FQuat                                       LastClientsideRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              InterpolationSmoothTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bSmoothNetworkMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InteractionWidgetComponentClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InteractionWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText                                       HeldInteractionText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText                                       InteractionText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bNoInteractionWidgetWhenAttachedToChar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  InteractionWidgetRelativeTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bAutoDetermineWidgetTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMordhauWidgetComponent*                     InteractionWidgetComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bPerformCustomDepthHighlight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsHighlighted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxInteractWithDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsInteractable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsPassivelyInteractable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxInteractionHoldTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              LastLocallyRequestedPassiveInteractionTime;

	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void UpdateThudVelocity(float NewThudVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void UnHighlight();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorFns")
		void PostInteractionWidgetCreated();
	UFUNCTION(BlueprintImplementableEvent, Category = "MordhauActorEvents")
		void OnUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")
		void OnThud();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")
		void OnReceiveCosmeticHit(class AActor* Source, class AActor* Agent, EAttackMove Move, const struct FHitResult& Hit);
	UFUNCTION(BlueprintImplementableEvent, Category = "MordhauActorEvents")
		void OnPostDismemberedOther(const FName& bone, class ASeparatedBodyPart* Part);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")
		void OnLocalPlayerUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")//, Category = "MordhauActorFns")
		void OnInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")//, Category = "MordhauActorFns")
		void OnInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")//, Category = "MordhauActorFns")
		void OnInteractionEnd();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")//, Category = "MordhauActorFns")
		void OnHighlightStart();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")//, Category = "MordhauActorFns")
		void OnHighlightEnd();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorEvents")//, Category = "MordhauActorFns")
		void OnHeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		bool IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void HeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorFns")
		bool CanInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorFns")
		bool CanInteract(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauActorFns")
		bool CanHeldInteract(class AMordhauCharacter* Character);


};
