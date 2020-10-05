// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MORDHAU_OneDimensionalMovementComponent_generated_h
#error "OneDimensionalMovementComponent.generated.h already included, missing '#pragma once' in OneDimensionalMovementComponent.h"
#endif
#define MORDHAU_OneDimensionalMovementComponent_generated_h

#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMovementLine) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLineEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMovementLine(Z_Param_Out_NewLineStart,Z_Param_Out_NewLineEnd); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMovementLine) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLineEnd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMovementLine(Z_Param_Out_NewLineStart,Z_Param_Out_NewLineEnd); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOneDimensionalMovementComponent(); \
	friend struct Z_Construct_UClass_UOneDimensionalMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOneDimensionalMovementComponent, UAdvancedCharacterMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UOneDimensionalMovementComponent)


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOneDimensionalMovementComponent(); \
	friend struct Z_Construct_UClass_UOneDimensionalMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOneDimensionalMovementComponent, UAdvancedCharacterMovement, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UOneDimensionalMovementComponent)


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOneDimensionalMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOneDimensionalMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOneDimensionalMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOneDimensionalMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOneDimensionalMovementComponent(UOneDimensionalMovementComponent&&); \
	NO_API UOneDimensionalMovementComponent(const UOneDimensionalMovementComponent&); \
public:


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOneDimensionalMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOneDimensionalMovementComponent(UOneDimensionalMovementComponent&&); \
	NO_API UOneDimensionalMovementComponent(const UOneDimensionalMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOneDimensionalMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOneDimensionalMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOneDimensionalMovementComponent)


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_12_PROLOG
#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_INCLASS \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_OneDimensionalMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
