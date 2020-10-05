// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class AMordhauEquipment;
struct FVector;
class AActor;
class ULODSkeletalMeshComponent;
class ACustomizationReplicationActor;
class UAnimMontage;
struct FTransform;
class AMordhauVehicle;
class UAudioComponent;
enum class EMovementRestriction : uint8;
enum class EAttackMove : uint8;
enum class EBlockType : uint8;
class UMordhauWearable;
class UMaterialInstanceDynamic;
class UObject;
class USoundBase;
class ASeparatedBodyPart;
class AMordhauWeapon;
struct FRotator;
struct FHitResult;
class AMordhauCharacter;
struct FCharacterProfile;
struct FNetMotion;
class AAdvancedCharacter;
struct FVector_NetQuantize;
#ifdef MORDHAU_MordhauCharacter_generated_h
#error "MordhauCharacter.generated.h already included, missing '#pragma once' in MordhauCharacter.h"
#endif
#define MORDHAU_MordhauCharacter_generated_h

#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_RPC_WRAPPERS \
	virtual void OnPickedUp_Implementation(AMordhauEquipment* Eq); \
	virtual bool ModifyParryResult_Implementation(bool InResult, FHitResult const& HitResult, AMordhauCharacter* Attacker); \
 \
	DECLARE_FUNCTION(execFindBestKiller) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CutOffTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->FindBestKiller(Z_Param_CutOffTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropEquipment) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToDrop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropEquipment(Z_Param_ToDrop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDismember) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDismember(Z_Param_Bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeintOrBlockReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FeintOrBlockReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeintOrBlockPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FeintOrBlockPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot9) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot9(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot8) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot8(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot7) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot7(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot6) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot6(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableLimb) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableLimb(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCycleCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CycleCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmptyHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EmptyHands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplicateStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftTeamArea) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_OwningTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeftTeamArea(Z_Param_OwningTeam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActionFailed) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionFailed(Z_Param_Out_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHolster) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToHolster); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Holster(Z_Param_ToHolster); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReweightSkinning) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneFrom); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneTo); \
		P_GET_UBOOL(Z_Param_bIncludeChildren); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExceptNearThisPoint); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NearPointBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReweightSkinning(Z_Param_BoneFrom,Z_Param_BoneTo,Z_Param_bIncludeChildren,Z_Param_Out_ExceptNearThisPoint,Z_Param_Radius,Z_Param_Out_NearPointBone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateInteractionTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ValidateInteractionTarget(Z_Param_TargetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceUpdateMeshVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceUpdateMeshVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeHandsForEquipment) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_EquipmentInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FreeHandsForEquipment(Z_Param_EquipmentInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULODSkeletalMeshComponent**)Z_Param__Result=P_THIS->GetClothMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetControllerIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomizationReplicationActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACustomizationReplicationActor**)Z_Param__Result=P_THIS->GetCustomizationReplicationActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllFaceSelectionChildBonesRecursive) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ParentBone); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_FaceSelections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllFaceSelectionChildBonesRecursive(Z_Param_Out_ParentBone,Z_Param_Out_FaceSelections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimWeight) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimWeight(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentIndex) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Equip); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetEquipmentIndex(Z_Param_Equip,Z_Param_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationBoneIdx) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFaceCustomizationBoneIdx(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationRotate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFaceCustomizationRotate(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationScale) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFaceCustomizationScale(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationTransform) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFaceCustomizationTransform(Z_Param_Out_BoneName,Z_Param_Out_Transformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationTranslate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFaceCustomizationTranslate(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastMovementFrontalHitActor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAgeSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetLastMovementFrontalHitActor(Z_Param_MaxAgeSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUsedVehicle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaximumTimeDiscrepancy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauVehicle**)Z_Param__Result=P_THIS->GetLastUsedVehicle(Z_Param_MaximumTimeDiscrepancy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastVoiceCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->GetLastVoiceCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementRestriction) \
	{ \
		P_GET_ENUM_REF(EMovementRestriction,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMovementRestriction((EMovementRestriction&)(Z_Param_Out_ReturnValue)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEquipmentHeSpawnedWith) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEquipmentHeSpawnedWith(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPerk) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PerkId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPerk(Z_Param_PerkId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimActive) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnimActive(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBoneDismembered) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBoneDismembered(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyControlledIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlledIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerControlledIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerControlledIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyPlayerControlledIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyPlayerControlledIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoldingBlock) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoldingBlock(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnteredTeamArea) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_OwningTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnteredTeamArea(Z_Param_OwningTeam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEnemyTeamArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInEnemyTeamArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInAnyTeamArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInAnyTeamArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInKnockback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInKnockback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsArm) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsArm(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHead) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsHead(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeftArm) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsLeftArm(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeftLeg) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsLeftLeg(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeg) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsLeg(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRightArm) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsRightArm(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRightLeg) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsRightLeg(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Equipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Equipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LeftHandEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LeftHandEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_NetBlock) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NetBlock(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Quiver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Quiver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCustomizationReplicationActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedCustomizationReplicationActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedNetMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedNetMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedVoiceCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedVoiceCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RightHandEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RightHandEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestAttack) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestAttack(EAttackMove(Z_Param_Move),Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestBash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestBash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestClimb) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestClimb(Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestCouchedAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestCouchedAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestDrop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestEmote) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EmoteId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestEmote(Z_Param_EmoteId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestFeint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestFeint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestHolster) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestHolster(Z_Param_Mode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestKick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestKick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftLowerStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftLowerStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftStab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftStab(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftUpperStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftUpperStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestParry) \
	{ \
		P_GET_ENUM(EBlockType,Z_Param_BlockType); \
		P_GET_UBOOL(Z_Param_bAllowFTP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestParry(EBlockType(Z_Param_BlockType),Z_Param_bAllowFTP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRangedCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRangedCancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightLowerStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightLowerStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightStab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightStab(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightUpperStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightUpperStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestStab360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestStab360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestStrike360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestStrike360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestToggleWeaponMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestToggleWeaponMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestVoiceCommand) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_CommandType); \
		P_GET_UBOOL(Z_Param_bAllowQueue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestVoiceCommand(Z_Param_CommandType,Z_Param_bAllowQueue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEquipmentToRestock) \
	{ \
		P_GET_TARRAY(TSubclassOf<AMordhauEquipment> ,Z_Param_ValidEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=P_THIS->FindEquipmentToRestock(Z_Param_ValidEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimPosition(Z_Param_Montage,Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimRate(Z_Param_Montage,Z_Param_NewRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraStyle) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewStyle); \
		P_GET_UBOOL(Z_Param_bBlendCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraStyle(Z_Param_NewStyle,Z_Param_bBlendCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentlyTracking) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTrackingTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentlyTracking(Z_Param_NewTrackingTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomizationReplicationActor) \
	{ \
		P_GET_OBJECT(ACustomizationReplicationActor,Z_Param_CRA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomizationReplicationActor(Z_Param_CRA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceCustomizationRotate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceCustomizationRotate(Z_Param_Out_BoneName,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceCustomizationScale) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceCustomizationScale(Z_Param_Out_BoneName,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceCustomizationTranslate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceCustomizationTranslate(Z_Param_Out_BoneName,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialParamsForLODMasterSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Slot); \
		P_GET_OBJECT(UMordhauWearable,Z_Param_Wearable); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialParamsForLODMasterSlot(Z_Param_Slot,Z_Param_Wearable,Z_Param_Mid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialParamsForMergedSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_OBJECT(UMordhauWearable,Z_Param_Wearable); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialParamsForMergedSlot(Z_Param_Prefix,Z_Param_Wearable,Z_Param_Mid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxAnimBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAmount); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxAnimBlendWeight(Z_Param_MaxAmount,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQuiver) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewQuiver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetQuiver(Z_Param_NewQuiver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformVoiceCommand) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PackedVoiceCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformVoiceCommand(Z_Param_PackedVoiceCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickUp) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToEquip); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PreferredSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PickUp(Z_Param_ToEquip,Z_Param_PreferredSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickUpToSlot) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToEquip); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PickUpToSlot(Z_Param_ToEquip,Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnim) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_GET_UBOOL(Z_Param_bStopExistingMontages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlayAnim(Z_Param_Montage,Z_Param_PlayRate,Z_Param_bStopExistingMontages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAttackYell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAttackYell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDeathYell) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLongYell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayDeathYell(Z_Param_bIsLongYell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayHurtYell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayHurtYell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayMouthSound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayMouthSound(Z_Param_Sound,Z_Param_VolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayNonSnappyArmorFoley) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayNonSnappyArmorFoley(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySnappyArmorFoley) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlaySnappyArmorFoley(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismember) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASeparatedBodyPart**)Z_Param__Result=P_THIS->Dismember(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueueDismember) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_UBOOL(Z_Param_bIsDismemberPartial); \
		P_GET_UBOOL(Z_Param_bIsBluntForce); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->QueueDismember(Z_Param_Out_bone,Z_Param_bIsDismemberPartial,Z_Param_bIsBluntForce,Z_Param_Out_Force,Z_Param_Agent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOffsetStamina) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_bReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OffsetStamina(Z_Param_Amount,Z_Param_bReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestockDefaultEquipment) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxSlotsToRestock); \
		P_GET_TARRAY_REF(AMordhauEquipment*,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestockDefaultEquipment(Z_Param_MaxSlotsToRestock,Z_Param_Out_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForStab360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForStab360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForStrike360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForStrike360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFirePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FirePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipAttackSidePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipAttackSidePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipAttackSideReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipAttackSideReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowEquipmentIfViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowEquipmentIfViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprintPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SprintPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprintReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SprintReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCrouching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCrouching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSupersprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSupersprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnim) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnim(Z_Param_FadeOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAttackYell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAttackYell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCrouching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCrouching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCurrentVoiceCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCurrentVoiceCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListenForStab360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListenForStab360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListenForStrike360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListenForStrike360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMontage(Z_Param_Montage,Z_Param_FadeOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopStaminaRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtraTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopStaminaRegen(Z_Param_ExtraTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSupersprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSupersprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchEquipment) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToSwitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchEquipment(Z_Param_ToSwitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchEquipmentByIndex) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchEquipmentByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchModeAndReAttach) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToSwitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchModeAndReAttach(Z_Param_ToSwitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchToFists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchToFists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDismember) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_OBJECT(AMordhauWeapon,Z_Param_Weapon); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_UBOOL(Z_Param_bIsRagdollDismember); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryDismember(Z_Param_Out_bone,Z_Param_Out_Point,Z_Param_Weapon,EAttackMove(Z_Param_Move),Z_Param_bIsRagdollDismember); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UsePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAllSkeletalMeshComponentMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAllSkeletalMeshComponentMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateFPCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLookUpValue); \
		P_GET_UBOOL(Z_Param_bOnlyUpdateRotation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateFPCamera(Z_Param_DeltaSeconds,Z_Param_InLookUpValue,Z_Param_bOnlyUpdateRotation,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLOD) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLOD(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateQuiverMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateQuiverMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWearableInstanceColorsAndPatterns) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWearableInstanceColorsAndPatterns(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignNetMotionSimple) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_MotionType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Param0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Param1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Param2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignNetMotionSimple(Z_Param_MotionType,Z_Param_Param0,Z_Param_Param1,Z_Param_Param2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveConfigVar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveConfigVar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPickedUp) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Eq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPickedUp_Implementation(Z_Param_Eq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyParryResult) \
	{ \
		P_GET_UBOOL(Z_Param_InResult); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Attacker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ModifyParryResult_Implementation(Z_Param_InResult,Z_Param_Out_HitResult,Z_Param_Attacker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_NewProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignProfile(Z_Param_Out_NewProfile); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPickedUp_Implementation(AMordhauEquipment* Eq); \
	virtual bool ModifyParryResult_Implementation(bool InResult, FHitResult const& HitResult, AMordhauCharacter* Attacker); \
 \
	DECLARE_FUNCTION(execFindBestKiller) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CutOffTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->FindBestKiller(Z_Param_CutOffTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropEquipment) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToDrop); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropEquipment(Z_Param_ToDrop); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDismember) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDismember(Z_Param_Bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeintOrBlockReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FeintOrBlockReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeintOrBlockPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FeintOrBlockPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot9) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot9(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot8) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot8(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot7) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot7(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot6) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot6(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipSlot1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipSlot1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableLimb) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableLimb(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCycleCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CycleCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmptyHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EmptyHands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplicateStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftTeamArea) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_OwningTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeftTeamArea(Z_Param_OwningTeam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActionFailed) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Reason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActionFailed(Z_Param_Out_Reason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHolster) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToHolster); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Holster(Z_Param_ToHolster); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReweightSkinning) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneFrom); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BoneTo); \
		P_GET_UBOOL(Z_Param_bIncludeChildren); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExceptNearThisPoint); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NearPointBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReweightSkinning(Z_Param_BoneFrom,Z_Param_BoneTo,Z_Param_bIncludeChildren,Z_Param_Out_ExceptNearThisPoint,Z_Param_Radius,Z_Param_Out_NearPointBone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateInteractionTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ValidateInteractionTarget(Z_Param_TargetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceUpdateMeshVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceUpdateMeshVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeHandsForEquipment) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_EquipmentInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FreeHandsForEquipment(Z_Param_EquipmentInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULODSkeletalMeshComponent**)Z_Param__Result=P_THIS->GetClothMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControllerIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetControllerIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomizationReplicationActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACustomizationReplicationActor**)Z_Param__Result=P_THIS->GetCustomizationReplicationActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllFaceSelectionChildBonesRecursive) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ParentBone); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_FaceSelections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllFaceSelectionChildBonesRecursive(Z_Param_Out_ParentBone,Z_Param_Out_FaceSelections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimWeight) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimWeight(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentIndex) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Equip); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetEquipmentIndex(Z_Param_Equip,Z_Param_OutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationBoneIdx) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFaceCustomizationBoneIdx(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationRotate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFaceCustomizationRotate(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationScale) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFaceCustomizationScale(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationTransform) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFaceCustomizationTransform(Z_Param_Out_BoneName,Z_Param_Out_Transformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceCustomizationTranslate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFaceCustomizationTranslate(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastMovementFrontalHitActor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAgeSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetLastMovementFrontalHitActor(Z_Param_MaxAgeSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUsedVehicle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaximumTimeDiscrepancy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauVehicle**)Z_Param__Result=P_THIS->GetLastUsedVehicle(Z_Param_MaximumTimeDiscrepancy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastVoiceCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->GetLastVoiceCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementRestriction) \
	{ \
		P_GET_ENUM_REF(EMovementRestriction,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMovementRestriction((EMovementRestriction&)(Z_Param_Out_ReturnValue)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasEquipmentHeSpawnedWith) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasEquipmentHeSpawnedWith(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPerk) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PerkId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPerk(Z_Param_PerkId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnimActive) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnimActive(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBoneDismembered) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBoneDismembered(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyControlledIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlledIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerControlledIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerControlledIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyPlayerControlledIncludingVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyPlayerControlledIncludingVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoldingBlock) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHoldingBlock(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnteredTeamArea) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_OwningTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnteredTeamArea(Z_Param_OwningTeam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInEnemyTeamArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInEnemyTeamArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInAnyTeamArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInAnyTeamArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInKnockback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInKnockback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsArm) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsArm(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHead) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsHead(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeftArm) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsLeftArm(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeftLeg) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsLeftLeg(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeg) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsLeg(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRightArm) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsRightArm(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRightLeg) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=AMordhauCharacter::IsRightLeg(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Equipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Equipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LeftHandEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_LeftHandEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_NetBlock) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NetBlock(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Quiver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Quiver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCustomizationReplicationActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedCustomizationReplicationActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedNetMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedNetMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedVoiceCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedVoiceCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RightHandEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RightHandEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestAttack) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestAttack(EAttackMove(Z_Param_Move),Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestBash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestBash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestClimb) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestClimb(Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestCouchedAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestCouchedAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestDrop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestEmote) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EmoteId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestEmote(Z_Param_EmoteId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestFeint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestFeint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestHolster) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestHolster(Z_Param_Mode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestKick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestKick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftLowerStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftLowerStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftStab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftStab(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestLeftUpperStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestLeftUpperStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestParry) \
	{ \
		P_GET_ENUM(EBlockType,Z_Param_BlockType); \
		P_GET_UBOOL(Z_Param_bAllowFTP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestParry(EBlockType(Z_Param_BlockType),Z_Param_bAllowFTP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRangedCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRangedCancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightLowerStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightLowerStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightStab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightStab(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRightUpperStrike) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRightUpperStrike(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestStab360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestStab360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestStrike360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestStrike360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestToggleWeaponMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestToggleWeaponMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestVoiceCommand) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_CommandType); \
		P_GET_UBOOL(Z_Param_bAllowQueue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestVoiceCommand(Z_Param_CommandType,Z_Param_bAllowQueue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEquipmentToRestock) \
	{ \
		P_GET_TARRAY(TSubclassOf<AMordhauEquipment> ,Z_Param_ValidEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=P_THIS->FindEquipmentToRestock(Z_Param_ValidEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimPosition(Z_Param_Montage,Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimRate(Z_Param_Montage,Z_Param_NewRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraStyle) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewStyle); \
		P_GET_UBOOL(Z_Param_bBlendCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraStyle(Z_Param_NewStyle,Z_Param_bBlendCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentlyTracking) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTrackingTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentlyTracking(Z_Param_NewTrackingTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomizationReplicationActor) \
	{ \
		P_GET_OBJECT(ACustomizationReplicationActor,Z_Param_CRA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomizationReplicationActor(Z_Param_CRA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceCustomizationRotate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceCustomizationRotate(Z_Param_Out_BoneName,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceCustomizationScale) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceCustomizationScale(Z_Param_Out_BoneName,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFaceCustomizationTranslate) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFaceCustomizationTranslate(Z_Param_Out_BoneName,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialParamsForLODMasterSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Slot); \
		P_GET_OBJECT(UMordhauWearable,Z_Param_Wearable); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialParamsForLODMasterSlot(Z_Param_Slot,Z_Param_Wearable,Z_Param_Mid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialParamsForMergedSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_OBJECT(UMordhauWearable,Z_Param_Wearable); \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialParamsForMergedSlot(Z_Param_Prefix,Z_Param_Wearable,Z_Param_Mid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxAnimBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxAmount); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxAnimBlendWeight(Z_Param_MaxAmount,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQuiver) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewQuiver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetQuiver(Z_Param_NewQuiver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformVoiceCommand) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PackedVoiceCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformVoiceCommand(Z_Param_PackedVoiceCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickUp) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToEquip); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PreferredSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PickUp(Z_Param_ToEquip,Z_Param_PreferredSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickUpToSlot) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToEquip); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PickUpToSlot(Z_Param_ToEquip,Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnim) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_GET_UBOOL(Z_Param_bStopExistingMontages); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=P_THIS->PlayAnim(Z_Param_Montage,Z_Param_PlayRate,Z_Param_bStopExistingMontages); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAttackYell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayAttackYell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDeathYell) \
	{ \
		P_GET_UBOOL(Z_Param_bIsLongYell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayDeathYell(Z_Param_bIsLongYell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayHurtYell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayHurtYell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayMouthSound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayMouthSound(Z_Param_Sound,Z_Param_VolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayNonSnappyArmorFoley) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayNonSnappyArmorFoley(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySnappyArmorFoley) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlaySnappyArmorFoley(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismember) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASeparatedBodyPart**)Z_Param__Result=P_THIS->Dismember(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueueDismember) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_UBOOL(Z_Param_bIsDismemberPartial); \
		P_GET_UBOOL(Z_Param_bIsBluntForce); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->QueueDismember(Z_Param_Out_bone,Z_Param_bIsDismemberPartial,Z_Param_bIsBluntForce,Z_Param_Out_Force,Z_Param_Agent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOffsetStamina) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_bReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OffsetStamina(Z_Param_Amount,Z_Param_bReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestockDefaultEquipment) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxSlotsToRestock); \
		P_GET_TARRAY_REF(AMordhauEquipment*,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestockDefaultEquipment(Z_Param_MaxSlotsToRestock,Z_Param_Out_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForStab360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForStab360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForStrike360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForStrike360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFirePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FirePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipAttackSidePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipAttackSidePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipAttackSideReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipAttackSideReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowEquipmentIfViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowEquipmentIfViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprintPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SprintPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprintReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SprintReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCrouching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCrouching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSupersprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSupersprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnim) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAnim(Z_Param_FadeOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAttackYell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopAttackYell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCrouching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCrouching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCurrentVoiceCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCurrentVoiceCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListenForStab360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListenForStab360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopListenForStrike360) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopListenForStrike360(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMontage(Z_Param_Montage,Z_Param_FadeOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopStaminaRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtraTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopStaminaRegen(Z_Param_ExtraTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSupersprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSupersprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchEquipment) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToSwitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchEquipment(Z_Param_ToSwitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchEquipmentByIndex) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchEquipmentByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchModeAndReAttach) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_ToSwitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchModeAndReAttach(Z_Param_ToSwitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchToFists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchToFists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryDismember) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_GET_OBJECT(AMordhauWeapon,Z_Param_Weapon); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_UBOOL(Z_Param_bIsRagdollDismember); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TryDismember(Z_Param_Out_bone,Z_Param_Out_Point,Z_Param_Weapon,EAttackMove(Z_Param_Move),Z_Param_bIsRagdollDismember); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UsePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAllSkeletalMeshComponentMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAllSkeletalMeshComponentMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateFPCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLookUpValue); \
		P_GET_UBOOL(Z_Param_bOnlyUpdateRotation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateFPCamera(Z_Param_DeltaSeconds,Z_Param_InLookUpValue,Z_Param_bOnlyUpdateRotation,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLOD) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLOD(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateQuiverMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateQuiverMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWearableInstanceColorsAndPatterns) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWearableInstanceColorsAndPatterns(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignNetMotionSimple) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_MotionType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Param0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Param1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Param2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignNetMotionSimple(Z_Param_MotionType,Z_Param_Param0,Z_Param_Param1,Z_Param_Param2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveConfigVar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveConfigVar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPickedUp) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Eq); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPickedUp_Implementation(Z_Param_Eq); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyParryResult) \
	{ \
		P_GET_UBOOL(Z_Param_InResult); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Attacker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ModifyParryResult_Implementation(Z_Param_InResult,Z_Param_Out_HitResult,Z_Param_Attacker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_NewProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignProfile(Z_Param_Out_NewProfile); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_EVENT_PARMS \
	struct MordhauCharacter_eventModifyParryResult_Parms \
	{ \
		bool InResult; \
		FHitResult HitResult; \
		AMordhauCharacter* Attacker; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauCharacter_eventModifyParryResult_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauCharacter_eventMoveBlockedBySlow_Parms \
	{ \
		FHitResult Impact; \
	}; \
	struct MordhauCharacter_eventOnBlockedMelee_Parms \
	{ \
		FHitResult HitResult; \
		AMordhauCharacter* Attacker; \
	}; \
	struct MordhauCharacter_eventOnPickedUp_Parms \
	{ \
		AMordhauEquipment* Eq; \
	}; \
	struct MordhauCharacter_eventOnPostDismember_Parms \
	{ \
		FName bone; \
		ASeparatedBodyPart* SeparatedPart; \
		AActor* Agent; \
	}; \
	struct MordhauCharacter_eventServerAssignFireAim_Parms \
	{ \
		FVector Orig; \
		FRotator Rot; \
	}; \
	struct MordhauCharacter_eventServerAssignNetMotion_Parms \
	{ \
		FNetMotion NewNetMotion; \
		uint8 LastAuthObserved; \
	}; \
	struct MordhauCharacter_eventServerDropParry_Parms \
	{ \
		uint8 MotionID; \
	}; \
	struct MordhauCharacter_eventServerQueueAttack_Parms \
	{ \
		EAttackMove Move; \
		uint8 Angle; \
		uint8 MotionID; \
	}; \
	struct MordhauCharacter_eventServerRequestDodge_Parms \
	{ \
		uint8 PackedWorldYaw; \
	}; \
	struct MordhauCharacter_eventServerRequestPassiveInteraction_Parms \
	{ \
		AActor* Target; \
	}; \
	struct MordhauCharacter_eventServerRequestVoiceCommand_Parms \
	{ \
		uint8 VoiceRequest; \
	}; \
	struct MordhauCharacter_eventServerSetInteractionTarget_Parms \
	{ \
		AActor* Target; \
	}; \
	struct MordhauCharacter_eventServerSuggestHitDetection_Parms \
	{ \
		AAdvancedCharacter* OtherCharacter; \
		FVector_NetQuantize HitLocation; \
		uint8 BoneId; \
	}; \
	struct MordhauCharacter_eventTryClimbing_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauCharacter_eventTryClimbing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauCharacter(); \
	friend struct Z_Construct_UClass_AMordhauCharacter_Statics; \
public: \
	DECLARE_CLASS(AMordhauCharacter, AAdvancedCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauCharacter(); \
	friend struct Z_Construct_UClass_AMordhauCharacter_Statics; \
public: \
	DECLARE_CLASS(AMordhauCharacter, AAdvancedCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauCharacter(AMordhauCharacter&&); \
	NO_API AMordhauCharacter(const AMordhauCharacter&); \
public:


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauCharacter(AMordhauCharacter&&); \
	NO_API AMordhauCharacter(const AMordhauCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauCharacter)


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauCharacter_h_22_PROLOG \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_INCLASS \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
