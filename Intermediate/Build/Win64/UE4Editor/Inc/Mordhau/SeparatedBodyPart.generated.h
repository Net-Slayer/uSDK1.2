// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauCharacter;
struct FTransform;
enum class EMordhauDamageType : uint8;
struct FHitResult;
class AActor;
#ifdef MORDHAU_SeparatedBodyPart_generated_h
#error "SeparatedBodyPart.generated.h already included, missing '#pragma once' in SeparatedBodyPart.h"
#endif
#define MORDHAU_SeparatedBodyPart_generated_h

#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDismembered) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDismembered(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartiallyDismembered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPartiallyDismembered(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDismembered) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_bone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDismembered(Z_Param_Out_bone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartiallyDismembered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPartiallyDismembered(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_EVENT_PARMS \
	struct SeparatedBodyPart_eventInitializeDismemberment_Parms \
	{ \
		AMordhauCharacter* Source; \
		FName bone; \
		FTransform SourceBoneTransform; \
		bool bIsPartial; \
		bool bIsBluntForce; \
	}; \
	struct SeparatedBodyPart_eventOnCosmeticHit_Parms \
	{ \
		EMordhauDamageType DamageType; \
		uint8 SubType; \
		FHitResult Hit; \
		AActor* Agent; \
	};


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASeparatedBodyPart(); \
	friend struct Z_Construct_UClass_ASeparatedBodyPart_Statics; \
public: \
	DECLARE_CLASS(ASeparatedBodyPart, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ASeparatedBodyPart)


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASeparatedBodyPart(); \
	friend struct Z_Construct_UClass_ASeparatedBodyPart_Statics; \
public: \
	DECLARE_CLASS(ASeparatedBodyPart, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ASeparatedBodyPart)


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASeparatedBodyPart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASeparatedBodyPart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASeparatedBodyPart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASeparatedBodyPart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASeparatedBodyPart(ASeparatedBodyPart&&); \
	NO_API ASeparatedBodyPart(const ASeparatedBodyPart&); \
public:


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASeparatedBodyPart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASeparatedBodyPart(ASeparatedBodyPart&&); \
	NO_API ASeparatedBodyPart(const ASeparatedBodyPart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASeparatedBodyPart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASeparatedBodyPart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASeparatedBodyPart)


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_10_PROLOG \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_EVENT_PARMS


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_INCLASS \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_SeparatedBodyPart_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_SeparatedBodyPart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
