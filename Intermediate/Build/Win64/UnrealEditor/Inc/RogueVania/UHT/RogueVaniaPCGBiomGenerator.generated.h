// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RogueVaniaPCGBiomGenerator.h"

#ifdef ROGUEVANIA_RogueVaniaPCGBiomGenerator_generated_h
#error "RogueVaniaPCGBiomGenerator.generated.h already included, missing '#pragma once' in RogueVaniaPCGBiomGenerator.h"
#endif
#define ROGUEVANIA_RogueVaniaPCGBiomGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPCGPoint;

// ********** Begin ScriptStruct FRogueVaniaBiomNode ***********************************************
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRogueVaniaBiomNode_Statics; \
	ROGUEVANIA_API static class UScriptStruct* StaticStruct();


struct FRogueVaniaBiomNode;
// ********** End ScriptStruct FRogueVaniaBiomNode *************************************************

// ********** Begin Class URogueVaniaPCGBiomGenerator **********************************************
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateBiom);


ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURogueVaniaPCGBiomGenerator(); \
	friend struct Z_Construct_UClass_URogueVaniaPCGBiomGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(URogueVaniaPCGBiomGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_URogueVaniaPCGBiomGenerator_NoRegister) \
	DECLARE_SERIALIZER(URogueVaniaPCGBiomGenerator)


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URogueVaniaPCGBiomGenerator(URogueVaniaPCGBiomGenerator&&) = delete; \
	URogueVaniaPCGBiomGenerator(const URogueVaniaPCGBiomGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URogueVaniaPCGBiomGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URogueVaniaPCGBiomGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URogueVaniaPCGBiomGenerator) \
	NO_API virtual ~URogueVaniaPCGBiomGenerator();


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_25_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URogueVaniaPCGBiomGenerator;

// ********** End Class URogueVaniaPCGBiomGenerator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGBiomGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
