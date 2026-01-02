// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiminalRoomGenerator.h"

#ifdef LIMINALROOMGEN_LiminalRoomGenerator_generated_h
#error "LiminalRoomGenerator.generated.h already included, missing '#pragma once' in LiminalRoomGenerator.h"
#endif
#define LIMINALROOMGEN_LiminalRoomGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiminalCell ******************************************************
#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiminalCell_Statics; \
	LIMINALROOMGEN_API static class UScriptStruct* StaticStruct();


struct FLiminalCell;
// ********** End ScriptStruct FLiminalCell ********************************************************

// ********** Begin Delegate FLiminalGenerationComplete ********************************************
#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_36_DELEGATE \
LIMINALROOMGEN_API void FLiminalGenerationComplete_DelegateWrapper(const FMulticastScriptDelegate& LiminalGenerationComplete);


// ********** End Delegate FLiminalGenerationComplete **********************************************

// ********** Begin Class ALiminalRoomGenerator ****************************************************
#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOneStreamedLevelLoaded); \
	DECLARE_FUNCTION(execGetExitCell); \
	DECLARE_FUNCTION(execGetStartCell); \
	DECLARE_FUNCTION(execClearRuntime); \
	DECLARE_FUNCTION(execGenerateRuntime); \
	DECLARE_FUNCTION(execClearGeneration); \
	DECLARE_FUNCTION(execGenerate);


LIMINALROOMGEN_API UClass* Z_Construct_UClass_ALiminalRoomGenerator_NoRegister();

#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALiminalRoomGenerator(); \
	friend struct Z_Construct_UClass_ALiminalRoomGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIMINALROOMGEN_API UClass* Z_Construct_UClass_ALiminalRoomGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(ALiminalRoomGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiminalRoomGen"), Z_Construct_UClass_ALiminalRoomGenerator_NoRegister) \
	DECLARE_SERIALIZER(ALiminalRoomGenerator)


#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALiminalRoomGenerator(ALiminalRoomGenerator&&) = delete; \
	ALiminalRoomGenerator(const ALiminalRoomGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALiminalRoomGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALiminalRoomGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALiminalRoomGenerator) \
	NO_API virtual ~ALiminalRoomGenerator();


#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_38_PROLOG
#define FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_INCLASS_NO_PURE_DECLS \
	FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALiminalRoomGenerator;

// ********** End Class ALiminalRoomGenerator ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Liminal_Plugins_LiminalRoomGen_Source_LiminalRoomGen_Public_LiminalRoomGenerator_h

// ********** Begin Enum ELiminalCellType **********************************************************
#define FOREACH_ENUM_ELIMINALCELLTYPE(op) \
	op(ELiminalCellType::Empty) \
	op(ELiminalCellType::Start) \
	op(ELiminalCellType::Room) \
	op(ELiminalCellType::ExitTransition) \
	op(ELiminalCellType::Exit) 

enum class ELiminalCellType : uint8;
template<> struct TIsUEnumClass<ELiminalCellType> { enum { Value = true }; };
template<> LIMINALROOMGEN_API UEnum* StaticEnum<ELiminalCellType>();
// ********** End Enum ELiminalCellType ************************************************************

// ********** Begin Enum ELiminalPrefabForwardAxis *************************************************
#define FOREACH_ENUM_ELIMINALPREFABFORWARDAXIS(op) \
	op(ELiminalPrefabForwardAxis::ForwardX) \
	op(ELiminalPrefabForwardAxis::ForwardY) 

enum class ELiminalPrefabForwardAxis : uint8;
template<> struct TIsUEnumClass<ELiminalPrefabForwardAxis> { enum { Value = true }; };
template<> LIMINALROOMGEN_API UEnum* StaticEnum<ELiminalPrefabForwardAxis>();
// ********** End Enum ELiminalPrefabForwardAxis ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
