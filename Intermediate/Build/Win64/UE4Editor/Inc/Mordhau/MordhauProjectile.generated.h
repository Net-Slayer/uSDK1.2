// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class AAdvancedCharacter;
struct FVector;
class AActor;
class AMordhauProjectile;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class AController;
class AMordhauCharacter;
struct FRotator;
struct FDecalInfo;
class UParticleSystem;
#ifdef MORDHAU_MordhauProjectile_generated_h
#error "MordhauProjectile.generated.h already included, missing '#pragma once' in MordhauProjectile.h"
#endif
#define MORDHAU_MordhauProjectile_generated_h

#define Mordhau_Source_Mordhau_MordhauProjectile_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileInfo_Statics; \
	MORDHAU_API static class UScriptStruct* StaticStruct();


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_RPC_WRAPPERS \
	virtual void StartTrail_Implementation(); \
	virtual void StopTrail_Implementation(); \
	virtual void ProcessProjectileHit_Implementation(bool bIsBlocking, FHitResult const& Hit); \
	virtual void OnProjectileDamagedCharacter_Implementation(AAdvancedCharacter* Character, bool bWillKill, FVector const& WorldLocation, FName const& bone); \
	virtual void OnProjectileFired_Implementation(); \
	virtual void OnProjectileHit_Implementation(FVector const& HitLocation, FVector const& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped); \
	virtual void OnProjectileHitCosmetic_Implementation(AActor* OtherActor, FHitResult const& Hit); \
	virtual void CarryOverTrail_Implementation(AMordhauProjectile* NewProjectile); \
	virtual void Fire_Implementation(); \
	virtual bool AttachProjectile_Implementation(FHitResult const& Hit); \
 \
	DECLARE_FUNCTION(execStartTrail) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTrail_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopTrail) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopTrail_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessProjectileHit) \
	{ \
		P_GET_UBOOL(Z_Param_bIsBlocking); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessProjectileHit_Implementation(Z_Param_bIsBlocking,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileDamagedCharacter) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_GET_UBOOL(Z_Param_bWillKill); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileDamagedCharacter_Implementation(Z_Param_Character,Z_Param_bWillKill,Z_Param_Out_WorldLocation,Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileFired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileFired_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileHit) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BounceForce); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Surface); \
		P_GET_UBOOL(Z_Param_bHasHitWorld); \
		P_GET_UBOOL(Z_Param_bHasStopped); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileHit_Implementation(Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_BounceForce,Z_Param_Surface,Z_Param_bHasHitWorld,Z_Param_bHasStopped); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileHitCosmetic) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileHitCosmetic_Implementation(Z_Param_OtherActor,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCarryOverTrail) \
	{ \
		P_GET_OBJECT(AMordhauProjectile,Z_Param_NewProjectile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CarryOverTrail_Implementation(Z_Param_NewProjectile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachProjectile) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AttachProjectile_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBounceComponent) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ComponentToBounce); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BounceComponent(Z_Param_ComponentToBounce,Z_Param_Out_NewVelocity,Z_Param_Out_NewAngularVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTrailParticles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystemComponent**)Z_Param__Result=P_THIS->GetCurrentTrailParticles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPercentageOfMaxVelocityClamped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPercentageOfMaxVelocityClamped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectileCreator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetProjectileCreator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectileOwningController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetProjectileOwningController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeProjectile) \
	{ \
		P_GET_OBJECT(AController,Z_Param_InOwningController); \
		P_GET_UBOOL(Z_Param_bInIsLocallyPredicted); \
		P_GET_OBJECT(AActor,Z_Param_InCreator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeProjectile(Z_Param_InOwningController,Z_Param_bInIsLocallyPredicted,Z_Param_InCreator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ProjectileInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ProjectileInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestockCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RestockCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentTrailParticles) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_ParticleSystemComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentTrailParticles(Z_Param_ParticleSystemComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FDecalInfo,Z_Param_Out_DecalInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDecal(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_DecalInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnParticles) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_OBJECT(UParticleSystem,Z_Param_System); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnParticles(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_System); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSweepProjectile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SweepProjectile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateProjectile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateProjectile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProjectileState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateProjectileState(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesProjectileBlending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesProjectileBlending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWillPassThrough) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Surface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WillPassThrough(Z_Param_Surface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWillSticky) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Surface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WillSticky(Z_Param_Surface); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartTrail_Implementation(); \
	virtual void StopTrail_Implementation(); \
	virtual void ProcessProjectileHit_Implementation(bool bIsBlocking, FHitResult const& Hit); \
	virtual void OnProjectileDamagedCharacter_Implementation(AAdvancedCharacter* Character, bool bWillKill, FVector const& WorldLocation, FName const& bone); \
	virtual void OnProjectileFired_Implementation(); \
	virtual void OnProjectileHit_Implementation(FVector const& HitLocation, FVector const& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped); \
	virtual void OnProjectileHitCosmetic_Implementation(AActor* OtherActor, FHitResult const& Hit); \
	virtual void CarryOverTrail_Implementation(AMordhauProjectile* NewProjectile); \
	virtual void Fire_Implementation(); \
	virtual bool AttachProjectile_Implementation(FHitResult const& Hit); \
 \
	DECLARE_FUNCTION(execStartTrail) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTrail_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopTrail) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopTrail_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessProjectileHit) \
	{ \
		P_GET_UBOOL(Z_Param_bIsBlocking); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessProjectileHit_Implementation(Z_Param_bIsBlocking,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileDamagedCharacter) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_GET_UBOOL(Z_Param_bWillKill); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileDamagedCharacter_Implementation(Z_Param_Character,Z_Param_bWillKill,Z_Param_Out_WorldLocation,Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileFired) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileFired_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileHit) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BounceForce); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Surface); \
		P_GET_UBOOL(Z_Param_bHasHitWorld); \
		P_GET_UBOOL(Z_Param_bHasStopped); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileHit_Implementation(Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_BounceForce,Z_Param_Surface,Z_Param_bHasHitWorld,Z_Param_bHasStopped); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnProjectileHitCosmetic) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnProjectileHitCosmetic_Implementation(Z_Param_OtherActor,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCarryOverTrail) \
	{ \
		P_GET_OBJECT(AMordhauProjectile,Z_Param_NewProjectile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CarryOverTrail_Implementation(Z_Param_NewProjectile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachProjectile) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AttachProjectile_Implementation(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBounceComponent) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_ComponentToBounce); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewAngularVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BounceComponent(Z_Param_ComponentToBounce,Z_Param_Out_NewVelocity,Z_Param_Out_NewAngularVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTrailParticles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystemComponent**)Z_Param__Result=P_THIS->GetCurrentTrailParticles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPercentageOfMaxVelocityClamped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPercentageOfMaxVelocityClamped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectileCreator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetProjectileCreator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectileOwningController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AController**)Z_Param__Result=P_THIS->GetProjectileOwningController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeProjectile) \
	{ \
		P_GET_OBJECT(AController,Z_Param_InOwningController); \
		P_GET_UBOOL(Z_Param_bInIsLocallyPredicted); \
		P_GET_OBJECT(AActor,Z_Param_InCreator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeProjectile(Z_Param_InOwningController,Z_Param_bInIsLocallyPredicted,Z_Param_InCreator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ProjectileInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ProjectileInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestockCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RestockCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentTrailParticles) \
	{ \
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_ParticleSystemComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentTrailParticles(Z_Param_ParticleSystemComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDecal) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FDecalInfo,Z_Param_Out_DecalInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDecal(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_DecalInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnParticles) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_OBJECT(UParticleSystem,Z_Param_System); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnParticles(Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_System); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSweepProjectile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SweepProjectile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateProjectile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateProjectile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProjectileState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateProjectileState(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUsesProjectileBlending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UsesProjectileBlending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWillPassThrough) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Surface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WillPassThrough(Z_Param_Surface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWillSticky) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Surface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WillSticky(Z_Param_Surface); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_EVENT_PARMS \
	struct MordhauProjectile_eventAttachProjectile_Parms \
	{ \
		FHitResult Hit; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauProjectile_eventAttachProjectile_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauProjectile_eventCarryOverTrail_Parms \
	{ \
		AMordhauProjectile* NewProjectile; \
	}; \
	struct MordhauProjectile_eventOnProjectileDamagedCharacter_Parms \
	{ \
		AAdvancedCharacter* Character; \
		bool bWillKill; \
		FVector WorldLocation; \
		FName bone; \
	}; \
	struct MordhauProjectile_eventOnProjectileHit_Parms \
	{ \
		FVector HitLocation; \
		FVector HitNormal; \
		float BounceForce; \
		uint8 Surface; \
		bool bHasHitWorld; \
		bool bHasStopped; \
	}; \
	struct MordhauProjectile_eventOnProjectileHitCosmetic_Parms \
	{ \
		AActor* OtherActor; \
		FHitResult Hit; \
	}; \
	struct MordhauProjectile_eventProcessProjectileHit_Parms \
	{ \
		bool bIsBlocking; \
		FHitResult Hit; \
	};


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauProjectile(); \
	friend struct Z_Construct_UClass_AMordhauProjectile_Statics; \
public: \
	DECLARE_CLASS(AMordhauProjectile, AMordhauActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauProjectile)


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauProjectile(); \
	friend struct Z_Construct_UClass_AMordhauProjectile_Statics; \
public: \
	DECLARE_CLASS(AMordhauProjectile, AMordhauActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauProjectile)


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauProjectile(AMordhauProjectile&&); \
	NO_API AMordhauProjectile(const AMordhauProjectile&); \
public:


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauProjectile(AMordhauProjectile&&); \
	NO_API AMordhauProjectile(const AMordhauProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMordhauProjectile)


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauProjectile_h_20_PROLOG \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_INCLASS \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauProjectile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
