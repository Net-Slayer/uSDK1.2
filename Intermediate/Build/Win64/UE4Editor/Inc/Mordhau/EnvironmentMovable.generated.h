// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FVector;
#ifdef MORDHAU_EnvironmentMovable_generated_h
#error "EnvironmentMovable.generated.h already included, missing '#pragma once' in EnvironmentMovable.h"
#endif
#define MORDHAU_EnvironmentMovable_generated_h

#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeMovable) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InSwayingComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRollPitchYawFrequency); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRollPitchYawMagnitude); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRollPitchYawSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeMovable(Z_Param_InSwayingComponent,Z_Param_Out_InRollPitchYawFrequency,Z_Param_Out_InRollPitchYawMagnitude,Z_Param_Out_InRollPitchYawSpeed); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeMovable) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InSwayingComponent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRollPitchYawFrequency); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRollPitchYawMagnitude); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRollPitchYawSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeMovable(Z_Param_InSwayingComponent,Z_Param_Out_InRollPitchYawFrequency,Z_Param_Out_InRollPitchYawMagnitude,Z_Param_Out_InRollPitchYawSpeed); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnvironmentMovable(); \
	friend struct Z_Construct_UClass_AEnvironmentMovable_Statics; \
public: \
	DECLARE_CLASS(AEnvironmentMovable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AEnvironmentMovable)


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnvironmentMovable(); \
	friend struct Z_Construct_UClass_AEnvironmentMovable_Statics; \
public: \
	DECLARE_CLASS(AEnvironmentMovable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AEnvironmentMovable)


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnvironmentMovable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnvironmentMovable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnvironmentMovable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnvironmentMovable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnvironmentMovable(AEnvironmentMovable&&); \
	NO_API AEnvironmentMovable(const AEnvironmentMovable&); \
public:


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnvironmentMovable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnvironmentMovable(AEnvironmentMovable&&); \
	NO_API AEnvironmentMovable(const AEnvironmentMovable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnvironmentMovable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnvironmentMovable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnvironmentMovable)


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_EnvironmentMovable_h_10_PROLOG
#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_INCLASS \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_EnvironmentMovable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_EnvironmentMovable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_EnvironmentMovable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
