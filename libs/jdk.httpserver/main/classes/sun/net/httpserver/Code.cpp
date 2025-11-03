#include <sun/net/httpserver/Code.h>

#include <jcpp.h>

#undef HTTP_ACCEPTED
#undef HTTP_BAD_GATEWAY
#undef HTTP_BAD_METHOD
#undef HTTP_BAD_REQUEST
#undef HTTP_CLIENT_TIMEOUT
#undef HTTP_CONFLICT
#undef HTTP_CONTINUE
#undef HTTP_CREATED
#undef HTTP_ENTITY_TOO_LARGE
#undef HTTP_FORBIDDEN
#undef HTTP_GATEWAY_TIMEOUT
#undef HTTP_GONE
#undef HTTP_INTERNAL_ERROR
#undef HTTP_LENGTH_REQUIRED
#undef HTTP_MOVED_PERM
#undef HTTP_MOVED_TEMP
#undef HTTP_MULT_CHOICE
#undef HTTP_NOT_ACCEPTABLE
#undef HTTP_NOT_AUTHORITATIVE
#undef HTTP_NOT_FOUND
#undef HTTP_NOT_IMPLEMENTED
#undef HTTP_NOT_MODIFIED
#undef HTTP_NO_CONTENT
#undef HTTP_OK
#undef HTTP_PARTIAL
#undef HTTP_PAYMENT_REQUIRED
#undef HTTP_PRECON_FAILED
#undef HTTP_PROXY_AUTH
#undef HTTP_REQ_TOO_LONG
#undef HTTP_RESET
#undef HTTP_SEE_OTHER
#undef HTTP_UNAUTHORIZED
#undef HTTP_UNAVAILABLE
#undef HTTP_UNSUPPORTED_TYPE
#undef HTTP_USE_PROXY
#undef HTTP_VERSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _Code_FieldInfo_[] = {
	{"HTTP_CONTINUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_CONTINUE)},
	{"HTTP_OK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_OK)},
	{"HTTP_CREATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_CREATED)},
	{"HTTP_ACCEPTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_ACCEPTED)},
	{"HTTP_NOT_AUTHORITATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_NOT_AUTHORITATIVE)},
	{"HTTP_NO_CONTENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_NO_CONTENT)},
	{"HTTP_RESET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_RESET)},
	{"HTTP_PARTIAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_PARTIAL)},
	{"HTTP_MULT_CHOICE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_MULT_CHOICE)},
	{"HTTP_MOVED_PERM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_MOVED_PERM)},
	{"HTTP_MOVED_TEMP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_MOVED_TEMP)},
	{"HTTP_SEE_OTHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_SEE_OTHER)},
	{"HTTP_NOT_MODIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_NOT_MODIFIED)},
	{"HTTP_USE_PROXY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_USE_PROXY)},
	{"HTTP_BAD_REQUEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_BAD_REQUEST)},
	{"HTTP_UNAUTHORIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_UNAUTHORIZED)},
	{"HTTP_PAYMENT_REQUIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_PAYMENT_REQUIRED)},
	{"HTTP_FORBIDDEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_FORBIDDEN)},
	{"HTTP_NOT_FOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_NOT_FOUND)},
	{"HTTP_BAD_METHOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_BAD_METHOD)},
	{"HTTP_NOT_ACCEPTABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_NOT_ACCEPTABLE)},
	{"HTTP_PROXY_AUTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_PROXY_AUTH)},
	{"HTTP_CLIENT_TIMEOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_CLIENT_TIMEOUT)},
	{"HTTP_CONFLICT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_CONFLICT)},
	{"HTTP_GONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_GONE)},
	{"HTTP_LENGTH_REQUIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_LENGTH_REQUIRED)},
	{"HTTP_PRECON_FAILED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_PRECON_FAILED)},
	{"HTTP_ENTITY_TOO_LARGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_ENTITY_TOO_LARGE)},
	{"HTTP_REQ_TOO_LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_REQ_TOO_LONG)},
	{"HTTP_UNSUPPORTED_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_UNSUPPORTED_TYPE)},
	{"HTTP_INTERNAL_ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_INTERNAL_ERROR)},
	{"HTTP_NOT_IMPLEMENTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_NOT_IMPLEMENTED)},
	{"HTTP_BAD_GATEWAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_BAD_GATEWAY)},
	{"HTTP_UNAVAILABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_UNAVAILABLE)},
	{"HTTP_GATEWAY_TIMEOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_GATEWAY_TIMEOUT)},
	{"HTTP_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Code, HTTP_VERSION)},
	{}
};

$MethodInfo _Code_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Code::*)()>(&Code::init$))},
	{"msg", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Code::msg))},
	{}
};

$ClassInfo _Code_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.Code",
	"java.lang.Object",
	nullptr,
	_Code_FieldInfo_,
	_Code_MethodInfo_
};

$Object* allocate$Code($Class* clazz) {
	return $of($alloc(Code));
}

void Code::init$() {
}

$String* Code::msg(int32_t code) {
	switch (code) {
	case Code::HTTP_OK:
		{
			return " OK"_s;
		}
	case Code::HTTP_CONTINUE:
		{
			return " Continue"_s;
		}
	case Code::HTTP_CREATED:
		{
			return " Created"_s;
		}
	case Code::HTTP_ACCEPTED:
		{
			return " Accepted"_s;
		}
	case Code::HTTP_NOT_AUTHORITATIVE:
		{
			return " Non-Authoritative Information"_s;
		}
	case Code::HTTP_NO_CONTENT:
		{
			return " No Content"_s;
		}
	case Code::HTTP_RESET:
		{
			return " Reset Content"_s;
		}
	case Code::HTTP_PARTIAL:
		{
			return " Partial Content"_s;
		}
	case Code::HTTP_MULT_CHOICE:
		{
			return " Multiple Choices"_s;
		}
	case Code::HTTP_MOVED_PERM:
		{
			return " Moved Permanently"_s;
		}
	case Code::HTTP_MOVED_TEMP:
		{
			return " Temporary Redirect"_s;
		}
	case Code::HTTP_SEE_OTHER:
		{
			return " See Other"_s;
		}
	case Code::HTTP_NOT_MODIFIED:
		{
			return " Not Modified"_s;
		}
	case Code::HTTP_USE_PROXY:
		{
			return " Use Proxy"_s;
		}
	case Code::HTTP_BAD_REQUEST:
		{
			return " Bad Request"_s;
		}
	case Code::HTTP_UNAUTHORIZED:
		{
			return " Unauthorized"_s;
		}
	case Code::HTTP_PAYMENT_REQUIRED:
		{
			return " Payment Required"_s;
		}
	case Code::HTTP_FORBIDDEN:
		{
			return " Forbidden"_s;
		}
	case Code::HTTP_NOT_FOUND:
		{
			return " Not Found"_s;
		}
	case Code::HTTP_BAD_METHOD:
		{
			return " Method Not Allowed"_s;
		}
	case Code::HTTP_NOT_ACCEPTABLE:
		{
			return " Not Acceptable"_s;
		}
	case Code::HTTP_PROXY_AUTH:
		{
			return " Proxy Authentication Required"_s;
		}
	case Code::HTTP_CLIENT_TIMEOUT:
		{
			return " Request Time-Out"_s;
		}
	case Code::HTTP_CONFLICT:
		{
			return " Conflict"_s;
		}
	case Code::HTTP_GONE:
		{
			return " Gone"_s;
		}
	case Code::HTTP_LENGTH_REQUIRED:
		{
			return " Length Required"_s;
		}
	case Code::HTTP_PRECON_FAILED:
		{
			return " Precondition Failed"_s;
		}
	case Code::HTTP_ENTITY_TOO_LARGE:
		{
			return " Request Entity Too Large"_s;
		}
	case Code::HTTP_REQ_TOO_LONG:
		{
			return " Request-URI Too Large"_s;
		}
	case Code::HTTP_UNSUPPORTED_TYPE:
		{
			return " Unsupported Media Type"_s;
		}
	case Code::HTTP_INTERNAL_ERROR:
		{
			return " Internal Server Error"_s;
		}
	case Code::HTTP_NOT_IMPLEMENTED:
		{
			return " Not Implemented"_s;
		}
	case Code::HTTP_BAD_GATEWAY:
		{
			return " Bad Gateway"_s;
		}
	case Code::HTTP_UNAVAILABLE:
		{
			return " Service Unavailable"_s;
		}
	case Code::HTTP_GATEWAY_TIMEOUT:
		{
			return " Gateway Timeout"_s;
		}
	case Code::HTTP_VERSION:
		{
			return " HTTP Version Not Supported"_s;
		}
	default:
		{
			return " "_s;
		}
	}
}

Code::Code() {
}

$Class* Code::load$($String* name, bool initialize) {
	$loadClass(Code, name, initialize, &_Code_ClassInfo_, allocate$Code);
	return class$;
}

$Class* Code::class$ = nullptr;

		} // httpserver
	} // net
} // sun