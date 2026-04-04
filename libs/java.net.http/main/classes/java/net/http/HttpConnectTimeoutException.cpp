#include <java/net/http/HttpConnectTimeoutException.h>
#include <java/net/http/HttpTimeoutException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpTimeoutException = ::java::net::http::HttpTimeoutException;

namespace java {
	namespace net {
		namespace http {

void HttpConnectTimeoutException::init$($String* message) {
	$HttpTimeoutException::init$(message);
}

HttpConnectTimeoutException::HttpConnectTimeoutException() {
}

HttpConnectTimeoutException::HttpConnectTimeoutException(const HttpConnectTimeoutException& e) : $HttpTimeoutException(e) {
}

void HttpConnectTimeoutException::throw$() {
	throw *this;
}

$Class* HttpConnectTimeoutException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpConnectTimeoutException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HttpConnectTimeoutException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.http.HttpConnectTimeoutException",
		"java.net.http.HttpTimeoutException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpConnectTimeoutException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpConnectTimeoutException);
	});
	return class$;
}

$Class* HttpConnectTimeoutException::class$ = nullptr;

		} // http
	} // net
} // java