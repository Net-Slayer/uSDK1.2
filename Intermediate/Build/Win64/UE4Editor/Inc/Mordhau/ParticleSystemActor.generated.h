// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_ParticleSystemActor_generated_h
#error "ParticleSystemActor.generated.h already included, missing '#pragma once' in ParticleSystemActor.h"
#endif
#define MORDHAU_ParticleSystemActor_generated_h

#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSparseTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SparseTick(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSparseTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SparseTick(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParticleSystemActor(); \
	friend struct Z_Construct_UClass_AParticleSystemActor_Statics; \
public: \
	DECLARE_CLASS(AParticleSystemActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AParticleSystemActor)


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParticleSystemActor(); \
	friend struct Z_Construct_UClass_AParticleSystemActor_Statics; \
public: \
	DECLARE_CLASS(AParticleSystemActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AParticleSystemActor)


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticleSystemActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticleSystemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticleSystemActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticleSystemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticleSystemActor(AParticleSystemActor&&); \
	NO_API AParticleSystemActor(const AParticleSystemActor&); \
public:


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticleSystemActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticleSystemActor(AParticleSystemActor&&); \
	NO_API AParticleSystemActor(const AParticleSystemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticleSystemActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticleSystemActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticleSystemActor)


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_ParticleSystemActor_h_9_PROLOG
#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_INCLASS \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_ParticleSystemActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_ParticleSystemActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_ParticleSystemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
