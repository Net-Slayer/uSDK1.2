// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_AdvancedCharacterAnimInstance_generated_h
#error "AdvancedCharacterAnimInstance.generated.h already included, missing '#pragma once' in AdvancedCharacterAnimInstance.h"
#endif
#define MORDHAU_AdvancedCharacterAnimInstance_generated_h

#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoFootstep) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Limb); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoFootstep(Z_Param_Limb); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFootstep) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Limb); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SurfaceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFootstep(Z_Param_Limb,Z_Param_SurfaceType); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoFootstep) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Limb); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoFootstep(Z_Param_Limb); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFootstep) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Limb); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SurfaceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFootstep(Z_Param_Limb,Z_Param_SurfaceType); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAdvancedCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedCharacterAnimInstance)


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UAdvancedCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UAdvancedCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedCharacterAnimInstance)


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedCharacterAnimInstance(UAdvancedCharacterAnimInstance&&); \
	NO_API UAdvancedCharacterAnimInstance(const UAdvancedCharacterAnimInstance&); \
public:


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedCharacterAnimInstance(UAdvancedCharacterAnimInstance&&); \
	NO_API UAdvancedCharacterAnimInstance(const UAdvancedCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedCharacterAnimInstance)


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_12_PROLOG
#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_INCLASS \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_AdvancedCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
