// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauCharacter;
enum class EAttackMove : uint8;
struct FEquipmentCustomization;
class USkeletalMeshComponent;
class AMordhauProjectile;
struct FVector;
struct FRotator;
class AController;
#ifdef MORDHAU_MordhauEquipment_generated_h
#error "MordhauEquipment.generated.h already included, missing '#pragma once' in MordhauEquipment.h"
#endif
#define MORDHAU_MordhauEquipment_generated_h

#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_RPC_WRAPPERS \
	virtual void OnAmmoChanged_Implementation(); \
	virtual void OnDropped_Implementation(AMordhauCharacter* Character); \
	virtual void OnEquipped_Implementation(AMordhauCharacter* Character); \
	virtual void OnHolstered_Implementation(AMordhauCharacter* Character); \
	virtual void OnHolsteredOrDropped_Implementation(AMordhauCharacter* Character); \
	virtual void OnLoadedChanged_Implementation(); \
	virtual void OnPartsChanged_Implementation(); \
	virtual void OnPickedUp_Implementation(AMordhauCharacter* Character); \
	virtual void OnRep_Ammo_Implementation(); \
	virtual void OnRep_IsLoaded_Implementation(); \
	virtual void OnRep_IsUsingAlternateMode_Implementation(); \
	virtual void OnRep_Colors_Implementation(); \
	virtual void OnRep_Emblem_Implementation(); \
	virtual void OnRep_EmblemColors_Implementation(); \
	virtual void OnRep_PartsId_Implementation(); \
	virtual void OnRep_Pattern_Implementation(); \
	virtual void OnRep_Skin_Implementation(); \
	virtual bool OnRequestFire_Implementation(AMordhauCharacter* Character); \
	virtual bool OnRequestModeSwitch_Implementation(AMordhauCharacter* Character); \
	virtual void RequestAttack_Implementation(EAttackMove Move, float Angle); \
	virtual void EquipmentCommand_Implementation(int32 Command); \
	virtual bool ShouldShine_Implementation(); \
 \
	DECLARE_FUNCTION(execOnAmmoChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAmmoChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDropped) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDropped_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquipped) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquipped_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHolstered) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHolstered_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHolsteredOrDropped) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHolsteredOrDropped_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoadedChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoadedChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPartsChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPartsChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPickedUp) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPickedUp_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Ammo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Ammo_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsLoaded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsUsingAlternateMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsUsingAlternateMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Colors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Colors_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Emblem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Emblem_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_EmblemColors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_EmblemColors_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PartsId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PartsId_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Pattern_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Skin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Skin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRequestFire) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnRequestFire_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRequestModeSwitch) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnRequestModeSwitch_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestAttack) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestAttack_Implementation(EAttackMove(Z_Param_Move),Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPerformAttack) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPerformAttack(Z_Param_Character,EAttackMove(Z_Param_Move)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignCustomization) \
	{ \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_Customization); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomizationEmblem); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomizationEmblemColor1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomizationEmblemColor2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignCustomization(Z_Param_Out_Customization,Z_Param_CustomizationEmblem,Z_Param_CustomizationEmblemColor1,Z_Param_CustomizationEmblemColor2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBelongsToCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BelongsToCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPhysicsProxy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPhysicsProxy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipmentCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipmentCommand_Implementation(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMaxAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetCurrentMaxAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetParentCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomCustomization) \
	{ \
		P_GET_UBOOL(Z_Param_bOnlyColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEquipmentCustomization*)Z_Param__Result=P_THIS->GetRandomCustomization(Z_Param_bOnlyColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLateTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LateTick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalPlayerTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LocalPlayerTick(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildEquipment) \
	{ \
		P_GET_UBOOL(Z_Param_bDoOnlyQuickJob); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildEquipment(Z_Param_bDoOnlyQuickJob); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildIfAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildIfAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMeshRelativeTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetMeshRelativeTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestockOtherEquipmentOnCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RestockOtherEquipmentOnCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAmmo) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAmmo(Z_Param_NewAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColors) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_NewColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColors(Z_Param_NewColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLoaded(Z_Param_bNewLoaded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetParts) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_NewPartsId); \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetParts(Z_Param_NewPartsId,Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartsUseAuxiliaryMesh) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartsUseAuxiliaryMesh(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShine_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInteractionCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateInteractionCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaterial) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMaterial(Z_Param_SkeletalMeshComp); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAmmoChanged_Implementation(); \
	virtual void OnDropped_Implementation(AMordhauCharacter* Character); \
	virtual void OnEquipped_Implementation(AMordhauCharacter* Character); \
	virtual void OnHolstered_Implementation(AMordhauCharacter* Character); \
	virtual void OnHolsteredOrDropped_Implementation(AMordhauCharacter* Character); \
	virtual void OnLoadedChanged_Implementation(); \
	virtual void OnPartsChanged_Implementation(); \
	virtual void OnPickedUp_Implementation(AMordhauCharacter* Character); \
	virtual void OnRep_Ammo_Implementation(); \
	virtual void OnRep_IsLoaded_Implementation(); \
	virtual void OnRep_IsUsingAlternateMode_Implementation(); \
	virtual void OnRep_Colors_Implementation(); \
	virtual void OnRep_Emblem_Implementation(); \
	virtual void OnRep_EmblemColors_Implementation(); \
	virtual void OnRep_PartsId_Implementation(); \
	virtual void OnRep_Pattern_Implementation(); \
	virtual void OnRep_Skin_Implementation(); \
	virtual bool OnRequestFire_Implementation(AMordhauCharacter* Character); \
	virtual bool OnRequestModeSwitch_Implementation(AMordhauCharacter* Character); \
	virtual void RequestAttack_Implementation(EAttackMove Move, float Angle); \
	virtual void EquipmentCommand_Implementation(int32 Command); \
	virtual bool ShouldShine_Implementation(); \
 \
	DECLARE_FUNCTION(execOnAmmoChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAmmoChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDropped) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDropped_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquipped) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquipped_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHolstered) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHolstered_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHolsteredOrDropped) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHolsteredOrDropped_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLoadedChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLoadedChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPartsChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPartsChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPickedUp) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPickedUp_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Ammo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Ammo_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsLoaded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsUsingAlternateMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsUsingAlternateMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Colors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Colors_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Emblem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Emblem_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_EmblemColors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_EmblemColors_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PartsId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PartsId_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Pattern_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Skin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Skin_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRequestFire) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnRequestFire_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRequestModeSwitch) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnRequestModeSwitch_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestAttack) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestAttack_Implementation(EAttackMove(Z_Param_Move),Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPerformAttack) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPerformAttack(Z_Param_Character,EAttackMove(Z_Param_Move)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignCustomization) \
	{ \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_Customization); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomizationEmblem); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomizationEmblemColor1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CustomizationEmblemColor2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignCustomization(Z_Param_Out_Customization,Z_Param_CustomizationEmblem,Z_Param_CustomizationEmblemColor1,Z_Param_CustomizationEmblemColor2); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBelongsToCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BelongsToCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPhysicsProxy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPhysicsProxy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipmentCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipmentCommand_Implementation(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMaxAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetCurrentMaxAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetParentCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomCustomization) \
	{ \
		P_GET_UBOOL(Z_Param_bOnlyColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEquipmentCustomization*)Z_Param__Result=P_THIS->GetRandomCustomization(Z_Param_bOnlyColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLateTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LateTick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLocalPlayerTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LocalPlayerTick(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildEquipment) \
	{ \
		P_GET_UBOOL(Z_Param_bDoOnlyQuickJob); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildEquipment(Z_Param_bDoOnlyQuickJob); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildIfAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildIfAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetMeshRelativeTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetMeshRelativeTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestockOtherEquipmentOnCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RestockOtherEquipmentOnCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAmmo) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAmmo(Z_Param_NewAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColors) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_NewColors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColors(Z_Param_NewColors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLoaded(Z_Param_bNewLoaded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetParts) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_NewPartsId); \
		P_GET_UBOOL(Z_Param_bRebuild); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetParts(Z_Param_NewPartsId,Z_Param_bRebuild); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPartsUseAuxiliaryMesh) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPartsUseAuxiliaryMesh(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShine_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInteractionCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateInteractionCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaterial) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMaterial(Z_Param_SkeletalMeshComp); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_EVENT_PARMS \
	struct MordhauEquipment_eventAssignCustomizationToProjectile_Parms \
	{ \
		AMordhauProjectile* Projectile; \
	}; \
	struct MordhauEquipment_eventEquipmentCommand_Parms \
	{ \
		int32 Command; \
	}; \
	struct MordhauEquipment_eventFireProjectile_Parms \
	{ \
		FVector Origin; \
		FRotator Orientation; \
		AController* OwningController; \
		float ExpectedDelay; \
	}; \
	struct MordhauEquipment_eventLocalPlayerLateTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct MordhauEquipment_eventOnDropped_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauEquipment_eventOnEquipped_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauEquipment_eventOnHolstered_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauEquipment_eventOnHolsteredOrDropped_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauEquipment_eventOnPickedUp_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauEquipment_eventOnRequestFire_Parms \
	{ \
		AMordhauCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauEquipment_eventOnRequestFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauEquipment_eventOnRequestModeSwitch_Parms \
	{ \
		AMordhauCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauEquipment_eventOnRequestModeSwitch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauEquipment_eventRequestAttack_Parms \
	{ \
		EAttackMove Move; \
		float Angle; \
	}; \
	struct MordhauEquipment_eventShouldShine_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauEquipment_eventShouldShine_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauEquipment(); \
	friend struct Z_Construct_UClass_AMordhauEquipment_Statics; \
public: \
	DECLARE_CLASS(AMordhauEquipment, AMordhauActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauEquipment) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauEquipment(); \
	friend struct Z_Construct_UClass_AMordhauEquipment_Statics; \
public: \
	DECLARE_CLASS(AMordhauEquipment, AMordhauActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauEquipment) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauEquipment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauEquipment(AMordhauEquipment&&); \
	NO_API AMordhauEquipment(const AMordhauEquipment&); \
public:


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauEquipment(AMordhauEquipment&&); \
	NO_API AMordhauEquipment(const AMordhauEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMordhauEquipment)


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauEquipment_h_13_PROLOG \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauEquipment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauEquipment_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
