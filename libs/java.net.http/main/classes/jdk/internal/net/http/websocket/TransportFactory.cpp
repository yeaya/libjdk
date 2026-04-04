#include <jdk/internal/net/http/websocket/TransportFactory.h>
#include <jdk/internal/net/http/websocket/MessageQueue.h>
#include <jdk/internal/net/http/websocket/MessageStreamConsumer.h>
#include <jdk/internal/net/http/websocket/Transport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageQueue = ::jdk::internal::net::http::websocket::MessageQueue;
using $MessageStreamConsumer = ::jdk::internal::net::http::websocket::MessageStreamConsumer;
using $Transport = ::jdk::internal::net::http::websocket::Transport;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* TransportFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createTransport", "(Ljdk/internal/net/http/websocket/MessageQueue;Ljdk/internal/net/http/websocket/MessageStreamConsumer;)Ljdk/internal/net/http/websocket/Transport;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransportFactory, createTransport, $Transport*, $MessageQueue*, $MessageStreamConsumer*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.TransportFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TransportFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportFactory);
	});
	return class$;
}

$Class* TransportFactory::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk