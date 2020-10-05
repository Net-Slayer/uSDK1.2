// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
#ifdef MORDHAU_MordhauPlayerState_generated_h
#error "MordhauPlayerState.generated.h already included, missing '#pragma once' in MordhauPlayerState.h"
#endif
#define MORDHAU_MordhauPlayerState_generated_h

#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAssists) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAssists(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDeaths) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDeaths(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddKills) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddKills(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddScore(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Assists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Assists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DeathsAndFlags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DeathsAndFlags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Kills) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Kills(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Team) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Team(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerName(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanPlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BanDuration); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BanReason); \
		P_GET_UBOOL(Z_Param_bIsGlobalBan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BanPlayer(Z_Param_BanDuration,Z_Param_BanReason,Z_Param_bIsGlobalBan); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAssists) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAssists(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDeaths) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDeaths(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddKills) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddKills(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddScore(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Assists) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Assists(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DeathsAndFlags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DeathsAndFlags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Kills) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Kills(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Team) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Team(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayerName(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanPlayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BanDuration); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BanReason); \
		P_GET_UBOOL(Z_Param_bIsGlobalBan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BanPlayer(Z_Param_BanDuration,Z_Param_BanReason,Z_Param_bIsGlobalBan); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauPlayerState(); \
	friend struct Z_Construct_UClass_AMordhauPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMordhauPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauPlayerState)


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauPlayerState(); \
	friend struct Z_Construct_UClass_AMordhauPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMordhauPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauPlayerState)


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauPlayerState(AMordhauPlayerState&&); \
	NO_API AMordhauPlayerState(const AMordhauPlayerState&); \
public:


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauPlayerState(AMordhauPlayerState&&); \
	NO_API AMordhauPlayerState(const AMordhauPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauPlayerState)


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauPlayerState_h_13_PROLOG
#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
