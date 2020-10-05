// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef MORDHAU_MordhauPlayerStart_generated_h
#error "MordhauPlayerStart.generated.h already included, missing '#pragma once' in MordhauPlayerStart.h"
#endif
#define MORDHAU_MordhauPlayerStart_generated_h

#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_RPC_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_EVENT_PARMS \
	struct MordhauPlayerStart_eventGetSpawnPreferenceFor_Parms \
	{ \
		AController* Player; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauPlayerStart_eventGetSpawnPreferenceFor_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MordhauPlayerStart_eventIsAllowedSpawnFor_Parms \
	{ \
		AController* Player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauPlayerStart_eventIsAllowedSpawnFor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauPlayerStart(); \
	friend struct Z_Construct_UClass_AMordhauPlayerStart_Statics; \
public: \
	DECLARE_CLASS(AMordhauPlayerStart, APlayerStart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauPlayerStart)


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauPlayerStart(); \
	friend struct Z_Construct_UClass_AMordhauPlayerStart_Statics; \
public: \
	DECLARE_CLASS(AMordhauPlayerStart, APlayerStart, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauPlayerStart)


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauPlayerStart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauPlayerStart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauPlayerStart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauPlayerStart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauPlayerStart(AMordhauPlayerStart&&); \
	NO_API AMordhauPlayerStart(const AMordhauPlayerStart&); \
public:


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauPlayerStart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauPlayerStart(AMordhauPlayerStart&&); \
	NO_API AMordhauPlayerStart(const AMordhauPlayerStart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauPlayerStart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauPlayerStart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauPlayerStart)


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_12_PROLOG \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_INCLASS \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauPlayerStart_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauPlayerStart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
