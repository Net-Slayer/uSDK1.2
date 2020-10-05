// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Mordhau.h"
#include "MordhauCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AAtmosphericFog*                             AtmosphericFog;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AtmosphericFogMultiplierChangeSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsInMainMenu;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FMinimalViewInfo                            LastViewInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor>                       QueuedViewTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitFlashFadeInDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitFlashStayDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitFlashFadeOutDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitFlashValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHitFlashDirectional;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor>                       HitFlashSource;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitFlashDegrees;
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauCameraManagerEvent")
	void OnHitFlash(bool bIsDirectional, class AActor* Source);

	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	void SetViewTargetBP(class AActor* NewTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	void SetCameraStyleBP(const FName& NewCameraStyle);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	void LeaveMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	void LeaveCustomization();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	class AActor* GetViewTargetBP();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	bool GetIsInMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	bool GetIsInCustomization();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	FName GetCameraStyleBP();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	struct FMinimalViewInfo GetCameraCache();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	void EnterMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManagerFns")
	void EnterCustomization(class AActor* CustomizationTarget);
	
	
};
