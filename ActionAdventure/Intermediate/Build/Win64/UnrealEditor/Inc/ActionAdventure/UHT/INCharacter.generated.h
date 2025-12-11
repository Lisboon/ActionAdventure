// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "INCharacter.h"

#ifdef ACTIONADVENTURE_INCharacter_generated_h
#error "INCharacter.generated.h already included, missing '#pragma once' in INCharacter.h"
#endif
#define ACTIONADVENTURE_INCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AINCharacter *************************************************************
struct Z_Construct_UClass_AINCharacter_Statics;
ACTIONADVENTURE_API UClass* Z_Construct_UClass_AINCharacter_NoRegister();

#define FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAINCharacter(); \
	friend struct ::Z_Construct_UClass_AINCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTIONADVENTURE_API UClass* ::Z_Construct_UClass_AINCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AINCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionAdventure"), Z_Construct_UClass_AINCharacter_NoRegister) \
	DECLARE_SERIALIZER(AINCharacter)


#define FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AINCharacter(AINCharacter&&) = delete; \
	AINCharacter(const AINCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AINCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AINCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AINCharacter) \
	NO_API virtual ~AINCharacter();


#define FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h_9_PROLOG
#define FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AINCharacter;

// ********** End Class AINCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
