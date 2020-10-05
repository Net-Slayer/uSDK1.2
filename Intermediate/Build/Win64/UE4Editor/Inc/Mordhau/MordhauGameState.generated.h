// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AMapCameraActor;
struct FTransform;
class USkeletalMesh;
class AParticleSystemActor;
class AMordhauPlayerState;
class AAdvancedCharacter;
class UMordhauStats;
class UObject;
struct FStatInt;
struct FLinearColor;
class AController;
class AActor;
#ifdef MORDHAU_MordhauGameState_generated_h
#error "MordhauGameState.generated.h already included, missing '#pragma once' in MordhauGameState.h"
#endif
#define MORDHAU_MordhauGameState_generated_h

#define Mordhau_Source_Mordhau_MordhauGameState_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturePointGroup_Statics; \
	MORDHAU_API static class UScriptStruct* StaticStruct();


#define Mordhau_Source_Mordhau_MordhauGameState_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmpty_array_Statics; \
	MORDHAU_API static class UScriptStruct* StaticStruct();


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAppropriateMapCameraActor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMapCameraActor**)Z_Param__Result=P_THIS->GetAppropriateMapCameraActor(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindPoseTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_transformTmp); \
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBindPoseTransform(Z_Param_Out_transformTmp,Z_Param_Mesh,Z_Param_Out_SocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentCacheHash) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Skin); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part3); \
		P_GET_UBOOL(Z_Param_bUseAuxiliaryMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEquipmentCacheHash(Z_Param_ID,Z_Param_Skin,Z_Param_Part1,Z_Param_Part2,Z_Param_Part3,Z_Param_bUseAuxiliaryMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStoreEquipmentMeshInCache) \
	{ \
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Skin); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part3); \
		P_GET_UBOOL(Z_Param_bUseAuxiliaryMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StoreEquipmentMeshInCache(Z_Param_Mesh,Z_Param_ID,Z_Param_Skin,Z_Param_Part1,Z_Param_Part2,Z_Param_Part3,Z_Param_bUseAuxiliaryMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentMeshFromCache) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Skin); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part3); \
		P_GET_UBOOL(Z_Param_bUseAuxiliaryMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetEquipmentMeshFromCache(Z_Param_ID,Z_Param_Skin,Z_Param_Part1,Z_Param_Part2,Z_Param_Part3,Z_Param_bUseAuxiliaryMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterParticleSystemActor) \
	{ \
		P_GET_OBJECT(AParticleSystemActor,Z_Param_ParticleActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterParticleSystemActor(Z_Param_ParticleActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterParticleSystemActor) \
	{ \
		P_GET_OBJECT(AParticleSystemActor,Z_Param_ParticleActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterParticleSystemActor(Z_Param_ParticleActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayerJoinTeam) \
	{ \
		P_GET_OBJECT(AMordhauPlayerState,Z_Param_Player); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPlayerJoinTeam(Z_Param_Player,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterByDistanceRank) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DistanceRank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvancedCharacter**)Z_Param__Result=P_THIS->GetCharacterByDistanceRank(Z_Param_DistanceRank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentFrame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerCountsPerTeam) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_ReturnValue); \
		P_GET_UBOOL(Z_Param_bOnlyLiving); \
		P_GET_UBOOL(Z_Param_bOnlyWithValidProfiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPlayerCountsPerTeam(Z_Param_Out_ReturnValue,Z_Param_bOnlyLiving,Z_Param_bOnlyWithValidProfiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCharacterFromDistanceArray) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCharacterFromDistanceArray(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReserveCharacterRagdoll) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReserveCharacterRagdoll(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldPaintGearWithTeamColors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldPaintGearWithTeamColors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldTickAnimationThisFrame) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldTickAnimationThisFrame(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldTickThisFrame) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldTickThisFrame(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCapturePointData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCapturePointData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncrementIntStatValueChecked) \
	{ \
		P_GET_OBJECT(UMordhauStats,Z_Param_Target); \
		P_GET_OBJECT(UObject,Z_Param_World); \
		P_GET_STRUCT(FStatInt,Z_Param_Stat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementIntStatValueChecked(Z_Param_Target,Z_Param_World,Z_Param_Stat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeamName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTeamName(Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryTeamColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryTeamColor(Z_Param_Team); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAppropriateMapCameraActor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMapCameraActor**)Z_Param__Result=P_THIS->GetAppropriateMapCameraActor(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindPoseTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_transformTmp); \
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBindPoseTransform(Z_Param_Out_transformTmp,Z_Param_Mesh,Z_Param_Out_SocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentCacheHash) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Skin); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part3); \
		P_GET_UBOOL(Z_Param_bUseAuxiliaryMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEquipmentCacheHash(Z_Param_ID,Z_Param_Skin,Z_Param_Part1,Z_Param_Part2,Z_Param_Part3,Z_Param_bUseAuxiliaryMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStoreEquipmentMeshInCache) \
	{ \
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Skin); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part3); \
		P_GET_UBOOL(Z_Param_bUseAuxiliaryMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StoreEquipmentMeshInCache(Z_Param_Mesh,Z_Param_ID,Z_Param_Skin,Z_Param_Part1,Z_Param_Part2,Z_Param_Part3,Z_Param_bUseAuxiliaryMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentMeshFromCache) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Skin); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part2); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Part3); \
		P_GET_UBOOL(Z_Param_bUseAuxiliaryMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetEquipmentMeshFromCache(Z_Param_ID,Z_Param_Skin,Z_Param_Part1,Z_Param_Part2,Z_Param_Part3,Z_Param_bUseAuxiliaryMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterParticleSystemActor) \
	{ \
		P_GET_OBJECT(AParticleSystemActor,Z_Param_ParticleActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterParticleSystemActor(Z_Param_ParticleActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterParticleSystemActor) \
	{ \
		P_GET_OBJECT(AParticleSystemActor,Z_Param_ParticleActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterParticleSystemActor(Z_Param_ParticleActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanPlayerJoinTeam) \
	{ \
		P_GET_OBJECT(AMordhauPlayerState,Z_Param_Player); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanPlayerJoinTeam(Z_Param_Player,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterByDistanceRank) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_DistanceRank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AAdvancedCharacter**)Z_Param__Result=P_THIS->GetCharacterByDistanceRank(Z_Param_DistanceRank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentFrame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerCountsPerTeam) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_ReturnValue); \
		P_GET_UBOOL(Z_Param_bOnlyLiving); \
		P_GET_UBOOL(Z_Param_bOnlyWithValidProfiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPlayerCountsPerTeam(Z_Param_Out_ReturnValue,Z_Param_bOnlyLiving,Z_Param_bOnlyWithValidProfiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCharacterFromDistanceArray) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCharacterFromDistanceArray(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReserveCharacterRagdoll) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReserveCharacterRagdoll(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldPaintGearWithTeamColors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldPaintGearWithTeamColors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldTickAnimationThisFrame) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldTickAnimationThisFrame(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldTickThisFrame) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldTickThisFrame(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCapturePointData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCapturePointData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncrementIntStatValueChecked) \
	{ \
		P_GET_OBJECT(UMordhauStats,Z_Param_Target); \
		P_GET_OBJECT(UObject,Z_Param_World); \
		P_GET_STRUCT(FStatInt,Z_Param_Stat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementIntStatValueChecked(Z_Param_Target,Z_Param_World,Z_Param_Stat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeamName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetTeamName(Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryTeamColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryTeamColor(Z_Param_Team); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_EVENT_PARMS \
	struct MordhauGameState_eventCanImmediatelyChangeProfile_Parms \
	{ \
		AController* Controller; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameState_eventCanImmediatelyChangeProfile_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameState_eventGetTeamColor_Parms \
	{ \
		int32 Team; \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameState_eventGetTeamColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct MordhauGameState_eventIsFriendly_Parms \
	{ \
		AActor* ActorA; \
		AActor* ActorB; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameState_eventIsFriendly_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauGameState_eventShouldBlockPawnInput_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauGameState_eventShouldBlockPawnInput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauGameState_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauGameState(); \
	friend struct Z_Construct_UClass_AMordhauGameState_Statics; \
public: \
	DECLARE_CLASS(AMordhauGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauGameState(); \
	friend struct Z_Construct_UClass_AMordhauGameState_Statics; \
public: \
	DECLARE_CLASS(AMordhauGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauGameState(AMordhauGameState&&); \
	NO_API AMordhauGameState(const AMordhauGameState&); \
public:


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauGameState(AMordhauGameState&&); \
	NO_API AMordhauGameState(const AMordhauGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauGameState)


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauGameState_h_30_PROLOG \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_INCLASS \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauGameState_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameState_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
