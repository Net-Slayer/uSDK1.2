// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauActor.h"
#include "UnrealNetwork.h"
#include "MordhauSceneComponent.h"


/*AMordhauActor::AMordhauActor()
{
	UMordhauSceneComponent * RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	//RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

}*/

AMordhauActor::AMordhauActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	UMordhauSceneComponent * RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	//RootSceneComponent = CreateDefaultSubobject<UMordhauSceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;
}

//// Sets default values
//void AMordhauActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
//{
//	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//	DOREPLIFETIME(AMordhauActor, bShouldReplicateThud)
//	DOREPLIFETIME(AMordhauActor, ThudMinVelocity)
//	DOREPLIFETIME(AMordhauActor, ThudMaxVelocity)
//	DOREPLIFETIME(AMordhauActor, MinDelayBetweenThuds)
//	DOREPLIFETIME(AMordhauActor, NoThudUntilTime)
//	DOREPLIFETIME(AMordhauActor, bPreventClimbing)
//	DOREPLIFETIME(AMordhauActor, bIgnoresBleedOut)
//	DOREPLIFETIME(AMordhauActor, bForceLongDeathYell)
//	DOREPLIFETIME(AMordhauActor, bReceiveCosmeticHits)
//	DOREPLIFETIME(AMordhauActor, RagdollForceMultiplier)
//	DOREPLIFETIME(AMordhauActor, bForceRagdollOnDeath)
//	DOREPLIFETIME(AMordhauActor, ReplayPriorityFactor)
//	DOREPLIFETIME(AMordhauActor, InterpolationSmoothTime)
//	DOREPLIFETIME(AMordhauActor, bSmoothNetworkMovement)
//	DOREPLIFETIME(AMordhauActor, bNoInteractionWidgetWhenAttachedToChar)
//	DOREPLIFETIME(AMordhauActor, bAutoDetermineWidgetTransform)
//	DOREPLIFETIME(AMordhauActor, bPerformCustomDepthHighlight)
//	DOREPLIFETIME(AMordhauActor, bIsHighlighted)
//	DOREPLIFETIME(AMordhauActor, MaxInteractWithDistance)
//	DOREPLIFETIME(AMordhauActor, bIsInteractable)
//	DOREPLIFETIME(AMordhauActor, bIsPassivelyInteractable)
//	DOREPLIFETIME(AMordhauActor, MaxInteractionHoldTime)
//	DOREPLIFETIME(AMordhauActor, LastLocallyRequestedPassiveInteractionTime)
//
//
//}

void AMordhauActor::UpdateThudVelocity(float NewThudVelocity)
{}
void AMordhauActor::UnHighlight()
{}
//void AMordhauActor::PostInteractionWidgetCreated_Implementation()
//{}
bool AMordhauActor::IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray)
{
	return 1;
}
void AMordhauActor::InteractPassively(class AMordhauCharacter* Character)
{}
void AMordhauActor::InteractionStart(class AMordhauCharacter* Character)
{}
void AMordhauActor::InteractionEnd()
{}
void AMordhauActor::Highlight()
{}
void AMordhauActor::HeldInteractionStart(class AMordhauCharacter* Character)
{}


/*bool AMordhauActor::CanInteractPassively_Implementation(class AMordhauCharacter* Character)
{
	return 1;
}
bool AMordhauActor::CanInteract_Implementation(class AMordhauCharacter* Character)
{
	return 1;
}
bool AMordhauActor::CanHeldInteract_Implementation(class AMordhauCharacter* Character)
{
	return 1;
}
void AMordhauActor::OnUsedToKillOther_Implementation(class AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source)
{}
void AMordhauActor::OnLocalPlayerUsedToKillOther_Implementation(class AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source)
{}
void AMordhauActor::OnReceiveCosmeticHit_Implementation(class AActor* Source, class AActor* Agent, EAttackMove Move, const struct FHitResult& Hit)
{}
void AMordhauActor::OnThud_Implementation()
{

}

void AMordhauActor::OnInteractPassively_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauActor::OnInteractionStart_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauActor::OnInteractionEnd_Implementation()
{

}
void AMordhauActor::OnHighlightStart_Implementation()
{

}
void AMordhauActor::OnHighlightEnd_Implementation()
{

}
void AMordhauActor::OnHeldInteractionStart_Implementation(class AMordhauCharacter* Character)
{

}
*/