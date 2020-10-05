// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauMotion.h"
#include "AttackMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UAttackMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitCancelDamageModifier;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ActiveParryStaminaCost;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RecoveryQueueWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsComboFromMiss;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MissTwiceStaminaCostMultiplier;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PlayAttackYellTimeReleaseOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteTradeDamageFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteWindUpCanParryWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRiposteAteFeintInput;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitRecovery;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitRecoveryKick;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeRiposteEarlyRelease;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ClashAngle;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeAnimationNormalizedRecoveryOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeChamberWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StabChamberWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MorphKickExtraTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 WindUpCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 ReleaseCurve;
//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//class UMeleeWeaponAnimationProfile*                AnglingWeaponAnimationProfile;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeWooshTimeFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StabWooshTimeFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              KickWooshTimeFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeReducedAnglingFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeEarlyReleaseTimeFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeRiposteEarlyReleaseTimeFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ForceRecoveryMinimumTurnAmount;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SupersprintDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ExtraEarlyReleaseForLookUpOverheads;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ExtraEarlyReleaseForLookUpNonUndercuts;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ToChamberAttackAngleTolerance;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RegularFeintWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ComboFeintWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MorphWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxMorphTotalTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ReleaseJumpBlockTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StrikeEarlyRelease;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StabRiposteEarlyRelease;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StabEarlyRelease;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ChamberStaminaRecover;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              KickEarlyRelease;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinWindUpTimeBeforeMorphing;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EarlyReleaseIsClashableAfter;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NormalAttackBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NormalAttackBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NormalAttackSlowBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NormalAttackSlowBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NormalAttackParrySlowBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NormalAttackParrySlowBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              KickBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              KickBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BashBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BashBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ComboBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ComboBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PostClashBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PostClashBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MorphBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MorphBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteBlendIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteBlendInWithShield;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteBlendIn1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RiposteBlendInWithShield1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BlendOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BlendOut1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MissPlayRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MissPlayRate1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SuccessfulHitBlendOutAnimTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SuccessfulHitPlayRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SuccessfulHitStrikeBlendOutAnimTime1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SuccessfulHitStrikePlayRate1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SuccessfulHitBlendOutAnimTime1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SuccessfulHitPlayRate1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackMove                                        ComingFromMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParryMotion*                                ComingFromAsParry;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 AttackInfo;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive                         TargetAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive                         ReducedTargetAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive                         WindUpAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CounterCompensateOverheadFixupTerm;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CounterCompensateOverheadFixupTiltTerm;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CounterCompensateWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxTurnCompensation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CounterCompensateLookTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngleTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastReleaseNormalizedTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastWindupNormalizedTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackType                                        Type;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackMove                                        Move;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              WindupEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ReleaseEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                Montage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           QueuedAnimFor3PRelease;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                LeftTorsoMontage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauWeapon*                              Weapon;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAttackMotion*                               PreviousLastAttackMotion;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasQueuedServerCombo;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              QueuedServerComboAngle;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackMove                                        QueuedServerComboMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasQueuedMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              QueuedAngle;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackMove                                        QueuedMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackStage                                       Stage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasHit;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasHitIncludingCosmeticHit;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FirstHitTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FirstHitIncludingCosmeticReleaseNormalizedTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasChambered;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UObject> BlockedAttacks;


UFUNCTION(BlueprintCallable, Category = "AttackMotionFns")
void SetHasHitIncludingCosmeticHit();
	
};
