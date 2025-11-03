#include <sun/net/httpserver/HttpError.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpError, serialVersionUID)},
	{}
};

$MethodInfo _HttpError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpError::*)($String*)>(&HttpError::init$))},
	{}
};

$ClassInfo _HttpError_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.HttpError",
	"java.lang.RuntimeException",
	nullptr,
	_HttpError_FieldInfo_,
	_HttpError_MethodInfo_
};

$Object* allocate$HttpError($Class* clazz) {
	return $of($alloc(HttpError));
}

void HttpError::init$($String* msg) {
	$RuntimeException::init$(msg);
}

HttpError::HttpError() {
}

HttpError::HttpError(const HttpError& e) : $RuntimeException(e) {
}

void HttpError::throw$() {
	throw *this;
}

$Class* HttpError::load$($String* name, bool initialize) {
	$loadClass(HttpError, name, initialize, &_HttpError_ClassInfo_, allocate$HttpError);
	return class$;
}

$Class* HttpError::class$ = nullptr;

		} // httpserver
	} // net
} // sun