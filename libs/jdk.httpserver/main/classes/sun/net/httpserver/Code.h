#ifndef _sun_net_httpserver_Code_h_
#define _sun_net_httpserver_Code_h_
//$ class sun.net.httpserver.Code
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HTTP_ACCEPTED")
#undef HTTP_ACCEPTED
#pragma push_macro("HTTP_BAD_GATEWAY")
#undef HTTP_BAD_GATEWAY
#pragma push_macro("HTTP_BAD_METHOD")
#undef HTTP_BAD_METHOD
#pragma push_macro("HTTP_BAD_REQUEST")
#undef HTTP_BAD_REQUEST
#pragma push_macro("HTTP_CLIENT_TIMEOUT")
#undef HTTP_CLIENT_TIMEOUT
#pragma push_macro("HTTP_CONFLICT")
#undef HTTP_CONFLICT
#pragma push_macro("HTTP_CONTINUE")
#undef HTTP_CONTINUE
#pragma push_macro("HTTP_CREATED")
#undef HTTP_CREATED
#pragma push_macro("HTTP_ENTITY_TOO_LARGE")
#undef HTTP_ENTITY_TOO_LARGE
#pragma push_macro("HTTP_FORBIDDEN")
#undef HTTP_FORBIDDEN
#pragma push_macro("HTTP_GATEWAY_TIMEOUT")
#undef HTTP_GATEWAY_TIMEOUT
#pragma push_macro("HTTP_GONE")
#undef HTTP_GONE
#pragma push_macro("HTTP_INTERNAL_ERROR")
#undef HTTP_INTERNAL_ERROR
#pragma push_macro("HTTP_LENGTH_REQUIRED")
#undef HTTP_LENGTH_REQUIRED
#pragma push_macro("HTTP_MOVED_PERM")
#undef HTTP_MOVED_PERM
#pragma push_macro("HTTP_MOVED_TEMP")
#undef HTTP_MOVED_TEMP
#pragma push_macro("HTTP_MULT_CHOICE")
#undef HTTP_MULT_CHOICE
#pragma push_macro("HTTP_NOT_ACCEPTABLE")
#undef HTTP_NOT_ACCEPTABLE
#pragma push_macro("HTTP_NOT_AUTHORITATIVE")
#undef HTTP_NOT_AUTHORITATIVE
#pragma push_macro("HTTP_NOT_FOUND")
#undef HTTP_NOT_FOUND
#pragma push_macro("HTTP_NOT_IMPLEMENTED")
#undef HTTP_NOT_IMPLEMENTED
#pragma push_macro("HTTP_NOT_MODIFIED")
#undef HTTP_NOT_MODIFIED
#pragma push_macro("HTTP_NO_CONTENT")
#undef HTTP_NO_CONTENT
#pragma push_macro("HTTP_OK")
#undef HTTP_OK
#pragma push_macro("HTTP_PARTIAL")
#undef HTTP_PARTIAL
#pragma push_macro("HTTP_PAYMENT_REQUIRED")
#undef HTTP_PAYMENT_REQUIRED
#pragma push_macro("HTTP_PRECON_FAILED")
#undef HTTP_PRECON_FAILED
#pragma push_macro("HTTP_PROXY_AUTH")
#undef HTTP_PROXY_AUTH
#pragma push_macro("HTTP_REQ_TOO_LONG")
#undef HTTP_REQ_TOO_LONG
#pragma push_macro("HTTP_RESET")
#undef HTTP_RESET
#pragma push_macro("HTTP_SEE_OTHER")
#undef HTTP_SEE_OTHER
#pragma push_macro("HTTP_UNAUTHORIZED")
#undef HTTP_UNAUTHORIZED
#pragma push_macro("HTTP_UNAVAILABLE")
#undef HTTP_UNAVAILABLE
#pragma push_macro("HTTP_UNSUPPORTED_TYPE")
#undef HTTP_UNSUPPORTED_TYPE
#pragma push_macro("HTTP_USE_PROXY")
#undef HTTP_USE_PROXY
#pragma push_macro("HTTP_VERSION")
#undef HTTP_VERSION

