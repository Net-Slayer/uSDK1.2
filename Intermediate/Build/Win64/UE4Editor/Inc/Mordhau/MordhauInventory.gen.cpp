// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauInventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauInventory() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventory_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_AddItem();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_ECallResult();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_AddItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_CanUnlockItem();
	MORDHAUONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_CanUnlockItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_CollectRewards();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FItemStack();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_ConsolidateItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_DeserializeItems();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_FakeItemDrop();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetGold();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetItem();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetItemQuantity();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetItemStacks();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetSkinRarity();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EItemRarity();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentSkinEntry();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetStackItem();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetStackQuantity();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockRecipe();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetXP();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_HasItem();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_HasRewards();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_HasSkin();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_HasSupporterPack();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_ParseResponseString();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_RefreshItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_ResetInventory();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_SerializeItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_SetItemQuantity();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerState_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_UnlockItem();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_UnlockItems();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FScriptMulticastDelegate();
// End Cross Module References
	void UMordhauInventory::StaticRegisterNativesUMordhauInventory()
	{
		UClass* Class = UMordhauInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UMordhauInventory::execAddItem },
			{ "AddItems", &UMordhauInventory::execAddItems },
			{ "AreUnlockRecipesAvailable", &UMordhauInventory::execAreUnlockRecipesAvailable },
			{ "CanUnlockItem", &UMordhauInventory::execCanUnlockItem },
			{ "CanUnlockItems", &UMordhauInventory::execCanUnlockItems },
			{ "CollectRewards", &UMordhauInventory::execCollectRewards },
			{ "ConsolidateItems", &UMordhauInventory::execConsolidateItems },
			{ "ConsumeItemStack", &UMordhauInventory::execConsumeItemStack },
			{ "DeserializeItems", &UMordhauInventory::execDeserializeItems },
			{ "FakeItemDrop", &UMordhauInventory::execFakeItemDrop },
			{ "FakeRewardDrop", &UMordhauInventory::execFakeRewardDrop },
			{ "GetGold", &UMordhauInventory::execGetGold },
			{ "GetGoldItemDefID", &UMordhauInventory::execGetGoldItemDefID },
			{ "GetItem", &UMordhauInventory::execGetItem },
			{ "GetItemQuantity", &UMordhauInventory::execGetItemQuantity },
			{ "GetItemStacks", &UMordhauInventory::execGetItemStacks },
			{ "GetSkinRarity", &UMordhauInventory::execGetSkinRarity },
			{ "GetStackItem", &UMordhauInventory::execGetStackItem },
			{ "GetStackItemDefID", &UMordhauInventory::execGetStackItemDefID },
			{ "GetStackQuantity", &UMordhauInventory::execGetStackQuantity },
			{ "GetTutorialPackageItemDefID", &UMordhauInventory::execGetTutorialPackageItemDefID },
			{ "GetUnlockRecipe", &UMordhauInventory::execGetUnlockRecipe },
			{ "GetUnlockRequirements", &UMordhauInventory::execGetUnlockRequirements },
			{ "GetXP", &UMordhauInventory::execGetXP },
			{ "GetXPItemDefID", &UMordhauInventory::execGetXPItemDefID },
			{ "HasItem", &UMordhauInventory::execHasItem },
			{ "HasRewards", &UMordhauInventory::execHasRewards },
			{ "HasSkin", &UMordhauInventory::execHasSkin },
			{ "HasSupporterPack", &UMordhauInventory::execHasSupporterPack },
			{ "IsInventoryAvailable", &UMordhauInventory::execIsInventoryAvailable },
			{ "IsSkinAvailable", &UMordhauInventory::execIsSkinAvailable },
			{ "OnWebAPIItemsDropped", &UMordhauInventory::execOnWebAPIItemsDropped },
			{ "ParseResponseString", &UMordhauInventory::execParseResponseString },
			{ "RefreshItems", &UMordhauInventory::execRefreshItems },
			{ "RequestUnlockRecipes", &UMordhauInventory::execRequestUnlockRecipes },
			{ "ResetInventory", &UMordhauInventory::execResetInventory },
			{ "SerializeItems", &UMordhauInventory::execSerializeItems },
			{ "SetItemQuantity", &UMordhauInventory::execSetItemQuantity },
			{ "TriggerItemDrop", &UMordhauInventory::execTriggerItemDrop },
			{ "TriggerRewardDrop", &UMordhauInventory::execTriggerRewardDrop },
			{ "UnlockItem", &UMordhauInventory::execUnlockItem },
			{ "UnlockItems", &UMordhauInventory::execUnlockItems },
			{ "UnlockLevelUnlocks", &UMordhauInventory::execUnlockLevelUnlocks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMordhauInventory_AddItem_Statics
	{
		struct MordhauInventory_eventAddItem_Parms
		{
			int32 ItemDefID;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventAddItem_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventAddItem_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::NewProp_ItemDefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "AddItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventAddItem_Parms), Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_AddItems_Statics
	{
		struct MordhauInventory_eventAddItems_Parms
		{
			TArray<int32> ItemDefIDs;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefIDs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventAddItems_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_ItemDefIDs = { UE4CodeGen_Private::EPropertyClass::Array, "ItemDefIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventAddItems_Parms, ItemDefIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_ItemDefIDs_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_ItemDefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::NewProp_ItemDefIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "AddItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventAddItems_Parms), Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_AddItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_AddItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics
	{
		struct MordhauInventory_eventAreUnlockRecipesAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventAreUnlockRecipesAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventAreUnlockRecipesAvailable_Parms), &Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "AreUnlockRecipesAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventAreUnlockRecipesAvailable_Parms), Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics
	{
		struct MordhauInventory_eventCanUnlockItem_Parms
		{
			FSteamID SteamID;
			int32 ItemDefID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventCanUnlockItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventCanUnlockItem_Parms), &Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventCanUnlockItem_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventCanUnlockItem_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_ItemDefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "CanUnlockItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventCanUnlockItem_Parms), Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_CanUnlockItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_CanUnlockItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics
	{
		struct MordhauInventory_eventCanUnlockItems_Parms
		{
			FSteamID SteamID;
			TArray<int32> ItemDefIDs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefIDs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventCanUnlockItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventCanUnlockItems_Parms), &Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ItemDefIDs = { UE4CodeGen_Private::EPropertyClass::Array, "ItemDefIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventCanUnlockItems_Parms, ItemDefIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ItemDefIDs_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventCanUnlockItems_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ItemDefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_ItemDefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "CanUnlockItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventCanUnlockItems_Parms), Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_CanUnlockItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_CanUnlockItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics
	{
		struct MordhauInventory_eventCollectRewards_Parms
		{
			FSteamID SteamID;
			TArray<FItemStack> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventCollectRewards_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventCollectRewards_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "CollectRewards", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventCollectRewards_Parms), Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_CollectRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_CollectRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics
	{
		struct MordhauInventory_eventConsolidateItems_Parms
		{
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventConsolidateItems_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::NewProp_CallResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "ConsolidateItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventConsolidateItems_Parms), Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_ConsolidateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_ConsolidateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics
	{
		struct MordhauInventory_eventConsumeItemStack_Parms
		{
			FItemStack ItemStack;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventConsumeItemStack_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_ItemStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_ItemStack = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventConsumeItemStack_Parms, ItemStack), Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_ItemStack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_ItemStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::NewProp_ItemStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "ConsumeItemStack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventConsumeItemStack_Parms), Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics
	{
		struct MordhauInventory_eventDeserializeItems_Parms
		{
			FSteamID SteamID;
			FSerializedItems SerializedItems;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SerializedItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventDeserializeItems_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SerializedItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SerializedItems = { UE4CodeGen_Private::EPropertyClass::Struct, "SerializedItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventDeserializeItems_Parms, SerializedItems), Z_Construct_UScriptStruct_FSerializedItems, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SerializedItems_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SerializedItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventDeserializeItems_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SerializedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "DeserializeItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventDeserializeItems_Parms), Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_DeserializeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_DeserializeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics
	{
		struct MordhauInventory_eventFakeItemDrop_Parms
		{
			int32 ItemDefID;
			int32 quantity;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventFakeItemDrop_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Int, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventFakeItemDrop_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventFakeItemDrop_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::NewProp_ItemDefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "FakeItemDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventFakeItemDrop_Parms), Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_FakeItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_FakeItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics
	{
		struct MordhauInventory_eventFakeRewardDrop_Parms
		{
			int32 Gold;
			int32 XP;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XP;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Gold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventFakeRewardDrop_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_XP = { UE4CodeGen_Private::EPropertyClass::Int, "XP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventFakeRewardDrop_Parms, XP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_Gold = { UE4CodeGen_Private::EPropertyClass::Int, "Gold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventFakeRewardDrop_Parms, Gold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_XP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::NewProp_Gold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "FakeRewardDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventFakeRewardDrop_Parms), Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetGold_Statics
	{
		struct MordhauInventory_eventGetGold_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetGold", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventGetGold_Parms), Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics
	{
		struct MordhauInventory_eventGetGoldItemDefID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetGoldItemDefID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetGoldItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MordhauInventory_eventGetGoldItemDefID_Parms), Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetItem_Statics
	{
		struct MordhauInventory_eventGetItem_Parms
		{
			int32 ItemDefID;
			UMordhauInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UMordhauInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItem_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::NewProp_ItemDefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MordhauInventory_eventGetItem_Parms), Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics
	{
		struct MordhauInventory_eventGetItemQuantity_Parms
		{
			FSteamID SteamID;
			int32 ItemDefID;
			ECallResult CallResult;
			int32 quantity;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Int, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemQuantity_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemQuantity_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemQuantity_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemQuantity_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_ItemDefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetItemQuantity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventGetItemQuantity_Parms), Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics
	{
		struct MordhauInventory_eventGetItemStacks_Parms
		{
			FSteamID SteamID;
			ECallResult CallResult;
			TArray<FItemStack> ItemStacks;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemStacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStacks_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_ItemStacks = { UE4CodeGen_Private::EPropertyClass::Array, "ItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemStacks_Parms, ItemStacks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_ItemStacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemStacks_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetItemStacks_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_ItemStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_ItemStacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventGetItemStacks_Parms), Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetItemStacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetItemStacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics
	{
		struct MordhauInventory_eventGetSkinRarity_Parms
		{
			FEquipmentSkinEntry Skin;
			EItemRarity ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetSkinRarity_Parms, ReturnValue), Z_Construct_UEnum_Mordhau_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_Skin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_Skin = { UE4CodeGen_Private::EPropertyClass::Struct, "Skin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetSkinRarity_Parms, Skin), Z_Construct_UScriptStruct_FEquipmentSkinEntry, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_Skin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_Skin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::NewProp_Skin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetSkinRarity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventGetSkinRarity_Parms), Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetSkinRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetSkinRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics
	{
		struct MordhauInventory_eventGetStackItem_Parms
		{
			FItemStack ItemStack;
			UMordhauInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetStackItem_Parms, ReturnValue), Z_Construct_UClass_UMordhauInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ItemStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ItemStack = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetStackItem_Parms, ItemStack), Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ItemStack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ItemStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::NewProp_ItemStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetStackItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(MordhauInventory_eventGetStackItem_Parms), Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetStackItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetStackItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics
	{
		struct MordhauInventory_eventGetStackItemDefID_Parms
		{
			FItemStack ItemStack;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetStackItemDefID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ItemStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ItemStack = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetStackItemDefID_Parms, ItemStack), Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ItemStack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ItemStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::NewProp_ItemStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetStackItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(MordhauInventory_eventGetStackItemDefID_Parms), Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics
	{
		struct MordhauInventory_eventGetStackQuantity_Parms
		{
			FItemStack ItemStack;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetStackQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ItemStack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ItemStack = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetStackQuantity_Parms, ItemStack), Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ItemStack_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ItemStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::NewProp_ItemStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetStackQuantity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(MordhauInventory_eventGetStackQuantity_Parms), Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetStackQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetStackQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics
	{
		struct MordhauInventory_eventGetTutorialPackageItemDefID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetTutorialPackageItemDefID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetTutorialPackageItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MordhauInventory_eventGetTutorialPackageItemDefID_Parms), Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics
	{
		struct MordhauInventory_eventGetUnlockRecipe_Parms
		{
			int32 ItemDefID;
			ECallResult CallResult;
			FUnlockRecipe Recipe;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recipe;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_Recipe = { UE4CodeGen_Private::EPropertyClass::Struct, "Recipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetUnlockRecipe_Parms, Recipe), Z_Construct_UScriptStruct_FUnlockRecipe, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetUnlockRecipe_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetUnlockRecipe_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_Recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::NewProp_ItemDefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetUnlockRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventGetUnlockRecipe_Parms), Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics
	{
		struct MordhauInventory_eventGetUnlockRequirements_Parms
		{
			int32 ItemDefID;
			ECallResult CallResult;
			TArray<FItemStack> Requirements;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Requirements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Requirements_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_Requirements = { UE4CodeGen_Private::EPropertyClass::Array, "Requirements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetUnlockRequirements_Parms, Requirements), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_Requirements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Requirements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetUnlockRequirements_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetUnlockRequirements_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_Requirements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_Requirements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::NewProp_ItemDefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetUnlockRequirements", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventGetUnlockRequirements_Parms), Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetXP_Statics
	{
		struct MordhauInventory_eventGetXP_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetXP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventGetXP_Parms), Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics
	{
		struct MordhauInventory_eventGetXPItemDefID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventGetXPItemDefID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "GetXPItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MordhauInventory_eventGetXPItemDefID_Parms), Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_HasItem_Statics
	{
		struct MordhauInventory_eventHasItem_Parms
		{
			FSteamID SteamID;
			int32 ItemDefID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventHasItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventHasItem_Parms), &Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventHasItem_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventHasItem_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_ItemDefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "HasItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventHasItem_Parms), Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_HasItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_HasItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics
	{
		struct MordhauInventory_eventHasRewards_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventHasRewards_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventHasRewards_Parms), &Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventHasRewards_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "HasRewards", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventHasRewards_Parms), Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_HasRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_HasRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics
	{
		struct MordhauInventory_eventHasSkin_Parms
		{
			FSteamID SteamID;
			FEquipmentSkinEntry Skin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventHasSkin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventHasSkin_Parms), &Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_Skin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_Skin = { UE4CodeGen_Private::EPropertyClass::Struct, "Skin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventHasSkin_Parms, Skin), Z_Construct_UScriptStruct_FEquipmentSkinEntry, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_Skin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_Skin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventHasSkin_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "HasSkin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventHasSkin_Parms), Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_HasSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_HasSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics
	{
		struct MordhauInventory_eventHasSupporterPack_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventHasSupporterPack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventHasSupporterPack_Parms), &Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventHasSupporterPack_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "HasSupporterPack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventHasSupporterPack_Parms), Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_HasSupporterPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_HasSupporterPack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics
	{
		struct MordhauInventory_eventIsInventoryAvailable_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventIsInventoryAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventIsInventoryAvailable_Parms), &Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventIsInventoryAvailable_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "IsInventoryAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventIsInventoryAvailable_Parms), Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics
	{
		struct MordhauInventory_eventIsSkinAvailable_Parms
		{
			FSteamID SteamID;
			FEquipmentSkinEntry Skin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Skin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventIsSkinAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventIsSkinAvailable_Parms), &Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_Skin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_Skin = { UE4CodeGen_Private::EPropertyClass::Struct, "Skin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventIsSkinAvailable_Parms, Skin), Z_Construct_UScriptStruct_FEquipmentSkinEntry, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_Skin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_Skin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventIsSkinAvailable_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "IsSkinAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventIsSkinAvailable_Parms), Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics
	{
		struct MordhauInventory_eventOnWebAPIItemsDropped_Parms
		{
			FSteamID SteamID;
			TArray<FItemStack> ItemStacks;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemStacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_ItemStacks = { UE4CodeGen_Private::EPropertyClass::Array, "ItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventOnWebAPIItemsDropped_Parms, ItemStacks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_ItemStacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventOnWebAPIItemsDropped_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_ItemStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_ItemStacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "OnWebAPIItemsDropped", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventOnWebAPIItemsDropped_Parms), Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics
	{
		struct MordhauInventory_eventParseResponseString_Parms
		{
			FString ResponseString;
			TArray<FItemStack> ItemStacks;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemStacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResponseString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauInventory_eventParseResponseString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauInventory_eventParseResponseString_Parms), &Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ItemStacks = { UE4CodeGen_Private::EPropertyClass::Array, "ItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventParseResponseString_Parms, ItemStacks), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ItemStacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ResponseString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ResponseString = { UE4CodeGen_Private::EPropertyClass::Str, "ResponseString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventParseResponseString_Parms, ResponseString), METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ResponseString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ResponseString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ItemStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ItemStacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::NewProp_ResponseString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "ParseResponseString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventParseResponseString_Parms), Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_ParseResponseString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_ParseResponseString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics
	{
		struct MordhauInventory_eventRefreshItems_Parms
		{
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventRefreshItems_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::NewProp_CallResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "RefreshItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventRefreshItems_Parms), Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_RefreshItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_RefreshItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "RequestUnlockRecipes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics
	{
		struct MordhauInventory_eventResetInventory_Parms
		{
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventResetInventory_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::NewProp_CallResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "ResetInventory", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventResetInventory_Parms), Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_ResetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_ResetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics
	{
		struct MordhauInventory_eventSerializeItems_Parms
		{
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventSerializeItems_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::NewProp_CallResult_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "SerializeItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventSerializeItems_Parms), Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_SerializeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_SerializeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics
	{
		struct MordhauInventory_eventSetItemQuantity_Parms
		{
			FSteamID SteamID;
			int32 ItemDefID;
			int32 quantity;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventSetItemQuantity_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_quantity = { UE4CodeGen_Private::EPropertyClass::Int, "quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventSetItemQuantity_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventSetItemQuantity_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventSetItemQuantity_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_ItemDefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "SetItemQuantity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventSetItemQuantity_Parms), Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_SetItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_SetItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics
	{
		struct MordhauInventory_eventTriggerItemDrop_Parms
		{
			int32 ItemDefID;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventTriggerItemDrop_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventTriggerItemDrop_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::NewProp_ItemDefID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "TriggerItemDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventTriggerItemDrop_Parms), Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics
	{
		struct MordhauInventory_eventTriggerRewardDrop_Parms
		{
			TArray<AMordhauPlayerState*> Players;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventTriggerRewardDrop_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_Players = { UE4CodeGen_Private::EPropertyClass::Array, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventTriggerRewardDrop_Parms, Players), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_Players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMordhauPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::NewProp_Players_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "TriggerRewardDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauInventory_eventTriggerRewardDrop_Parms), Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics
	{
		struct MordhauInventory_eventUnlockItem_Parms
		{
			FSteamID SteamID;
			int32 ItemDefID;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockItem_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_ItemDefID = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockItem_Parms, ItemDefID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockItem_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_ItemDefID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "UnlockItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventUnlockItem_Parms), Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_UnlockItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_UnlockItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics
	{
		struct MordhauInventory_eventUnlockItems_Parms
		{
			FSteamID SteamID;
			TArray<int32> ItemDefIDs;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefIDs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemDefIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockItems_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_ItemDefIDs = { UE4CodeGen_Private::EPropertyClass::Array, "ItemDefIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockItems_Parms, ItemDefIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_ItemDefIDs_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ItemDefIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockItems_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_ItemDefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_ItemDefIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "UnlockItems", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventUnlockItems_Parms), Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_UnlockItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_UnlockItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics
	{
		struct MordhauInventory_eventUnlockLevelUnlocks_Parms
		{
			FSteamID SteamID;
			ECallResult CallResult;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_CallResult = { UE4CodeGen_Private::EPropertyClass::Enum, "CallResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockLevelUnlocks_Parms, CallResult), Z_Construct_UEnum_Mordhau_ECallResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_CallResult_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_SteamID = { UE4CodeGen_Private::EPropertyClass::Struct, "SteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauInventory_eventUnlockLevelUnlocks_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_SteamID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_CallResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_CallResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauInventoryFns" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauInventory, "UnlockLevelUnlocks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauInventory_eventUnlockLevelUnlocks_Parms), Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauInventory_NoRegister()
	{
		return UMordhauInventory::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecipesString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecipesString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemsUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnItemsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRewardsDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnRewardsDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemsDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnItemsDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemsDeserialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnItemsDeserialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemsSerialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnItemsSerialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemsRefreshed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnItemsRefreshed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauInventory_AddItem, "AddItem" }, // 367565109
		{ &Z_Construct_UFunction_UMordhauInventory_AddItems, "AddItems" }, // 2873825081
		{ &Z_Construct_UFunction_UMordhauInventory_AreUnlockRecipesAvailable, "AreUnlockRecipesAvailable" }, // 1691914178
		{ &Z_Construct_UFunction_UMordhauInventory_CanUnlockItem, "CanUnlockItem" }, // 636046674
		{ &Z_Construct_UFunction_UMordhauInventory_CanUnlockItems, "CanUnlockItems" }, // 1399970311
		{ &Z_Construct_UFunction_UMordhauInventory_CollectRewards, "CollectRewards" }, // 1017642141
		{ &Z_Construct_UFunction_UMordhauInventory_ConsolidateItems, "ConsolidateItems" }, // 3667319177
		{ &Z_Construct_UFunction_UMordhauInventory_ConsumeItemStack, "ConsumeItemStack" }, // 2022947981
		{ &Z_Construct_UFunction_UMordhauInventory_DeserializeItems, "DeserializeItems" }, // 955462127
		{ &Z_Construct_UFunction_UMordhauInventory_FakeItemDrop, "FakeItemDrop" }, // 3938158147
		{ &Z_Construct_UFunction_UMordhauInventory_FakeRewardDrop, "FakeRewardDrop" }, // 2118873365
		{ &Z_Construct_UFunction_UMordhauInventory_GetGold, "GetGold" }, // 87392191
		{ &Z_Construct_UFunction_UMordhauInventory_GetGoldItemDefID, "GetGoldItemDefID" }, // 3075376896
		{ &Z_Construct_UFunction_UMordhauInventory_GetItem, "GetItem" }, // 1449249648
		{ &Z_Construct_UFunction_UMordhauInventory_GetItemQuantity, "GetItemQuantity" }, // 2941476292
		{ &Z_Construct_UFunction_UMordhauInventory_GetItemStacks, "GetItemStacks" }, // 2277681279
		{ &Z_Construct_UFunction_UMordhauInventory_GetSkinRarity, "GetSkinRarity" }, // 829133348
		{ &Z_Construct_UFunction_UMordhauInventory_GetStackItem, "GetStackItem" }, // 1897118159
		{ &Z_Construct_UFunction_UMordhauInventory_GetStackItemDefID, "GetStackItemDefID" }, // 3134597874
		{ &Z_Construct_UFunction_UMordhauInventory_GetStackQuantity, "GetStackQuantity" }, // 2951851122
		{ &Z_Construct_UFunction_UMordhauInventory_GetTutorialPackageItemDefID, "GetTutorialPackageItemDefID" }, // 2077212106
		{ &Z_Construct_UFunction_UMordhauInventory_GetUnlockRecipe, "GetUnlockRecipe" }, // 500608515
		{ &Z_Construct_UFunction_UMordhauInventory_GetUnlockRequirements, "GetUnlockRequirements" }, // 354093501
		{ &Z_Construct_UFunction_UMordhauInventory_GetXP, "GetXP" }, // 2257566795
		{ &Z_Construct_UFunction_UMordhauInventory_GetXPItemDefID, "GetXPItemDefID" }, // 863133299
		{ &Z_Construct_UFunction_UMordhauInventory_HasItem, "HasItem" }, // 2539657907
		{ &Z_Construct_UFunction_UMordhauInventory_HasRewards, "HasRewards" }, // 4292547216
		{ &Z_Construct_UFunction_UMordhauInventory_HasSkin, "HasSkin" }, // 1275360982
		{ &Z_Construct_UFunction_UMordhauInventory_HasSupporterPack, "HasSupporterPack" }, // 2470049275
		{ &Z_Construct_UFunction_UMordhauInventory_IsInventoryAvailable, "IsInventoryAvailable" }, // 3006907242
		{ &Z_Construct_UFunction_UMordhauInventory_IsSkinAvailable, "IsSkinAvailable" }, // 3713141236
		{ &Z_Construct_UFunction_UMordhauInventory_OnWebAPIItemsDropped, "OnWebAPIItemsDropped" }, // 547494951
		{ &Z_Construct_UFunction_UMordhauInventory_ParseResponseString, "ParseResponseString" }, // 983646525
		{ &Z_Construct_UFunction_UMordhauInventory_RefreshItems, "RefreshItems" }, // 3243659645
		{ &Z_Construct_UFunction_UMordhauInventory_RequestUnlockRecipes, "RequestUnlockRecipes" }, // 1950779519
		{ &Z_Construct_UFunction_UMordhauInventory_ResetInventory, "ResetInventory" }, // 3899257992
		{ &Z_Construct_UFunction_UMordhauInventory_SerializeItems, "SerializeItems" }, // 2374496554
		{ &Z_Construct_UFunction_UMordhauInventory_SetItemQuantity, "SetItemQuantity" }, // 3010291076
		{ &Z_Construct_UFunction_UMordhauInventory_TriggerItemDrop, "TriggerItemDrop" }, // 1051823502
		{ &Z_Construct_UFunction_UMordhauInventory_TriggerRewardDrop, "TriggerRewardDrop" }, // 2186440577
		{ &Z_Construct_UFunction_UMordhauInventory_UnlockItem, "UnlockItem" }, // 1978980188
		{ &Z_Construct_UFunction_UMordhauInventory_UnlockItems, "UnlockItems" }, // 3952355159
		{ &Z_Construct_UFunction_UMordhauInventory_UnlockLevelUnlocks, "UnlockLevelUnlocks" }, // 118971584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_RecipesString_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_RecipesString = { UE4CodeGen_Private::EPropertyClass::Str, "RecipesString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, RecipesString), METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_RecipesString_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_RecipesString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsUnlocked_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsUnlocked = { UE4CodeGen_Private::EPropertyClass::Struct, "OnItemsUnlocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, OnItemsUnlocked), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsUnlocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnRewardsDropped_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnRewardsDropped = { UE4CodeGen_Private::EPropertyClass::Struct, "OnRewardsDropped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, OnRewardsDropped), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnRewardsDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnRewardsDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDropped_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDropped = { UE4CodeGen_Private::EPropertyClass::Struct, "OnItemsDropped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, OnItemsDropped), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDropped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDeserialized_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDeserialized = { UE4CodeGen_Private::EPropertyClass::Struct, "OnItemsDeserialized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, OnItemsDeserialized), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDeserialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDeserialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsSerialized_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsSerialized = { UE4CodeGen_Private::EPropertyClass::Struct, "OnItemsSerialized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, OnItemsSerialized), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsSerialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsSerialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsRefreshed_MetaData[] = {
		{ "Category", "MordhauInventory" },
		{ "ModuleRelativePath", "MordhauInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsRefreshed = { UE4CodeGen_Private::EPropertyClass::Struct, "OnItemsRefreshed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauInventory, OnItemsRefreshed), Z_Construct_UScriptStruct_FScriptMulticastDelegate, METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsRefreshed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsRefreshed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_RecipesString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnRewardsDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsDeserialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsSerialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauInventory_Statics::NewProp_OnItemsRefreshed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauInventory_Statics::ClassParams = {
		&UMordhauInventory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMordhauInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauInventory, 3360406141);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauInventory(Z_Construct_UClass_UMordhauInventory, &UMordhauInventory::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
