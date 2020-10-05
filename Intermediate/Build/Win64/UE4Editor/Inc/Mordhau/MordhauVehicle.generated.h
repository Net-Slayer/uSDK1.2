// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauCharacter;
class UAttackMotion;
struct FTransform;
struct FVehicleTransitionInfo;
struct FPOV;
class UMordhauAnimInstance;
#ifdef MORDHAU_MordhauVehicle_generated_h
#error "MordhauVehicle.generated.h already included, missing '#pragma once' in MordhauVehicle.h"
#endif
#define MORDHAU_MordhauVehicle_generated_h

#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_RPC_WRAPPERS \
	virtual void SetDriver_Implementation(AMordhauCharacter* NewDriver); \
	virtual void OnStartedDriving_Implementation(AMordhauCharacter* Character); \
	virtual void OnStoppedDriving_Implementation(AMordhauCharacter* Character); \
	virtual float OverrideAttackAngle_Implementation(UAttackMotion* Motion); \
	virtual void RequestUse_Implementation(); \
	virtual bool CanDrive_Implementation(AMordhauCharacter* Character); \
	virtual void DriverLateTick_Implementation(AMordhauCharacter* FromDriver, float DeltaTime); \
	virtual FTransform GetExitTransform_Implementation(); \
	virtual FVehicleTransitionInfo GetVehicleEnterInfo_Implementation(AMordhauCharacter* Character, FTransform const& FromTransform); \
	virtual FVehicleTransitionInfo GetVehicleLeaveInfo_Implementation(AMordhauCharacter* Character, FTransform const& FromTransform); \
	virtual void OnDriverChanged_Implementation(); \
	virtual void KnockOffDriver_Implementation(AMordhauCharacter* Character); \
	virtual void UpdateFPCameraFor_Implementation(AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly); \
 \
	DECLARE_FUNCTION(execSetDriver) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_NewDriver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDriver_Implementation(Z_Param_NewDriver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartedDriving) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartedDriving_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStoppedDriving) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStoppedDriving_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAttackAngle) \
	{ \
		P_GET_OBJECT(UAttackMotion,Z_Param_Motion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OverrideAttackAngle_Implementation(Z_Param_Motion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDrive) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDrive_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDriverLateTick) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_FromDriver); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DriverLateTick_Implementation(Z_Param_FromDriver,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExitTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetExitTransform_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleEnterInfo) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FromTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVehicleTransitionInfo*)Z_Param__Result=P_THIS->GetVehicleEnterInfo_Implementation(Z_Param_Character,Z_Param_Out_FromTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleLeaveInfo) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FromTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVehicleTransitionInfo*)Z_Param__Result=P_THIS->GetVehicleLeaveInfo_Implementation(Z_Param_Character,Z_Param_Out_FromTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDriverChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDriverChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKnockOffDriver) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KnockOffDriver_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateFPCameraFor) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_UBOOL(Z_Param_bRotationOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateFPCameraFor_Implementation(Z_Param_Character,Z_Param_DeltaSeconds,Z_Param_bRotationOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SecondaryTurnValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SecondaryTurnValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bIsAbsolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryTurn(Z_Param_Value,Z_Param_bIsAbsolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryTurnAtRate(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSecondaryTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTurn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ServerSecondaryTurn(Z_Param_NewTurn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDriving) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartDriving(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDriving(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetDriver_Implementation(AMordhauCharacter* NewDriver); \
	virtual void OnStartedDriving_Implementation(AMordhauCharacter* Character); \
	virtual void OnStoppedDriving_Implementation(AMordhauCharacter* Character); \
	virtual float OverrideAttackAngle_Implementation(UAttackMotion* Motion); \
	virtual void RequestUse_Implementation(); \
	virtual bool CanDrive_Implementation(AMordhauCharacter* Character); \
	virtual void DriverLateTick_Implementation(AMordhauCharacter* FromDriver, float DeltaTime); \
	virtual FTransform GetExitTransform_Implementation(); \
	virtual FVehicleTransitionInfo GetVehicleEnterInfo_Implementation(AMordhauCharacter* Character, FTransform const& FromTransform); \
	virtual FVehicleTransitionInfo GetVehicleLeaveInfo_Implementation(AMordhauCharacter* Character, FTransform const& FromTransform); \
	virtual void OnDriverChanged_Implementation(); \
	virtual void KnockOffDriver_Implementation(AMordhauCharacter* Character); \
	virtual void UpdateFPCameraFor_Implementation(AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly); \
 \
	DECLARE_FUNCTION(execSetDriver) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_NewDriver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDriver_Implementation(Z_Param_NewDriver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartedDriving) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartedDriving_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStoppedDriving) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStoppedDriving_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAttackAngle) \
	{ \
		P_GET_OBJECT(UAttackMotion,Z_Param_Motion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OverrideAttackAngle_Implementation(Z_Param_Motion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDrive) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDrive_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDriverLateTick) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_FromDriver); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DriverLateTick_Implementation(Z_Param_FromDriver,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExitTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetExitTransform_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleEnterInfo) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FromTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVehicleTransitionInfo*)Z_Param__Result=P_THIS->GetVehicleEnterInfo_Implementation(Z_Param_Character,Z_Param_Out_FromTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVehicleLeaveInfo) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_FromTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVehicleTransitionInfo*)Z_Param__Result=P_THIS->GetVehicleLeaveInfo_Implementation(Z_Param_Character,Z_Param_Out_FromTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDriverChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDriverChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKnockOffDriver) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KnockOffDriver_Implementation(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateFPCameraFor) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_GET_UBOOL(Z_Param_bRotationOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateFPCameraFor_Implementation(Z_Param_Character,Z_Param_DeltaSeconds,Z_Param_bRotationOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SecondaryTurnValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SecondaryTurnValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL(Z_Param_bIsAbsolute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryTurn(Z_Param_Value,Z_Param_bIsAbsolute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryTurnAtRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryTurnAtRate(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSecondaryTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTurn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ServerSecondaryTurn(Z_Param_NewTurn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDriving) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartDriving(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDriving(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_EVENT_PARMS \
	struct MordhauVehicle_eventCanDrive_Parms \
	{ \
		AMordhauCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauVehicle_eventCanDrive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauVehicle_eventDriverLateTick_Parms \
	{ \
		AMordhauCharacter* FromDriver; \
		float DeltaTime; \
	}; \
	struct MordhauVehicle_eventGetExitTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct MordhauVehicle_eventGetVehicleEnterInfo_Parms \
	{ \
		AMordhauCharacter* Character; \
		FTransform FromTransform; \
		FVehicleTransitionInfo ReturnValue; \
	}; \
	struct MordhauVehicle_eventGetVehicleLeaveInfo_Parms \
	{ \
		AMordhauCharacter* Character; \
		FTransform FromTransform; \
		FVehicleTransitionInfo ReturnValue; \
	}; \
	struct MordhauVehicle_eventKnockOffDriver_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauVehicle_eventOnStartedDriving_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauVehicle_eventOnStoppedDriving_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauVehicle_eventOverrideAttackAngle_Parms \
	{ \
		UAttackMotion* Motion; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauVehicle_eventOverrideAttackAngle_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MordhauVehicle_eventPostProcessCameraPOV_Parms \
	{ \
		FPOV InPOV; \
		FPOV ReturnValue; \
	}; \
	struct MordhauVehicle_eventSetDriver_Parms \
	{ \
		AMordhauCharacter* NewDriver; \
	}; \
	struct MordhauVehicle_eventUpdateAnimationFor_Parms \
	{ \
		AMordhauCharacter* Character; \
		UMordhauAnimInstance* AnimInst; \
		float DeltaTime; \
	}; \
	struct MordhauVehicle_eventUpdateFPCameraFor_Parms \
	{ \
		AMordhauCharacter* Character; \
		float DeltaSeconds; \
		bool bRotationOnly; \
	};


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauVehicle(); \
	friend struct Z_Construct_UClass_AMordhauVehicle_Statics; \
public: \
	DECLARE_CLASS(AMordhauVehicle, AAdvancedCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauVehicle)


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauVehicle(); \
	friend struct Z_Construct_UClass_AMordhauVehicle_Statics; \
public: \
	DECLARE_CLASS(AMordhauVehicle, AAdvancedCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauVehicle)


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauVehicle(AMordhauVehicle&&); \
	NO_API AMordhauVehicle(const AMordhauVehicle&); \
public:


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauVehicle(AMordhauVehicle&&); \
	NO_API AMordhauVehicle(const AMordhauVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauVehicle)


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauVehicle_h_38_PROLOG \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_INCLASS \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauVehicle_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauVehicle_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
