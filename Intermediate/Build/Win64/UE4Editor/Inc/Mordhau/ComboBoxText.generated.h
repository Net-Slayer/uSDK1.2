// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MORDHAU_ComboBoxText_generated_h
#error "ComboBoxText.generated.h already included, missing '#pragma once' in ComboBoxText.h"
#endif
#define MORDHAU_ComboBoxText_generated_h

#define Mordhau_Source_Mordhau_ComboBoxText_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOption) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOption(Z_Param_Out_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOptionIndex) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindOptionIndex(Z_Param_Out_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetOptionAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetOptionCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedOption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSelectedOption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOpeningEvent__DelegateSignature) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOpeningEvent__DelegateSignature(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveOption) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Out_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedOption) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedOption(Z_Param_Out_Option); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOption) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOption(Z_Param_Out_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindOptionIndex) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindOptionIndex(Z_Param_Out_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetOptionAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptionCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetOptionCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedOption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSelectedOption(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOpeningEvent__DelegateSignature) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOpeningEvent__DelegateSignature(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveOption) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveOption(Z_Param_Out_Option); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedOption) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Option); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedOption(Z_Param_Out_Option); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxText(); \
	friend struct Z_Construct_UClass_UComboBoxText_Statics; \
public: \
	DECLARE_CLASS(UComboBoxText, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxText)


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUComboBoxText(); \
	friend struct Z_Construct_UClass_UComboBoxText_Statics; \
public: \
	DECLARE_CLASS(UComboBoxText, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxText)


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxText(UComboBoxText&&); \
	NO_API UComboBoxText(const UComboBoxText&); \
public:


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxText(UComboBoxText&&); \
	NO_API UComboBoxText(const UComboBoxText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxText)


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_ComboBoxText_h_15_PROLOG
#define Mordhau_Source_Mordhau_ComboBoxText_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_INCLASS \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_ComboBoxText_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_ComboBoxText_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_ComboBoxText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
