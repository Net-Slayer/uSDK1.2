// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvancedCharacter.h"
#include "AdvancedCharacterMovement.h"
#include "LODSkeletalMeshComponent.h"
#include "MordhauCapsuleComponent.h"
#include "LateTickComponent.h"
#include "UnrealNetwork.h"

AAdvancedCharacter::AAdvancedCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UAdvancedCharacterMovement>(ACharacter::CharacterMovementComponentName)
		.SetDefaultSubobjectClass<ULODSkeletalMeshComponent>(ACharacter::MeshComponentName)
		.SetDefaultSubobjectClass<UMordhauCapsuleComponent>(ACharacter::CapsuleComponentName))

{
	LateTickComponent = CreateDefaultSubobject<ULateTickComponent>(TEXT("LateTickComponent"));
}

class UAudioComponent* ReturnAudioComp;


UAudioComponent* AAdvancedCharacter::PlayCharacterSound(class USoundBase* Sound, FName Bone, FVector InLocation, FVector AttachLocation, bool Attach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier)
{
	return ReturnAudioComp;
}



float AAdvancedCharacter::ModifyDamage_Implementation(float DamageAmount, EMordhauDamageType DamageType, const FHitResult & HitInfo, AActor * Source, AActor * Agent, AController * EventInstigator)
{
	return 0.0f;
}

void AAdvancedCharacter::UnHighlight()
{}
void AAdvancedCharacter::TurnNotAbsolute(float Value)
{}
void AAdvancedCharacter::TurnAtRate(float Val)
{}
void AAdvancedCharacter::Turn(float Val, bool bIsAbsolute)
{}
void AAdvancedCharacter::Suicide()
{}
void AAdvancedCharacter::StopRegen(float ExtraTime)
{}
void AAdvancedCharacter::StopHealthRegen(float ExtraTime)
{}
void AAdvancedCharacter::StartRagdollWithBlend(float BlendDuration)
{}
void AAdvancedCharacter::StartRagdoll()
{}
void AAdvancedCharacter::StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController)
{}
void AAdvancedCharacter::SetOnSmoke(class AMasterField* SmokeField)
{}
void AAdvancedCharacter::SetOnFire(class AMasterField* FireField)
{}
void AAdvancedCharacter::SetLookLagInductionTarget(float Amount, float ChangeSpeed)
{}
void AAdvancedCharacter::SetLocationLagInductionTarget(float Amount, float ChangeSpeed)
{}
void AAdvancedCharacter::SetIsRagdollFalling(bool bInIsRagdollFalling)
{}
void AAdvancedCharacter::SetAdditiveOverrideType(const FName& NewType, float Duration)
{}
void AAdvancedCharacter::ResetLookLagInductionTarget()
{}
void AAdvancedCharacter::ResetLocationLagInductionTarget()
{}
void AAdvancedCharacter::ResetLagInductionTargets()
{}
void AAdvancedCharacter::ResetAdditiveOverrideType()
{}
void AAdvancedCharacter::RequestTrip()
{}
void AAdvancedCharacter::RequestSuicide()
{}
void AAdvancedCharacter::RequestMeshEnablePhysics(float Duration)
{}
void AAdvancedCharacter::ReplicateHealth()
{}
void AAdvancedCharacter::RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat)
{}
void AAdvancedCharacter::PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const FName& bone, bool bFindOptimalSpot)
{}
void AAdvancedCharacter::OnRep_Team_Implementation()
{

}
void AAdvancedCharacter::OnRep_SpawnTurnValue()
{}
void AAdvancedCharacter::OnRep_ReplicatedLookUpValue()
{}
void AAdvancedCharacter::OnRep_ReplicatedHealth()
{}
void AAdvancedCharacter::OnRep_ReplicatedCharacterFlags(uint8 OldValue)
{}
void AAdvancedCharacter::OnRep_NetDamage()
{}
void AAdvancedCharacter::OffsetHealth(int Amount, bool bReplicate)
{}
void AAdvancedCharacter::MoveRight(float Val)
{}
void AAdvancedCharacter::MoveForward(float Val)
{}
void AAdvancedCharacter::LookUpNotAbsolute(float Value)
{}
void AAdvancedCharacter::LookUpAtRate(float Val)
{}
void AAdvancedCharacter::LookUp(float Val, bool bIsAbsolute)
{}
void AAdvancedCharacter::LeftOutOfBoundsArea()
{}
void AAdvancedCharacter::InteractionStart(class AAdvancedCharacter* Character)
{}
void AAdvancedCharacter::InteractionEnd()
{}
void AAdvancedCharacter::Highlight()
{}
void AAdvancedCharacter::EnteredOutOfBoundsArea()
{}
void AAdvancedCharacter::DouseFire()
{}
void AAdvancedCharacter::BeginFlinchAdditiveOverride(const FName& FlinchOverrideName, const FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps)
{}
void AAdvancedCharacter::AssignNetDamage(uint8 InType, uint8 InSubType, uint8 InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent)
{}
void AAdvancedCharacter::AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const FName& bone, class AActor* Agent, EMordhauDamageType DamageType, uint8 DamageSubType)
{}
void AAdvancedCharacter::AddTurnDegrees(float Delta)
{}






