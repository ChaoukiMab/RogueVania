// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UChunkData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUChunkData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ROGUEVANIA_API UClass* Z_Construct_UClass_UUChunkData();
ROGUEVANIA_API UClass* Z_Construct_UClass_UUChunkData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUChunkData **************************************************************
void UUChunkData::StaticRegisterNativesUUChunkData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUChunkData;
UClass* UUChunkData::GetPrivateStaticClass()
{
	using TClass = UUChunkData;
	if (!Z_Registration_Info_UClass_UUChunkData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UChunkData"),
			Z_Registration_Info_UClass_UUChunkData.InnerSingleton,
			StaticRegisterNativesUUChunkData,
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
	return Z_Registration_Info_UClass_UUChunkData.InnerSingleton;
}
UClass* Z_Construct_UClass_UUChunkData_NoRegister()
{
	return UUChunkData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUChunkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UChunkData.h" },
		{ "ModuleRelativePath", "Public/UChunkData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPoints_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Public/UChunkData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkMesh_MetaData[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Public/UChunkData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectionPoints;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChunkMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUChunkData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUChunkData_Statics::NewProp_ConnectionPoints_Inner = { "ConnectionPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUChunkData_Statics::NewProp_ConnectionPoints = { "ConnectionPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUChunkData, ConnectionPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionPoints_MetaData), NewProp_ConnectionPoints_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUChunkData_Statics::NewProp_ChunkMesh = { "ChunkMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUChunkData, ChunkMesh), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkMesh_MetaData), NewProp_ChunkMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUChunkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUChunkData_Statics::NewProp_ConnectionPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUChunkData_Statics::NewProp_ConnectionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUChunkData_Statics::NewProp_ChunkMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUChunkData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUChunkData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUChunkData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUChunkData_Statics::ClassParams = {
	&UUChunkData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUChunkData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUChunkData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUChunkData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUChunkData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUChunkData()
{
	if (!Z_Registration_Info_UClass_UUChunkData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUChunkData.OuterSingleton, Z_Construct_UClass_UUChunkData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUChunkData.OuterSingleton;
}
UUChunkData::UUChunkData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUChunkData);
UUChunkData::~UUChunkData() {}
// ********** End Class UUChunkData ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UChunkData_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUChunkData, UUChunkData::StaticClass, TEXT("UUChunkData"), &Z_Registration_Info_UClass_UUChunkData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUChunkData), 1319563036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UChunkData_h__Script_RogueVania_34074358(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UChunkData_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_UChunkData_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
