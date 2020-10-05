// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ASubField;
#ifdef MORDHAU_MasterField_generated_h
#error "MasterField.generated.h already included, missing '#pragma once' in MasterField.h"
#endif
#define MORDHAU_MasterField_generated_h

#define Mordhau_Source_Mordhau_MasterField_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeDistanceIntoField) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ComputeDistanceIntoField(Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubFields) \
	{ \
		P_GET_TARRAY_REF(ASubField*,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSubFields(Z_Param_Out_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecomputeCombinedBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecomputeCombinedBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubFieldsHidden) \
	{ \
		P_GET_UBOOL(Z_Param_bAreHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubFieldsHidden(Z_Param_bAreHidden); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MasterField_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeDistanceIntoField) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ComputeDistanceIntoField(Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubFields) \
	{ \
		P_GET_TARRAY_REF(ASubField*,Z_Param_Out_ReturnValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSubFields(Z_Param_Out_ReturnValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecomputeCombinedBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecomputeCombinedBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubFieldsHidden) \
	{ \
		P_GET_UBOOL(Z_Param_bAreHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubFieldsHidden(Z_Param_bAreHidden); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MasterField_h_12_EVENT_PARMS
#define Mordhau_Source_Mordhau_MasterField_h_12_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MasterField_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterField(); \
	friend struct Z_Construct_UClass_AMasterField_Statics; \
public: \
	DECLARE_CLASS(AMasterField, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMasterField)


#define Mordhau_Source_Mordhau_MasterField_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMasterField(); \
	friend struct Z_Construct_UClass_AMasterField_Statics; \
public: \
	DECLARE_CLASS(AMasterField, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMasterField)


#define Mordhau_Source_Mordhau_MasterField_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterField(AMasterField&&); \
	NO_API AMasterField(const AMasterField&); \
public:


#define Mordhau_Source_Mordhau_MasterField_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterField(AMasterField&&); \
	NO_API AMasterField(const AMasterField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterField); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterField)


#define Mordhau_Source_Mordhau_MasterField_h_12_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MasterField_h_9_PROLOG \
	Mordhau_Source_Mordhau_MasterField_h_12_EVENT_PARMS


#define Mordhau_Source_Mordhau_MasterField_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MasterField_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MasterField_h_12_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MasterField_h_12_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MasterField_h_12_INCLASS \
	Mordhau_Source_Mordhau_MasterField_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MasterField_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MasterField_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MasterField_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MasterField_h_12_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MasterField_h_12_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MasterField_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MasterField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
