#include <jdk/internal/net/http/websocket/RawChannel$Provider.h>
#include <jdk/internal/net/http/websocket/RawChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RawChannel = ::jdk::internal::net::http::websocket::RawChannel;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* RawChannel$Provider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"closeRawChannel", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel$Provider, closeRawChannel, void), "java.io.IOException"},
		{"rawChannel", "()Ljdk/internal/net/http/websocket/RawChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel$Provider, rawChannel, $RawChannel*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.RawChannel$Provider", "jdk.internal.net.http.websocket.RawChannel", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.RawChannel$Provider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.RawChannel"
	};
	$loadClass(RawChannel$Provider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawChannel$Provider);
	});
	return class$;
}

$Class* RawChannel$Provider::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk