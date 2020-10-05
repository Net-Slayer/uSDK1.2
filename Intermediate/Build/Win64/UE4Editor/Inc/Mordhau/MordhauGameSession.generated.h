// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FSteamID;
#ifdef MORDHAU_MordhauGameSession_generated_h
#error "MordhauGameSession.generated.h already included, missing '#pragma once' in MordhauGameSession.h"
#endif
#define MORDHAU_MordhauGameSession_generated_h

#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAdmin) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_AdminPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAdmin(Z_Param_AdminPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowJoin) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowJoin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllowJoin(Z_Param_bInAllowJoin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowsJoin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AllowsJoin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_BannedPlayer); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_BanReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BanPlayer(Z_Param_BannedPlayer,Z_Param_Out_BanReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanPlayerWithDuration) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_BannedPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BanDuration); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_BanReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BanPlayerWithDuration(Z_Param_BannedPlayer,Z_Param_BanDuration,Z_Param_Out_BanReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_KickedPlayer); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KickPlayer(Z_Param_KickedPlayer,Z_Param_Out_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAdmin) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_AdminPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAdmin(Z_Param_AdminPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerRewardDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerRewardDrop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerRewardDropForPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerRewardDropForPlayer(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbanPlayer) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnbanPlayer(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAdmin) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_AdminPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAdmin(Z_Param_AdminPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowJoin) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowJoin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllowJoin(Z_Param_bInAllowJoin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowsJoin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AllowsJoin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_BannedPlayer); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_BanReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BanPlayer(Z_Param_BannedPlayer,Z_Param_Out_BanReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanPlayerWithDuration) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_BannedPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BanDuration); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_BanReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BanPlayerWithDuration(Z_Param_BannedPlayer,Z_Param_BanDuration,Z_Param_Out_BanReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_KickedPlayer); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->KickPlayer(Z_Param_KickedPlayer,Z_Param_Out_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAdmin) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_AdminPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAdmin(Z_Param_AdminPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerRewardDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerRewardDrop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerRewardDropForPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerRewardDropForPlayer(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbanPlayer) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnbanPlayer(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauGameSession(); \
	friend struct Z_Construct_UClass_AMordhauGameSession_Statics; \
public: \
	DECLARE_CLASS(AMordhauGameSession, AGameSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauGameSession)


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauGameSession(); \
	friend struct Z_Construct_UClass_AMordhauGameSession_Statics; \
public: \
	DECLARE_CLASS(AMordhauGameSession, AGameSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauGameSession)


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauGameSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauGameSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauGameSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauGameSession(AMordhauGameSession&&); \
	NO_API AMordhauGameSession(const AMordhauGameSession&); \
public:


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauGameSession(AMordhauGameSession&&); \
	NO_API AMordhauGameSession(const AMordhauGameSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauGameSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauGameSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauGameSession)


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauGameSession_h_15_PROLOG
#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_INCLASS \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauGameSession_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameSession_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauGameSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
