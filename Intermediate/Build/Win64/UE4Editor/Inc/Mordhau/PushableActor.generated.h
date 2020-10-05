// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_PushableActor_generated_h
#error "PushableActor.generated.h already included, missing '#pragma once' in PushableActor.h"
#endif
#define MORDHAU_PushableActor_generated_h

#define Mordhau_Source_Mordhau_PushableActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Progress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Progress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewProgress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProgress(Z_Param_NewProgress); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_PushableActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Progress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Progress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewProgress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProgress(Z_Param_NewProgress); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_PushableActor_h_15_EVENT_PARMS \
	struct PushableActor_eventOnProgressUpdated_Parms \
	{ \
		float OldProgress; \
	};


#define Mordhau_Source_Mordhau_PushableActor_h_15_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_PushableActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPushableActor(); \
	friend struct Z_Construct_UClass_APushableActor_Statics; \
public: \
	DECLARE_CLASS(APushableActor, AMordhauActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(APushableActor)


#define Mordhau_Source_Mordhau_PushableActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPushableActor(); \
	friend struct Z_Construct_UClass_APushableActor_Statics; \
public: \
	DECLARE_CLASS(APushableActor, AMordhauActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(APushableActor)


#define Mordhau_Source_Mordhau_PushableActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APushableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APushableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APushableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APushableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APushableActor(APushableActor&&); \
	NO_API APushableActor(const APushableActor&); \
public:


#define Mordhau_Source_Mordhau_PushableActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APushableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APushableActor(APushableActor&&); \
	NO_API APushableActor(const APushableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APushableActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APushableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APushableActor)


#define Mordhau_Source_Mordhau_PushableActor_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_PushableActor_h_12_PROLOG \
	Mordhau_Source_Mordhau_PushableActor_h_15_EVENT_PARMS


#define Mordhau_Source_Mordhau_PushableActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_PushableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_PushableActor_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_PushableActor_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_PushableActor_h_15_INCLASS \
	Mordhau_Source_Mordhau_PushableActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_PushableActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_PushableActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_PushableActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_PushableActor_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_PushableActor_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_PushableActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_PushableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
