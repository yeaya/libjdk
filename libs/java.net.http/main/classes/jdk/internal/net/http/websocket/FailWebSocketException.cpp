#include <jdk/internal/net/http/websocket/FailWebSocketException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void FailWebSocketException::init$($String* detail) {
	FailWebSocketException::init$(detail, 1002);
}

void FailWebSocketException::init$($String* detail, int32_t statusCode) {
	$RuntimeException::init$(detail);
	this->statusCode = statusCode;
}

int32_t FailWebSocketException::getStatusCode() {
	return this->statusCode;
}

FailWebSocketException* FailWebSocketException::initCause($Throwable* cause) {
	return $cast(FailWebSocketException, $RuntimeException::initCause(cause));
}

FailWebSocketException::FailWebSocketException() {
}

FailWebSocketException::FailWebSocketException(const FailWebSocketException& e) : $RuntimeException(e) {
}

void FailWebSocketException::throw$() {
	throw *this;
}

$Class* FailWebSocketException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FailWebSocketException, serialVersionUID)},
		{"statusCode", "I", nullptr, $PRIVATE | $FINAL, $field(FailWebSocketException, statusCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(FailWebSocketException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(FailWebSocketException, init$, void, $String*, int32_t)},
		{"getStatusCode", "()I", nullptr, 0, $method(FailWebSocketException, getStatusCode, int32_t)},
		{"initCause", "(Ljava/lang/Throwable;)Ljdk/internal/net/http/websocket/FailWebSocketException;", nullptr, $PUBLIC, $virtualMethod(FailWebSocketException, initCause, FailWebSocketException*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.FailWebSocketException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FailWebSocketException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FailWebSocketException);
	});
	return class$;
}

$Class* FailWebSocketException::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk