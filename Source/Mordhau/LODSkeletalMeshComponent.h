// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "LODSkeletalMeshComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API ULODSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              LODDeltaTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              LastLODDeltaTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bHasSkippedThisFrame;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                FramesSinceLastLODTick;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                FramesUntilNextLODTick;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MaxLODDeltaTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bSmoothClothLODTransition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              ClothLODTransitionSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bSkipTransformUpdate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bPreventTicking;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bUpdateLODIfPreventTicking;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bForceNextTick;


	
};
