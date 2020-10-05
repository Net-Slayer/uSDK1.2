// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/GameModeMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeMetadata() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UGameModeMetadata_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UGameModeMetadata();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UGameModeMetadata::StaticRegisterNativesUGameModeMetadata()
	{
		UClass* Class = UGameModeMetadata::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultObject", &UGameModeMetadata::execGetDefaultObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics
	{
		struct GameModeMetadata_eventGetDefaultObject_Parms
		{
			UClass* MetadataClass;
			UGameModeMetadata* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MetadataClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameModeMetadata_eventGetDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UGameModeMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::NewProp_MetadataClass = { UE4CodeGen_Private::EPropertyClass::Class, "MetadataClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameModeMetadata_eventGetDefaultObject_Parms, MetadataClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::NewProp_MetadataClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameModeMetaDataStaticFn" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameModeMetadata, "GetDefaultObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GameModeMetadata_eventGetDefaultObject_Parms), Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameModeMetadata_NoRegister()
	{
		return UGameModeMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UGameModeMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tips_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tips;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Tips_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameModeMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameModeMetadata_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameModeMetadata_GetDefaultObject, "GetDefaultObject" }, // 1539189299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeMetadata_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameModeMetadata.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips_MetaData[] = {
		{ "Category", "GameModeMetadata" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips = { UE4CodeGen_Private::EPropertyClass::Array, "Tips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameModeMetadata, Tips), METADATA_PARAMS(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips_Inner = { UE4CodeGen_Private::EPropertyClass::Text, "Tips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "GameModeMetadata" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Thumbnail = { UE4CodeGen_Private::EPropertyClass::Object, "Thumbnail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameModeMetadata, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Thumbnail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "GameModeMetadata" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Text, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameModeMetadata, Description), METADATA_PARAMS(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameModeMetadata" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Text, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameModeMetadata, Name), METADATA_PARAMS(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Prefix_MetaData[] = {
		{ "Category", "GameModeMetadata" },
		{ "ModuleRelativePath", "GameModeMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Prefix = { UE4CodeGen_Private::EPropertyClass::Str, "Prefix", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGameModeMetadata, Prefix), METADATA_PARAMS(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Prefix_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameModeMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Tips_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameModeMetadata_Statics::NewProp_Prefix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameModeMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameModeMetadata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameModeMetadata_Statics::ClassParams = {
		&UGameModeMetadata::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGameModeMetadata_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameModeMetadata_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameModeMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameModeMetadata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameModeMetadata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameModeMetadata, 4049400557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameModeMetadata(Z_Construct_UClass_UGameModeMetadata, &UGameModeMetadata::StaticClass, TEXT("/Script/Mordhau"), TEXT("UGameModeMetadata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameModeMetadata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
