// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
struct FVector2D;
enum class EActionSet : uint8;
enum class EInputTextMode : uint8;
enum class EInputLineMode : uint8;
#ifdef MORDHAU_MordhauInput_generated_h
#error "MordhauInput.generated.h already included, missing '#pragma once' in MordhauInput.h"
#endif
#define MORDHAU_MordhauInput_generated_h

#define Mordhau_Source_Mordhau_MordhauInput_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddActionKeyBinding) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ActionName); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActionKeyBinding(Z_Param_Out_ActionName,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAxisKeyBinding) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_AxisName); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAxisKeyBinding(Z_Param_Out_AxisName,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplySettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearKeyBindings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearKeyBindings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionKey) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_ActionKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UMordhauInput::GetActionKey(Z_Param_Out_ActionKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionName) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_ActionKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauInput::GetActionName(Z_Param_Out_ActionKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngleAttackAfterPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAngleAttackAfterPress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngleAttacksWithMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAngleAttacksWithMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisKey) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_AxisKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UMordhauInput::GetAxisKey(Z_Param_Out_AxisKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisName) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_AxisKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauInput::GetAxisName(Z_Param_Out_AxisKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisOppositeDirectionName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_AxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauInput::GetAxisOppositeDirectionName(Z_Param_Out_AxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisScale) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_AxisKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauInput::GetAxisScale(Z_Param_Out_AxisKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlScheme) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetControlScheme(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadDeadzoneLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetGamepadDeadzoneLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftXDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftXDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftXInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadLeftXInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftXSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftXSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftYDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftYDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftYInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadLeftYInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftYSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftYSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightXDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightXDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightXInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadRightXInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightXSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightXSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightYDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightYDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightYInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadRightYInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightYSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightYSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadSensitivityLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetGamepadSensitivityLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInverseAttackDirectionX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInverseAttackDirectionX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInverseAttackDirectionY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInverseAttackDirectionY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSensitivityLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetMouseSensitivityLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseXInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMouseXInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseXIsFlipAttackSide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMouseXIsFlipAttackSide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseXSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseXSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseYInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMouseYInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseYSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseYSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToggleSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetToggleSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestoreDefaultSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreDefaultSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveActionSet) \
	{ \
		P_GET_ENUM(EActionSet,Z_Param_ActionSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveActionSet(EActionSet(Z_Param_ActionSet)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngleAttackAfterPress) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAngleAttackAfterPress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngleAttackAfterPress(Z_Param_NewAngleAttackAfterPress); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngleAttacksWithMovement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAngleAttacksWithMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngleAttacksWithMovement(Z_Param_NewAngleAttacksWithMovement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlScheme) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewControlScheme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControlScheme(Z_Param_NewControlScheme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftXDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftXDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftXInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftXInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftXSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftXSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftYDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftYDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftYInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftYInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftYSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftYSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightXDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightXDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightXInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightXInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightXSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightXSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightYDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightYDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightYInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightYInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightYSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightYSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInverseAttackDirectionX) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInverseAttackDirectionX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInverseAttackDirectionX(Z_Param_NewInverseAttackDirectionX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInverseAttackDirectionY) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInverseAttackDirectionX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInverseAttackDirectionY(Z_Param_NewInverseAttackDirectionX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseXInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseXInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseXIsFlipAttackSide) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewIsFlipAttackSide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseXIsFlipAttackSide(Z_Param_NewIsFlipAttackSide); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseXSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseXSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseYInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseYInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseYSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseYSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToggleSprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewToggleSprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToggleSprint(Z_Param_NewToggleSprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBindingPanel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowBindingPanel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowGamepadTextInput) \
	{ \
		P_GET_ENUM(EInputTextMode,Z_Param_TextMode); \
		P_GET_ENUM(EInputLineMode,Z_Param_LineMode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Description); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExistingText); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxLen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowGamepadTextInput(EInputTextMode(Z_Param_TextMode),EInputLineMode(Z_Param_LineMode),Z_Param_Description,Z_Param_ExistingText,Z_Param_MaxLen); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauInput_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddActionKeyBinding) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_ActionName); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActionKeyBinding(Z_Param_Out_ActionName,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAxisKeyBinding) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_AxisName); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAxisKeyBinding(Z_Param_Out_AxisName,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplySettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearKeyBindings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearKeyBindings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionKey) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_ActionKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UMordhauInput::GetActionKey(Z_Param_Out_ActionKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionName) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_ActionKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauInput::GetActionName(Z_Param_Out_ActionKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngleAttackAfterPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAngleAttackAfterPress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngleAttacksWithMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAngleAttacksWithMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisKey) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_AxisKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UMordhauInput::GetAxisKey(Z_Param_Out_AxisKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisName) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_AxisKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauInput::GetAxisName(Z_Param_Out_AxisKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisOppositeDirectionName) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_AxisName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauInput::GetAxisOppositeDirectionName(Z_Param_Out_AxisName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisScale) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_AxisKeyBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauInput::GetAxisScale(Z_Param_Out_AxisKeyBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlScheme) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetControlScheme(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadDeadzoneLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetGamepadDeadzoneLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftXDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftXDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftXInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadLeftXInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftXSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftXSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftYDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftYDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftYInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadLeftYInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadLeftYSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadLeftYSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightXDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightXDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightXInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadRightXInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightXSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightXSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightYDeadzone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightYDeadzone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightYInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGamepadRightYInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadRightYSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamepadRightYSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamepadSensitivityLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetGamepadSensitivityLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInverseAttackDirectionX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInverseAttackDirectionX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInverseAttackDirectionY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInverseAttackDirectionY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSensitivityLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetMouseSensitivityLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseXInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMouseXInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseXIsFlipAttackSide) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMouseXIsFlipAttackSide(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseXSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseXSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseYInverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMouseYInverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseYSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseYSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToggleSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetToggleSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestoreDefaultSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreDefaultSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveActionSet) \
	{ \
		P_GET_ENUM(EActionSet,Z_Param_ActionSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveActionSet(EActionSet(Z_Param_ActionSet)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngleAttackAfterPress) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAngleAttackAfterPress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngleAttackAfterPress(Z_Param_NewAngleAttackAfterPress); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngleAttacksWithMovement) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAngleAttacksWithMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngleAttacksWithMovement(Z_Param_NewAngleAttacksWithMovement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlScheme) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewControlScheme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetControlScheme(Z_Param_NewControlScheme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftXDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftXDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftXInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftXInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftXSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftXSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftYDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftYDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftYInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftYInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadLeftYSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadLeftYSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightXDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightXDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightXInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightXInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightXSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightXSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightYDeadzone) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDeadzone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightYDeadzone(Z_Param_NewDeadzone); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightYInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightYInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamepadRightYSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamepadRightYSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInverseAttackDirectionX) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInverseAttackDirectionX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInverseAttackDirectionX(Z_Param_NewInverseAttackDirectionX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInverseAttackDirectionY) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewInverseAttackDirectionX); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInverseAttackDirectionY(Z_Param_NewInverseAttackDirectionX); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseXInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseXInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseXIsFlipAttackSide) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewIsFlipAttackSide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseXIsFlipAttackSide(Z_Param_NewIsFlipAttackSide); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseXSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseXSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseYInverted) \
	{ \
		P_GET_UBOOL(Z_Param_bNewInverted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseYInverted(Z_Param_bNewInverted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseYSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSensitivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseYSensitivity(Z_Param_NewSensitivity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToggleSprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewToggleSprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToggleSprint(Z_Param_NewToggleSprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBindingPanel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowBindingPanel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowGamepadTextInput) \
	{ \
		P_GET_ENUM(EInputTextMode,Z_Param_TextMode); \
		P_GET_ENUM(EInputLineMode,Z_Param_LineMode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Description); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExistingText); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxLen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowGamepadTextInput(EInputTextMode(Z_Param_TextMode),EInputLineMode(Z_Param_LineMode),Z_Param_Description,Z_Param_ExistingText,Z_Param_MaxLen); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauInput_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauInput(); \
	friend struct Z_Construct_UClass_UMordhauInput_Statics; \
public: \
	DECLARE_CLASS(UMordhauInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauInput)


#define Mordhau_Source_Mordhau_MordhauInput_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauInput(); \
	friend struct Z_Construct_UClass_UMordhauInput_Statics; \
public: \
	DECLARE_CLASS(UMordhauInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauInput)


#define Mordhau_Source_Mordhau_MordhauInput_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauInput(UMordhauInput&&); \
	NO_API UMordhauInput(const UMordhauInput&); \
public:


#define Mordhau_Source_Mordhau_MordhauInput_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauInput(UMordhauInput&&); \
	NO_API UMordhauInput(const UMordhauInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauInput)


#define Mordhau_Source_Mordhau_MordhauInput_h_18_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauInput_h_15_PROLOG
#define Mordhau_Source_Mordhau_MordhauInput_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauInput_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauInput_h_18_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauInput_h_18_INCLASS \
	Mordhau_Source_Mordhau_MordhauInput_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauInput_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauInput_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauInput_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauInput_h_18_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauInput_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
