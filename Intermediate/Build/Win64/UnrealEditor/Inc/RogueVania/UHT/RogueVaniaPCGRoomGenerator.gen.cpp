// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueVaniaPCGRoomGenerator.h"
#include "PCGPoint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRogueVaniaPCGRoomGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator();
ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister();
ROGUEVANIA_API UEnum* Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERogueVaniaRoomSize *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERogueVaniaRoomSize;
static UEnum* ERogueVaniaRoomSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERogueVaniaRoomSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERogueVaniaRoomSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize, (UObject*)Z_Construct_UPackage__Script_RogueVania(), TEXT("ERogueVaniaRoomSize"));
	}
	return Z_Registration_Info_UEnum_ERogueVaniaRoomSize.OuterSingleton;
}
template<> ROGUEVANIA_API UEnum* StaticEnum<ERogueVaniaRoomSize>()
{
	return ERogueVaniaRoomSize_StaticEnum();
}
struct Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// Enum to define the size of the room\n" },
#endif
		{ "Huge.DisplayName", "Huge" },
		{ "Huge.Name", "ERogueVaniaRoomSize::Huge" },
		{ "Large.DisplayName", "Large" },
		{ "Large.Name", "ERogueVaniaRoomSize::Large" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "ERogueVaniaRoomSize::Medium" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGRoomGenerator.h" },
		{ "Small.DisplayName", "Small" },
		{ "Small.Name", "ERogueVaniaRoomSize::Small" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Enum to define the size of the room" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERogueVaniaRoomSize::Small", (int64)ERogueVaniaRoomSize::Small },
		{ "ERogueVaniaRoomSize::Medium", (int64)ERogueVaniaRoomSize::Medium },
		{ "ERogueVaniaRoomSize::Large", (int64)ERogueVaniaRoomSize::Large },
		{ "ERogueVaniaRoomSize::Huge", (int64)ERogueVaniaRoomSize::Huge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RogueVania,
	nullptr,
	"ERogueVaniaRoomSize",
	"ERogueVaniaRoomSize",
	Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize()
{
	if (!Z_Registration_Info_UEnum_ERogueVaniaRoomSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERogueVaniaRoomSize.InnerSingleton, Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERogueVaniaRoomSize.InnerSingleton;
}
// ********** End Enum ERogueVaniaRoomSize *********************************************************

// ********** Begin Class URogueVaniaPCGRoomGenerator Function GenerateRoomPoints ******************
struct Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics
{
	struct RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms
	{
		ERogueVaniaRoomSize RoomSize;
		FVector CenterLocation;
		float NoiseScale;
		TArray<FPCGPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCG|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generates the points that define the room's shape\n" },
#endif
		{ "CPP_Default_NoiseScale", "0.050000" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGRoomGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates the points that define the room's shape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_RoomSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms, RoomSize), Z_Construct_UEnum_RogueVania_ERogueVaniaRoomSize, METADATA_PARAMS(0, nullptr) }; // 972020981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLocation_MetaData), NewProp_CenterLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms, NoiseScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 866600693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_RoomSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_RoomSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_CenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URogueVaniaPCGRoomGenerator, nullptr, "GenerateRoomPoints", Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::RogueVaniaPCGRoomGenerator_eventGenerateRoomPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URogueVaniaPCGRoomGenerator::execGenerateRoomPoints)
{
	P_GET_ENUM(ERogueVaniaRoomSize,Z_Param_RoomSize);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CenterLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPCGPoint>*)Z_Param__Result=P_THIS->GenerateRoomPoints(ERogueVaniaRoomSize(Z_Param_RoomSize),Z_Param_Out_CenterLocation,Z_Param_NoiseScale);
	P_NATIVE_END;
}
// ********** End Class URogueVaniaPCGRoomGenerator Function GenerateRoomPoints ********************

// ********** Begin Class URogueVaniaPCGRoomGenerator **********************************************
void URogueVaniaPCGRoomGenerator::StaticRegisterNativesURogueVaniaPCGRoomGenerator()
{
	UClass* Class = URogueVaniaPCGRoomGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateRoomPoints", &URogueVaniaPCGRoomGenerator::execGenerateRoomPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator;
UClass* URogueVaniaPCGRoomGenerator::GetPrivateStaticClass()
{
	using TClass = URogueVaniaPCGRoomGenerator;
	if (!Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RogueVaniaPCGRoomGenerator"),
			Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator.InnerSingleton,
			StaticRegisterNativesURogueVaniaPCGRoomGenerator,
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
	return Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister()
{
	return URogueVaniaPCGRoomGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RogueVaniaPCGRoomGenerator.h" },
		{ "ModuleRelativePath", "Public/RogueVaniaPCGRoomGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URogueVaniaPCGRoomGenerator_GenerateRoomPoints, "GenerateRoomPoints" }, // 1781853916
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URogueVaniaPCGRoomGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics::ClassParams = {
	&URogueVaniaPCGRoomGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator()
{
	if (!Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator.OuterSingleton, Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator.OuterSingleton;
}
URogueVaniaPCGRoomGenerator::URogueVaniaPCGRoomGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URogueVaniaPCGRoomGenerator);
URogueVaniaPCGRoomGenerator::~URogueVaniaPCGRoomGenerator() {}
// ********** End Class URogueVaniaPCGRoomGenerator ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h__Script_RogueVania_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERogueVaniaRoomSize_StaticEnum, TEXT("ERogueVaniaRoomSize"), &Z_Registration_Info_UEnum_ERogueVaniaRoomSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 972020981U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URogueVaniaPCGRoomGenerator, URogueVaniaPCGRoomGenerator::StaticClass, TEXT("URogueVaniaPCGRoomGenerator"), &Z_Registration_Info_UClass_URogueVaniaPCGRoomGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URogueVaniaPCGRoomGenerator), 506798053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h__Script_RogueVania_4012833529(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h__Script_RogueVania_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h__Script_RogueVania_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
