// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RogueVaniaPCGRoomGenerator.h"

#ifdef ROGUEVANIA_RogueVaniaPCGRoomGenerator_generated_h
#error "RogueVaniaPCGRoomGenerator.generated.h already included, missing '#pragma once' in RogueVaniaPCGRoomGenerator.h"
#endif
#define ROGUEVANIA_RogueVaniaPCGRoomGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ERogueVaniaRoomSize : uint8;
struct FPCGPoint;

// ********** Begin Class URogueVaniaPCGRoomGenerator **********************************************
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateOrganicRoom); \
	DECLARE_FUNCTION(execGenerateCircularRoom); \
	DECLARE_FUNCTION(execGenerateRectangularRoom); \
	DECLARE_FUNCTION(execGenerateRoomPoints);


ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister();

#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURogueVaniaPCGRoomGenerator(); \
	friend struct Z_Construct_UClass_URogueVaniaPCGRoomGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROGUEVANIA_API UClass* Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(URogueVaniaPCGRoomGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RogueVania"), Z_Construct_UClass_URogueVaniaPCGRoomGenerator_NoRegister) \
	DECLARE_SERIALIZER(URogueVaniaPCGRoomGenerator)


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URogueVaniaPCGRoomGenerator(URogueVaniaPCGRoomGenerator&&) = delete; \
	URogueVaniaPCGRoomGenerator(const URogueVaniaPCGRoomGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URogueVaniaPCGRoomGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URogueVaniaPCGRoomGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URogueVaniaPCGRoomGenerator) \
	NO_API virtual ~URogueVaniaPCGRoomGenerator();


#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_19_PROLOG
#define FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_INCLASS_NO_PURE_DECLS \
	FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URogueVaniaPCGRoomGenerator;

// ********** End Class URogueVaniaPCGRoomGenerator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueVania_Source_RogueVania_Public_RogueVaniaPCGRoomGenerator_h

// ********** Begin Enum ERogueVaniaRoomSize *******************************************************
#define FOREACH_ENUM_EROGUEVANIAROOMSIZE(op) \
	op(ERogueVaniaRoomSize::Small) \
	op(ERogueVaniaRoomSize::Medium) \
	op(ERogueVaniaRoomSize::Large) 

enum class ERogueVaniaRoomSize : uint8;
template<> struct TIsUEnumClass<ERogueVaniaRoomSize> { enum { Value = true }; };
template<> ROGUEVANIA_API UEnum* StaticEnum<ERogueVaniaRoomSize>();
// ********** End Enum ERogueVaniaRoomSize *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
