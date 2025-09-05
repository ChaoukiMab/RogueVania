// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueVaniaCaveTestActor.h"
#include "RogueVaniaPCGBiomGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRogueVaniaCaveTestActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_ARogueVaniaCaveTestActor();
ROGUEVANIA_API UClass* Z_Construct_UClass_ARogueVaniaCaveTestActor_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister();
ROGUEVANIA_API UScriptStruct* Z_Construct_UScriptStruct_FRogueVaniaBiomNode();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARogueVaniaCaveTestActor Function ClearCave ******************************
struct Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear current cave\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear current cave" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARogueVaniaCaveTestActor, nullptr, "ClearCave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARogueVaniaCaveTestActor::execClearCave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCave();
	P_NATIVE_END;
}
// ********** End Class ARogueVaniaCaveTestActor Function ClearCave ********************************

// ********** Begin Class ARogueVaniaCaveTestActor Function GenerateCave ***************************
struct Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate cave mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate cave mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARogueVaniaCaveTestActor, nullptr, "GenerateCave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARogueVaniaCaveTestActor::execGenerateCave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateCave();
	P_NATIVE_END;
}
// ********** End Class ARogueVaniaCaveTestActor Function GenerateCave *****************************

// ********** Begin Class ARogueVaniaCaveTestActor Function RegenerateCave *************************
struct Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Regenerate with new parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regenerate with new parameters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARogueVaniaCaveTestActor, nullptr, "RegenerateCave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARogueVaniaCaveTestActor::execRegenerateCave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateCave();
	P_NATIVE_END;
}
// ********** End Class ARogueVaniaCaveTestActor Function RegenerateCave ***************************

// ********** Begin Class ARogueVaniaCaveTestActor *************************************************
void ARogueVaniaCaveTestActor::StaticRegisterNativesARogueVaniaCaveTestActor()
{
	UClass* Class = ARogueVaniaCaveTestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCave", &ARogueVaniaCaveTestActor::execClearCave },
		{ "GenerateCave", &ARogueVaniaCaveTestActor::execGenerateCave },
		{ "RegenerateCave", &ARogueVaniaCaveTestActor::execRegenerateCave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARogueVaniaCaveTestActor;
UClass* ARogueVaniaCaveTestActor::GetPrivateStaticClass()
{
	using TClass = ARogueVaniaCaveTestActor;
	if (!Z_Registration_Info_UClass_ARogueVaniaCaveTestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RogueVaniaCaveTestActor"),
			Z_Registration_Info_UClass_ARogueVaniaCaveTestActor.InnerSingleton,
			StaticRegisterNativesARogueVaniaCaveTestActor,
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
	return Z_Registration_Info_UClass_ARogueVaniaCaveTestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ARogueVaniaCaveTestActor_NoRegister()
{
	return ARogueVaniaCaveTestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RogueVaniaCaveTestActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaveMeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cave Generation Parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cave Generation Parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingIterations_MetaData[] = {
		{ "Category", "Cave Generation" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateOnStart_MetaData[] = {
		{ "Category", "Cave Generation" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugInfo_MetaData[] = {
		{ "Category", "Cave Generation" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomNodes_MetaData[] = {
		{ "Category", "Biome Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Biome Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Biome Settings" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/RogueVaniaCaveTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaveMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingIterations;
	static void NewProp_bAutoGenerateOnStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateOnStart;
	static void NewProp_bShowDebugInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BiomNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BiomGenerator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARogueVaniaCaveTestActor_ClearCave, "ClearCave" }, // 3434653987
		{ &Z_Construct_UFunction_ARogueVaniaCaveTestActor_GenerateCave, "GenerateCave" }, // 1650251102
		{ &Z_Construct_UFunction_ARogueVaniaCaveTestActor_RegenerateCave, "RegenerateCave" }, // 4088971110
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARogueVaniaCaveTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_CaveMeshComponent = { "CaveMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, CaveMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaveMeshComponent_MetaData), NewProp_CaveMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_SmoothingIterations = { "SmoothingIterations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, SmoothingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingIterations_MetaData), NewProp_SmoothingIterations_MetaData) };
void Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bAutoGenerateOnStart_SetBit(void* Obj)
{
	((ARogueVaniaCaveTestActor*)Obj)->bAutoGenerateOnStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bAutoGenerateOnStart = { "bAutoGenerateOnStart", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARogueVaniaCaveTestActor), &Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bAutoGenerateOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoGenerateOnStart_MetaData), NewProp_bAutoGenerateOnStart_MetaData) };
void Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bShowDebugInfo_SetBit(void* Obj)
{
	((ARogueVaniaCaveTestActor*)Obj)->bShowDebugInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bShowDebugInfo = { "bShowDebugInfo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARogueVaniaCaveTestActor), &Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bShowDebugInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugInfo_MetaData), NewProp_bShowDebugInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_BiomNodes_Inner = { "BiomNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRogueVaniaBiomNode, METADATA_PARAMS(0, nullptr) }; // 1986872209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_BiomNodes = { "BiomNodes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, BiomNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomNodes_MetaData), NewProp_BiomNodes_MetaData) }; // 1986872209
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_BiomGenerator = { "BiomGenerator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, BiomGenerator), Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomGenerator_MetaData), NewProp_BiomGenerator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_MeshGenerator = { "MeshGenerator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARogueVaniaCaveTestActor, MeshGenerator), Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGenerator_MetaData), NewProp_MeshGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_CaveMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_SmoothingIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bAutoGenerateOnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_bShowDebugInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_BiomNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_BiomNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_BiomGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::NewProp_MeshGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::ClassParams = {
	&ARogueVaniaCaveTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARogueVaniaCaveTestActor()
{
	if (!Z_Registration_Info_UClass_ARogueVaniaCaveTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARogueVaniaCaveTestActor.OuterSingleton, Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARogueVaniaCaveTestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARogueVaniaCaveTestActor);
ARogueVaniaCaveTestActor::~ARogueVaniaCaveTestActor() {}
// ********** End Class ARogueVaniaCaveTestActor ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARogueVaniaCaveTestActor, ARogueVaniaCaveTestActor::StaticClass, TEXT("ARogueVaniaCaveTestActor"), &Z_Registration_Info_UClass_ARogueVaniaCaveTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARogueVaniaCaveTestActor), 1052103271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h__Script_RogueVania_2856800914(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
