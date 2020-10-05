// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MORDHAU_ControlPoint_generated_h
#error "ControlPoint.generated.h already included, missing '#pragma once' in ControlPoint.h"
#endif
#define MORDHAU_ControlPoint_generated_h

#define Mordhau_Source_Mordhau_ControlPoint_h_13_RPC_WRAPPERS \
	virtual void OnCaptureAreaBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
	virtual void OnCaptureAreaEndOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); \
	virtual void OnCapturingTeamChanged_Implementation(); \
	virtual void OnOwningTeamChanged_Implementation(); \
	virtual void OnRep_CapturingTeam_Implementation(); \
	virtual void OnRep_OwningTeam_Implementation(); \
	virtual void OnRep_CaptureProgress_Implementation(); \
	virtual void OnStartedFlashing_Implementation(); \
	virtual void OnStoppedFlashing_Implementation(); \
 \
	DECLARE_FUNCTION(execCanCapture) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanCapture(Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCaptureAreaBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCaptureAreaBeginOverlap_Implementation(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCaptureAreaEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCaptureAreaEndOverlap_Implementation(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCapturingTeamChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCapturingTeamChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOwningTeamChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOwningTeamChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CapturingTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CapturingTeam_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OwningTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OwningTeam_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CaptureProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CaptureProgress_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartedFlashing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartedFlashing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStoppedFlashing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStoppedFlashing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCaptureProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewProgress); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCaptor); \
		P_GET_UBOOL(Z_Param_bAwardScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCaptureProgress(Z_Param_NewProgress,Z_Param_NewCaptor,Z_Param_bAwardScore); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_ControlPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCaptureAreaBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
	virtual void OnCaptureAreaEndOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); \
	virtual void OnCapturingTeamChanged_Implementation(); \
	virtual void OnOwningTeamChanged_Implementation(); \
	virtual void OnRep_CapturingTeam_Implementation(); \
	virtual void OnRep_OwningTeam_Implementation(); \
	virtual void OnRep_CaptureProgress_Implementation(); \
	virtual void OnStartedFlashing_Implementation(); \
	virtual void OnStoppedFlashing_Implementation(); \
 \
	DECLARE_FUNCTION(execCanCapture) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanCapture(Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCaptureAreaBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCaptureAreaBeginOverlap_Implementation(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCaptureAreaEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCaptureAreaEndOverlap_Implementation(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCapturingTeamChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCapturingTeamChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOwningTeamChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOwningTeamChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CapturingTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CapturingTeam_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_OwningTeam) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OwningTeam_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CaptureProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CaptureProgress_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartedFlashing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartedFlashing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStoppedFlashing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStoppedFlashing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCaptureProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewProgress); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCaptor); \
		P_GET_UBOOL(Z_Param_bAwardScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCaptureProgress(Z_Param_NewProgress,Z_Param_NewCaptor,Z_Param_bAwardScore); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_ControlPoint_h_13_EVENT_PARMS \
	struct ControlPoint_eventOnCaptureAreaBeginOverlap_Parms \
	{ \
		UPrimitiveComponent* OverlappedComp; \
		AActor* Other; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	}; \
	struct ControlPoint_eventOnCaptureAreaEndOverlap_Parms \
	{ \
		UPrimitiveComponent* OverlappedComp; \
		AActor* Other; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
	}; \
	struct ControlPoint_eventUpdateCaptureProgress_Parms \
	{ \
		float DeltaTime; \
	};


#define Mordhau_Source_Mordhau_ControlPoint_h_13_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_ControlPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControlPoint(); \
	friend struct Z_Construct_UClass_AControlPoint_Statics; \
public: \
	DECLARE_CLASS(AControlPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AControlPoint)


#define Mordhau_Source_Mordhau_ControlPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAControlPoint(); \
	friend struct Z_Construct_UClass_AControlPoint_Statics; \
public: \
	DECLARE_CLASS(AControlPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AControlPoint)


#define Mordhau_Source_Mordhau_ControlPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControlPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControlPoint(AControlPoint&&); \
	NO_API AControlPoint(const AControlPoint&); \
public:


#define Mordhau_Source_Mordhau_ControlPoint_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControlPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControlPoint(AControlPoint&&); \
	NO_API AControlPoint(const AControlPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlPoint)


#define Mordhau_Source_Mordhau_ControlPoint_h_13_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_ControlPoint_h_10_PROLOG \
	Mordhau_Source_Mordhau_ControlPoint_h_13_EVENT_PARMS


#define Mordhau_Source_Mordhau_ControlPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_ControlPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_ControlPoint_h_13_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_ControlPoint_h_13_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_ControlPoint_h_13_INCLASS \
	Mordhau_Source_Mordhau_ControlPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_ControlPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_ControlPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_ControlPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_ControlPoint_h_13_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_ControlPoint_h_13_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_ControlPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_ControlPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
