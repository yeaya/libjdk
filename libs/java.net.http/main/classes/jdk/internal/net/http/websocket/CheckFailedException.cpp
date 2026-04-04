#include <jdk/internal/net/http/websocket/CheckFailedException.h>
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

void CheckFailedException::init$($String* message) {
	$RuntimeException::init$(message);
}

CheckFailedException::CheckFailedException() {
}

CheckFailedException::CheckFailedException(const CheckFailedException& e) : $RuntimeException(e) {
}

void CheckFailedException::throw$() {
	throw *this;
}

$Class* CheckFailedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CheckFailedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CheckFailedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.CheckFailedException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CheckFailedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckFailedException);
	});
	return class$;
}

$Class* CheckFailedException::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk