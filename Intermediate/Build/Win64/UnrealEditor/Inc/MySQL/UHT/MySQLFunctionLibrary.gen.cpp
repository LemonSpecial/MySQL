// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySQLFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMySQLFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MYSQL_API UClass* Z_Construct_UClass_UMySQLFunctionLibrary();
MYSQL_API UClass* Z_Construct_UClass_UMySQLFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MySQL();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMySQLFunctionLibrary Function Close *************************************
struct Z_Construct_UFunction_UMySQLFunctionLibrary_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MySQL|MySQL" },
		{ "ModuleRelativePath", "Public/MySQLFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Close constinit property declarations *********************************
// ********** End Function Close constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLFunctionLibrary_Close_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMySQLFunctionLibrary, nullptr, "Close", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLFunctionLibrary_Close_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMySQLFunctionLibrary_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLFunctionLibrary_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMySQLFunctionLibrary::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UMySQLFunctionLibrary::Close();
	P_NATIVE_END;
}
// ********** End Class UMySQLFunctionLibrary Function Close ***************************************

// ********** Begin Class UMySQLFunctionLibrary Function Initialize ********************************
struct Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics
{
	struct MySQLFunctionLibrary_eventInitialize_Parms
	{
		FString host;
		int32 port;
		FString username;
		FString password;
		FString db;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MySQL|MySQL" },
		{ "ModuleRelativePath", "Public/MySQLFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_host;
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_db;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_host = { "host", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLFunctionLibrary_eventInitialize_Parms, host), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLFunctionLibrary_eventInitialize_Parms, port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLFunctionLibrary_eventInitialize_Parms, username), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLFunctionLibrary_eventInitialize_Parms, password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_db = { "db", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLFunctionLibrary_eventInitialize_Parms, db), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MySQLFunctionLibrary_eventInitialize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLFunctionLibrary_eventInitialize_Parms), &Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_db,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMySQLFunctionLibrary, nullptr, "Initialize", 	Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::MySQLFunctionLibrary_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::MySQLFunctionLibrary_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMySQLFunctionLibrary::execInitialize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_host);
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_PROPERTY(FStrProperty,Z_Param_username);
	P_GET_PROPERTY(FStrProperty,Z_Param_password);
	P_GET_PROPERTY(FStrProperty,Z_Param_db);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMySQLFunctionLibrary::Initialize(Z_Param_host,Z_Param_port,Z_Param_username,Z_Param_password,Z_Param_db);
	P_NATIVE_END;
}
// ********** End Class UMySQLFunctionLibrary Function Initialize **********************************

// ********** Begin Class UMySQLFunctionLibrary Function Query *************************************
struct Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics
{
	struct MySQLFunctionLibrary_eventQuery_Parms
	{
		FString query;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MySQL|MySQL" },
		{ "ModuleRelativePath", "Public/MySQLFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Query constinit property declarations *********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_query;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Query constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Query Property Definitions ********************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::NewProp_query = { "query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MySQLFunctionLibrary_eventQuery_Parms, query), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MySQLFunctionLibrary_eventQuery_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MySQLFunctionLibrary_eventQuery_Parms), &Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::NewProp_query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::PropPointers) < 2048);
// ********** End Function Query Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMySQLFunctionLibrary, nullptr, "Query", 	Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::MySQLFunctionLibrary_eventQuery_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::MySQLFunctionLibrary_eventQuery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMySQLFunctionLibrary_Query()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySQLFunctionLibrary_Query_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMySQLFunctionLibrary::execQuery)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_query);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMySQLFunctionLibrary::Query(Z_Param_query);
	P_NATIVE_END;
}
// ********** End Class UMySQLFunctionLibrary Function Query ***************************************

// ********** Begin Class UMySQLFunctionLibrary ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMySQLFunctionLibrary;
UClass* UMySQLFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMySQLFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMySQLFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MySQLFunctionLibrary"),
			Z_Registration_Info_UClass_UMySQLFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMySQLFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMySQLFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMySQLFunctionLibrary_NoRegister()
{
	return UMySQLFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMySQLFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MySQLFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MySQLFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMySQLFunctionLibrary constinit property declarations ********************
// ********** End Class UMySQLFunctionLibrary constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Close"), .Pointer = &UMySQLFunctionLibrary::execClose },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &UMySQLFunctionLibrary::execInitialize },
		{ .NameUTF8 = UTF8TEXT("Query"), .Pointer = &UMySQLFunctionLibrary::execQuery },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySQLFunctionLibrary_Close, "Close" }, // 136882239
		{ &Z_Construct_UFunction_UMySQLFunctionLibrary_Initialize, "Initialize" }, // 1277276042
		{ &Z_Construct_UFunction_UMySQLFunctionLibrary_Query, "Query" }, // 965101455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySQLFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMySQLFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UMySQLFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySQLFunctionLibrary_Statics::ClassParams = {
	&UMySQLFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySQLFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySQLFunctionLibrary_Statics::Class_MetaDataParams)
};
void UMySQLFunctionLibrary::StaticRegisterNativesUMySQLFunctionLibrary()
{
	UClass* Class = UMySQLFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMySQLFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMySQLFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMySQLFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySQLFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMySQLFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMySQLFunctionLibrary.OuterSingleton;
}
UMySQLFunctionLibrary::UMySQLFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMySQLFunctionLibrary);
UMySQLFunctionLibrary::~UMySQLFunctionLibrary() {}
// ********** End Class UMySQLFunctionLibrary ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h__Script_MySQL_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMySQLFunctionLibrary, UMySQLFunctionLibrary::StaticClass, TEXT("UMySQLFunctionLibrary"), &Z_Registration_Info_UClass_UMySQLFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySQLFunctionLibrary), 2564380673U) },
	};
}; // Z_CompiledInDeferFile_FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h__Script_MySQL_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h__Script_MySQL_588529049{
	TEXT("/Script/MySQL"),
	Z_CompiledInDeferFile_FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h__Script_MySQL_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPlugins_Plugins_MySQL_Source_MySQL_Public_MySQLFunctionLibrary_h__Script_MySQL_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
