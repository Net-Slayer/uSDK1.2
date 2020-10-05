// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauVehicle.h"
#include "Mordhau.h"
#include "Horse.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API AHorse : public AMordhauVehicle
{
	GENERATED_BODY()

public:
	AHorse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              TurdSpawnInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              TurdSpawnChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              LastTurdSpawnCheck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")


		float                                              KnockbackForce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              KnockbackForceVelocityFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              KnockbackDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")

		float                                              RearingDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")

		float                                               RearingTimeOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              LastRearingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
		float                                              LastRearingRealTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
		bool                                               bIsRearing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
		EHorseGear                                         MinimumGearToCouch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bytes")
		uint8                                       Rearing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
		class USoundCue*                                   KnockbackSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
		class UCurveFloat*                                 RiderRearingCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
		class UCurveFloat*                                 BumpDamageBySpeedModifierCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
		class UCurveFloat*                                 AttackDamageBySpeedModifierCurve;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ClassRefs")
		class UCapsuleComponent*                           BumpCapsule;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Integers")
		int                                                DesiredGear;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkeletalMeshComp")
	//class ULODSkeletalMeshComponent* CharacterMesh0;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorseMovementComp")
	//class UHorseMovementComponent* HorsemovementComponent;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorseMovementComp")
	//class UHorseMovementComponent* CharMoveComp;


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HorseEvents")
		void SpawnTurd();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "HorseEvents")
		void ServerRequestRearing();
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		void SecondaryTurnNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		void RequestRearing();
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		void OnRep_Rearing();
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		void OnBumpCapsuleOverlapped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		bool GetIsInRearingMode();
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		float CalculateBumpDamage(const struct FVector& OurWorldVelocity);
	UFUNCTION(BlueprintCallable, Category = "HorseFunctions")
		void OnRep_ReplicatedRearing();
};
