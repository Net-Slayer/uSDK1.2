// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauEquipment;
struct FVector;
#ifdef MORDHAU_EmoteMotion_generated_h
#error "EmoteMotion.generated.h already included, missing '#pragma once' in EmoteMotion.h"
#endif
#define MORDHAU_EmoteMotion_generated_h

#define Mordhau_Source_Mordhau_EmoteMotion_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoDrop) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Equipment); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoDrop(Z_Param_Equipment,Z_Param_Out_Force); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoDrop) \
	{ \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Equipment); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoDrop(Z_Param_Equipment,Z_Param_Out_Force); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEmoteMotion(); \
	friend struct Z_Construct_UClass_UEmoteMotion_Statics; \
public: \
	DECLARE_CLASS(UEmoteMotion, UMordhauMotion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UEmoteMotion)


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEmoteMotion(); \
	friend struct Z_Construct_UClass_UEmoteMotion_Statics; \
public: \
	DECLARE_CLASS(UEmoteMotion, UMordhauMotion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UEmoteMotion)


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEmoteMotion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmoteMotion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEmoteMotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmoteMotion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEmoteMotion(UEmoteMotion&&); \
	NO_API UEmoteMotion(const UEmoteMotion&); \
public:


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEmoteMotion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEmoteMotion(UEmoteMotion&&); \
	NO_API UEmoteMotion(const UEmoteMotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEmoteMotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmoteMotion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmoteMotion)


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_EmoteMotion_h_12_PROLOG
#define Mordhau_Source_Mordhau_EmoteMotion_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_INCLASS \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_EmoteMotion_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_EmoteMotion_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_EmoteMotion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
