// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauCharacter;
enum class EAIFacingMode : uint8;
class AActor;
struct FVector;
class USkeletalMeshComponent;
struct FVector2D;
class AAdvancedCharacter;
struct FPerceptionInfo;
#ifdef MORDHAU_MordhauAIController_generated_h
#error "MordhauAIController.generated.h already included, missing '#pragma once' in MordhauAIController.h"
#endif
#define MORDHAU_MordhauAIController_generated_h

#define Mordhau_Source_Mordhau_MordhauAIController_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerceptionInfo_Statics; \
	MORDHAU_API static class UScriptStruct* StaticStruct();


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKthClosestOfThree) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetKthClosestOfThree(Z_Param_Idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerceivesAlly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PerceivesAlly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerceivesEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PerceivesEnemy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFacingMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAIFacingMode*)Z_Param__Result=P_THIS->GetCurrentFacingMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentlyFacingActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentlyFacingActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingMovement(Z_Param_LocationUpOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingLocation(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingBone) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelMesh); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneToFace); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DegreeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingBone(Z_Param_SkelMesh,Z_Param_Out_BoneToFace,Z_Param_LocationUpOffset,Z_Param_Out_DegreeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingActor2D) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingActor2D(Z_Param_Actor,Z_Param_LocationUpOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DegreeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingActor(Z_Param_Actor,Z_Param_LocationUpOffset,Z_Param_Out_DegreeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestVoiceCommand) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestVoiceCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshCharacterProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshCharacterProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestAlly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetClosestAlly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetClosestEnemy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllyClearanceSides) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAllyClearanceSides(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionBasedRandom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMotionBasedRandom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedAllies) \
	{ \
		P_GET_TARRAY_REF(AMordhauCharacter*,Z_Param_Out_allies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPerceivedAllies(Z_Param_Out_allies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedEnemies) \
	{ \
		P_GET_TARRAY_REF(AMordhauCharacter*,Z_Param_Out_enemies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPerceivedEnemies(Z_Param_Out_enemies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePerceptionInfo) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_InCharacter); \
		P_GET_STRUCT(FPerceptionInfo,Z_Param_PerceptionInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePerceptionInfo(Z_Param_InCharacter,Z_Param_PerceptionInfo); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKthClosestOfThree) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetKthClosestOfThree(Z_Param_Idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerceivesAlly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PerceivesAlly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerceivesEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PerceivesEnemy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFacingMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAIFacingMode*)Z_Param__Result=P_THIS->GetCurrentFacingMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentlyFacingActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentlyFacingActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingMovement(Z_Param_LocationUpOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingLocation(Z_Param_Out_WorldLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingBone) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelMesh); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneToFace); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DegreeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingBone(Z_Param_SkelMesh,Z_Param_Out_BoneToFace,Z_Param_LocationUpOffset,Z_Param_Out_DegreeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingActor2D) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingActor2D(Z_Param_Actor,Z_Param_LocationUpOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFacingActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationUpOffset); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DegreeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFacingActor(Z_Param_Actor,Z_Param_LocationUpOffset,Z_Param_Out_DegreeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestVoiceCommand) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestVoiceCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshCharacterProfile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshCharacterProfile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestAlly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetClosestAlly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetClosestEnemy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllyClearanceSides) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAllyClearanceSides(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionBasedRandom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMotionBasedRandom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedAllies) \
	{ \
		P_GET_TARRAY_REF(AMordhauCharacter*,Z_Param_Out_allies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPerceivedAllies(Z_Param_Out_allies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerceivedEnemies) \
	{ \
		P_GET_TARRAY_REF(AMordhauCharacter*,Z_Param_Out_enemies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPerceivedEnemies(Z_Param_Out_enemies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTeam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePerceptionInfo) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_InCharacter); \
		P_GET_STRUCT(FPerceptionInfo,Z_Param_PerceptionInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePerceptionInfo(Z_Param_InCharacter,Z_Param_PerceptionInfo); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_EVENT_PARMS \
	struct MordhauAIController_eventOnCharacterDiedOrDestroyed_Parms \
	{ \
		AAdvancedCharacter* AdvancedCharacter; \
	}; \
	struct MordhauAIController_eventOnStartedPerceivingCharacter_Parms \
	{ \
		AAdvancedCharacter* PerceivedCharacter; \
		FPerceptionInfo PerceptionInfo; \
	}; \
	struct MordhauAIController_eventOnStoppedPerceivingCharacter_Parms \
	{ \
		AAdvancedCharacter* PerceivedCharacter; \
		FPerceptionInfo PerceptionInfo; \
	};


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauAIController_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauAIController(); \
	friend struct Z_Construct_UClass_AMordhauAIController_Statics; \
public: \
	DECLARE_CLASS(AMordhauAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauAIController)


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauAIController(); \
	friend struct Z_Construct_UClass_AMordhauAIController_Statics; \
public: \
	DECLARE_CLASS(AMordhauAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauAIController)


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauAIController(AMordhauAIController&&); \
	NO_API AMordhauAIController(const AMordhauAIController&); \
public:


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauAIController(AMordhauAIController&&); \
	NO_API AMordhauAIController(const AMordhauAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauAIController)


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauAIController_h_47_PROLOG \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_INCLASS \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauAIController_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauAIController_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauAIController_h


#define FOREACH_ENUM_ECROWDSIMULATIONSTATE(op) \
	op(ECrowdSimulationState::Enabled) \
	op(ECrowdSimulationState::ObstacleOnly) \
	op(ECrowdSimulationState::Disabled) 
#define FOREACH_ENUM_ECROWDAVOIDANCEQUALITY(op) \
	op(ECrowdAvoidanceQuality::Low) \
	op(ECrowdAvoidanceQuality::Medium) \
	op(ECrowdAvoidanceQuality::Good) \
	op(ECrowdAvoidanceQuality::High) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
