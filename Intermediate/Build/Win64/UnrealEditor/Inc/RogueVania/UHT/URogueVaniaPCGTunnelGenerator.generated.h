// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "URogueVaniaPCGTunnelGenerator.h"

#ifdef ROGUEVANIA_URogueVaniaPCGTunnelGenerator_generated_h
#error "URogueVaniaPCGTunnelGenerator.generated.h already included, missing '#pragma once' in URogueVaniaPCGTunnelGenerator.h"
#endif
#define ROGUEVANIA_URogueVaniaPCGTunnelGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ERogueVaniaTunnelType : uint8;
struct FPCGPoint;

// ********** Begin Class URogueVaniaPCGTunnelGenerator ********************************************
#define FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateMultiSegmentTunnel); \
	DECLARE_FUNCTION(execGenerateAdvancedTunnelPoints); \
	DECLARE_FUNCTION(execGenerateTunnelPoints);


ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURogueVaniaPCGTunnelGenerator(); \
	friend struct Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(URogueVaniaPCGTunnelGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_URogueVaniaPCGTunnelGenerator_NoRegister) \
	DECLARE_SERIALIZER(URogueVaniaPCGTunnelGenerator)


#define FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URogueVaniaPCGTunnelGenerator(URogueVaniaPCGTunnelGenerator&&) = delete; \
	URogueVaniaPCGTunnelGenerator(const URogueVaniaPCGTunnelGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URogueVaniaPCGTunnelGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URogueVaniaPCGTunnelGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URogueVaniaPCGTunnelGenerator) \
	NO_API virtual ~URogueVaniaPCGTunnelGenerator();


#define FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_21_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URogueVaniaPCGTunnelGenerator;

// ********** End Class URogueVaniaPCGTunnelGenerator **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_URogueVaniaPCGTunnelGenerator_h

// ********** Begin Enum ERogueVaniaTunnelType *****************************************************
#define FOREACH_ENUM_EROGUEVANIATUNNELTYPE(op) \
	op(ERogueVaniaTunnelType::RandomWalk) \
	op(ERogueVaniaTunnelType::StraightLine) \
	op(ERogueVaniaTunnelType::LShape) 

enum class ERogueVaniaTunnelType : uint8;
template<> struct TIsUEnumClass<ERogueVaniaTunnelType> { enum { Value = true }; };
template<> ROGUEVANIA_API UEnum* StaticEnum<ERogueVaniaTunnelType>();
// ********** End Enum ERogueVaniaTunnelType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
