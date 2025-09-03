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
		{ "Comment", "/**\n * \n */// Enum to define the type of tunnel generation\n" },
#endif
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
		{ "RandomWalk.DisplayName", "Random Walk" },
		{ "RandomWalk.Name", "ERogueVaniaTunnelType::RandomWalk" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Enum to define the type of tunnel generation" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERogueVaniaTunnelType::RandomWalk", (int64)ERogueVaniaTunnelType::RandomWalk },
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
		{ "Comment", "// Generates the tunnel spline points from a start to an end location.\n" },
#endif
		{ "CPP_Default_MaxDeviation", "50.000000" },
		{ "CPP_Default_NoiseScale", "0.050000" },
		{ "CPP_Default_StepDistance", "100.000000" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates the tunnel spline points from a start to an end location." },
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
		{ "IncludePath", "URogueVaniaPCGTunnelGenerator.h" },
		{ "ModuleRelativePath", "Public/URogueVaniaPCGTunnelGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URogueVaniaPCGTunnelGenerator_GenerateTunnelPoints, "GenerateTunnelPoints" }, // 4264465505
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URogueVaniaPCGTunnelGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
URogueVaniaPCGTunnelGenerator::URogueVaniaPCGTunnelGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URogueVaniaPCGTunnelGenerator);
URogueVaniaPCGTunnelGenerator::~URogueVaniaPCGTunnelGenerator() {}
// ********** End Class URogueVaniaPCGTunnelGenerator **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERogueVaniaTunnelType_StaticEnum, TEXT("ERogueVaniaTunnelType"), &Z_Registration_Info_UEnum_ERogueVaniaTunnelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1199466322U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URogueVaniaPCGTunnelGenerator, URogueVaniaPCGTunnelGenerator::StaticClass, TEXT("URogueVaniaPCGTunnelGenerator"), &Z_Registration_Info_UClass_URogueVaniaPCGTunnelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URogueVaniaPCGTunnelGenerator), 199364343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_809094776(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h__Script_RogueVania_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
