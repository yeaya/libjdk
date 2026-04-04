#include <jdk/internal/net/http/websocket/RawChannel$RawEvent.h>
#include <jdk/internal/net/http/websocket/RawChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$Class* RawChannel$RawEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handle", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel$RawEvent, handle, void)},
		{"interestOps", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RawChannel$RawEvent, interestOps, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.RawChannel$RawEvent", "jdk.internal.net.http.websocket.RawChannel", "RawEvent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.websocket.RawChannel$RawEvent",
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
	$loadClass(RawChannel$RawEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RawChannel$RawEvent);
	});
	return class$;
}

$Class* RawChannel$RawEvent::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk