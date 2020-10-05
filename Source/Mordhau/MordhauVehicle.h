// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacter.h"
#include "Mordhau.h"
#include "MordhauVehicle.generated.h"

/**
 *
 */
 //USTRUCT(BlueprintType)
 /*struct FPOV
 {
	 GENERATED_BODY()
 public:
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 struct FVector                                     Location;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 struct FRotator                                    Rotation;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 float                                              FOV;
 };*/
 //USTRUCT(BlueprintType)
 //struct FVehicleTransitionInfo
 //{
 //	GENERATED_BODY()
 //public:
 //	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 //	class UAnimSequence*                               Animation;
 //	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 //	float                                              Duration;
 //	UPROPERTY(EditAnywhere, BlueprintReadWrite)
 //	float                                              BlendTime;
 //};

UCLASS(Blueprintable)
class MORDHAU_API AMordhauVehicle : public AAdvancedCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bWasEverDriven;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              CurrentUnusedTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bTickDriverAnimsAfterOurs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bUseVisualPingCompensationOnAttacks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bWillDieIfUnused;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinTimeToStartUnusedDying;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8												UnusedDyingHealthReduction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              UnusedDyingHealthReductionInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bCanDriverRegenHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bCanDriverRegenStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinimumInteractableVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxDistanceCorrectionForLeaveSpot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableCameraDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bUseDriverTurnCaps;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bCounteractTurnWithSecondaryTurn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bResetSecondaryTurnWhenNoDriver;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bResetLookUpWhenNoDriver;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SecondaryTurnValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SecondaryTurnLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SecondaryTurnValueSmoothingTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SecondaryTurnValueSmoothingFrom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SecondaryTurnValueSmoothingStartTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AMordhauCharacter*                           Driver;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText                                       VehicleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       AttachSocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  AttachSocketOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       DetachSocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bUseDetachRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bLeaveOnDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bDisarmOnEnter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       MainAnimationType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinXYDistanceToEnter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   MinZDistanceToEnter;





	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void StopDriving();
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void StartDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void ServerSecondaryTurn(float NewTurn);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void SecondaryTurnAtRate(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void SecondaryTurn(float Value, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicleFns")
		void OnRep_SecondaryTurnValue();








	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void KnockOffDriver(class AMordhauCharacter* Character);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void OnDriverChanged();



	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FVehicleTransitionInfo GetVehicleLeaveInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FVehicleTransitionInfo GetVehicleEnterInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);



	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FTransform GetExitTransform();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void DriverLateTick(class AMordhauCharacter* FromDriver, float DeltaTime);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		bool CanDrive(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void RequestUse();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		float OverrideAttackAngle(class UAttackMotion* Motion);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void OnStoppedDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void OnStartedDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauVehicleEvents")
		void SetDriver(class AMordhauCharacter* NewDriver);

};
