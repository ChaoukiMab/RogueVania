// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RogueVaniaCaveTestActor.h"

#ifdef ROGUEVANIA_RogueVaniaCaveTestActor_generated_h
#error "RogueVaniaCaveTestActor.generated.h already included, missing '#pragma once' in RogueVaniaCaveTestActor.h"
#endif
#define ROGUEVANIA_RogueVaniaCaveTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARogueVaniaCaveTestActor *************************************************
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegenerateCave); \
	DECLARE_FUNCTION(execClearCave); \
	DECLARE_FUNCTION(execGenerateCave);


ROGUEVANIA_API UClass* Z_Construct_UClass_ARogueVaniaCaveTestActor_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARogueVaniaCaveTestActor(); \
	friend struct Z_Construct_UClass_ARogueVaniaCaveTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_ARogueVaniaCaveTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARogueVaniaCaveTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_ARogueVaniaCaveTestActor_NoRegister) \
	DECLARE_SERIALIZER(ARogueVaniaCaveTestActor)


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARogueVaniaCaveTestActor(ARogueVaniaCaveTestActor&&) = delete; \
	ARogueVaniaCaveTestActor(const ARogueVaniaCaveTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARogueVaniaCaveTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARogueVaniaCaveTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARogueVaniaCaveTestActor) \
	NO_API virtual ~ARogueVaniaCaveTestActor();


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_11_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARogueVaniaCaveTestActor;

// ********** End Class ARogueVaniaCaveTestActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
