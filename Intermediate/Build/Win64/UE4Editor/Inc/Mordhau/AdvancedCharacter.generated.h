// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvancedCharacter;
struct FHitResult;
enum class EMordhauDamageType : uint8;
class AActor;
class AController;
struct FVector;
class USoundBase;
class USoundAttenuation;
class UAudioComponent;
struct FRotator;
class UMaterialInstanceDynamic;
class AMasterField;
#ifdef MORDHAU_AdvancedCharacter_generated_h
#error "AdvancedCharacter.generated.h already included, missing '#pragma once' in AdvancedCharacter.h"
#endif
#define MORDHAU_AdvancedCharacter_generated_h

#define Mordhau_Source_Mordhau_AdvancedCharacter_h_15_DELEGATE \
struct _Script_Mordhau_eventOnCharacterDestroyed_Parms \
{ \
	AAdvancedCharacter* Character; \
}; \
static inline void FOnCharacterDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDestroyed, AAdvancedCharacter* Character) \
{ \
	_Script_Mordhau_eventOnCharacterDestroyed_Parms Parms; \
	Parms.Character=Character; \
	OnCharacterDestroyed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_14_DELEGATE \
struct _Script_Mordhau_eventOnCharacterDied_Parms \
{ \
	AAdvancedCharacter* Character; \
}; \
static inline void FOnCharacterDied_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDied, AAdvancedCharacter* Character) \
{ \
	_Script_Mordhau_eventOnCharacterDied_Parms Parms; \
	Parms.Character=Character; \
	OnCharacterDied.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_RPC_WRAPPERS \
	virtual void OnRep_Team_Implementation(); \
	virtual float ModifyDamage_Implementation(float DamageAmount, EMordhauDamageType DamageType, FHitResult const& HitInfo, AActor* Source, AActor* Agent, AController* EventInstigator); \
 \
	DECLARE_FUNCTION(execGetAdditiveOverrideType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAdditiveOverrideType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmorTierForBone) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetArmorTierForBone(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditiveOverrideTypeNormalizedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAdditiveOverrideTypeNormalizedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceIntoSmokeField) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceIntoSmokeField(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceIntoSmokeFieldSmoothed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceIntoSmokeFieldSmoothed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookUpValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLookUpValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutOfBoundsTimeUntilDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOutOfBoundsTimeUntilDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawLookUpValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRawLookUpValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMordhauTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_DamageType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamageSubType); \
		P_GET_OBJECT(AActor,Z_Param_Source); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->MordhauTakeDamage(Z_Param_DamageAmount,Z_Param_Out_Hit,EMordhauDamageType(Z_Param_DamageType),Z_Param_DamageSubType,Z_Param_Source,Z_Param_Agent,Z_Param_EventInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Trip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestStickyLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_GET_STRUCT(FVector,Z_Param_OutLocation); \
		P_GET_STRUCT(FVector,Z_Param_OutNormal); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OutBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBestStickyLocation(Z_Param_Out_InLocation,Z_Param_OutLocation,Z_Param_OutNormal,Z_Param_OutBone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsBurning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsBurning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAirborne) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAirborne(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyControlledOrUncontrolled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlledOrUncontrolled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyPlayerControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyPlayerControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOutOfBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOutOfBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKnockback) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Knockback(Z_Param_Out_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayCharacterSound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bone); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_STRUCT(FVector,Z_Param_AttachLocation); \
		P_GET_UBOOL(Z_Param_Attach); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_Override); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayCharacterSound(Z_Param_Sound,Z_Param_Bone,Z_Param_InLocation,Z_Param_AttachLocation,Z_Param_Attach,Z_Param_Override,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTurnDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTurnDegrees(Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWound) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_DamageType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamageSubType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddWound(Z_Param_Out_ImpactPoint,Z_Param_Out_ImpactNormal,Z_Param_Out_bone,Z_Param_Agent,EMordhauDamageType(Z_Param_DamageType),Z_Param_DamageSubType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignNetDamage) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InSubType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InBone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPoint); \
		P_GET_UBOOL(Z_Param_bInWillKill); \
		P_GET_UBOOL(Z_Param_bInSimulateFlinch); \
		P_GET_UBOOL(Z_Param_bInIDBit); \
		P_GET_OBJECT(AActor,Z_Param_InDamageSource); \
		P_GET_OBJECT(AActor,Z_Param_InDamageAgent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignNetDamage(Z_Param_InType,Z_Param_InSubType,Z_Param_InBone,Z_Param_Out_InPoint,Z_Param_bInWillKill,Z_Param_bInSimulateFlinch,Z_Param_bInIDBit,Z_Param_InDamageSource,Z_Param_InDamageAgent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginFlinchAdditiveOverride) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_FlinchOverrideName); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_AltFlinchOverrideName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Degree); \
		P_GET_UBOOL(Z_Param_bIsHead); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapDegreeToSteps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginFlinchAdditiveOverride(Z_Param_Out_FlinchOverrideName,Z_Param_Out_AltFlinchOverrideName,Z_Param_Duration,Z_Param_Degree,Z_Param_bIsHead,Z_Param_SnapDegreeToSteps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDouseFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DouseFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnteredOutOfBoundsArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnteredOutOfBoundsArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Highlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionStart) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionStart(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftOutOfBoundsArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeftOutOfBoundsArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_GET_UBOOL(Z_Param_bIsAbsolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_Val,Z_Param_bIsAbsolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUpAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUpAtRate(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUpNotAbsolute) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUpNotAbsolute(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOffsetHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_bReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OffsetHealth(Z_Param_Amount,Z_Param_bReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_NetDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NetDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCharacterFlags) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedCharacterFlags(Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedLookUpValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedLookUpValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpawnTurnValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SpawnTurnValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Team) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Team_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayHitEffectParticle) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_UBOOL(Z_Param_bFindOptimalSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayHitEffectParticle(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_bone,Z_Param_bFindOptimalSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterMaterialToDissolve) \
	{ \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterMaterialToDissolve(Z_Param_Mat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplicateHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMeshEnablePhysics) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestMeshEnablePhysics(Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSuicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestSuicide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestTrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestTrip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAdditiveOverrideType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAdditiveOverrideType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLagInductionTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLagInductionTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLocationLagInductionTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLocationLagInductionTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLookLagInductionTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLookLagInductionTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdditiveOverrideType) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NewType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAdditiveOverrideType(Z_Param_Out_NewType,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsRagdollFalling) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsRagdollFalling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsRagdollFalling(Z_Param_bInIsRagdollFalling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocationLagInductionTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ChangeSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLocationLagInductionTarget(Z_Param_Amount,Z_Param_ChangeSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLookLagInductionTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ChangeSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLookLagInductionTarget(Z_Param_Amount,Z_Param_ChangeSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnFire) \
	{ \
		P_GET_OBJECT(AMasterField,Z_Param_FireField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnFire(Z_Param_FireField); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnSmoke) \
	{ \
		P_GET_OBJECT(AMasterField,Z_Param_SmokeField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnSmoke(Z_Param_SmokeField); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartBurning) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tick); \
		P_GET_OBJECT(AActor,Z_Param_DamageAgent); \
		P_GET_OBJECT(AController,Z_Param_InstigatorController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartBurning(Z_Param_Duration,Z_Param_Damage,Z_Param_Tick,Z_Param_DamageAgent,Z_Param_InstigatorController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRagdoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRagdoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRagdollWithBlend) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRagdollWithBlend(Z_Param_BlendDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopHealthRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtraTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopHealthRegen(Z_Param_ExtraTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtraTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRegen(Z_Param_ExtraTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Suicide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_GET_UBOOL(Z_Param_bIsAbsolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Val,Z_Param_bIsAbsolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnAtRate(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnNotAbsolute) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnNotAbsolute(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHighlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_DamageType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_GET_OBJECT(AActor,Z_Param_Source); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ModifyDamage_Implementation(Z_Param_DamageAmount,EMordhauDamageType(Z_Param_DamageType),Z_Param_Out_HitInfo,Z_Param_Source,Z_Param_Agent,Z_Param_EventInstigator); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_Team_Implementation(); \
	virtual float ModifyDamage_Implementation(float DamageAmount, EMordhauDamageType DamageType, FHitResult const& HitInfo, AActor* Source, AActor* Agent, AController* EventInstigator); \
 \
	DECLARE_FUNCTION(execGetAdditiveOverrideType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAdditiveOverrideType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArmorTierForBone) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetArmorTierForBone(Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditiveOverrideTypeNormalizedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAdditiveOverrideTypeNormalizedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceIntoSmokeField) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceIntoSmokeField(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceIntoSmokeFieldSmoothed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceIntoSmokeFieldSmoothed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookUpValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLookUpValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutOfBoundsTimeUntilDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOutOfBoundsTimeUntilDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawLookUpValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRawLookUpValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMordhauTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_DamageType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamageSubType); \
		P_GET_OBJECT(AActor,Z_Param_Source); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->MordhauTakeDamage(Z_Param_DamageAmount,Z_Param_Out_Hit,EMordhauDamageType(Z_Param_DamageType),Z_Param_DamageSubType,Z_Param_Source,Z_Param_Agent,Z_Param_EventInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Trip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBestStickyLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_GET_STRUCT(FVector,Z_Param_OutLocation); \
		P_GET_STRUCT(FVector,Z_Param_OutNormal); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OutBone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBestStickyLocation(Z_Param_Out_InLocation,Z_Param_OutLocation,Z_Param_OutNormal,Z_Param_OutBone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsBurning) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsBurning(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAirborne) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAirborne(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyControlledOrUncontrolled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlledOrUncontrolled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyPlayerControlled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocallyPlayerControlled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOutOfBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOutOfBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKnockback) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Knockback(Z_Param_Out_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayCharacterSound) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Bone); \
		P_GET_STRUCT(FVector,Z_Param_InLocation); \
		P_GET_STRUCT(FVector,Z_Param_AttachLocation); \
		P_GET_UBOOL(Z_Param_Attach); \
		P_GET_OBJECT(USoundAttenuation,Z_Param_Override); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAudioComponent**)Z_Param__Result=P_THIS->PlayCharacterSound(Z_Param_Sound,Z_Param_Bone,Z_Param_InLocation,Z_Param_AttachLocation,Z_Param_Attach,Z_Param_Override,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTurnDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTurnDegrees(Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWound) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactNormal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_DamageType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamageSubType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddWound(Z_Param_Out_ImpactPoint,Z_Param_Out_ImpactNormal,Z_Param_Out_bone,Z_Param_Agent,EMordhauDamageType(Z_Param_DamageType),Z_Param_DamageSubType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignNetDamage) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InSubType); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InBone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPoint); \
		P_GET_UBOOL(Z_Param_bInWillKill); \
		P_GET_UBOOL(Z_Param_bInSimulateFlinch); \
		P_GET_UBOOL(Z_Param_bInIDBit); \
		P_GET_OBJECT(AActor,Z_Param_InDamageSource); \
		P_GET_OBJECT(AActor,Z_Param_InDamageAgent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignNetDamage(Z_Param_InType,Z_Param_InSubType,Z_Param_InBone,Z_Param_Out_InPoint,Z_Param_bInWillKill,Z_Param_bInSimulateFlinch,Z_Param_bInIDBit,Z_Param_InDamageSource,Z_Param_InDamageAgent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginFlinchAdditiveOverride) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_FlinchOverrideName); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_AltFlinchOverrideName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Degree); \
		P_GET_UBOOL(Z_Param_bIsHead); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SnapDegreeToSteps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginFlinchAdditiveOverride(Z_Param_Out_FlinchOverrideName,Z_Param_Out_AltFlinchOverrideName,Z_Param_Duration,Z_Param_Degree,Z_Param_bIsHead,Z_Param_SnapDegreeToSteps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDouseFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DouseFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnteredOutOfBoundsArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnteredOutOfBoundsArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Highlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionStart) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionStart(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftOutOfBoundsArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeftOutOfBoundsArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_GET_UBOOL(Z_Param_bIsAbsolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_Val,Z_Param_bIsAbsolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUpAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUpAtRate(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUpNotAbsolute) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUpNotAbsolute(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOffsetHealth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_UBOOL(Z_Param_bReplicate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OffsetHealth(Z_Param_Amount,Z_Param_bReplicate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_NetDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NetDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCharacterFlags) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedCharacterFlags(Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedLookUpValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedLookUpValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpawnTurnValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SpawnTurnValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Team) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Team_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayHitEffectParticle) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_UBOOL(Z_Param_bFindOptimalSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayHitEffectParticle(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_bone,Z_Param_bFindOptimalSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterMaterialToDissolve) \
	{ \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Mat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterMaterialToDissolve(Z_Param_Mat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReplicateHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReplicateHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMeshEnablePhysics) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestMeshEnablePhysics(Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSuicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestSuicide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestTrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestTrip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAdditiveOverrideType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAdditiveOverrideType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLagInductionTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLagInductionTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLocationLagInductionTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLocationLagInductionTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetLookLagInductionTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetLookLagInductionTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAdditiveOverrideType) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NewType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAdditiveOverrideType(Z_Param_Out_NewType,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsRagdollFalling) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsRagdollFalling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsRagdollFalling(Z_Param_bInIsRagdollFalling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocationLagInductionTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ChangeSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLocationLagInductionTarget(Z_Param_Amount,Z_Param_ChangeSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLookLagInductionTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ChangeSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLookLagInductionTarget(Z_Param_Amount,Z_Param_ChangeSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnFire) \
	{ \
		P_GET_OBJECT(AMasterField,Z_Param_FireField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnFire(Z_Param_FireField); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnSmoke) \
	{ \
		P_GET_OBJECT(AMasterField,Z_Param_SmokeField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnSmoke(Z_Param_SmokeField); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartBurning) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Tick); \
		P_GET_OBJECT(AActor,Z_Param_DamageAgent); \
		P_GET_OBJECT(AController,Z_Param_InstigatorController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartBurning(Z_Param_Duration,Z_Param_Damage,Z_Param_Tick,Z_Param_DamageAgent,Z_Param_InstigatorController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRagdoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRagdoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRagdollWithBlend) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRagdollWithBlend(Z_Param_BlendDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopHealthRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtraTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopHealthRegen(Z_Param_ExtraTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRegen) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtraTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRegen(Z_Param_ExtraTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuicide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Suicide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_GET_UBOOL(Z_Param_bIsAbsolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Val,Z_Param_bIsAbsolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnAtRate(Z_Param_Val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnNotAbsolute) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnNotAbsolute(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHighlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_GET_ENUM(EMordhauDamageType,Z_Param_DamageType); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_GET_OBJECT(AActor,Z_Param_Source); \
		P_GET_OBJECT(AActor,Z_Param_Agent); \
		P_GET_OBJECT(AController,Z_Param_EventInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ModifyDamage_Implementation(Z_Param_DamageAmount,EMordhauDamageType(Z_Param_DamageType),Z_Param_Out_HitInfo,Z_Param_Source,Z_Param_Agent,Z_Param_EventInstigator); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_EVENT_PARMS \
	struct AdvancedCharacter_eventApplyRagdollForce_Parms \
	{ \
		float Angle; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		FName bone; \
		FVector Point; \
		AActor* Source; \
		AActor* Agent; \
	}; \
	struct AdvancedCharacter_eventBPLODTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct AdvancedCharacter_eventCanBleedOutFromHit_Parms \
	{ \
		FHitResult HitResult; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		AActor* Source; \
		AActor* Agent; \
		AController* EventInstigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvancedCharacter_eventCanBleedOutFromHit_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvancedCharacter_eventCanInteract_Parms \
	{ \
		AAdvancedCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvancedCharacter_eventCanInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AdvancedCharacter_eventModifyDamage_Parms \
	{ \
		float DamageAmount; \
		EMordhauDamageType DamageType; \
		FHitResult HitInfo; \
		AActor* Source; \
		AActor* Agent; \
		AController* EventInstigator; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdvancedCharacter_eventModifyDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdvancedCharacter_eventOnAfterDied_Parms \
	{ \
		float Angle; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		FName bone; \
		FVector Point; \
		AActor* Source; \
		AActor* Agent; \
	}; \
	struct AdvancedCharacter_eventOnCosmeticHit_Parms \
	{ \
		EMordhauDamageType DamageType; \
		uint8 SubType; \
		FHitResult Hit; \
		AActor* Agent; \
	}; \
	struct AdvancedCharacter_eventOnDied_Parms \
	{ \
		float Angle; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		FName bone; \
		FVector Point; \
		AActor* Source; \
		AActor* Agent; \
	}; \
	struct AdvancedCharacter_eventOnHit_Parms \
	{ \
		AActor* Actor; \
		FName bone; \
		FVector WorldLocation; \
		uint8 Tier; \
		uint8 SurfaceType; \
	}; \
	struct AdvancedCharacter_eventOnInteractionStart_Parms \
	{ \
		AAdvancedCharacter* Character; \
	}; \
	struct AdvancedCharacter_eventOnKilled_Parms \
	{ \
		AController* EventInstigator; \
	}; \
	struct AdvancedCharacter_eventOnTookDamage_Parms \
	{ \
		bool bWillKill; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		FName bone; \
		FVector Point; \
		AActor* Source; \
		AActor* Agent; \
	}; \
	struct AdvancedCharacter_eventReceiveMordhauDamage_Parms \
	{ \
		float Damage; \
		FHitResult HitResult; \
		EMordhauDamageType DamageType; \
		uint8 SubDamageType; \
		AActor* Source; \
		AActor* Agent; \
		AController* EventInstigator; \
	}; \
	struct AdvancedCharacter_eventServerLookUp_Parms \
	{ \
		float NewLookUp; \
	};


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvancedCharacter(); \
	friend struct Z_Construct_UClass_AAdvancedCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvancedCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedCharacter)


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAdvancedCharacter(); \
	friend struct Z_Construct_UClass_AAdvancedCharacter_Statics; \
public: \
	DECLARE_CLASS(AAdvancedCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedCharacter)


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvancedCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvancedCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvancedCharacter(AAdvancedCharacter&&); \
	NO_API AAdvancedCharacter(const AAdvancedCharacter&); \
public:


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvancedCharacter(AAdvancedCharacter&&); \
	NO_API AAdvancedCharacter(const AAdvancedCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvancedCharacter)


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_AdvancedCharacter_h_16_PROLOG \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_EVENT_PARMS


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_INCLASS \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_AdvancedCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_AdvancedCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_AdvancedCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
