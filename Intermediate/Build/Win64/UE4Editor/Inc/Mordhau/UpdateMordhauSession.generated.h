// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerSearchResult;
class UUpdateMordhauSession;
#ifdef MORDHAU_UpdateMordhauSession_generated_h
#error "UpdateMordhauSession.generated.h already included, missing '#pragma once' in UpdateMordhauSession.h"
#endif
#define MORDHAU_UpdateMordhauSession_generated_h

#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMordhauSession) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_Session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUpdateMordhauSession**)Z_Param__Result=UUpdateMordhauSession::UpdateMordhauSession(Z_Param_Out_Session); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMordhauSession) \
	{ \
		P_GET_STRUCT_REF(FServerSearchResult,Z_Param_Out_Session); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUpdateMordhauSession**)Z_Param__Result=UUpdateMordhauSession::UpdateMordhauSession(Z_Param_Out_Session); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateMordhauSession(); \
	friend struct Z_Construct_UClass_UUpdateMordhauSession_Statics; \
public: \
	DECLARE_CLASS(UUpdateMordhauSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UUpdateMordhauSession)


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateMordhauSession(); \
	friend struct Z_Construct_UClass_UUpdateMordhauSession_Statics; \
public: \
	DECLARE_CLASS(UUpdateMordhauSession, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UUpdateMordhauSession)


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateMordhauSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateMordhauSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateMordhauSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateMordhauSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateMordhauSession(UUpdateMordhauSession&&); \
	NO_API UUpdateMordhauSession(const UUpdateMordhauSession&); \
public:


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateMordhauSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateMordhauSession(UUpdateMordhauSession&&); \
	NO_API UUpdateMordhauSession(const UUpdateMordhauSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateMordhauSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateMordhauSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateMordhauSession)


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_13_PROLOG
#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_INCLASS \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_UpdateMordhauSession_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_UpdateMordhauSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
