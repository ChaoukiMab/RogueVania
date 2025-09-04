// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ATunnelGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeATunnelGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
ROGUEVANIA_API UClass* Z_Construct_UClass_AATunnelGenerator();
ROGUEVANIA_API UClass* Z_Construct_UClass_AATunnelGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueVania();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AATunnelGenerator Function GenerateTunnel ********************************
struct Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics
{
	struct ATunnelGenerator_eventGenerateTunnel_Parms
	{
		FVector StartLocation;
		FVector EndLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PCG Tunnel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The function to generate the tunnel, exposed to Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/ATunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The function to generate the tunnel, exposed to Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATunnelGenerator_eventGenerateTunnel_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATunnelGenerator_eventGenerateTunnel_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::NewProp_EndLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AATunnelGenerator, nullptr, "GenerateTunnel", Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::ATunnelGenerator_eventGenerateTunnel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::ATunnelGenerator_eventGenerateTunnel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AATunnelGenerator::execGenerateTunnel)
{
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTunnel(Z_Param_StartLocation,Z_Param_EndLocation);
	P_NATIVE_END;
}
// ********** End Class AATunnelGenerator Function GenerateTunnel **********************************

// ********** Begin Class AATunnelGenerator ********************************************************
void AATunnelGenerator::StaticRegisterNativesAATunnelGenerator()
{
	UClass* Class = AATunnelGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateTunnel", &AATunnelGenerator::execGenerateTunnel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AATunnelGenerator;
UClass* AATunnelGenerator::GetPrivateStaticClass()
{
	using TClass = AATunnelGenerator;
	if (!Z_Registration_Info_UClass_AATunnelGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ATunnelGenerator"),
			Z_Registration_Info_UClass_AATunnelGenerator.InnerSingleton,
			StaticRegisterNativesAATunnelGenerator,
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
	return Z_Registration_Info_UClass_AATunnelGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_AATunnelGenerator_NoRegister()
{
	return AATunnelGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AATunnelGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ATunnelGenerator.h" },
		{ "ModuleRelativePath", "Public/ATunnelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PCG Component to handle the procedural generation\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PCG Component to handle the procedural generation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelSpline_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spline Component to define the tunnel path\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ATunnelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline Component to define the tunnel path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PCGComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TunnelSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AATunnelGenerator_GenerateTunnel, "GenerateTunnel" }, // 23296883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATunnelGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATunnelGenerator_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AATunnelGenerator, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATunnelGenerator_Statics::NewProp_TunnelSpline = { "TunnelSpline", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AATunnelGenerator, TunnelSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelSpline_MetaData), NewProp_TunnelSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATunnelGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATunnelGenerator_Statics::NewProp_PCGComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATunnelGenerator_Statics::NewProp_TunnelSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AATunnelGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AATunnelGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueVania,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AATunnelGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AATunnelGenerator_Statics::ClassParams = {
	&AATunnelGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AATunnelGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AATunnelGenerator_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AATunnelGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AATunnelGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AATunnelGenerator()
{
	if (!Z_Registration_Info_UClass_AATunnelGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATunnelGenerator.OuterSingleton, Z_Construct_UClass_AATunnelGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AATunnelGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AATunnelGenerator);
AATunnelGenerator::~AATunnelGenerator() {}
// ********** End Class AATunnelGenerator **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h__Script_RogueVania_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AATunnelGenerator, AATunnelGenerator::StaticClass, TEXT("AATunnelGenerator"), &Z_Registration_Info_UClass_AATunnelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATunnelGenerator), 312502773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h__Script_RogueVania_1308970511(TEXT("/Script/RogueVania"),
	Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h__Script_RogueVania_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h__Script_RogueVania_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
