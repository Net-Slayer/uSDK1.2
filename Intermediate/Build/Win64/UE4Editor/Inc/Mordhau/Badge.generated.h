// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_Badge_generated_h
#error "Badge.generated.h already included, missing '#pragma once' in Badge.h"
#endif
#define MORDHAU_Badge_generated_h

#define Mordhau_Source_Mordhau_Badge_h_15_RPC_WRAPPERS
#define Mordhau_Source_Mordhau_Badge_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Mordhau_Source_Mordhau_Badge_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBadge(); \
	friend struct Z_Construct_UClass_UBadge_Statics; \
public: \
	DECLARE_CLASS(UBadge, UMordhauInventoryItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UBadge)


#define Mordhau_Source_Mordhau_Badge_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBadge(); \
	friend struct Z_Construct_UClass_UBadge_Statics; \
public: \
	DECLARE_CLASS(UBadge, UMordhauInventoryItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UBadge)


#define Mordhau_Source_Mordhau_Badge_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBadge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBadge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBadge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBadge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBadge(UBadge&&); \
	NO_API UBadge(const UBadge&); \
public:


#define Mordhau_Source_Mordhau_Badge_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBadge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBadge(UBadge&&); \
	NO_API UBadge(const UBadge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBadge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBadge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBadge)


#define Mordhau_Source_Mordhau_Badge_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_Badge_h_12_PROLOG
#define Mordhau_Source_Mordhau_Badge_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_Badge_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_Badge_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_Badge_h_15_INCLASS \
	Mordhau_Source_Mordhau_Badge_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_Badge_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_Badge_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_Badge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_Badge_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_Badge_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_Badge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
