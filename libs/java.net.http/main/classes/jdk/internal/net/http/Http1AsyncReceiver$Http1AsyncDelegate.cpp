#include <jdk/internal/net/http/Http1AsyncReceiver$Http1AsyncDelegate.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/net/http/AbstractSubscription.h>
#include <jdk/internal/net/http/Http1AsyncReceiver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractSubscription = ::jdk::internal::net::http::AbstractSubscription;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Class* Http1AsyncReceiver$Http1AsyncDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Http1AsyncReceiver$Http1AsyncDelegate, close, void, $Throwable*)},
		{"onReadError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Http1AsyncReceiver$Http1AsyncDelegate, onReadError, void, $Throwable*)},
		{"onSubscribe", "(Ljdk/internal/net/http/AbstractSubscription;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Http1AsyncReceiver$Http1AsyncDelegate, onSubscribe, void, $AbstractSubscription*)},
		{"subscription", "()Ljdk/internal/net/http/AbstractSubscription;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Http1AsyncReceiver$Http1AsyncDelegate, subscription, $AbstractSubscription*)},
		{"tryAsyncReceive", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Http1AsyncReceiver$Http1AsyncDelegate, tryAsyncReceive, bool, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1AsyncReceiver$Http1AsyncDelegate", "jdk.internal.net.http.Http1AsyncReceiver", "Http1AsyncDelegate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.Http1AsyncReceiver$Http1AsyncDelegate",
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
		"jdk.internal.net.http.Http1AsyncReceiver"
	};
	$loadClass(Http1AsyncReceiver$Http1AsyncDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1AsyncReceiver$Http1AsyncDelegate);
	});
	return class$;
}

$Class* Http1AsyncReceiver$Http1AsyncDelegate::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk