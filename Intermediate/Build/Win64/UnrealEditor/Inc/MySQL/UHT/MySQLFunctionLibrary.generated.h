// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySQLFunctionLibrary.h"

#ifdef MYSQL_MySQLFunctionLibrary_generated_h
#error "MySQLFunctionLibrary.generated.h already included, missing '#pragma once' in MySQLFunctionLibrary.h"
#endif
#define MYSQL_MySQLFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMySQLFunctionLibrary ****************************************************
#define FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execQueryFormRowValueHas); \
	DECLARE_FUNCTION(execQuery); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_UMySQLFunctionLibrary_Statics;
MYSQL_API UClass* Z_Construct_UClass_UMySQLFunctionLibrary_NoRegister();

#define FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySQLFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMySQLFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYSQL_API UClass* ::Z_Construct_UClass_UMySQLFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMySQLFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MySQL"), Z_Construct_UClass_UMySQLFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMySQLFunctionLibrary)


#define FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySQLFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMySQLFunctionLibrary(UMySQLFunctionLibrary&&) = delete; \
	UMySQLFunctionLibrary(const UMySQLFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySQLFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySQLFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySQLFunctionLibrary) \
	NO_API virtual ~UMySQLFunctionLibrary();


#define FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_10_PROLOG
#define FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMySQLFunctionLibrary;

// ********** End Class UMySQLFunctionLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
