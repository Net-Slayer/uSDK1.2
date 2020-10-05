// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FMinimalViewInfo;
#ifdef MORDHAU_MordhauCameraManager_generated_h
#error "MordhauCameraManager.generated.h already included, missing '#pragma once' in MordhauCameraManager.h"
#endif
#define MORDHAU_MordhauCameraManager_generated_h

#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnterCustomization) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_CustomizationTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterCustomization(Z_Param_CustomizationTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterMapView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterMapView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMinimalViewInfo*)Z_Param__Result=P_THIS->GetCameraCache(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraStyleBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCameraStyleBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInCustomization(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInMapView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInMapView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTargetBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetViewTargetBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveCustomization(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveMapView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveMapView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraStyleBP) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NewCameraStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraStyleBP(Z_Param_Out_NewCameraStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewTargetBP) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewTargetBP(Z_Param_NewTarget); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterCustomization) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_CustomizationTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterCustomization(Z_Param_CustomizationTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterMapView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterMapView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMinimalViewInfo*)Z_Param__Result=P_THIS->GetCameraCache(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraStyleBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCameraStyleBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInCustomization(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsInMapView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInMapView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTargetBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetViewTargetBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveCustomization) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveCustomization(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveMapView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveMapView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraStyleBP) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_NewCameraStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraStyleBP(Z_Param_Out_NewCameraStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewTargetBP) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewTargetBP(Z_Param_NewTarget); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_EVENT_PARMS \
	struct MordhauCameraManager_eventOnHitFlash_Parms \
	{ \
		bool bIsDirectional; \
		AActor* Source; \
	};


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauCameraManager(); \
	friend struct Z_Construct_UClass_AMordhauCameraManager_Statics; \
public: \
	DECLARE_CLASS(AMordhauCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauCameraManager)


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauCameraManager(); \
	friend struct Z_Construct_UClass_AMordhauCameraManager_Statics; \
public: \
	DECLARE_CLASS(AMordhauCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauCameraManager)


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauCameraManager(AMordhauCameraManager&&); \
	NO_API AMordhauCameraManager(const AMordhauCameraManager&); \
public:


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauCameraManager(AMordhauCameraManager&&); \
	NO_API AMordhauCameraManager(const AMordhauCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauCameraManager)


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauCameraManager_h_13_PROLOG \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
