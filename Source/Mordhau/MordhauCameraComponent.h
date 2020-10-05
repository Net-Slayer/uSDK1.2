// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "MordhauCameraComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class MORDHAU_API UMordhauCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              CinematicCameraBlendWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinimumCinematicCameraBlendWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     FirstPersonCinematicCameraOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     ThirdPersonCinematicCameraOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    CinematicCameraRotationOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    ThirdPersonRotationOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     ThirdPersonCameraOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     ThirdPersonAimingCameraOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              AimingCameraActivateChangeSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              AimingCameraDisableChangeSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              AimingBlendWeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ThirdPersonHipsSmoothSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     ThirdPersonHipsSmoothLimits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ThirdPersonTeleportThreshold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DeadCameraLocationSmoothSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DeadCameraLocationSmoothMaxDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DeadCameraRotationSmoothSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SmoothedHeadLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    SmoothedHeadRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  PreviousHeadTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TurnOnFirstPersonModelDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TurnOnThirdPersonModelDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 ThirdToFirstBlendCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 FirstToThirdBlendCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 MapToFirstBlendCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 MapToThirdBlendCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 MapToFirstRotationBlendCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 MapToThirdRotationBlendCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                      CameraStyleBlendingFrom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                      CameraStyleBlendingTo;

	//struct FPOV                                        LastCameraStyleChangeCameraPOV;
	//struct FPOV                                        LastVehicleCameraPOV;
	//struct FPOV                                        LastNonVehicleCameraPOV;
	//struct FPOV                                        LastCameraPOV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsBlendingCameraStyle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              CameraStyleChangeBlendDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MapCameraStyleChangeBlendDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SmoothedHipsOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     PreviousHipsLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 CameraLocationScaleCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCurveFloat*                                 CameraZoomScaleCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     PreviousCharacterMeshLocation;
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCameraCompEvent")
	void UpdateCamera();
	
};
