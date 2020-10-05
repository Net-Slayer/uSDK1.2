// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_MordhauSpectator_generated_h
#error "MordhauSpectator.generated.h already included, missing '#pragma once' in MordhauSpectator.h"
#endif
#define MORDHAU_MordhauSpectator_generated_h

#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsWatchingOwnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWatchingOwnDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrimarySpectatorAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrimarySpectatorAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondarySpectatorAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondarySpectatorAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchToFreeCam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchToFreeCam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTertiarySpectatorAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TertiarySpectatorAction(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsWatchingOwnDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWatchingOwnDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrimarySpectatorAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrimarySpectatorAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondarySpectatorAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondarySpectatorAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchToFreeCam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchToFreeCam(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTertiarySpectatorAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TertiarySpectatorAction(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauSpectator(); \
	friend struct Z_Construct_UClass_AMordhauSpectator_Statics; \
public: \
	DECLARE_CLASS(AMordhauSpectator, ASpectatorPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauSpectator)


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauSpectator(); \
	friend struct Z_Construct_UClass_AMordhauSpectator_Statics; \
public: \
	DECLARE_CLASS(AMordhauSpectator, ASpectatorPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauSpectator)


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauSpectator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauSpectator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauSpectator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauSpectator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauSpectator(AMordhauSpectator&&); \
	NO_API AMordhauSpectator(const AMordhauSpectator&); \
public:


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauSpectator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauSpectator(AMordhauSpectator&&); \
	NO_API AMordhauSpectator(const AMordhauSpectator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauSpectator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauSpectator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauSpectator)


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauSpectator_h_12_PROLOG
#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_INCLASS \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauSpectator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauSpectator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauSpectator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
