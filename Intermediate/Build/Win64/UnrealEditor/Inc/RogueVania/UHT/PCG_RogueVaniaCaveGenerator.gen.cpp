// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_RogueVaniaCaveGenerator.h"
#include "RogueVaniaPCGBiomGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePCG_RogueVaniaCaveGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
ROGUEVANIA_API UClass* Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings();
ROGUEVANIA_API UClass* Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_NoRegister();
ROGUEVANIA_API UScriptStruct* Z_Construct_UScriptStruct_FRogueVaniaBiomNode();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCG_RogueVaniaCaveGeneratorSettings *************************************
void UPCG_RogueVaniaCaveGeneratorSettings::StaticRegisterNativesUPCG_RogueVaniaCaveGeneratorSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings;
UClass* UPCG_RogueVaniaCaveGeneratorSettings::GetPrivateStaticClass()
{
	using TClass = UPCG_RogueVaniaCaveGeneratorSettings;
	if (!Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PCG_RogueVaniaCaveGeneratorSettings"),
			Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings.InnerSingleton,
			StaticRegisterNativesUPCG_RogueVaniaCaveGeneratorSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_NoRegister()
{
	return UPCG_RogueVaniaCaveGeneratorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PCG_RogueVaniaCaveGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaCaveGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cave generation parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaCaveGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cave generation parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingIterations_MetaData[] = {
		{ "Category", "Cave Generation" },
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaCaveGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDebugPoints_MetaData[] = {
		{ "Category", "Cave Generation" },
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaCaveGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomNodes_MetaData[] = {
		{ "Category", "Biome Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Biome configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaCaveGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Biome Settings" },
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaCaveGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingIterations;
	static void NewProp_bOutputDebugPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDebugPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BiomNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCG_RogueVaniaCaveGeneratorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCG_RogueVaniaCaveGeneratorSettings, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_SmoothingIterations = { "SmoothingIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCG_RogueVaniaCaveGeneratorSettings, SmoothingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingIterations_MetaData), NewProp_SmoothingIterations_MetaData) };
void Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_bOutputDebugPoints_SetBit(void* Obj)
{
	((UPCG_RogueVaniaCaveGeneratorSettings*)Obj)->bOutputDebugPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_bOutputDebugPoints = { "bOutputDebugPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCG_RogueVaniaCaveGeneratorSettings), &Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_bOutputDebugPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDebugPoints_MetaData), NewProp_bOutputDebugPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_BiomNodes_Inner = { "BiomNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRogueVaniaBiomNode, METADATA_PARAMS(0, nullptr) }; // 1986872209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_BiomNodes = { "BiomNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCG_RogueVaniaCaveGeneratorSettings, BiomNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomNodes_MetaData), NewProp_BiomNodes_MetaData) }; // 1986872209
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCG_RogueVaniaCaveGeneratorSettings, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_SmoothingIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_bOutputDebugPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_BiomNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_BiomNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::NewProp_StartLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::ClassParams = {
	&UPCG_RogueVaniaCaveGeneratorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings()
{
	if (!Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings.OuterSingleton, Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCG_RogueVaniaCaveGeneratorSettings);
UPCG_RogueVaniaCaveGeneratorSettings::~UPCG_RogueVaniaCaveGeneratorSettings() {}
// ********** End Class UPCG_RogueVaniaCaveGeneratorSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaCaveGenerator_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCG_RogueVaniaCaveGeneratorSettings, UPCG_RogueVaniaCaveGeneratorSettings::StaticClass, TEXT("UPCG_RogueVaniaCaveGeneratorSettings"), &Z_Registration_Info_UClass_UPCG_RogueVaniaCaveGeneratorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCG_RogueVaniaCaveGeneratorSettings), 2288958193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaCaveGenerator_h__Script_RogueVania_4150047355(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaCaveGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaCaveGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
