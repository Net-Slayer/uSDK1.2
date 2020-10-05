// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAdvancedCharacter;
#ifdef MORDHAU_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define MORDHAU_InteractionComponent_generated_h

#define Mordhau_Source_Mordhau_InteractionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanInteract) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInteract(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Highlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionStart) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionStart(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHighlight(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInteract) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanInteract(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Highlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractionStart) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionStart(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHighlight(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_EVENT_PARMS \
	struct InteractionComponent_eventOnInteractionStart_Parms \
	{ \
		AAdvancedCharacter* Character; \
	};


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_InteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UBoxComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UBoxComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent)


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_InteractionComponent_h_12_PROLOG \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_EVENT_PARMS


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_INCLASS \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_InteractionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_InteractionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
