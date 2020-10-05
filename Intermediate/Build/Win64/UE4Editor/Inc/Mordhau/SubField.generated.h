// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMasterField;
#ifdef MORDHAU_SubField_generated_h
#error "SubField.generated.h already included, missing '#pragma once' in SubField.h"
#endif
#define MORDHAU_SubField_generated_h

#define Mordhau_Source_Mordhau_SubField_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaster) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMasterField**)Z_Param__Result=P_THIS->GetMaster(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_SubField_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaster) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMasterField**)Z_Param__Result=P_THIS->GetMaster(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_SubField_h_12_EVENT_PARMS \
	struct SubField_eventSetSubFieldHidden_Parms \
	{ \
		bool bValue; \
	};


#define Mordhau_Source_Mordhau_SubField_h_12_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_SubField_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASubField(); \
	friend struct Z_Construct_UClass_ASubField_Statics; \
public: \
	DECLARE_CLASS(ASubField, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ASubField)


#define Mordhau_Source_Mordhau_SubField_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASubField(); \
	friend struct Z_Construct_UClass_ASubField_Statics; \
public: \
	DECLARE_CLASS(ASubField, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ASubField)


#define Mordhau_Source_Mordhau_SubField_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubField(ASubField&&); \
	NO_API ASubField(const ASubField&); \
public:


#define Mordhau_Source_Mordhau_SubField_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASubField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASubField(ASubField&&); \
	NO_API ASubField(const ASubField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASubField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASubField); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASubField)


#define Mordhau_Source_Mordhau_SubField_h_12_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_SubField_h_9_PROLOG \
	Mordhau_Source_Mordhau_SubField_h_12_EVENT_PARMS


#define Mordhau_Source_Mordhau_SubField_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_SubField_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_SubField_h_12_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_SubField_h_12_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_SubField_h_12_INCLASS \
	Mordhau_Source_Mordhau_SubField_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_SubField_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_SubField_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_SubField_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_SubField_h_12_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_SubField_h_12_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_SubField_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_SubField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