bool AAdvancedCharacter::Knockback(const struct FVector& Amount)
{
	return 1;
}
bool AAdvancedCharacter::IsOutOfBounds()
{
	return 1;
}
bool AAdvancedCharacter::IsLocallyPlayerControlled()
{
	return 1;
}
bool AAdvancedCharacter::IsLocallyControlledOrUncontrolled()
{
	return 1;
}
bool AAdvancedCharacter::IsAirborne()
{
	return 1;
}
bool AAdvancedCharacter::GetIsDead()
{
	return 1;
}
bool AAdvancedCharacter::GetIsBurning()
{
	return 1;
}
bool AAdvancedCharacter::GetBestStickyLocation(const struct FVector& InLocation, struct FVector OutLocation, struct FVector OutNormal, FName OutBone)
{
	return 1;
}
bool AAdvancedCharacter::Trip()
{
	return 1;
}
float AAdvancedCharacter::MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator)
{
	return 1;
}
float AAdvancedCharacter::GetRawLookUpValue()
{
	return 1;
}
float AAdvancedCharacter::GetOutOfBoundsTimeUntilDeath()
{
	return 1;
}
float AAdvancedCharacter::GetLookUpValue()
{
	return 1;
}
float AAdvancedCharacter::GetDistanceIntoSmokeFieldSmoothed()
{
	return 1;
}
float AAdvancedCharacter::GetDistanceIntoSmokeField()
{
	return 1;
}
float AAdvancedCharacter::GetAdditiveOverrideTypeNormalizedTime()
{
	return 1;
}
uint8 AAdvancedCharacter::GetArmorTierForBone(const FName& BoneName)
{
	return 1;
}

//class UParticleSystemComponent* AAdvancedCharacter::SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation AttachType, const FName& Socket, bool bForce)
//{
//	return nullptr;
//}
//class UAudioComponent* AAdvancedCharacter::PlayCharacterSound(class USoundBase* Sound, const FName& bone, const struct FVector& InLocation, EAttachLocation AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier)
//{
//return nullptr;
//}





FName AAdvancedCharacter::GetAdditiveOverrideType()
{
	return "1";
}

//DECLARE_MULTICAST_DELEGATE(OnCharacterDied, AAdvancedCharacter *, Character)
//{
//}

//AAdvancedCharacter::DECLARE_MULTICAST_DELEGATE(OnCharacterDied, AAdvancedCharacter *, Character)
//{
//}

//FDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(OnCharacterDied, AAdvancedCharacter *, Character)
//{
//}
