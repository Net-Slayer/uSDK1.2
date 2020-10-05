// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MORDHAU_Horse_generated_h
#error "Horse.generated.h already included, missing '#pragma once' in Horse.h"
#endif
#define MORDHAU_Horse_generated_h

#define Mordhau_Source_Mordhau_Horse_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedRearing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedRearing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateBumpDamage) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OurWorldVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateBumpDamage(Z_Param_Out_OurWorldVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInRearingMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInRearingMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBumpCapsuleOverlapped) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBumpCapsuleOverlapped(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Rearing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Rearing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRearing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRearing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryTurnNotAbsolute) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryTurnNotAbsolute(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_Horse_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedRearing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedRearing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateBumpDamage) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OurWorldVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateBumpDamage(Z_Param_Out_OurWorldVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInRearingMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInRearingMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBumpCapsuleOverlapped) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBumpCapsuleOverlapped(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Rearing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Rearing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRearing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRearing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryTurnNotAbsolute) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryTurnNotAbsolute(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_Horse_h_16_EVENT_PARMS
#define Mordhau_Source_Mordhau_Horse_h_16_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_Horse_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorse(); \
	friend struct Z_Construct_UClass_AHorse_Statics; \
public: \
	DECLARE_CLASS(AHorse, AMordhauVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AHorse)


#define Mordhau_Source_Mordhau_Horse_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHorse(); \
	friend struct Z_Construct_UClass_AHorse_Statics; \
public: \
	DECLARE_CLASS(AHorse, AMordhauVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AHorse)


#define Mordhau_Source_Mordhau_Horse_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHorse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHorse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorse(AHorse&&); \
	NO_API AHorse(const AHorse&); \
public:


#define Mordhau_Source_Mordhau_Horse_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorse(AHorse&&); \
	NO_API AHorse(const AHorse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHorse)


#define Mordhau_Source_Mordhau_Horse_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_Horse_h_13_PROLOG \
	Mordhau_Source_Mordhau_Horse_h_16_EVENT_PARMS


#define Mordhau_Source_Mordhau_Horse_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_Horse_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_Horse_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_Horse_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_Horse_h_16_INCLASS \
	Mordhau_Source_Mordhau_Horse_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_Horse_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_Horse_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_Horse_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_Horse_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_Horse_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_Horse_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_Horse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
