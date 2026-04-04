#include <jdk/internal/net/http/websocket/OpeningHandshake$Result.h>
#include <jdk/internal/net/http/websocket/OpeningHandshake.h>
#include <jdk/internal/net/http/websocket/TransportFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransportFactory = ::jdk::internal::net::http::websocket::TransportFactory;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void OpeningHandshake$Result::init$($String* subprotocol, $TransportFactory* transport) {
	$set(this, subprotocol, subprotocol);
	$set(this, transport, transport);
}

OpeningHandshake$Result::OpeningHandshake$Result() {
}

$Class* OpeningHandshake$Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"subprotocol", "Ljava/lang/String;", nullptr, $FINAL, $field(OpeningHandshake$Result, subprotocol)},
		{"transport", "Ljdk/internal/net/http/websocket/TransportFactory;", nullptr, $FINAL, $field(OpeningHandshake$Result, transport)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljdk/internal/net/http/websocket/TransportFactory;)V", nullptr, $PRIVATE, $method(OpeningHandshake$Result, init$, void, $String*, $TransportFactory*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.OpeningHandshake$Result", "jdk.internal.net.http.websocket.OpeningHandshake", "Result", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.OpeningHandshake$Result",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.OpeningHandshake"
	};
	$loadClass(OpeningHandshake$Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpeningHandshake$Result);
	});
	return class$;
}

$Class* OpeningHandshake$Result::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk