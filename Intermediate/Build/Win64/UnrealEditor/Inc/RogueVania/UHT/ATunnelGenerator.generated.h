// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ATunnelGenerator.h"

#ifdef ROGUEVANIA_ATunnelGenerator_generated_h
#error "ATunnelGenerator.generated.h already included, missing '#pragma once' in ATunnelGenerator.h"
#endif
#define ROGUEVANIA_ATunnelGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AATunnelGenerator ********************************************************
#define FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateTunnel);


ROGUEVANIA_API UClass* Z_Construct_UClass_AATunnelGenerator_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAATunnelGenerator(); \
	friend struct Z_Construct_UClass_AATunnelGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_AATunnelGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(AATunnelGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_AATunnelGenerator_NoRegister) \
	DECLARE_SERIALIZER(AATunnelGenerator)


#define FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AATunnelGenerator(AATunnelGenerator&&) = delete; \
	AATunnelGenerator(const AATunnelGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AATunnelGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AATunnelGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AATunnelGenerator) \
	NO_API virtual ~AATunnelGenerator();


#define FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_9_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AATunnelGenerator;

// ********** End Class AATunnelGenerator **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_ATunnelGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
