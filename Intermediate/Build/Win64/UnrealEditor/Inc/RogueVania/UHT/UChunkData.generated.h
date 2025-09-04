// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UChunkData.h"

#ifdef ROGUEVANIA_UChunkData_generated_h
#error "UChunkData.generated.h already included, missing '#pragma once' in UChunkData.h"
#endif
#define ROGUEVANIA_UChunkData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUChunkData **************************************************************
ROGUEVANIA_API UClass* Z_Construct_UClass_UUChunkData_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_UChunkData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUChunkData(); \
	friend struct Z_Construct_UClass_UUChunkData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_UUChunkData_NoRegister(); \
public: \
	DECLARE_CLASS2(UUChunkData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_UUChunkData_NoRegister) \
	DECLARE_SERIALIZER(UUChunkData)


#define FID_RogueVania_Source_RogueVania_Public_UChunkData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUChunkData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUChunkData(UUChunkData&&) = delete; \
	UUChunkData(const UUChunkData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUChunkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUChunkData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUChunkData) \
	NO_API virtual ~UUChunkData();


#define FID_RogueVania_Source_RogueVania_Public_UChunkData_h_12_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_UChunkData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_UChunkData_h_15_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_UChunkData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUChunkData;

// ********** End Class UUChunkData ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_UChunkData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
