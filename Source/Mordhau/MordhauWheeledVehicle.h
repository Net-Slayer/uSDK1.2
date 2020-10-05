// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauCompoundVehicle.h"
#include "MordhauWheeledVehicle.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API AMordhauWheeledVehicle : public AMordhauCompoundVehicle
{
	GENERATED_BODY()


public:

	AMordhauWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   RotationVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       MoveSoundAttachSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MoveSoundFadeOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   MinRotationVelocityToPlayMoveSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     MinTranslationVelocityToPlayMoveSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   RotationVelocityInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   RotationVelocityMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       LeftHandIKPushTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       RightHandIKPushTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   MoveSoundCue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class UAudioComponent>              LastMoveSound;


};
