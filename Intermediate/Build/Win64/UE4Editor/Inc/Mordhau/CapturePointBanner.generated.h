// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AControlPoint;
#ifdef MORDHAU_CapturePointBanner_generated_h
#error "CapturePointBanner.generated.h already included, missing '#pragma once' in CapturePointBanner.h"
#endif
#define MORDHAU_CapturePointBanner_generated_h

#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_RPC_WRAPPERS
#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_EVENT_PARMS \
	struct CapturePointBanner_eventInitializeBanner_Parms \
	{ \
		AControlPoint* OwningPoint; \
	};


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapturePointBanner(); \
	friend struct Z_Construct_UClass_ACapturePointBanner_Statics; \
public: \
	DECLARE_CLASS(ACapturePointBanner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ACapturePointBanner)


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACapturePointBanner(); \
	friend struct Z_Construct_UClass_ACapturePointBanner_Statics; \
public: \
	DECLARE_CLASS(ACapturePointBanner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ACapturePointBanner)


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapturePointBanner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapturePointBanner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePointBanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePointBanner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapturePointBanner(ACapturePointBanner&&); \
	NO_API ACapturePointBanner(const ACapturePointBanner&); \
public:


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapturePointBanner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapturePointBanner(ACapturePointBanner&&); \
	NO_API ACapturePointBanner(const ACapturePointBanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePointBanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePointBanner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapturePointBanner)


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_CapturePointBanner_h_9_PROLOG \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_EVENT_PARMS


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_INCLASS \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_CapturePointBanner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_CapturePointBanner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_CapturePointBanner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
