// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauCharacter.h"
#include "MordhauMovementComponent.h"
#include "UnrealNetwork.h"

AMordhauCharacter::AMordhauCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UMordhauMovementComponent>(ACharacter::CharacterMovementComponentName))

{
}

void AMordhauCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	//Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(AMordhauCharacter, FallingTimeToRagdoll)
	//DOREPLIFETIME(AMordhauCharacter, FallingTime)
	//DOREPLIFETIME(AMordhauCharacter, JumpStaminaCost)
	//DOREPLIFETIME(AMordhauCharacter, StaminaRegenTickRate)
	//DOREPLIFETIME(AMordhauCharacter, HealthOnKill)
	//DOREPLIFETIME(AMordhauCharacter, bIsUnflinchable)
	//DOREPLIFETIME(AMordhauCharacter, MeleeMissRecoveryModifier)
	//DOREPLIFETIME(AMordhauCharacter, DodgeStaminaCost)
	//DOREPLIFETIME(AMordhauCharacter, bHasScaryFace)
	//DOREPLIFETIME(AMordhauCharacter, DodgeCooldown)
	//DOREPLIFETIME(AMordhauCharacter, DodgeDuration)
	//DOREPLIFETIME(AMordhauCharacter, EasyParryUntilTime)
	//DOREPLIFETIME(AMordhauCharacter, bDestroyEquipmentOnDeath)
	//DOREPLIFETIME(AMordhauCharacter, MeleeReleaseModifier)
	//DOREPLIFETIME(AMordhauCharacter, StaminaCostModifier)
	//DOREPLIFETIME(AMordhauCharacter, MeleeWindupModifier)
	//DOREPLIFETIME(AMordhauCharacter, bDoNotUseGrounding)
	//DOREPLIFETIME(AMordhauCharacter, bIsRightArmDisabled)
	//DOREPLIFETIME(AMordhauCharacter, bIsRightLegDisabled)
	//DOREPLIFETIME(AMordhauCharacter, bIsLeftLegDisabled)
	//DOREPLIFETIME(AMordhauCharacter, bIsLeftArmDisabled)
	//DOREPLIFETIME(AMordhauCharacter, bIsHoldingBlock)
	//DOREPLIFETIME(AMordhauCharacter, bDoNotAnimateBreathing)
	//DOREPLIFETIME(AMordhauCharacter, ReceivedFireDamageModifierWithFireproofPerk)
	//DOREPLIFETIME(AMordhauCharacter, ReceivedDamageModifierWithFriendlyPerk)
	//DOREPLIFETIME(AMordhauCharacter, StaminaRegenPerTick)
	//DOREPLIFETIME(AMordhauCharacter, stamina)
	//DOREPLIFETIME(AMordhauCharacter, StaminaRegenDelay)
	//DOREPLIFETIME(AMordhauCharacter, StaminaOnKill)
	//DOREPLIFETIME(AMordhauCharacter, MovementBoostDurationWithRushPerk)
	//DOREPLIFETIME(AMordhauCharacter, MinDelayBetweenBattlecries)
	//DOREPLIFETIME(AMordhauCharacter, MinDelayBetweenVoiceCommands)
	//DOREPLIFETIME(AMordhauCharacter, bIsWrithingInPain)
	//DOREPLIFETIME(AMordhauCharacter, MaxThirdPersonFOV)
	//DOREPLIFETIME(AMordhauCharacter, CurrentFOVOffset)
	//DOREPLIFETIME(AMordhauCharacter, UseHoldTime)

}

//bool AMordhauCharacter::PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot)
//{
//	return 1;
//}
//void AMordhauCharacter::AssignProfile(const struct FCharacterProfile& NewProfile)
//{}
//void AMordhauCharacter :: LeftTeamArea(int OwningTeam)
//{
//
//}
void AMordhauCharacter::EnteredTeamArea(int OwningTeam)
{

}
void AMordhauCharacter::EquipSlot1()
{}
void AMordhauCharacter::EquipSlot2()
{}
void AMordhauCharacter::EquipSlot3()
{}
void AMordhauCharacter::EquipSlot4()
{}
void AMordhauCharacter::EquipSlot5()
{}
void AMordhauCharacter::EquipSlot6()
{}
void AMordhauCharacter::EquipSlot7()
{}
void AMordhauCharacter::EquipSlot8()
{}
void AMordhauCharacter::EquipSlot9()
{}
void AMordhauCharacter::EmptyHands()
{}
void AMordhauCharacter::CycleCamera()
{}
void AMordhauCharacter::FeintOrBlockPressed()
{}
void AMordhauCharacter::FeintOrBlockReleased()
{}
void AMordhauCharacter::BlockPressed()
{}
void AMordhauCharacter::BlockReleased()
{}
//bool AMordhauCharacter :: IsInKnockback()
//{
//	return 1;
//}
bool AMordhauCharacter::IsInEnemyTeamArea()
{
	return 1;
}

