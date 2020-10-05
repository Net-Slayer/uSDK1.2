// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MORDHAU_HeadWearable_generated_h
#error "HeadWearable.generated.h already included, missing '#pragma once' in HeadWearable.h"
#endif
#define MORDHAU_HeadWearable_generated_h

#define Mordhau_Source_Mordhau_HeadWearable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCoifWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetCoifWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoifWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCoifWearablesNum(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_HeadWearable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCoifWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetCoifWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoifWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCoifWearablesNum(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_HeadWearable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadWearable(); \
	friend struct Z_Construct_UClass_UHeadWearable_Statics; \
public: \
	DECLARE_CLASS(UHeadWearable, UMordhauWearable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UHeadWearable)


#define Mordhau_Source_Mordhau_HeadWearable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHeadWearable(); \
	friend struct Z_Construct_UClass_UHeadWearable_Statics; \
public: \
	DECLARE_CLASS(UHeadWearable, UMordhauWearable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UHeadWearable)


#define Mordhau_Source_Mordhau_HeadWearable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadWearable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadWearable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadWearable(UHeadWearable&&); \
	NO_API UHeadWearable(const UHeadWearable&); \
public:


#define Mordhau_Source_Mordhau_HeadWearable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadWearable(UHeadWearable&&); \
	NO_API UHeadWearable(const UHeadWearable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadWearable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadWearable)


#define Mordhau_Source_Mordhau_HeadWearable_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_HeadWearable_h_12_PROLOG
#define Mordhau_Source_Mordhau_HeadWearable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_HeadWearable_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_HeadWearable_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_HeadWearable_h_15_INCLASS \
	Mordhau_Source_Mordhau_HeadWearable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_HeadWearable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_HeadWearable_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_HeadWearable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_HeadWearable_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_HeadWearable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_HeadWearable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
