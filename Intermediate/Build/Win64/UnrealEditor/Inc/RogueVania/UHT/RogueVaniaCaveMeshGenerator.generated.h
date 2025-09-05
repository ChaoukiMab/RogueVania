// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RogueVaniaCaveMeshGenerator.h"

#ifdef ROGUEVANIA_RogueVaniaCaveMeshGenerator_generated_h
#error "RogueVaniaCaveMeshGenerator.generated.h already included, missing '#pragma once' in RogueVaniaCaveMeshGenerator.h"
#endif
#define ROGUEVANIA_RogueVaniaCaveMeshGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStaticMesh;
struct FPCGPoint;

// ********** Begin Class URogueVaniaCaveMeshGenerator *********************************************
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSmoothCaveMesh); \
	DECLARE_FUNCTION(execGenerateTunnelCavity); \
	DECLARE_FUNCTION(execGenerateRoomCavity); \
	DECLARE_FUNCTION(execGenerateCaveMeshFromPoints);


ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURogueVaniaCaveMeshGenerator(); \
	friend struct Z_Construct_UClass_URogueVaniaCaveMeshGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(URogueVaniaCaveMeshGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_URogueVaniaCaveMeshGenerator_NoRegister) \
	DECLARE_SERIALIZER(URogueVaniaCaveMeshGenerator)


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URogueVaniaCaveMeshGenerator(URogueVaniaCaveMeshGenerator&&) = delete; \
	URogueVaniaCaveMeshGenerator(const URogueVaniaCaveMeshGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URogueVaniaCaveMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URogueVaniaCaveMeshGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URogueVaniaCaveMeshGenerator) \
	NO_API virtual ~URogueVaniaCaveMeshGenerator();


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_14_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URogueVaniaCaveMeshGenerator;

// ********** End Class URogueVaniaCaveMeshGenerator ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_RogueVaniaCaveMeshGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