void AMordhauCharacter::SaveConfigVar()
{
	SaveConfig();
}
class AMordhauEquipment* AMordhauCharacter::FindEquipmentToRestock(TArray<TSubclassOf<class AMordhauEquipment>> ValidEquipment)
{
	return nullptr;
}
//bool AMordhauCharacter :: IsInAnyTeamArea()
//{
//	return 1;
//}
//bool AMordhauCharacter :: IsHoldingBlock()
//{
//	return 1;
//}
//bool AMordhauCharacter :: HasPerk(uint8 PerkId)
//{
//	return 1;
//}
//bool AMordhauCharacter :: CanEasyParry()
//{
//	return 1;
//}
//void AMordhauCharacter::UseReleased()
//{
//
//}
//void AMordhauCharacter::UsePressed()
//{}
//bool AMordhauCharacter::ValidateInteractionTarget(class AActor* TargetActor)
//{
//	return 1;
//}
//


void AMordhauCharacter::AssignProfile(const struct FCharacterProfile& NewProfile)
{}


//UPDATE
void AMordhauCharacter::UpdateWearableInstanceColorsAndPatterns()
{}
void AMordhauCharacter::UpdateQuiverMesh()
{}
void AMordhauCharacter::UpdateLOD(float DeltaTime)
{}
void AMordhauCharacter::UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset)
{}
void AMordhauCharacter::UpdateAllSkeletalMeshComponentMaterials()
{}
//ACTION
void AMordhauCharacter::UseReleased()
{}
void AMordhauCharacter::UsePressed()
{}
bool AMordhauCharacter::TryDismember(const FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember)
{
	return 1;
}
bool AMordhauCharacter::CanDismember(FName Bone)
{
	return 1;
}
bool AMordhauCharacter::ModifyParryResult_Implementation(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker)
{
	return 1;
}

void AMordhauCharacter::OnPickedUp_Implementation(class AMordhauEquipment* Eq)
{}
void AMordhauCharacter::DropEquipment(class AMordhauEquipment* ToDrop)
{}
void AMordhauCharacter::SwitchToFists()
{}
void AMordhauCharacter::SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch)
{}
void AMordhauCharacter::SwitchEquipmentByIndex(uint8 Index)
{}
void AMordhauCharacter::SwitchEquipment(class AMordhauEquipment* ToSwitch)
{}
void AMordhauCharacter::StopSupersprint()
{}
void AMordhauCharacter::StopStaminaRegen(float ExtraTime)
{}
void AMordhauCharacter::StopSprinting()
{}
void AMordhauCharacter::StopMontage(class UAnimMontage* Montage, float FadeOut)
{}
void AMordhauCharacter::StopListenForStrike360()
{}
void AMordhauCharacter::StopListenForStab360()
{}
void AMordhauCharacter::StopCurrentVoiceCommand()
{}
void AMordhauCharacter::StopCrouching()
{}
void AMordhauCharacter::StopAttackYell()
{}
void AMordhauCharacter::StopAnim(float FadeOut)
{}
void AMordhauCharacter::StartSupersprint()
{}
void AMordhauCharacter::StartSprinting()
{}
void AMordhauCharacter::StartCrouching()
{}
void AMordhauCharacter::SprintReleased()
{}
void AMordhauCharacter::SprintPressed()
{}
void AMordhauCharacter::ShowEquipmentIfViewTarget()
{}
void AMordhauCharacter::FlipAttackSideReleased()
{}
void AMordhauCharacter::FlipAttackSidePressed()
{}
void AMordhauCharacter::FireReleased()
{}
void AMordhauCharacter::FirePressed()
{}
void AMordhauCharacter::JumpReleased()
{}
void AMordhauCharacter::JumpPressed()
{}
void AMordhauCharacter::ListenForStrike360()
{}
void AMordhauCharacter::ListenForStab360()
{}
void AMordhauCharacter::RestockDefaultEquipment(int MaxSlotsToRestock, TArray<class AMordhauEquipment*>& ReturnValue)
{}
void AMordhauCharacter::OffsetStamina(int Amount, bool bReplicate)
{}

