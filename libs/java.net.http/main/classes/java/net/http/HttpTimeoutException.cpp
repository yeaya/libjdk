#include <java/net/http/HttpTimeoutException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {
		namespace http {

void HttpTimeoutException::init$($String* message) {
	$IOException::init$(message);
}

HttpTimeoutException::HttpTimeoutException() {
}

HttpTimeoutException::HttpTimeoutException(const HttpTimeoutException& e) : $IOException(e) {
}

void HttpTimeoutException::throw$() {
	throw *this;
}

$Class* HttpTimeoutException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpTimeoutException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HttpTimeoutException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.net.http.HttpTimeoutException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpTimeoutException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpTimeoutException);
	});
	return class$;
}

$Class* HttpTimeoutException::class$ = nullptr;

		} // http
	} // net
} // java