// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FStatInt;
#ifdef MORDHAU_MordhauStats_generated_h
#error "MordhauStats.generated.h already included, missing '#pragma once' in MordhauStats.h"
#endif
#define MORDHAU_MordhauStats_generated_h

#define Mordhau_Source_Mordhau_MordhauStats_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncrementIntStatValueChecked) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_STRUCT_REF(FStatInt,Z_Param_Out_Stat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementIntStatValueChecked(Z_Param_World,Z_Param_Out_Stat); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauStats_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncrementIntStatValueChecked) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_STRUCT_REF(FStatInt,Z_Param_Out_Stat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementIntStatValueChecked(Z_Param_World,Z_Param_Out_Stat); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauStats_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauStats(); \
	friend struct Z_Construct_UClass_UMordhauStats_Statics; \
public: \
	DECLARE_CLASS(UMordhauStats, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauStats)


#define Mordhau_Source_Mordhau_MordhauStats_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauStats(); \
	friend struct Z_Construct_UClass_UMordhauStats_Statics; \
public: \
	DECLARE_CLASS(UMordhauStats, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauStats)


#define Mordhau_Source_Mordhau_MordhauStats_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauStats(UMordhauStats&&); \
	NO_API UMordhauStats(const UMordhauStats&); \
public:


#define Mordhau_Source_Mordhau_MordhauStats_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauStats(UMordhauStats&&); \
	NO_API UMordhauStats(const UMordhauStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauStats)


#define Mordhau_Source_Mordhau_MordhauStats_h_44_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauStats_h_41_PROLOG
#define Mordhau_Source_Mordhau_MordhauStats_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauStats_h_44_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauStats_h_44_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauStats_h_44_INCLASS \
	Mordhau_Source_Mordhau_MordhauStats_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauStats_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauStats_h_44_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauStats_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauStats_h_44_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauStats_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
