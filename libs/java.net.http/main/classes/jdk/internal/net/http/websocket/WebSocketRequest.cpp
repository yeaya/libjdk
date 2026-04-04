#include <jdk/internal/net/http/websocket/WebSocketRequest.h>
#include <java/net/Proxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* WebSocketRequest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isWebSocket", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocketRequest, isWebSocket, void, bool)},
		{"setProxy", "(Ljava/net/Proxy;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocketRequest, setProxy, void, $Proxy*)},
		{"setSystemHeader", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebSocketRequest, setSystemHeader, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.WebSocketRequest",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WebSocketRequest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WebSocketRequest);
	});
	return class$;
}

$Class* WebSocketRequest::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk