// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ParticleSystemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AParticleSystemActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AParticleSystemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AParticleSystemActor_SparseTick();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AParticleSystemActor::StaticRegisterNativesAParticleSystemActor()
	{
		UClass* Class = AParticleSystemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SparseTick", &AParticleSystemActor::execSparseTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParticleSystemActor_SparseTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticleSystemActor_SparseTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ParticleSysFn" },
		{ "ModuleRelativePath", "ParticleSystemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticleSystemActor_SparseTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticleSystemActor, "SparseTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticleSystemActor_SparseTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticleSystemActor_SparseTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticleSystemActor_SparseTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticleSystemActor_SparseTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParticleSystemActor_NoRegister()
	{
		return AParticleSystemActor::StaticClass();
	}
	struct Z_Construct_UClass_AParticleSystemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticleSystemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParticleSystemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParticleSystemActor_SparseTick, "SparseTick" }, // 3675654500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleSystemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParticleSystemActor.h" },
		{ "ModuleRelativePath", "ParticleSystemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "ParticleSystemActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParticleSystemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_ParticleSystemComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSystemComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AParticleSystemActor, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_ParticleSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "ParticleSystemActor" },
		{ "ModuleRelativePath", "ParticleSystemActor.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_Template = { UE4CodeGen_Private::EPropertyClass::Object, "Template", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticleSystemActor, Template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_Template_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_Template_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticleSystemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_ParticleSystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleSystemActor_Statics::NewProp_Template,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticleSystemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleSystemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticleSystemActor_Statics::ClassParams = {
		&AParticleSystemActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AParticleSystemActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AParticleSystemActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AParticleSystemActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParticleSystemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticleSystemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParticleSystemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticleSystemActor, 3858346889);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticleSystemActor(Z_Construct_UClass_AParticleSystemActor, &AParticleSystemActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AParticleSystemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleSystemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
