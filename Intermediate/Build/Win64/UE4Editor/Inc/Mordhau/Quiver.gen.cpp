// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/Quiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuiver() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UQuiver_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UQuiver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UQuiver::StaticRegisterNativesUQuiver()
	{
		UClass* Class = UQuiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAppropriateQuiverMesh", &UQuiver::execFindAppropriateQuiverMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics
	{
		struct Quiver_eventFindAppropriateQuiverMesh_Parms
		{
			uint8 Ammo;
			uint8 MaxAmmo;
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxAmmo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Quiver_eventFindAppropriateQuiverMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::NewProp_MaxAmmo = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxAmmo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Quiver_eventFindAppropriateQuiverMesh_Parms, MaxAmmo), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::NewProp_Ammo = { UE4CodeGen_Private::EPropertyClass::Byte, "Ammo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Quiver_eventFindAppropriateQuiverMesh_Parms, Ammo), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuiverFn" },
		{ "ModuleRelativePath", "Quiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuiver, "FindAppropriateQuiverMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Quiver_eventFindAppropriateQuiverMesh_Parms), Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuiver_NoRegister()
	{
		return UQuiver::StaticClass();
	}
	struct Z_Construct_UClass_UQuiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiverMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuiverMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuiverMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachSocketTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuiver_FindAppropriateQuiverMesh, "FindAppropriateQuiverMesh" }, // 1567331963
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quiver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Quiver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes_MetaData[] = {
		{ "Category", "Quiver" },
		{ "ModuleRelativePath", "Quiver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "QuiverMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQuiver, QuiverMeshes), METADATA_PARAMS(Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "QuiverMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketTransform_MetaData[] = {
		{ "Category", "Quiver" },
		{ "ModuleRelativePath", "Quiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "AttachSocketTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQuiver, AttachSocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Quiver" },
		{ "ModuleRelativePath", "Quiver.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQuiver, AttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuiver_Statics::NewProp_QuiverMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuiver_Statics::NewProp_AttachSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuiver_Statics::ClassParams = {
		&UQuiver::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UQuiver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UQuiver_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UQuiver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UQuiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuiver, 2962829888);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuiver(Z_Construct_UClass_UQuiver, &UQuiver::StaticClass, TEXT("/Script/Mordhau"), TEXT("UQuiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
