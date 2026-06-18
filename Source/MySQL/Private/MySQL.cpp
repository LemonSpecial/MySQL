// Copyright Epic Games, Inc. All Rights Reserved.

#include "../Public/MySQL.h"

#define LOCTEXT_NAMESPACE "FMySQLModule"

void FMySQLModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(LogTemp, Display, TEXT("MYSQL PLUGIN START!"));
}

void FMySQLModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMySQLModule, MySQL)