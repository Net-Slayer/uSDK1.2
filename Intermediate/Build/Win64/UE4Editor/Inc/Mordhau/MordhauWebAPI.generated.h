// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAuthStatus : uint8;
#ifdef MORDHAU_MordhauWebAPI_generated_h
#error "MordhauWebAPI.generated.h already included, missing '#pragma once' in MordhauWebAPI.h"
#endif
#define MORDHAU_MordhauWebAPI_generated_h

#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthenticate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Authenticate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAuthStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAuthStatus*)Z_Param__Result=P_THIS->GetAuthStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessRequestQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessRequestQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRankBackendServers) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPingedServerCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RankBackendServers(Z_Param_InPingedServerCount); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthenticate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Authenticate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAuthStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAuthStatus*)Z_Param__Result=P_THIS->GetAuthStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessRequestQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessRequestQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRankBackendServers) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPingedServerCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RankBackendServers(Z_Param_InPingedServerCount); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauWebAPI(); \
	friend struct Z_Construct_UClass_UMordhauWebAPI_Statics; \
public: \
	DECLARE_CLASS(UMordhauWebAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauWebAPI)


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauWebAPI(); \
	friend struct Z_Construct_UClass_UMordhauWebAPI_Statics; \
public: \
	DECLARE_CLASS(UMordhauWebAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauWebAPI)


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauWebAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauWebAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauWebAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauWebAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauWebAPI(UMordhauWebAPI&&); \
	NO_API UMordhauWebAPI(const UMordhauWebAPI&); \
public:


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauWebAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauWebAPI(UMordhauWebAPI&&); \
	NO_API UMordhauWebAPI(const UMordhauWebAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauWebAPI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauWebAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauWebAPI)


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauWebAPI_h_13_PROLOG
#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauWebAPI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauWebAPI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauWebAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
