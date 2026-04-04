#include <jdk/internal/net/http/common/ConnectionExpiredException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void ConnectionExpiredException::init$($Throwable* cause) {
	$IOException::init$("subscription is finished"_s, cause);
}

ConnectionExpiredException::ConnectionExpiredException() {
}

ConnectionExpiredException::ConnectionExpiredException(const ConnectionExpiredException& e) : $IOException(e) {
}

void ConnectionExpiredException::throw$() {
	throw *this;
}

$Class* ConnectionExpiredException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConnectionExpiredException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ConnectionExpiredException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.ConnectionExpiredException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionExpiredException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionExpiredException);
	});
	return class$;
}

$Class* ConnectionExpiredException::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk