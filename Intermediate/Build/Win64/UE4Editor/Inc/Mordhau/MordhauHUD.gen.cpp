// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauHUD() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauHUD_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauHUD_CreateMainMenu();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauDialog_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauHUD_HideMainMenu();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated();
	MORDHAU_API UClass* Z_Construct_UClass_AControlPoint_NoRegister();
// End Cross Module References
	static FName NAME_AMordhauHUD_CreateMainMenu = FName(TEXT("CreateMainMenu"));
	void AMordhauHUD::CreateMainMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauHUD_CreateMainMenu),NULL);
	}
	static FName NAME_AMordhauHUD_EnqueueMordhauDialog = FName(TEXT("EnqueueMordhauDialog"));
	void AMordhauHUD::EnqueueMordhauDialog(UMordhauDialog* Dialog)
	{
		MordhauHUD_eventEnqueueMordhauDialog_Parms Parms;
		Parms.Dialog=Dialog;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauHUD_EnqueueMordhauDialog),&Parms);
	}
	static FName NAME_AMordhauHUD_HideMainMenu = FName(TEXT("HideMainMenu"));
	void AMordhauHUD::HideMainMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauHUD_HideMainMenu),NULL);
	}
	static FName NAME_AMordhauHUD_OnGameStateReplicated = FName(TEXT("OnGameStateReplicated"));
	void AMordhauHUD::OnGameStateReplicated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauHUD_OnGameStateReplicated),NULL);
	}
	void AMordhauHUD::StaticRegisterNativesAMordhauHUD()
	{
	}
	struct Z_Construct_UFunction_AMordhauHUD_CreateMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauHUD_CreateMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauHUDFns" },
		{ "ModuleRelativePath", "MordhauHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauHUD_CreateMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauHUD, "CreateMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauHUD_CreateMainMenu_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauHUD_CreateMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauHUD_CreateMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauHUD_CreateMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::NewProp_Dialog_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::NewProp_Dialog = { UE4CodeGen_Private::EPropertyClass::Object, "Dialog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MordhauHUD_eventEnqueueMordhauDialog_Parms, Dialog), Z_Construct_UClass_UMordhauDialog_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::NewProp_Dialog_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::NewProp_Dialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::NewProp_Dialog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauHUDFns" },
		{ "ModuleRelativePath", "MordhauHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauHUD, "EnqueueMordhauDialog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauHUD_eventEnqueueMordhauDialog_Parms), Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauHUD_HideMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauHUD_HideMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauHUDFns" },
		{ "ModuleRelativePath", "MordhauHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauHUD_HideMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauHUD, "HideMainMenu", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauHUD_HideMainMenu_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauHUD_HideMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauHUD_HideMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauHUD_HideMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauHUDFns" },
		{ "ModuleRelativePath", "MordhauHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauHUD, "OnGameStateReplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauHUD_NoRegister()
	{
		return AMordhauHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturePointsOfInterest_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapturePointsOfInterest;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapturePointsOfInterest_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauHUD_CreateMainMenu, "CreateMainMenu" }, // 3249953003
		{ &Z_Construct_UFunction_AMordhauHUD_EnqueueMordhauDialog, "EnqueueMordhauDialog" }, // 1762954262
		{ &Z_Construct_UFunction_AMordhauHUD_HideMainMenu, "HideMainMenu" }, // 3289573524
		{ &Z_Construct_UFunction_AMordhauHUD_OnGameStateReplicated, "OnGameStateReplicated" }, // 3394742193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MordhauHUD.h" },
		{ "ModuleRelativePath", "MordhauHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest_MetaData[] = {
		{ "Category", "MordhauHUD" },
		{ "ModuleRelativePath", "MordhauHUD.h" },
		{ "ToolTip", "class USceneComponent*                             DefaultSceneRoot;\n//TArray<class UUserWidget*>                         Widgets;\nclass UBP_HUDWidget_C*                             HUD;\nclass UBP_Scoreboard_C*                            Scoreboard;\nclass UBP_ChatBox_C*                               ChatBox;\nclass UBP_KillFeed_C*                              KillFeed;\nclass UBP_StatusBar_C*                             StatusBar;\nclass UBP_MainMenu_C*                              MainMenu;\nbool                                               IsHUDMinimal;\n//unsigned char                                      UnknownData00[0x7];\nclass UBP_Crosshair_C*                             Crosshair;\nclass UBP_TargetInfo_C*                            TargetInfo;\nclass UBP_ProfileSelect_C*                         ProfileSelect;\nclass UBP_TeamSelect_C*                            TeamSelect;\nclass UBP_EmoteMenu_C*                             EmoteMenu;\nclass UBP_Announcement_C*                          Announcement;\nclass UBP_Watermark_C*                             Watermark;\nbool                                               bShowWatermark;\n//unsigned char                                      UnknownData01[0x7];\n//TArray<class UMordhauDialog*>                      QueuedDialogs;\nclass UMordhauDialog*                              CurrentDialog;\nclass UBP_EquipmentDisplay_C*                      EquipmentDisplay;\nclass UBP_SpawnInfo_C*                             SpawnInfo;\nclass UBP_NetIndicator_C*                          NetIndicator;\nclass UBP_Tips_C*                                  Tips;\nclass UBP_ScoreFeed_C*                             ScoreFeed;\nclass UBP_EquipmentInfoDisplay_C*                  EquipmentInfoDisplay;\nclass ABP_MordhauCustomizationPlatform_C*          CustomizationPlatform;\nclass UBP_VoiceMenu_C*                             VoiceMenu;\nclass UBP_SpawnScreen_C*                           SpawnScreen;\nclass UBP_Objectives_C*                            Objectives;\nclass UBP_CapPointInfoPanelWidget_C*               CapPointInfoPanel;\nclass UBP_KilledByPanel_C*                         KilledByPanel;\nclass UClass*                                      SpawnScreenWidgetClass;\nclass UBP_PostMatchScreen_C*                       PostMatchScreen;\nclass UBP_VoteKickMenu_C*                          VoteKickMenu;\nbool                                               LoadedSingleton;\n//unsigned char                                      UnknownData02[0x7];\nclass UBP_ContextPopupWrapper_C*                   ContextPopupWrapper;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest = { UE4CodeGen_Private::EPropertyClass::Array, "CapturePointsOfInterest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauHUD, CapturePointsOfInterest), METADATA_PARAMS(Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CapturePointsOfInterest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauHUD_Statics::NewProp_CapturePointsOfInterest_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauHUD_Statics::ClassParams = {
		&AMordhauHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauHUD, 3611180693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauHUD(Z_Construct_UClass_AMordhauHUD, &AMordhauHUD::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
