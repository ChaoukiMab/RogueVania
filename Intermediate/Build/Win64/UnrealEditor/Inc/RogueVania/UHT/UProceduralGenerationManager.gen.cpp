// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UProceduralGenerationManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUProceduralGenerationManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ROGUEVANIA_API UClass* Z_Construct_UClass_UUChunkData_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_UUProceduralGenerationManager();
ROGUEVANIA_API UClass* Z_Construct_UClass_UUProceduralGenerationManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUProceduralGenerationManager Function GenerateLevel *********************
struct Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics
{
	struct UProceduralGenerationManager_eventGenerateLevel_Parms
	{
		int32 LevelIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/UProceduralGenerationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::NewProp_LevelIndex = { "LevelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralGenerationManager_eventGenerateLevel_Parms, LevelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::NewProp_LevelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUProceduralGenerationManager, nullptr, "GenerateLevel", Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::UProceduralGenerationManager_eventGenerateLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::UProceduralGenerationManager_eventGenerateLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUProceduralGenerationManager::execGenerateLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LevelIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateLevel(Z_Param_LevelIndex);
	P_NATIVE_END;
}
// ********** End Class UUProceduralGenerationManager Function GenerateLevel ***********************

// ********** Begin Class UUProceduralGenerationManager ********************************************
void UUProceduralGenerationManager::StaticRegisterNativesUUProceduralGenerationManager()
{
	UClass* Class = UUProceduralGenerationManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateLevel", &UUProceduralGenerationManager::execGenerateLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUProceduralGenerationManager;
UClass* UUProceduralGenerationManager::GetPrivateStaticClass()
{
	using TClass = UUProceduralGenerationManager;
	if (!Z_Registration_Info_UClass_UUProceduralGenerationManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UProceduralGenerationManager"),
			Z_Registration_Info_UClass_UUProceduralGenerationManager.InnerSingleton,
			StaticRegisterNativesUUProceduralGenerationManager,
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
	return Z_Registration_Info_UClass_UUProceduralGenerationManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UUProceduralGenerationManager_NoRegister()
{
	return UUProceduralGenerationManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUProceduralGenerationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UProceduralGenerationManager.h" },
		{ "ModuleRelativePath", "Public/UProceduralGenerationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableChunks_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/UProceduralGenerationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUProceduralGenerationManager_GenerateLevel, "GenerateLevel" }, // 1311667790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUProceduralGenerationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUProceduralGenerationManager_Statics::NewProp_AvailableChunks_Inner = { "AvailableChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUChunkData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUProceduralGenerationManager_Statics::NewProp_AvailableChunks = { "AvailableChunks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUProceduralGenerationManager, AvailableChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableChunks_MetaData), NewProp_AvailableChunks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUProceduralGenerationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUProceduralGenerationManager_Statics::NewProp_AvailableChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUProceduralGenerationManager_Statics::NewProp_AvailableChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUProceduralGenerationManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUProceduralGenerationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUProceduralGenerationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUProceduralGenerationManager_Statics::ClassParams = {
	&UUProceduralGenerationManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUProceduralGenerationManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUProceduralGenerationManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUProceduralGenerationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUProceduralGenerationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUProceduralGenerationManager()
{
	if (!Z_Registration_Info_UClass_UUProceduralGenerationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUProceduralGenerationManager.OuterSingleton, Z_Construct_UClass_UUProceduralGenerationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUProceduralGenerationManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUProceduralGenerationManager);
UUProceduralGenerationManager::~UUProceduralGenerationManager() {}
// ********** End Class UUProceduralGenerationManager **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUProceduralGenerationManager, UUProceduralGenerationManager::StaticClass, TEXT("UUProceduralGenerationManager"), &Z_Registration_Info_UClass_UUProceduralGenerationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUProceduralGenerationManager), 2113609033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h__Script_RogueVania_3022584316(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
