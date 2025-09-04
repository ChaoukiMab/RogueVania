// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UProceduralGenerationManager.h"

#ifdef ROGUEVANIA_UProceduralGenerationManager_generated_h
#error "UProceduralGenerationManager.generated.h already included, missing '#pragma once' in UProceduralGenerationManager.h"
#endif
#define ROGUEVANIA_UProceduralGenerationManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUProceduralGenerationManager ********************************************
#define FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateLevel);


ROGUEVANIA_API UClass* Z_Construct_UClass_UUProceduralGenerationManager_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUProceduralGenerationManager(); \
	friend struct Z_Construct_UClass_UUProceduralGenerationManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_UUProceduralGenerationManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUProceduralGenerationManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_UUProceduralGenerationManager_NoRegister) \
	DECLARE_SERIALIZER(UUProceduralGenerationManager)


#define FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUProceduralGenerationManager(UUProceduralGenerationManager&&) = delete; \
	UUProceduralGenerationManager(const UUProceduralGenerationManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUProceduralGenerationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUProceduralGenerationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUProceduralGenerationManager) \
	NO_API virtual ~UUProceduralGenerationManager();


#define FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_15_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUProceduralGenerationManager;

// ********** End Class UUProceduralGenerationManager **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_UProceduralGenerationManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
