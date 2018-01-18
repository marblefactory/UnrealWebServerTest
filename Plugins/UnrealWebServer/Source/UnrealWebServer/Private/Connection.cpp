// Copyright (c) 2017 Isara Technologies. All Rights Reserved.

#include "UnrealWebServerPrivatePCH.h"

#include "Connection.h"

void UConnection::SetConnection(mg_connection* Conn)
{
	this->Connection = Conn;
}

void UConnection::SendResponse(UResponse* Response) const
{
	const FString responseData = Response->GetResponseData();
	mg_printf(Connection, "%s", TCHAR_TO_UTF8(*responseData));
	//UE_LOG(UnrealWebServer, Log, TEXT("SendData : \n%s\n"), *responseData);
}

void UConnection::SendRawResponse(const FString& responseData) const
{
	mg_printf(Connection, "%s", TCHAR_TO_UTF8(*responseData));
	//UE_LOG(UnrealWebServer, Log, TEXT("SendData : \n%s\n"), *responseData);
}

void UConnection::SendRawResponseByte(const uint8& responseByte) const
{
	mg_write(Connection, &responseByte, sizeof(uint8));
}

void UConnection::SendRawResponseBytes(const void* buffer, size_t length) const
{
	mg_write(Connection, buffer, length);
}

FString UConnection::GetHeader(const FString& Name) const
{
	return UTF8_TO_TCHAR(mg_get_header(Connection, TCHAR_TO_UTF8(*Name)));
}

FString UConnection::GetData() const
{
	char post_data[4096];
	int post_data_len;

	post_data_len = mg_read(Connection, post_data, sizeof(post_data));
	return UTF8_TO_TCHAR(post_data);
}

FString UConnection::GetGETVar(const FString& name) const
{
	const struct mg_request_info* ri = mg_get_request_info(Connection);
	char buffer[2048];
	FString ret = "";

	if (mg_get_var(ri->query_string, strlen(ri->query_string == nullptr ? "" : ri->query_string), TCHAR_TO_UTF8(*name), buffer, 1024) > 0)
		ret = UTF8_TO_TCHAR(buffer);

	UE_LOG(UnrealWebServer, Log, TEXT("GetGETVar : %s=>%s\n"), *name, *ret);

	return ret;
}

FString UConnection::GetPOSTVar(const FString& name) const
{
	char post_data[4096];
	int post_data_len;
	char buffer[1024];
	FString ret = "";

	post_data_len = mg_read(Connection, post_data, sizeof(post_data));

	if (mg_get_var(post_data, post_data_len, TCHAR_TO_UTF8(*name), buffer, 1024) > 0)
		ret = UTF8_TO_TCHAR(buffer);

	UE_LOG(UnrealWebServer, Log, TEXT("GetPOSTVar : %s=>%s\n"), *name, *ret);

	return ret;
}

FString UConnection::GetCOOKIEVar(const FString& name) const
{
	const char* cookie = mg_get_header(Connection, "Cookie");
	char cookieBuffer[2048];
	FString ret;

	mg_get_cookie(cookie, TCHAR_TO_UTF8(*name), cookieBuffer, sizeof(cookieBuffer));
	ret = UTF8_TO_TCHAR(cookieBuffer);

	UE_LOG(UnrealWebServer, Log, TEXT("GetCOOKIEVar : %s=>%s\n"), *name, *ret);

	return ret;
}
