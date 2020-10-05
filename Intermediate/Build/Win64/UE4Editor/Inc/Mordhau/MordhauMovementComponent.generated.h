// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MORDHAU_MordhauMovementComponent_generated_h
#error "MordhauMovementComponent.generated.h already included, missing '#pragma once' in MordhauMovementComponent.h"
#endif
#define MORDHAU_MordhauMovementComponent_generated_h

#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccelerationFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeedFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeedFactor(); \
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
	DECLARE_FUNCTION(execKnockback) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Knockback(Z_Param_Out_Amount); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccelerationFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationFactor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeedFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeedFactor(); \
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
	DECLARE_FUNCTION(execKnockback) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Knockback(Z_Param_Out_Amount); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauMovementComponent(); \
	friend struct Z_Construct_UClass_UMordhauMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMordhauMovementComponent, UAdvancedCharacterMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauMovementComponent(); \
	friend struct Z_Construct_UClass_UMordhauMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMordhauMovementComponent, UAdvancedCharacterMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauMovementComponent(UMordhauMovementComponent&&); \
	NO_API UMordhauMovementComponent(const UMordhauMovementComponent&); \
public:


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauMovementComponent(UMordhauMovementComponent&&); \
	NO_API UMordhauMovementComponent(const UMordhauMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauMovementComponent)


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_27_PROLOG
#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_INCLASS \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauMovementComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
