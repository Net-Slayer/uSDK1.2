// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttackInfo;
enum class EAttackMove : uint8;
enum class EBlockedReason : uint8;
enum class EBlockType : uint8;
struct FHitResult;
class AActor;
struct FVector;
#ifdef MORDHAU_MordhauWeapon_generated_h
#error "MordhauWeapon.generated.h already included, missing '#pragma once' in MordhauWeapon.h"
#endif
#define MORDHAU_MordhauWeapon_generated_h

#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_RPC_WRAPPERS \
	virtual void OnAttackStarted_Implementation(EAttackMove Move, float Angle); \
	virtual void OnAttackStopped_Implementation(); \
	virtual void OnBlocked_Implementation(EBlockedReason Reason, EAttackMove Move); \
	virtual void OnBlockStarted_Implementation(EBlockType Type); \
	virtual void OnCosmeticHit_Implementation(EAttackMove Move, FHitResult const& Hit); \
	virtual void OnHit_Implementation(AActor* Actor, EAttackMove Move, FName const& bone, FVector const& WorldLocation, uint8 Tier, uint8 SurfaceType); \
	virtual void OnWasBlocked_Implementation(EBlockedReason Reason, EAttackMove Move, uint8 SurfaceType); \
	virtual bool RequestBlock_Implementation(EBlockType BlockType, bool bAllowFTP); \
 \
	DECLARE_FUNCTION(execGetBaseAttackInfo) \
	{ \
		P_GET_STRUCT_REF(FAttackInfo,Z_Param_Out_atkInfo); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBaseAttackInfo(Z_Param_Out_atkInfo,EAttackMove(Z_Param_Move)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseBloodLevel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseBloodLevel(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackStarted) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackStarted_Implementation(EAttackMove(Z_Param_Move),Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackStopped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackStopped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBlocked) \
	{ \
		P_GET_ENUM(EBlockedReason,Z_Param_Reason); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlocked_Implementation(EBlockedReason(Z_Param_Reason),EAttackMove(Z_Param_Move)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBlockStarted) \
	{ \
		P_GET_ENUM(EBlockType,Z_Param_Type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlockStarted_Implementation(EBlockType(Z_Param_Type)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCosmeticHit) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCosmeticHit_Implementation(EAttackMove(Z_Param_Move),Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Tier); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SurfaceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit_Implementation(Z_Param_Actor,EAttackMove(Z_Param_Move),Z_Param_Out_bone,Z_Param_Out_WorldLocation,Z_Param_Tier,Z_Param_SurfaceType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWasBlocked) \
	{ \
		P_GET_ENUM(EBlockedReason,Z_Param_Reason); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SurfaceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWasBlocked_Implementation(EBlockedReason(Z_Param_Reason),EAttackMove(Z_Param_Move),Z_Param_SurfaceType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestBlock) \
	{ \
		P_GET_ENUM(EBlockType,Z_Param_BlockType); \
		P_GET_UBOOL(Z_Param_bAllowFTP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestBlock_Implementation(EBlockType(Z_Param_BlockType),Z_Param_bAllowFTP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrail) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Weight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTrail(Z_Param_Weight); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAttackStarted_Implementation(EAttackMove Move, float Angle); \
	virtual void OnAttackStopped_Implementation(); \
	virtual void OnBlocked_Implementation(EBlockedReason Reason, EAttackMove Move); \
	virtual void OnBlockStarted_Implementation(EBlockType Type); \
	virtual void OnCosmeticHit_Implementation(EAttackMove Move, FHitResult const& Hit); \
	virtual void OnHit_Implementation(AActor* Actor, EAttackMove Move, FName const& bone, FVector const& WorldLocation, uint8 Tier, uint8 SurfaceType); \
	virtual void OnWasBlocked_Implementation(EBlockedReason Reason, EAttackMove Move, uint8 SurfaceType); \
	virtual bool RequestBlock_Implementation(EBlockType BlockType, bool bAllowFTP); \
 \
	DECLARE_FUNCTION(execGetBaseAttackInfo) \
	{ \
		P_GET_STRUCT_REF(FAttackInfo,Z_Param_Out_atkInfo); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBaseAttackInfo(Z_Param_Out_atkInfo,EAttackMove(Z_Param_Move)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseBloodLevel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseBloodLevel(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackStarted) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackStarted_Implementation(EAttackMove(Z_Param_Move),Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackStopped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackStopped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBlocked) \
	{ \
		P_GET_ENUM(EBlockedReason,Z_Param_Reason); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlocked_Implementation(EBlockedReason(Z_Param_Reason),EAttackMove(Z_Param_Move)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBlockStarted) \
	{ \
		P_GET_ENUM(EBlockType,Z_Param_Type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBlockStarted_Implementation(EBlockType(Z_Param_Type)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCosmeticHit) \
	{ \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCosmeticHit_Implementation(EAttackMove(Z_Param_Move),Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Tier); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SurfaceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit_Implementation(Z_Param_Actor,EAttackMove(Z_Param_Move),Z_Param_Out_bone,Z_Param_Out_WorldLocation,Z_Param_Tier,Z_Param_SurfaceType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWasBlocked) \
	{ \
		P_GET_ENUM(EBlockedReason,Z_Param_Reason); \
		P_GET_ENUM(EAttackMove,Z_Param_Move); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SurfaceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWasBlocked_Implementation(EBlockedReason(Z_Param_Reason),EAttackMove(Z_Param_Move),Z_Param_SurfaceType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestBlock) \
	{ \
		P_GET_ENUM(EBlockType,Z_Param_BlockType); \
		P_GET_UBOOL(Z_Param_bAllowFTP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestBlock_Implementation(EBlockType(Z_Param_BlockType),Z_Param_bAllowFTP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrail) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Weight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTrail(Z_Param_Weight); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_EVENT_PARMS \
	struct MordhauWeapon_eventOnAttackStarted_Parms \
	{ \
		EAttackMove Move; \
		float Angle; \
	}; \
	struct MordhauWeapon_eventOnBlocked_Parms \
	{ \
		EBlockedReason Reason; \
		EAttackMove Move; \
	}; \
	struct MordhauWeapon_eventOnBlockStarted_Parms \
	{ \
		EBlockType Type; \
	}; \
	struct MordhauWeapon_eventOnCosmeticHit_Parms \
	{ \
		EAttackMove Move; \
		FHitResult Hit; \
	}; \
	struct MordhauWeapon_eventOnHit_Parms \
	{ \
		AActor* Actor; \
		EAttackMove Move; \
		FName bone; \
		FVector WorldLocation; \
		uint8 Tier; \
		uint8 SurfaceType; \
	}; \
	struct MordhauWeapon_eventOnWasBlocked_Parms \
	{ \
		EBlockedReason Reason; \
		EAttackMove Move; \
		uint8 SurfaceType; \
	}; \
	struct MordhauWeapon_eventRequestBlock_Parms \
	{ \
		EBlockType BlockType; \
		bool bAllowFTP; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauWeapon_eventRequestBlock_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauWeapon(); \
	friend struct Z_Construct_UClass_AMordhauWeapon_Statics; \
public: \
	DECLARE_CLASS(AMordhauWeapon, AMordhauEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauWeapon(); \
	friend struct Z_Construct_UClass_AMordhauWeapon_Statics; \
public: \
	DECLARE_CLASS(AMordhauWeapon, AMordhauEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauWeapon(AMordhauWeapon&&); \
	NO_API AMordhauWeapon(const AMordhauWeapon&); \
public:


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauWeapon(AMordhauWeapon&&); \
	NO_API AMordhauWeapon(const AMordhauWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMordhauWeapon)


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauWeapon_h_14_PROLOG \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_INCLASS \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
