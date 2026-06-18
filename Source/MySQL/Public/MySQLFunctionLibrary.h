// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <mysql.h>
#include "MySQLFunctionLibrary.generated.h"

UCLASS()
class MYSQL_API UMySQLFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "MySQL|MySQL")
	static bool Initialize(FString host, int32 port, FString username, FString password, FString db);
    
	UFUNCTION(BlueprintCallable, Category = "MySQL|MySQL")
	static bool Query(FString query);
	
	UFUNCTION(BlueprintCallable, Category = "MySQL|QueryMySQL")
	static bool QueryFormRowValueHas(FString form,FString rowname,FString value);
	
	UFUNCTION(BlueprintCallable, Category = "MySQL|MySQL")
	static void Close();
};