// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterProfile;
class AMordhauCharacter;
#ifdef MORDHAU_CustomizationReplicationActor_generated_h
#error "CustomizationReplicationActor.generated.h already included, missing '#pragma once' in CustomizationReplicationActor.h"
#endif
#define MORDHAU_CustomizationReplicationActor_generated_h

#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_RPC_WRAPPERS \
	virtual void OnRep_AppearanceCustomization_Implementation(); \
	virtual void OnRep_DefaultEquipmentId_Implementation(); \
	virtual void OnRep_FaceBonesRotate_Implementation(); \
	virtual void OnRep_FaceBonesScale_Implementation(); \
	virtual void OnRep_FaceBonesTranslate_Implementation(); \
	virtual void OnRep_SkillsCustomization_Implementation(); \
	virtual void OnRep_WearableColor1_Implementation(); \
	virtual void OnRep_WearableColor2_Implementation(); \
	virtual void OnRep_WearableId_Implementation(); \
	virtual void OnRep_WearablePattern_Implementation(); \
 \
	DECLARE_FUNCTION(execAssignDataFromProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignDataFromProfile(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUpToDate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUpToDate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AppearanceCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AppearanceCustomization_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DefaultEquipmentId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DefaultEquipmentId_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FaceBonesRotate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FaceBonesRotate_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FaceBonesScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FaceBonesScale_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FaceBonesTranslate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FaceBonesTranslate_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SkillsCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SkillsCustomization_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearableColor1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearableColor1_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearableColor2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearableColor2_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearableId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearableId_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearablePattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearablePattern_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerUpdateIfUpToDate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerUpdateIfUpToDate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCharacterProfile) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCharacterProfile(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_AppearanceCustomization_Implementation(); \
	virtual void OnRep_DefaultEquipmentId_Implementation(); \
	virtual void OnRep_FaceBonesRotate_Implementation(); \
	virtual void OnRep_FaceBonesScale_Implementation(); \
	virtual void OnRep_FaceBonesTranslate_Implementation(); \
	virtual void OnRep_SkillsCustomization_Implementation(); \
	virtual void OnRep_WearableColor1_Implementation(); \
	virtual void OnRep_WearableColor2_Implementation(); \
	virtual void OnRep_WearableId_Implementation(); \
	virtual void OnRep_WearablePattern_Implementation(); \
 \
	DECLARE_FUNCTION(execAssignDataFromProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignDataFromProfile(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUpToDate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUpToDate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AppearanceCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AppearanceCustomization_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DefaultEquipmentId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DefaultEquipmentId_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FaceBonesRotate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FaceBonesRotate_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FaceBonesScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FaceBonesScale_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FaceBonesTranslate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FaceBonesTranslate_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SkillsCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SkillsCustomization_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearableColor1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearableColor1_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearableColor2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearableColor2_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearableId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearableId_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_WearablePattern) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WearablePattern_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerUpdateIfUpToDate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerUpdateIfUpToDate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterCharacter) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterCharacter(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCharacterProfile) \
	{ \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCharacterProfile(Z_Param_Character); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_EVENT_PARMS
#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomizationReplicationActor(); \
	friend struct Z_Construct_UClass_ACustomizationReplicationActor_Statics; \
public: \
	DECLARE_CLASS(ACustomizationReplicationActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ACustomizationReplicationActor)


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACustomizationReplicationActor(); \
	friend struct Z_Construct_UClass_ACustomizationReplicationActor_Statics; \
public: \
	DECLARE_CLASS(ACustomizationReplicationActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(ACustomizationReplicationActor)


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomizationReplicationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomizationReplicationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomizationReplicationActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomizationReplicationActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomizationReplicationActor(ACustomizationReplicationActor&&); \
	NO_API ACustomizationReplicationActor(const ACustomizationReplicationActor&); \
public:


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomizationReplicationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomizationReplicationActor(ACustomizationReplicationActor&&); \
	NO_API ACustomizationReplicationActor(const ACustomizationReplicationActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomizationReplicationActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomizationReplicationActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomizationReplicationActor)


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_10_PROLOG \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_EVENT_PARMS


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_INCLASS \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_CustomizationReplicationActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_CustomizationReplicationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
