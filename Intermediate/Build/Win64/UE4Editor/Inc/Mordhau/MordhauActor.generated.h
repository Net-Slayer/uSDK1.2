// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauCharacter;
class AMordhauPlayerController;
class AAdvancedCharacter;
enum class EMordhauDamageType : uint8;
struct FVector;
class AActor;
class ASeparatedBodyPart;
enum class EAttackMove : uint8;
struct FHitResult;
#ifdef MORDHAU_MordhauActor_generated_h
#error "MordhauActor.generated.h already included, missing '#pragma once' in MordhauActor.h"
#endif
#define MORDHAU_MordhauActor_generated_h

#define Mordhau_Source_Mordhau_MordhauActor_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeldInteractionStart) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HeldInteractionStart(Z_Param_Character); \
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
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionStart(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractPassively) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractPassively(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyInstanceOwner) \
	{ \
		P_GET_TARRAY(AMordhauPlayerController*,Z_Param_ControllerArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyInstanceOwner(Z_Param_ControllerArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHighlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateThudVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewThudVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateThudVelocity(Z_Param_NewThudVelocity); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeldInteractionStart) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HeldInteractionStart(Z_Param_Character); \
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
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractionStart(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteractPassively) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InteractPassively(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyInstanceOwner) \
	{ \
		P_GET_TARRAY(AMordhauPlayerController*,Z_Param_ControllerArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAnyInstanceOwner(Z_Param_ControllerArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHighlight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHighlight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateThudVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewThudVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateThudVelocity(Z_Param_NewThudVelocity); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauActor_h_37_EVENT_PARMS \
	struct MordhauActor_eventCanHeldInteract_Parms \
	{ \
		AMordhauCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauActor_eventCanHeldInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauActor_eventCanInteract_Parms \
	{ \
		AMordhauCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauActor_eventCanInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauActor_eventCanInteractPassively_Parms \
	{ \
		AMordhauCharacter* Character; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauActor_eventCanInteractPassively_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauActor_eventOnHeldInteractionStart_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauActor_eventOnInteractionStart_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauActor_eventOnInteractPassively_Parms \
	{ \
		AMordhauCharacter* Character; \
	}; \
	struct MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms \
	{ \
		AAdvancedCharacter* Character; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		FName bone; \
		FVector Point; \
		AActor* Source; \
	}; \
	struct MordhauActor_eventOnPostDismemberedOther_Parms \
	{ \
		FName bone; \
		ASeparatedBodyPart* Part; \
	}; \
	struct MordhauActor_eventOnReceiveCosmeticHit_Parms \
	{ \
		AActor* Source; \
		AActor* Agent; \
		EAttackMove Move; \
		FHitResult Hit; \
	}; \
	struct MordhauActor_eventOnUsedToKillOther_Parms \
	{ \
		AAdvancedCharacter* Character; \
		EMordhauDamageType Type; \
		uint8 SubType; \
		FName bone; \
		FVector Point; \
		AActor* Source; \
	};


#define Mordhau_Source_Mordhau_MordhauActor_h_37_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauActor_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauActor(); \
	friend struct Z_Construct_UClass_AMordhauActor_Statics; \
public: \
	DECLARE_CLASS(AMordhauActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauActor)


#define Mordhau_Source_Mordhau_MordhauActor_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauActor(); \
	friend struct Z_Construct_UClass_AMordhauActor_Statics; \
public: \
	DECLARE_CLASS(AMordhauActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauActor)


#define Mordhau_Source_Mordhau_MordhauActor_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauActor(AMordhauActor&&); \
	NO_API AMordhauActor(const AMordhauActor&); \
public:


#define Mordhau_Source_Mordhau_MordhauActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauActor(AMordhauActor&&); \
	NO_API AMordhauActor(const AMordhauActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauActor)


#define Mordhau_Source_Mordhau_MordhauActor_h_37_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauActor_h_34_PROLOG \
	Mordhau_Source_Mordhau_MordhauActor_h_37_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauActor_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauActor_h_37_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauActor_h_37_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauActor_h_37_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauActor_h_37_INCLASS \
	Mordhau_Source_Mordhau_MordhauActor_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauActor_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauActor_h_37_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauActor_h_37_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauActor_h_37_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
