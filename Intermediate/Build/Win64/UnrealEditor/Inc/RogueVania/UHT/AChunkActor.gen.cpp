// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AChunkActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAChunkActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_AAChunkActor();
ROGUEVANIA_API UClass* Z_Construct_UClass_AAChunkActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAChunkActor *************************************************************
void AAChunkActor::StaticRegisterNativesAAChunkActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAChunkActor;
UClass* AAChunkActor::GetPrivateStaticClass()
{
	using TClass = AAChunkActor;
	if (!Z_Registration_Info_UClass_AAChunkActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AChunkActor"),
			Z_Registration_Info_UClass_AAChunkActor.InnerSingleton,
			StaticRegisterNativesAAChunkActor,
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
	return Z_Registration_Info_UClass_AAChunkActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAChunkActor_NoRegister()
{
	return AAChunkActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAChunkActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AChunkActor.h" },
		{ "ModuleRelativePath", "Public/AChunkActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AChunkActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAChunkActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAChunkActor_Statics::NewProp_ChunkMeshComponent = { "ChunkMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAChunkActor, ChunkMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkMeshComponent_MetaData), NewProp_ChunkMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAChunkActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAChunkActor_Statics::NewProp_ChunkMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAChunkActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAChunkActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAChunkActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAChunkActor_Statics::ClassParams = {
	&AAChunkActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAChunkActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAChunkActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAChunkActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAChunkActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAChunkActor()
{
	if (!Z_Registration_Info_UClass_AAChunkActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAChunkActor.OuterSingleton, Z_Construct_UClass_AAChunkActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAChunkActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAChunkActor);
AAChunkActor::~AAChunkActor() {}
// ********** End Class AAChunkActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_AChunkActor_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAChunkActor, AAChunkActor::StaticClass, TEXT("AAChunkActor"), &Z_Registration_Info_UClass_AAChunkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAChunkActor), 4212076605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_AChunkActor_h__Script_RogueVania_9187893(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_AChunkActor_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_AChunkActor_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