namespace sun {
	namespace net {
		namespace httpserver {

class Code : public ::java::lang::Object {
	$class(Code, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Code();
	void init$();
	static $String* msg(int32_t code);
	static const int32_t HTTP_CONTINUE = 100;
	static const int32_t HTTP_OK = 200;
	static const int32_t HTTP_CREATED = 201;
	static const int32_t HTTP_ACCEPTED = 202;
	static const int32_t HTTP_NOT_AUTHORITATIVE = 203;
	static const int32_t HTTP_NO_CONTENT = 204;
	static const int32_t HTTP_RESET = 205;
	static const int32_t HTTP_PARTIAL = 206;
	static const int32_t HTTP_MULT_CHOICE = 300;
	static const int32_t HTTP_MOVED_PERM = 301;
	static const int32_t HTTP_MOVED_TEMP = 302;
	static const int32_t HTTP_SEE_OTHER = 303;
	static const int32_t HTTP_NOT_MODIFIED = 304;
	static const int32_t HTTP_USE_PROXY = 305;
	static const int32_t HTTP_BAD_REQUEST = 400;
	static const int32_t HTTP_UNAUTHORIZED = 401;
	static const int32_t HTTP_PAYMENT_REQUIRED = 402;
	static const int32_t HTTP_FORBIDDEN = 403;
	static const int32_t HTTP_NOT_FOUND = 404;
	static const int32_t HTTP_BAD_METHOD = 405;
	static const int32_t HTTP_NOT_ACCEPTABLE = 406;
	static const int32_t HTTP_PROXY_AUTH = 407;
	static const int32_t HTTP_CLIENT_TIMEOUT = 408;
	static const int32_t HTTP_CONFLICT = 409;
	static const int32_t HTTP_GONE = 410;
	static const int32_t HTTP_LENGTH_REQUIRED = 411;
	static const int32_t HTTP_PRECON_FAILED = 412;
	static const int32_t HTTP_ENTITY_TOO_LARGE = 413;
	static const int32_t HTTP_REQ_TOO_LONG = 414;
	static const int32_t HTTP_UNSUPPORTED_TYPE = 415;
	static const int32_t HTTP_INTERNAL_ERROR = 500;
	static const int32_t HTTP_NOT_IMPLEMENTED = 501;
	static const int32_t HTTP_BAD_GATEWAY = 502;
	static const int32_t HTTP_UNAVAILABLE = 503;
	static const int32_t HTTP_GATEWAY_TIMEOUT = 504;
	static const int32_t HTTP_VERSION = 505;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("HTTP_ACCEPTED")
#pragma pop_macro("HTTP_BAD_GATEWAY")
#pragma pop_macro("HTTP_BAD_METHOD")
#pragma pop_macro("HTTP_BAD_REQUEST")
#pragma pop_macro("HTTP_CLIENT_TIMEOUT")
#pragma pop_macro("HTTP_CONFLICT")
#pragma pop_macro("HTTP_CONTINUE")
#pragma pop_macro("HTTP_CREATED")
#pragma pop_macro("HTTP_ENTITY_TOO_LARGE")
#pragma pop_macro("HTTP_FORBIDDEN")
#pragma pop_macro("HTTP_GATEWAY_TIMEOUT")
#pragma pop_macro("HTTP_GONE")
#pragma pop_macro("HTTP_INTERNAL_ERROR")
#pragma pop_macro("HTTP_LENGTH_REQUIRED")
#pragma pop_macro("HTTP_MOVED_PERM")
#pragma pop_macro("HTTP_MOVED_TEMP")
#pragma pop_macro("HTTP_MULT_CHOICE")
#pragma pop_macro("HTTP_NOT_ACCEPTABLE")
#pragma pop_macro("HTTP_NOT_AUTHORITATIVE")
#pragma pop_macro("HTTP_NOT_FOUND")
#pragma pop_macro("HTTP_NOT_IMPLEMENTED")
#pragma pop_macro("HTTP_NOT_MODIFIED")
#pragma pop_macro("HTTP_NO_CONTENT")
#pragma pop_macro("HTTP_OK")
#pragma pop_macro("HTTP_PARTIAL")
#pragma pop_macro("HTTP_PAYMENT_REQUIRED")
#pragma pop_macro("HTTP_PRECON_FAILED")
#pragma pop_macro("HTTP_PROXY_AUTH")
#pragma pop_macro("HTTP_REQ_TOO_LONG")
#pragma pop_macro("HTTP_RESET")
#pragma pop_macro("HTTP_SEE_OTHER")
#pragma pop_macro("HTTP_UNAUTHORIZED")
#pragma pop_macro("HTTP_UNAVAILABLE")
#pragma pop_macro("HTTP_UNSUPPORTED_TYPE")
#pragma pop_macro("HTTP_USE_PROXY")
#pragma pop_macro("HTTP_VERSION")

#endif // _sun_net_httpserver_Code_h_