// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/UnrealWebServerPrivatePCH.h"
#include "Private/HttpStatusCode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpStatusCode() {}
// Cross Module References
	UNREALWEBSERVER_API UEnum* Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode();
	UPackage* Z_Construct_UPackage__Script_UnrealWebServer();
// End Cross Module References
static UEnum* EHttpStatusCode_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode, Z_Construct_UPackage__Script_UnrealWebServer(), TEXT("EHttpStatusCode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHttpStatusCode(EHttpStatusCode_StaticEnum, TEXT("/Script/UnrealWebServer"), TEXT("EHttpStatusCode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealWebServer();
		extern uint32 Get_Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHttpStatusCode"), 0, Get_Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHttpStatusCode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Continue"), 0);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_SwitchingProtocols"), 1);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Processing"), 2);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_OK"), 3);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Created"), 4);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Accepted"), 5);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NonAuthoritativeInformation"), 6);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NoContent"), 7);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_ResetContent"), 8);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_PartialContent"), 9);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_MultiStatus"), 10);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_AlreadyReported"), 11);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_ImUsed"), 12);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_MultipleChoices"), 13);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_MovedPermanently"), 14);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Found"), 15);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_SeeOther"), 16);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NotModified"), 17);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_UseProxy"), 18);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_SwitchProxy"), 19);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_TemporaryRedirect"), 20);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_PermanentRedirect"), 21);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_BadRequest"), 22);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Unauthorized"), 23);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_PaymentRequired"), 24);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Forbidden"), 25);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NotFound"), 26);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_MethodNotAllowed"), 27);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NotAcceptable"), 28);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_ProxyAuthenticationRequired"), 29);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_RequestTimeout"), 30);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Conflict"), 31);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Gone"), 32);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_LengthRequired"), 33);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_PreconditionFailed"), 34);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_PayloadTooLarge"), 35);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_UriTooLong"), 36);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_UnsupportedMediaType"), 37);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_RangeNotSatisfiable"), 38);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_ExpectationFailed"), 39);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_ImATeapot"), 40);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_MisdirectedRequest"), 41);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_UnprocessableEntity"), 42);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Locked"), 43);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_Failed"), 44);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_UpgradeRequired"), 45);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_PreconditionRequired"), 46);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_TooManyRequests"), 47);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_RequestHeaderFieldsTooLarge"), 48);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_UnavailableForLegalReasons"), 49);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_InternalServerError"), 50);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NotImplemented"), 51);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_BadGateway"), 52);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_ServiceUnavailable"), 53);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_GatewayTimeout"), 54);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_HttpVersionNotSupported"), 55);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_VariantAlsoNegotiates"), 56);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_InsufficientStorage"), 57);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_LoopDetected"), 58);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NotExtended"), 59);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_NetworkAuthenticationRequired"), 60);
			EnumNames.Emplace(TEXT("EHttpStatusCode::VE_MAX"), 61);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHttpStatusCode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/HttpStatusCode.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The EHttpStatusCode enum stores all HTTP status codes\nThis enum is needed to fulfill The UResponse with SetResponseStatusCode method\n@author Isara Technologies.\n@version 1.0"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Accepted.DisplayName"), TEXT("202 Accepted"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_AlreadyReported.DisplayName"), TEXT("208 Already Reported"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_BadGateway.DisplayName"), TEXT("502 Bad Gateway"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_BadRequest.DisplayName"), TEXT("400 Bad Request"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Conflict.DisplayName"), TEXT("409 Conflict"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Continue.DisplayName"), TEXT("100 Continue"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Created.DisplayName"), TEXT("201 Created"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ExpectationFailed.DisplayName"), TEXT("417 Expectation Failed"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Failed.DisplayName"), TEXT("424 Failed"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Forbidden.DisplayName"), TEXT("403 Forbidden"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Found.DisplayName"), TEXT("302 Found"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_GatewayTimeout.DisplayName"), TEXT("504 Gateway Time-out"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Gone.DisplayName"), TEXT("410 Gone"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_HttpVersionNotSupported.DisplayName"), TEXT("505 HTTP Version Not Supported"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ImATeapot.DisplayName"), TEXT("418 I'm a teapot"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ImUsed.DisplayName"), TEXT("226 IM Used"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_InsufficientStorage.DisplayName"), TEXT("507 Insufficient Storage"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_InternalServerError.DisplayName"), TEXT("500 Internal Server Error"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LengthRequired.DisplayName"), TEXT("411 Length Required"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Locked.DisplayName"), TEXT("423 Locked"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_LoopDetected.DisplayName"), TEXT("508 Loop Detected"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_MethodNotAllowed.DisplayName"), TEXT("405 Method Not Allowed"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_MisdirectedRequest.DisplayName"), TEXT("421 Misdirected Request"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_MovedPermanently.DisplayName"), TEXT("301 Moved Permanentely"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_MultipleChoices.DisplayName"), TEXT("300 Multiple Choices"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_MultiStatus.DisplayName"), TEXT("207 Multi-Status"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NetworkAuthenticationRequired.DisplayName"), TEXT("511 Network Authentication Required"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NoContent.DisplayName"), TEXT("204 No Content"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NonAuthoritativeInformation.DisplayName"), TEXT("203 Non-Authoritative Information"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NotAcceptable.DisplayName"), TEXT("406 Not Acceptable"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NotExtended.DisplayName"), TEXT("510 Not Extended"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NotFound.DisplayName"), TEXT("404 Not Found"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NotImplemented.DisplayName"), TEXT("501 Not Implemented"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_NotModified.DisplayName"), TEXT("304 Not Modified"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_OK.DisplayName"), TEXT("200 OK"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PartialContent.DisplayName"), TEXT("206 Partial Content"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PayloadTooLarge.DisplayName"), TEXT("413 Payload Too Large"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PaymentRequired.DisplayName"), TEXT("402 Payment Required"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PermanentRedirect.DisplayName"), TEXT("308 Permanent Redirect"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PreconditionFailed.DisplayName"), TEXT("412 Precondition Failed"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_PreconditionRequired.DisplayName"), TEXT("428 Precondition Required"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Processing.DisplayName"), TEXT("102 Processing"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ProxyAuthenticationRequired.DisplayName"), TEXT("407 Proxy Authentication Required"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RangeNotSatisfiable.DisplayName"), TEXT("416 Range Not Satisfiable"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RequestHeaderFieldsTooLarge.DisplayName"), TEXT("431 Request Header Fields Too Large"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_RequestTimeout.DisplayName"), TEXT("408 Request Timeout"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ResetContent.DisplayName"), TEXT("205 Reset Content"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_SeeOther.DisplayName"), TEXT("303 See Other"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_ServiceUnavailable.DisplayName"), TEXT("503 Service Unavailable"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_SwitchingProtocols.DisplayName"), TEXT("101 Switching Protocols"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_SwitchProxy.DisplayName"), TEXT("306 Switch Proxy"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_TemporaryRedirect.DisplayName"), TEXT("307 Temporary Redirect"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_TooManyRequests.DisplayName"), TEXT("429 Too Many Requests"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_Unauthorized.DisplayName"), TEXT("401 Unauthorized"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UnavailableForLegalReasons.DisplayName"), TEXT("451 UnavailableForLegalReasons"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UnprocessableEntity.DisplayName"), TEXT("422 UnprocessableEntity"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UnsupportedMediaType.DisplayName"), TEXT("415 Unsupported Media Type"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UpgradeRequired.DisplayName"), TEXT("426 Upgrade Required"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UriTooLong.DisplayName"), TEXT("414 URI Too Long"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_UseProxy.DisplayName"), TEXT("305 Use Proxy"));
			MetaData->SetValue(ReturnEnum, TEXT("VE_VariantAlsoNegotiates.DisplayName"), TEXT("506 Variant Also Negotiates"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_UnrealWebServer_EHttpStatusCode_CRC() { return 1903738190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