void AMordhauCharacter::AssignNetMotionSimple(uint8 MotionType, uint8 Param0, uint8 Param1, uint8 Param2)
{}
class ULODSkeletalMeshComponent* AMordhauCharacter::GetClothMesh()
{
	return nullptr;
}
class AController* AMordhauCharacter::FindBestKiller(float CutOffTime)
{
	return nullptr;
}
bool AMordhauCharacter::QueueDismember(const FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent)
{
	return 1;
}
class UAudioComponent* AMordhauCharacter::PlaySnappyArmorFoley()
{
	return nullptr;
}
class UAudioComponent* AMordhauCharacter::PlayNonSnappyArmorFoley()
{
	return nullptr;
}
class UAudioComponent* AMordhauCharacter::PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier)
{
	return nullptr;
}
void AMordhauCharacter::PlayHurtYell()
{}
void AMordhauCharacter::PlayDeathYell(bool bIsLongYell)
{}
void AMordhauCharacter::PlayAttackYell()
{}

class ASeparatedBodyPart* AMordhauCharacter::Dismember(const FName& bone)
{
	return nullptr;
}


class UAnimMontage* AMordhauCharacter::PlayAnim(class UAnimMontage* Montage, float PlayRate, bool bStopExistingMontages)
{
	return nullptr;
}
bool AMordhauCharacter::PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot)
{
	return 1;
}
bool AMordhauCharacter::PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot)
{
	return 1;
}
void AMordhauCharacter::PerformVoiceCommand(uint8 PackedVoiceCommand)
{}
//SET
void AMordhauCharacter::SetQuiver(class UClass* NewQuiver)
{}
void AMordhauCharacter::SetMaxAnimBlendWeight(float MaxAmount, class UAnimMontage* Montage)
{}
void AMordhauCharacter::SetMaterialParamsForMergedSlot(const FString& Prefix, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid)
{}
void AMordhauCharacter::SetMaterialParamsForLODMasterSlot(const FString& Slot, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid)
{}
void AMordhauCharacter::SetFaceCustomizationTranslate(const FName& BoneName, const struct FVector& Vector)
{}
void AMordhauCharacter::SetFaceCustomizationScale(const FName& BoneName, const struct FVector& Vector)
{}
void AMordhauCharacter::SetFaceCustomizationRotate(const FName& BoneName, const struct FVector& Vector)
{}
void AMordhauCharacter::SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA)
{}
void AMordhauCharacter::SetCurrentlyTracking(class AActor* NewTrackingTarget)
{}
void AMordhauCharacter::SetCameraStyle(uint8 NewStyle, bool bBlendCamera)
{}
void AMordhauCharacter::SetAnimRate(class UAnimMontage* Montage, float NewRate)
{}
void AMordhauCharacter::SetAnimPosition(class UAnimMontage* Montage, float NewPosition)
{}
//REQUEST
void AMordhauCharacter::RequestVoiceCommand(uint8 CommandType, bool bAllowQueue)
{}
void AMordhauCharacter::RequestUse()
{}
void AMordhauCharacter::RequestToggleWeaponMode()
{}
void AMordhauCharacter::RequestStrike360()
{}
void AMordhauCharacter::RequestStab360()
{}
void AMordhauCharacter::RequestRightUpperStrike()
{}
void AMordhauCharacter::RequestRightStrike()
{}
void AMordhauCharacter::RequestRightStab()
{}
void AMordhauCharacter::RequestRightLowerStrike()
{}
void AMordhauCharacter::RequestRangedCancel()
{}
bool AMordhauCharacter::RequestParry(EBlockType BlockType, bool bAllowFTP)
{
	return 1;
}
void AMordhauCharacter::RequestLeftUpperStrike()
{}
void AMordhauCharacter::RequestLeftStrike()
{}
void AMordhauCharacter::RequestLeftStab()
{}
void AMordhauCharacter::RequestLeftLowerStrike()
{}
void AMordhauCharacter::RequestKick()
{}
void AMordhauCharacter::RequestJump()
{}
void AMordhauCharacter::RequestHolster(uint8 Mode)
{}
void AMordhauCharacter::RequestFire()
{}
void AMordhauCharacter::RequestFeint()
{}
void AMordhauCharacter::RequestEmote(uint8 EmoteId)
{}
void AMordhauCharacter::RequestDrop()
{}
void AMordhauCharacter::RequestCouchedAttack()
{}
void AMordhauCharacter::RequestClimb(const struct FVector& TargetLocation)
{}
void AMordhauCharacter::RequestBash()
{}
void AMordhauCharacter::RequestAttack(EAttackMove Move, float Angle)
{}
//ON REP
void AMordhauCharacter::OnRep_RightHandEquipment()
{}
void AMordhauCharacter::OnRep_ReplicatedVoiceCommand()
{}
void AMordhauCharacter::OnRep_ReplicatedStamina()
{}
void AMordhauCharacter::OnRep_ReplicatedNetMotion()
{}
void AMordhauCharacter::OnRep_ReplicatedDodge()
{}
void AMordhauCharacter::OnRep_ReplicatedCustomizationReplicationActor()
{}
void AMordhauCharacter::OnRep_Quiver()
{}
void AMordhauCharacter::OnRep_NetBlock()
{}
void AMordhauCharacter::OnRep_LeftHandEquipment()
{}
void AMordhauCharacter::OnRep_Equipment()
{}
//STATIC IS
bool AMordhauCharacter::IsRightLeg(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsRightArm(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsLeg(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsLeftLeg(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsLeftArm(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsHead(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsArm(const FName& bone)
{
	return 1;
}
//IS
bool AMordhauCharacter::IsInKnockback()
{
	return 1;
}
bool AMordhauCharacter::IsInAnyTeamArea()
{
	return 1;
}
bool AMordhauCharacter::IsHoldingBlock()
{
	return 1;
}
bool AMordhauCharacter::IsViewTarget()
{
	return 1;
}
bool AMordhauCharacter::IsLocallyPlayerControlledIncludingVehicle()
{
	return 1;
}
bool AMordhauCharacter::IsPlayerControlledIncludingVehicle()
{
	return 1;
}
bool AMordhauCharacter::IsLocallyControlledIncludingVehicle()
{
	return 1;
}
bool AMordhauCharacter::IsBoneDismembered(const FName& bone)
{
	return 1;
}
bool AMordhauCharacter::IsAnimActive(class UAnimMontage* Montage)
{
	return 1;
}
bool AMordhauCharacter::HasPerk(uint8 PerkId)
{
	return 1;
}
bool AMordhauCharacter::HasEquipmentHeSpawnedWith()
{
	return 1;
}
//GET
void AMordhauCharacter::GetMovementRestriction(EMovementRestriction& ReturnValue)
{
}
class UAudioComponent* AMordhauCharacter::GetLastVoiceCommand()
{
	return nullptr;
}
class AMordhauVehicle* AMordhauCharacter::GetLastUsedVehicle(float MaximumTimeDiscrepancy)
{
	return nullptr;
}
class AActor* AMordhauCharacter::GetLastMovementFrontalHitActor(float MaxAgeSeconds)
{
	return nullptr;
}
struct FVector AMordhauCharacter::GetFaceCustomizationTranslate(const FName& BoneName)
{
	return { 1,1,1 };
}
void AMordhauCharacter::GetFaceCustomizationTransform(const FName& BoneName, struct FTransform& Transformation)
{}
struct FVector AMordhauCharacter::GetFaceCustomizationScale(const FName& BoneName)
{
	return { 1,1,1 };
}
struct FVector AMordhauCharacter::GetFaceCustomizationRotate(const FName& BoneName)
{
	return { 1,1,1 };
}
int AMordhauCharacter::GetFaceCustomizationBoneIdx(const FName& BoneName)
{
	return 1;
}
bool AMordhauCharacter::GetEquipmentIndex(class AMordhauEquipment* Equip, uint8 OutIndex)
{
	return 1;
}
float AMordhauCharacter::GetAnimWeight(class UAnimMontage* Montage)
{
	return 1;
}
void AMordhauCharacter::GetAllFaceSelectionChildBonesRecursive(const FName& ParentBone, TArray<FName>& FaceSelections)
{
}
class ACustomizationReplicationActor* AMordhauCharacter::GetCustomizationReplicationActor()
{
	return nullptr;
}
class AController* AMordhauCharacter::GetControllerIncludingVehicle()
{
	return nullptr;
}
//class ULODSkeletalMeshComponent* AMordhauCharacter::GetClothMesh()
//	{
//	return nullptr;
//	}
//MISC
void AMordhauCharacter::FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator)
{}
void AMordhauCharacter::ForceUpdateMeshVisibility()
{}
bool AMordhauCharacter::ValidateInteractionTarget(class AActor* TargetActor)
{
	return 1;
}
void AMordhauCharacter::ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const struct FVector& ExceptNearThisPoint, float Radius, const FName& NearPointBone)
{}
void AMordhauCharacter::Holster(class AMordhauEquipment* ToHolster)
{}
void AMordhauCharacter::OnActionFailed(const FName& Reason)
{}
void AMordhauCharacter::LeftTeamArea(int OwningTeam)
{}
void AMordhauCharacter::ReplicateStamina()
{}

void AMordhauCharacter::DisableLimb(const FName& BoneName)
{
}
