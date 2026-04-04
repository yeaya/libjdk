#include <sun/net/httpserver/HttpError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace net {
		namespace httpserver {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HttpError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.HttpError",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpError);
	});
	return class$;
}

$Class* HttpError::class$ = nullptr;

		} // httpserver
	} // net
} // sun