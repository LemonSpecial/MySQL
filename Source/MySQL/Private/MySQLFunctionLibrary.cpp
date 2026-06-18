// Fill out your copyright notice in the Description page of Project Settings.

#include "MySQLFunctionLibrary.h"

static MYSQL* sql = nullptr;
static MYSQL_RES* result = nullptr;

bool UMySQLFunctionLibrary::Initialize(FString host, int32 port, FString username, FString password, FString db)
{
	if (sql != nullptr)
	{
		mysql_close(sql);
		sql = nullptr;
	}
	if (host.IsEmpty() || username.IsEmpty() || password.IsEmpty() || db.IsEmpty()) return false;
	
	// init and connect
	sql = mysql_init(nullptr);
	if (sql == nullptr) return false;

	MYSQL* connection  = mysql_real_connect(sql,TCHAR_TO_UTF8(*host),TCHAR_TO_UTF8(*username),   
		TCHAR_TO_UTF8(*password),TCHAR_TO_UTF8(*db),port,nullptr,0);
    
	if (connection  == nullptr) return false;
	
	return true;
}

bool UMySQLFunctionLibrary::Query(FString query)
{
	if (result != nullptr) mysql_free_result(result);
	if (sql == nullptr) return false;
	if (query.IsEmpty()) return false;
	if (mysql_query(sql, TCHAR_TO_UTF8(*query)) != 0) return false;
	result = mysql_store_result(sql);
	return true;
}

bool UMySQLFunctionLibrary::QueryFormRowValueHas(FString formname, FString rowname, FString value)
{
	FString query = FString::Printf(TEXT("SELECT COUNT(*) FROM %s WHERE %s = '%s'"), *formname, *rowname, *value);
	if (!Query(query)) return false;
	if (result == nullptr) return false;

	MYSQL_ROW row = mysql_fetch_row(result);
	if (row == nullptr) return false;

	int32 count = FCString::Atoi(UTF8_TO_TCHAR(row[0]));
	return count > 0;
}

void UMySQLFunctionLibrary::Close()
{
	if (result != nullptr) mysql_free_result(result);
	if (sql != nullptr)
	{
		mysql_close(sql);
		sql = nullptr;
	}
}
