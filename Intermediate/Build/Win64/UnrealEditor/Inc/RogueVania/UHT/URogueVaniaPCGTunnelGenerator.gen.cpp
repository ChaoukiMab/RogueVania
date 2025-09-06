// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "URogueVaniaPCGTunnelGenerator.h"
#include "PCGPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeURogueVaniaPCGTunnelGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister();
ROGUEVANIA_API UEnum* Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERogueVaniaTunnelType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERogueVaniaTunnelType;
static UEnum* ERogueVaniaTunnelType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERogueVaniaTunnelType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERogueVaniaTunnelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType, (UObject*)Z_Construct_UPackage__Script_RogueVania(), TEXT("ERogueVaniaTunnelType"));
	}
	return Z_Registration_Info_UEnum_ERogueVaniaTunnelType.OuterSingleton;
}
template<> ROGUEVANIA_API UEnum* StaticEnum<ERogueVaniaTunnelType>()
{
	return ERogueVaniaTunnelType_StaticEnum();
}
struct Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum to define the type of tunnel generation\n" },
#endif
		{ "LShape.DisplayName", "L-Shape" },
		{ "LShape.Name", "ERogueVaniaTunnelType::LShape" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
		{ "RandomWalk.DisplayName", "Random Walk" },
		{ "RandomWalk.Name", "ERogueVaniaTunnelType::RandomWalk" },
		{ "StraightLine.DisplayName", "Straight Line" },
		{ "StraightLine.Name", "ERogueVaniaTunnelType::StraightLine" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to define the type of tunnel generation" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERogueVaniaTunnelType::RandomWalk", (int64)ERogueVaniaTunnelType::RandomWalk },
		{ "ERogueVaniaTunnelType::StraightLine", (int64)ERogueVaniaTunnelType::StraightLine },
		{ "ERogueVaniaTunnelType::LShape", (int64)ERogueVaniaTunnelType::LShape },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RogueVania,
	nullptr,
	"ERogueVaniaTunnelType",
	"ERogueVaniaTunnelType",
	Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType()
{
	if (!Z_Registration_Info_UEnum_ERogueVaniaTunnelType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERogueVaniaTunnelType.InnerSingleton, Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERogueVaniaTunnelType.InnerSingleton;
}
// ********** End Enum ERogueVaniaTunnelType *******************************************************

// ********** Begin Class URogueVaniaPCGTunnelGenerator Function GenerateAdvancedTunnelPoints ******
struct Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics
{
	struct RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms
	{
		FVector StartLocation;
		FVector EndLocation;
		ERogueVaniaTunnelType TunnelType;
		float StepDistance;
		float MaxDeviation;
		float NoiseScale;
		int32 RandomSeed;
		TArray<FPCGPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCG|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced tunnel generation with more options\n" },
#endif
		{ "CPP_Default_MaxDeviation", "50.000000" },
		{ "CPP_Default_NoiseScale", "0.050000" },
		{ "CPP_Default_RandomSeed", "-1" },
		{ "CPP_Default_StepDistance", "100.000000" },
		{ "CPP_Default_TunnelType", "RandomWalk" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced tunnel generation with more options" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TunnelType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TunnelType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_TunnelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_TunnelType = { "TunnelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, TunnelType), Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType, METADATA_PARAMS(0, nullptr) }; // 431495551
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_StepDistance = { "StepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, StepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, MaxDeviation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, RandomSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_TunnelType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_TunnelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_StepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_MaxDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaPCGTunnelGenerator, nullptr, "GenerateAdvancedTunnelPoints", Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::RogueVaniaPCGTunnelGenerator_eventGenerateAdvancedTunnelPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaPCGTunnelGenerator::execGenerateAdvancedTunnelPoints)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
	P_GET_ENUM(ERogueVaniaTunnelType,Z_Param_TunnelType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDeviation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPCGPoint>*)Z_Param__Result=P_THIS->GenerateAdvancedTunnelPoints(Z_Param_Out_StartLocation,Z_Param_Out_EndLocation,ERogueVaniaTunnelType(Z_Param_TunnelType),Z_Param_StepDistance,Z_Param_MaxDeviation,Z_Param_NoiseScale,Z_Param_RandomSeed);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaPCGTunnelGenerator Function GenerateAdvancedTunnelPoints ********

// ********** Begin Class URogueVaniaPCGTunnelGenerator Function GenerateMultiSegmentTunnel ********
struct Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics
{
	struct RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms
	{
		TArray<FVector> WayPoints;
		float StepDistance;
		float MaxDeviation;
		float NoiseScale;
		TArray<FPCGPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCG|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generate multiple tunnel segments (useful for complex paths)\n" },
#endif
		{ "CPP_Default_MaxDeviation", "50.000000" },
		{ "CPP_Default_NoiseScale", "0.050000" },
		{ "CPP_Default_StepDistance", "100.000000" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate multiple tunnel segments (useful for complex paths)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WayPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WayPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WayPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_WayPoints_Inner = { "WayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_WayPoints = { "WayPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms, WayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WayPoints_MetaData), NewProp_WayPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_StepDistance = { "StepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms, StepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms, MaxDeviation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_WayPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_WayPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_StepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_MaxDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaPCGTunnelGenerator, nullptr, "GenerateMultiSegmentTunnel", Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::RogueVaniaPCGTunnelGenerator_eventGenerateMultiSegmentTunnel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaPCGTunnelGenerator::execGenerateMultiSegmentTunnel)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_WayPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDeviation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPCGPoint>*)Z_Param__Result=P_THIS->GenerateMultiSegmentTunnel(Z_Param_Out_WayPoints,Z_Param_StepDistance,Z_Param_MaxDeviation,Z_Param_NoiseScale);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaPCGTunnelGenerator Function GenerateMultiSegmentTunnel **********

// ********** Begin Class URogueVaniaPCGTunnelGenerator Function GenerateTunnelPoints **************
struct Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics
{
	struct RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms
	{
		FVector StartLocation;
		FVector EndLocation;
		float StepDistance;
		float MaxDeviation;
		float NoiseScale;
		TArray<FPCGPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCG|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main tunnel generation function with enhanced parameters\n" },
#endif
		{ "CPP_Default_MaxDeviation", "50.000000" },
		{ "CPP_Default_NoiseScale", "0.050000" },
		{ "CPP_Default_StepDistance", "100.000000" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main tunnel generation function with enhanced parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_StepDistance = { "StepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms, StepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms, MaxDeviation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_StepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_MaxDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaPCGTunnelGenerator, nullptr, "GenerateTunnelPoints", Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::RogueVaniaPCGTunnelGenerator_eventGenerateTunnelPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaPCGTunnelGenerator::execGenerateTunnelPoints)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDeviation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPCGPoint>*)Z_Param__Result=P_THIS->GenerateTunnelPoints(Z_Param_Out_StartLocation,Z_Param_Out_EndLocation,Z_Param_StepDistance,Z_Param_MaxDeviation,Z_Param_NoiseScale);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaPCGTunnelGenerator Function GenerateTunnelPoints ****************

// ********** Begin Class URogueVaniaPCGTunnelGenerator ********************************************
void URogueVaniaPCGTunnelGenerator::StaticRegisterNativesURogueVaniaPCGTunnelGenerator()
{
	UClass* Class = URogueVaniaPCGTunnelGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateAdvancedTunnelPoints", &URogueVaniaPCGTunnelGenerator::execGenerateAdvancedTunnelPoints },
		{ "GenerateMultiSegmentTunnel", &URogueVaniaPCGTunnelGenerator::execGenerateMultiSegmentTunnel },
		{ "GenerateTunnelPoints", &URogueVaniaPCGTunnelGenerator::execGenerateTunnelPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator;
UClass* URogueVaniaPCGTunnelGenerator::GetPrivateStaticClass()
{
	using TClass = URogueVaniaPCGTunnelGenerator;
	if (!Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RogueVaniaPCGTunnelGenerator"),
			Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator.InnerSingleton,
			StaticRegisterNativesURogueVaniaPCGTunnelGenerator,
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
	return Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister()
{
	return URogueVaniaPCGTunnelGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "URogueVaniaPCGTunnelGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTunnelWidth_MetaData[] = {
		{ "Category", "Tunnel Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configurable properties\n" },
#endif
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configurable properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTunnelHeight_MetaData[] = {
		{ "Category", "Tunnel Settings" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStepDistance_MetaData[] = {
		{ "Category", "Tunnel Settings" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxDeviation_MetaData[] = {
		{ "Category", "Tunnel Settings" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNoiseScale_MetaData[] = {
		{ "Category", "Tunnel Settings" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTunnelType_MetaData[] = {
		{ "Category", "Tunnel Settings" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTunnelWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTunnelHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultStepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultNoiseScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultTunnelType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultTunnelType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateAdvancedTunnelPoints, "GenerateAdvancedTunnelPoints" }, // 4282613028
		{ &Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateMultiSegmentTunnel, "GenerateMultiSegmentTunnel" }, // 4263898268
		{ &Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints, "GenerateTunnelPoints" }, // 2879886286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URogueVaniaPCGTunnelGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelWidth = { "DefaultTunnelWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGTunnelGenerator, DefaultTunnelWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTunnelWidth_MetaData), NewProp_DefaultTunnelWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelHeight = { "DefaultTunnelHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGTunnelGenerator, DefaultTunnelHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTunnelHeight_MetaData), NewProp_DefaultTunnelHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultStepDistance = { "DefaultStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGTunnelGenerator, DefaultStepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStepDistance_MetaData), NewProp_DefaultStepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultMaxDeviation = { "DefaultMaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGTunnelGenerator, DefaultMaxDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxDeviation_MetaData), NewProp_DefaultMaxDeviation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultNoiseScale = { "DefaultNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGTunnelGenerator, DefaultNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNoiseScale_MetaData), NewProp_DefaultNoiseScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelType = { "DefaultTunnelType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URogueVaniaPCGTunnelGenerator, DefaultTunnelType), Z_Construct_UEnum_RogueVania_ERogueVaniaTunnelType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTunnelType_MetaData), NewProp_DefaultTunnelType_MetaData) }; // 431495551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultStepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultMaxDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultNoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::NewProp_DefaultTunnelType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::ClassParams = {
	&URogueVaniaPCGTunnelGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator()
{
	if (!Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator.OuterSingleton, Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URogueVaniaPCGTunnelGenerator);
URogueVaniaPCGTunnelGenerator::~URogueVaniaPCGTunnelGenerator() {}
// ********** End Class URogueVaniaPCGTunnelGenerator **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERogueVaniaTunnelType_StaticEnum, TEXT("ERogueVaniaTunnelType"), &Z_Registration_Info_UEnum_ERogueVaniaTunnelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 431495551U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URogueVaniaPCGTunnelGenerator, URogueVaniaPCGTunnelGenerator::StaticClass, TEXT("URogueVaniaPCGTunnelGenerator"), &Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URogueVaniaPCGTunnelGenerator), 721606586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_232853065(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
