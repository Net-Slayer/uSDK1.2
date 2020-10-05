// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAttackMove : uint8;
enum class EBlockType : uint8;
#ifdef MORDHAU_MordhauMotion_generated_h
#error "MordhauMotion.generated.h already included, missing '#pragma once' in MordhauMotion.h"
#endif
#define MORDHAU_MordhauMotion_generated_h

#define Mordhau_Source_Mordhau_MordhauMotion_h_16_RPC_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauMotion_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Mordhau_Source_Mordhau_MordhauMotion_h_16_EVENT_PARMS \
	struct MordhauMotion_eventOnLateTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct MordhauMotion_eventOnLeave_Parms \
	{ \
		bool Interrupted; \
	}; \
	struct MordhauMotion_eventOnTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct MordhauMotion_eventProcessAttack_Parms \
	{ \
		EAttackMove Move; \
		float Angle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauMotion_eventProcessAttack_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauMotion_eventProcessBlock_Parms \
	{ \
		EBlockType Type; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauMotion_eventProcessBlock_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MordhauMotion_eventProcessFeint_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MordhauMotion_eventProcessFeint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauMotion_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauMotion(); \
	friend struct Z_Construct_UClass_UMordhauMotion_Statics; \
public: \
	DECLARE_CLASS(UMordhauMotion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauMotion) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauMotion(); \
	friend struct Z_Construct_UClass_UMordhauMotion_Statics; \
public: \
	DECLARE_CLASS(UMordhauMotion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauMotion) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauMotion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauMotion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauMotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauMotion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauMotion(UMordhauMotion&&); \
	NO_API UMordhauMotion(const UMordhauMotion&); \
public:


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauMotion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauMotion(UMordhauMotion&&); \
	NO_API UMordhauMotion(const UMordhauMotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauMotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauMotion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauMotion)


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauMotion_h_13_PROLOG \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauMotion_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauMotion_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauMotion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
