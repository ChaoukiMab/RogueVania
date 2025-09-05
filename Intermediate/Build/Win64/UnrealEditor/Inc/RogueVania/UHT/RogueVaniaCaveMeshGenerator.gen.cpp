// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueVaniaCaveMeshGenerator.h"
#include "PCGPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRogueVaniaCaveMeshGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URogueVaniaCaveMeshGenerator Function GenerateCaveMeshFromPoints *********
struct Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics
{
	struct RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms
	{
		TArray<FPCGPoint> RoomPoints;
		TArray<FPCGPoint> TunnelPoints;
		float VoxelSize;
		float SmoothingIterations;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate cave mesh from points\n" },
#endif
		{ "CPP_Default_SmoothingIterations", "3.000000" },
		{ "CPP_Default_VoxelSize", "100.000000" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveMeshGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate cave mesh from points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TunnelPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TunnelPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingIterations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_RoomPoints_Inner = { "RoomPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_RoomPoints = { "RoomPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms, RoomPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomPoints_MetaData), NewProp_RoomPoints_MetaData) }; // 866600693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_TunnelPoints_Inner = { "TunnelPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_TunnelPoints = { "TunnelPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms, TunnelPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelPoints_MetaData), NewProp_TunnelPoints_MetaData) }; // 866600693
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms, VoxelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_SmoothingIterations = { "SmoothingIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms, SmoothingIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_RoomPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_RoomPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_TunnelPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_TunnelPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_SmoothingIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaCaveMeshGenerator, nullptr, "GenerateCaveMeshFromPoints", Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::RogueVaniaCaveMeshGenerator_eventGenerateCaveMeshFromPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaCaveMeshGenerator::execGenerateCaveMeshFromPoints)
{
	P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_RoomPoints);
	P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_TunnelPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothingIterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->GenerateCaveMeshFromPoints(Z_Param_Out_RoomPoints,Z_Param_Out_TunnelPoints,Z_Param_VoxelSize,Z_Param_SmoothingIterations);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaCaveMeshGenerator Function GenerateCaveMeshFromPoints ***********

// ********** Begin Class URogueVaniaCaveMeshGenerator Function GenerateRoomCavity *****************
struct Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics
{
	struct RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms
	{
		TArray<float> VoxelGrid;
		FPCGPoint RoomPoint;
		float VoxelSize;
		FIntVector GridDimensions;
		FVector GridOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate room cavity at specific point\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveMeshGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate room cavity at specific point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelGrid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VoxelGrid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridDimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_VoxelGrid_Inner = { "VoxelGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_VoxelGrid = { "VoxelGrid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms, VoxelGrid), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_RoomPoint = { "RoomPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms, RoomPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomPoint_MetaData), NewProp_RoomPoint_MetaData) }; // 866600693
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms, VoxelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_GridDimensions = { "GridDimensions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms, GridDimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_GridOrigin = { "GridOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms, GridOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOrigin_MetaData), NewProp_GridOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_VoxelGrid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_VoxelGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_RoomPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_GridDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::NewProp_GridOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaCaveMeshGenerator, nullptr, "GenerateRoomCavity", Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::RogueVaniaCaveMeshGenerator_eventGenerateRoomCavity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaCaveMeshGenerator::execGenerateRoomCavity)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_VoxelGrid);
	P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_RoomPoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
	P_GET_STRUCT(FIntVector,Z_Param_GridDimensions);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GridOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateRoomCavity(Z_Param_Out_VoxelGrid,Z_Param_Out_RoomPoint,Z_Param_VoxelSize,Z_Param_GridDimensions,Z_Param_Out_GridOrigin);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaCaveMeshGenerator Function GenerateRoomCavity *******************

// ********** Begin Class URogueVaniaCaveMeshGenerator Function GenerateTunnelCavity ***************
struct Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics
{
	struct RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms
	{
		TArray<float> VoxelGrid;
		TArray<FPCGPoint> TunnelPoints;
		float VoxelSize;
		FIntVector GridDimensions;
		FVector GridOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate tunnel cavity between points\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveMeshGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate tunnel cavity between points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelGrid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VoxelGrid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TunnelPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TunnelPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridDimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_VoxelGrid_Inner = { "VoxelGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_VoxelGrid = { "VoxelGrid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms, VoxelGrid), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_TunnelPoints_Inner = { "TunnelPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_TunnelPoints = { "TunnelPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms, TunnelPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelPoints_MetaData), NewProp_TunnelPoints_MetaData) }; // 866600693
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms, VoxelSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_GridDimensions = { "GridDimensions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms, GridDimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_GridOrigin = { "GridOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms, GridOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridOrigin_MetaData), NewProp_GridOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_VoxelGrid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_VoxelGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_TunnelPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_TunnelPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_GridDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::NewProp_GridOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaCaveMeshGenerator, nullptr, "GenerateTunnelCavity", Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::RogueVaniaCaveMeshGenerator_eventGenerateTunnelCavity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaCaveMeshGenerator::execGenerateTunnelCavity)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_VoxelGrid);
	P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_TunnelPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
	P_GET_STRUCT(FIntVector,Z_Param_GridDimensions);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GridOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTunnelCavity(Z_Param_Out_VoxelGrid,Z_Param_Out_TunnelPoints,Z_Param_VoxelSize,Z_Param_GridDimensions,Z_Param_Out_GridOrigin);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaCaveMeshGenerator Function GenerateTunnelCavity *****************

// ********** Begin Class URogueVaniaCaveMeshGenerator Function SmoothCaveMesh *********************
struct Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics
{
	struct RogueVaniaCaveMeshGenerator_eventSmoothCaveMesh_Parms
	{
		TArray<float> VoxelGrid;
		FIntVector GridDimensions;
		int32 Iterations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cave Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Smooth the cave mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/RogueVaniaCaveMeshGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smooth the cave mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelGrid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VoxelGrid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridDimensions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_VoxelGrid_Inner = { "VoxelGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_VoxelGrid = { "VoxelGrid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventSmoothCaveMesh_Parms, VoxelGrid), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_GridDimensions = { "GridDimensions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventSmoothCaveMesh_Parms, GridDimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaCaveMeshGenerator_eventSmoothCaveMesh_Parms, Iterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_VoxelGrid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_VoxelGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_GridDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::NewProp_Iterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaCaveMeshGenerator, nullptr, "SmoothCaveMesh", Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::RogueVaniaCaveMeshGenerator_eventSmoothCaveMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::RogueVaniaCaveMeshGenerator_eventSmoothCaveMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaCaveMeshGenerator::execSmoothCaveMesh)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_VoxelGrid);
	P_GET_STRUCT(FIntVector,Z_Param_GridDimensions);
	P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothCaveMesh(Z_Param_Out_VoxelGrid,Z_Param_GridDimensions,Z_Param_Iterations);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaCaveMeshGenerator Function SmoothCaveMesh ***********************

// ********** Begin Class URogueVaniaCaveMeshGenerator *********************************************
void URogueVaniaCaveMeshGenerator::StaticRegisterNativesURogueVaniaCaveMeshGenerator()
{
	UClass* Class = URogueVaniaCaveMeshGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateCaveMeshFromPoints", &URogueVaniaCaveMeshGenerator::execGenerateCaveMeshFromPoints },
		{ "GenerateRoomCavity", &URogueVaniaCaveMeshGenerator::execGenerateRoomCavity },
		{ "GenerateTunnelCavity", &URogueVaniaCaveMeshGenerator::execGenerateTunnelCavity },
		{ "SmoothCaveMesh", &URogueVaniaCaveMeshGenerator::execSmoothCaveMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator;
UClass* URogueVaniaCaveMeshGenerator::GetPrivateStaticClass()
{
	using TClass = URogueVaniaCaveMeshGenerator;
	if (!Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RogueVaniaCaveMeshGenerator"),
			Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator.InnerSingleton,
			StaticRegisterNativesURogueVaniaCaveMeshGenerator,
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
	return Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister()
{
	return URogueVaniaCaveMeshGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RogueVaniaCaveMeshGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RogueVaniaCaveMeshGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateCaveMeshFromPoints, "GenerateCaveMeshFromPoints" }, // 2300628040
		{ &Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateRoomCavity, "GenerateRoomCavity" }, // 2963491297
		{ &Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_GenerateTunnelCavity, "GenerateTunnelCavity" }, // 3501777343
		{ &Z_Construct_UFunction_URogueVaniaCaveMeshGenerator_SmoothCaveMesh, "SmoothCaveMesh" }, // 668008694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URogueVaniaCaveMeshGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics::ClassParams = {
	&URogueVaniaCaveMeshGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator()
{
	if (!Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator.OuterSingleton, Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URogueVaniaCaveMeshGenerator);
URogueVaniaCaveMeshGenerator::~URogueVaniaCaveMeshGenerator() {}
// ********** End Class URogueVaniaCaveMeshGenerator ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URogueVaniaCaveMeshGenerator, URogueVaniaCaveMeshGenerator::StaticClass, TEXT("URogueVaniaCaveMeshGenerator"), &Z_Registration_Info_UClass_URogueVaniaCaveMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URogueVaniaCaveMeshGenerator), 1306680298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h__Script_RogueVania_2927678413(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
