// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_RogueVaniaBiomGenerator.h"
#include "RogueVaniaPCGBiomGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePCG_RogueVaniaBiomGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
ROGUEVANIA_API UClass* Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings();
ROGUEVANIA_API UClass* Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_NoRegister();
ROGUEVANIA_API UScriptStruct* Z_Construct_UScriptStruct_FRogueVaniaBiomNode();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCG_RogueVaniaBiomGeneratorSettings *************************************
void UPCG_RogueVaniaBiomGeneratorSettings::StaticRegisterNativesUPCG_RogueVaniaBiomGeneratorSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings;
UClass* UPCG_RogueVaniaBiomGeneratorSettings::GetPrivateStaticClass()
{
	using TClass = UPCG_RogueVaniaBiomGeneratorSettings;
	if (!Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PCG_RogueVaniaBiomGeneratorSettings"),
			Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings.InnerSingleton,
			StaticRegisterNativesUPCG_RogueVaniaBiomGeneratorSettings,
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
	return Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_NoRegister()
{
	return UPCG_RogueVaniaBiomGeneratorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings class - inherits from UPCGSettings\n" },
#endif
		{ "IncludePath", "PCG_RogueVaniaBiomGenerator.h" },
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaBiomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings class - inherits from UPCGSettings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomNodes_MetaData[] = {
		{ "Category", "Biom Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Your biom configuration - these appear as properties in the editor\n" },
#endif
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaBiomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Your biom configuration - these appear as properties in the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Biom Settings" },
		{ "ModuleRelativePath", "Public/PCG_RogueVaniaBiomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BiomNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCG_RogueVaniaBiomGeneratorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::NewProp_BiomNodes_Inner = { "BiomNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRogueVaniaBiomNode, METADATA_PARAMS(0, nullptr) }; // 1986872209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::NewProp_BiomNodes = { "BiomNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCG_RogueVaniaBiomGeneratorSettings, BiomNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomNodes_MetaData), NewProp_BiomNodes_MetaData) }; // 1986872209
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCG_RogueVaniaBiomGeneratorSettings, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::NewProp_BiomNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::NewProp_BiomNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::NewProp_StartLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::ClassParams = {
	&UPCG_RogueVaniaBiomGeneratorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings()
{
	if (!Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings.OuterSingleton, Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCG_RogueVaniaBiomGeneratorSettings);
UPCG_RogueVaniaBiomGeneratorSettings::~UPCG_RogueVaniaBiomGeneratorSettings() {}
// ********** End Class UPCG_RogueVaniaBiomGeneratorSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaBiomGenerator_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCG_RogueVaniaBiomGeneratorSettings, UPCG_RogueVaniaBiomGeneratorSettings::StaticClass, TEXT("UPCG_RogueVaniaBiomGeneratorSettings"), &Z_Registration_Info_UClass_UPCG_RogueVaniaBiomGeneratorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCG_RogueVaniaBiomGeneratorSettings), 837065343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaBiomGenerator_h__Script_RogueVania_1355732167(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaBiomGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_PCG_RogueVaniaBiomGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
