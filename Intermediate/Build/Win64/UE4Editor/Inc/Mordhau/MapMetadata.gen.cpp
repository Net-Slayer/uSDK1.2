// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MapMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapMetadata() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMapMetaData_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMapMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UMapMetaData::StaticRegisterNativesUMapMetaData()
	{
	}
	UClass* Z_Construct_UClass_UMapMetaData_NoRegister()
	{
		return UMapMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UMapMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tips_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tips;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Tips_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForegroundImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForegroundImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackgroundImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeMaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModeMaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeMaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapMetadata.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips = { UE4CodeGen_Private::EPropertyClass::Array, "Tips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, Tips), METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips_Inner = { UE4CodeGen_Private::EPropertyClass::Text, "Tips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages = { UE4CodeGen_Private::EPropertyClass::Array, "ForegroundImages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, ForegroundImages), METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ForegroundImages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages = { UE4CodeGen_Private::EPropertyClass::Array, "BackgroundImages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, BackgroundImages), METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundImages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_Thumbnail = { UE4CodeGen_Private::EPropertyClass::Object, "Thumbnail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Thumbnail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps = { UE4CodeGen_Private::EPropertyClass::Array, "GameModeMaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, GameModeMaps), METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameModeMaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_BaseMap_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_BaseMap = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, BaseMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_BaseMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_BaseMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Text, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, Description), METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapMetaData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MapMetaData" },
		{ "ModuleRelativePath", "MapMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMapMetaData_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Text, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMapMetaData, Name), METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_Tips_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_ForegroundImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_BackgroundImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_GameModeMaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_BaseMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapMetaData_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapMetaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapMetaData_Statics::ClassParams = {
		&UMapMetaData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMapMetaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMapMetaData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMapMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapMetaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapMetaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapMetaData, 2970090334);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapMetaData(Z_Construct_UClass_UMapMetaData, &UMapMetaData::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMapMetaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapMetaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
