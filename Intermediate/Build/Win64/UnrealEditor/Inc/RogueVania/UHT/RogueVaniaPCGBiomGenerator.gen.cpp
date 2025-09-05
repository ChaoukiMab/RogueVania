// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueVaniaPCGBiomGenerator.h"
#include "PCGPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRogueVaniaPCGBiomGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister();
ROGUEVANIA_API UEnum* Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize();
ROGUEVANIA_API UScriptStruct* Z_Construct_UScriptStruct_FRogueVaniaBiomNode();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRogueVaniaBiomNode ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode;
class UScriptStruct* FRogueVaniaBiomNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRogueVaniaBiomNode, (UObject*)Z_Construct_UPackage__Script_RogueVania(), TEXT("RogueVaniaBiomNode"));
	}
	return Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure to define a single node in our Biom layout\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure to define a single node in our Biom layout" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[] = {
		{ "Category", "Biom" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Biom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Location of the room relative to the start of the biom\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Location of the room relative to the start of the biom" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRogueVaniaBiomNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewProp_RoomSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRogueVaniaBiomNode, RoomSize), Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSize_MetaData), NewProp_RoomSize_MetaData) }; // 2985177357
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRogueVaniaBiomNode, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLocation_MetaData), NewProp_RelativeLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewProp_RoomSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewProp_RoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewProp_RelativeLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
	nullptr,
	&NewStructOps,
	"RogueVaniaBiomNode",
	Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::PropPointers),
	sizeof(FRogueVaniaBiomNode),
	alignof(FRogueVaniaBiomNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRogueVaniaBiomNode()
{
	if (!Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode.InnerSingleton, Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode.InnerSingleton;
}
// ********** End ScriptStruct FRogueVaniaBiomNode *************************************************

// ********** Begin Class URogueVaniaPCGBiomGenerator Function GenerateBiom ************************
struct Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics
{
	struct RogueVaniaPCGBiomGenerator_eventGenerateBiom_Parms
	{
		FVector StartLocation;
		TArray<FPCGPoint> OutRoomPoints;
		TArray<FPCGPoint> OutTunnelPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRoomPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRoomPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTunnelPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTunnelPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGBiomGenerator_eventGenerateBiom_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutRoomPoints_Inner = { "OutRoomPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutRoomPoints = { "OutRoomPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGBiomGenerator_eventGenerateBiom_Parms, OutRoomPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutTunnelPoints_Inner = { "OutTunnelPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutTunnelPoints = { "OutTunnelPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGBiomGenerator_eventGenerateBiom_Parms, OutTunnelPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutRoomPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutRoomPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutTunnelPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::NewProp_OutTunnelPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaPCGBiomGenerator, nullptr, "GenerateBiom", Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::RogueVaniaPCGBiomGenerator_eventGenerateBiom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::RogueVaniaPCGBiomGenerator_eventGenerateBiom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaPCGBiomGenerator::execGenerateBiom)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_OutRoomPoints);
	P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_OutTunnelPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateBiom(Z_Param_Out_StartLocation,Z_Param_Out_OutRoomPoints,Z_Param_Out_OutTunnelPoints);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaPCGBiomGenerator Function GenerateBiom **************************

// ********** Begin Class URogueVaniaPCGBiomGenerator **********************************************
void URogueVaniaPCGBiomGenerator::StaticRegisterNativesURogueVaniaPCGBiomGenerator()
{
	UClass* Class = URogueVaniaPCGBiomGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateBiom", &URogueVaniaPCGBiomGenerator::execGenerateBiom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator;
UClass* URogueVaniaPCGBiomGenerator::GetPrivateStaticClass()
{
	using TClass = URogueVaniaPCGBiomGenerator;
	if (!Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RogueVaniaPCGBiomGenerator"),
			Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator.InnerSingleton,
			StaticRegisterNativesURogueVaniaPCGBiomGenerator,
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
	return Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister()
{
	return URogueVaniaPCGBiomGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RogueVaniaPCGBiomGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomNodes_MetaData[] = {
		{ "Category", "Biom" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelGenerator_MetaData[] = {
		{ "Category", "Generators" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomGenerator_MetaData[] = {
		{ "Category", "Generators" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGBiomGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BiomNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TunnelGenerator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URogueVaniaPCGBiomGenerator_GenerateBiom, "GenerateBiom" }, // 2109910171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URogueVaniaPCGBiomGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_BiomNodes_Inner = { "BiomNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRogueVaniaBiomNode, METADATA_PARAMS(0, nullptr) }; // 1986872209
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_BiomNodes = { "BiomNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGBiomGenerator, BiomNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomNodes_MetaData), NewProp_BiomNodes_MetaData) }; // 1986872209
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_TunnelGenerator = { "TunnelGenerator", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGBiomGenerator, TunnelGenerator), Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelGenerator_MetaData), NewProp_TunnelGenerator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_RoomGenerator = { "RoomGenerator", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGBiomGenerator, RoomGenerator), Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomGenerator_MetaData), NewProp_RoomGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_BiomNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_BiomNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_TunnelGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::NewProp_RoomGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::ClassParams = {
	&URogueVaniaPCGBiomGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator()
{
	if (!Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator.OuterSingleton, Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URogueVaniaPCGBiomGenerator);
URogueVaniaPCGBiomGenerator::~URogueVaniaPCGBiomGenerator() {}
// ********** End Class URogueVaniaPCGBiomGenerator ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h__Script_RogueVania_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRogueVaniaBiomNode::StaticStruct, Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics::NewStructOps, TEXT("RogueVaniaBiomNode"), &Z_Registration_Info_UScriptStruct_FRogueVaniaBiomNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRogueVaniaBiomNode), 1986872209U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URogueVaniaPCGBiomGenerator, URogueVaniaPCGBiomGenerator::StaticClass, TEXT("URogueVaniaPCGBiomGenerator"), &Z_Registration_Info_UClass_URogueVaniaPCGBiomGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URogueVaniaPCGBiomGenerator), 873965303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h__Script_RogueVania_1493562937(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h__Script_RogueVania_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h__Script_RogueVania_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h__Script_RogueVania_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
