// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AChunkActor.h"

#ifdef ROGUEVANIA_AChunkActor_generated_h
#error "AChunkActor.generated.h already included, missing '#pragma once' in AChunkActor.h"
#endif
#define ROGUEVANIA_AChunkActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAChunkActor *************************************************************
ROGUEVANIA_API UClass* Z_Construct_UClass_AAChunkActor_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_AChunkActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAChunkActor(); \
	friend struct Z_Construct_UClass_AAChunkActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_AAChunkActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAChunkActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_AAChunkActor_NoRegister) \
	DECLARE_SERIALIZER(AAChunkActor)


#define FID_RogueVania_Source_RogueVania_Public_AChunkActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAChunkActor(AAChunkActor&&) = delete; \
	AAChunkActor(const AAChunkActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAChunkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAChunkActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAChunkActor) \
	NO_API virtual ~AAChunkActor();


#define FID_RogueVania_Source_RogueVania_Public_AChunkActor_h_9_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_AChunkActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_AChunkActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_AChunkActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAChunkActor;

// ********** End Class AAChunkActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_AChunkActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
