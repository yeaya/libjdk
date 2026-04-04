#include <jdk/internal/net/http/SocketTube$InternalReadPublisher$ReadEvent.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <jdk/internal/net/http/AsyncEvent.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription.h>
#include <jdk/internal/net/http/SocketTube$InternalReadPublisher.h>
#include <jdk/internal/net/http/SocketTube$SocketFlowEvent.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

#undef OP_READ

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SocketTube$InternalReadPublisher = ::jdk::internal::net::http::SocketTube$InternalReadPublisher;
using $SocketTube$InternalReadPublisher$InternalReadSubscription = ::jdk::internal::net::http::SocketTube$InternalReadPublisher$InternalReadSubscription;
using $SocketTube$SocketFlowEvent = ::jdk::internal::net::http::SocketTube$SocketFlowEvent;
using $Logger = ::jdk::internal::net::http::common::Logger;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void SocketTube$InternalReadPublisher$ReadEvent::init$($SocketTube$InternalReadPublisher* this$1, $SocketChannel* channel, $SocketTube$InternalReadPublisher$InternalReadSubscription* sub) {
	$set(this, this$1, this$1);
	$SocketTube$SocketFlowEvent::init$($SelectionKey::OP_READ, channel);
	$set(this, sub, sub);
}

void SocketTube$InternalReadPublisher$ReadEvent::signalEvent() {
	try {
		$nc($nc(this->this$1->this$0)->client)->eventUpdated(this);
		$nc(this->sub)->signalReadable();
	} catch ($Throwable& t) {
		$nc(this->sub)->signalError(t);
	}
}

void SocketTube$InternalReadPublisher$ReadEvent::signalError($Throwable* error) {
	if ($nc($nc(this->this$1->this$0)->debug)->on()) {
		this->this$1->this$0->debug->log("signalError to %s (%s)"_s, $$new($ObjectArray, {
			this->sub,
			error
		}));
	}
	$nc(this->sub)->signalError(error);
}

$Logger* SocketTube$InternalReadPublisher$ReadEvent::debug() {
	return $nc(this->this$1->this$0)->debug;
}

SocketTube$InternalReadPublisher$ReadEvent::SocketTube$InternalReadPublisher$ReadEvent() {
}

$Class* SocketTube$InternalReadPublisher$ReadEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/net/http/SocketTube$InternalReadPublisher;", nullptr, $FINAL | $SYNTHETIC, $field(SocketTube$InternalReadPublisher$ReadEvent, this$1)},
		{"sub", "Ljdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription;", nullptr, $FINAL, $field(SocketTube$InternalReadPublisher$ReadEvent, sub)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalReadPublisher;Ljava/nio/channels/SocketChannel;Ljdk/internal/net/http/SocketTube$InternalReadPublisher$InternalReadSubscription;)V", nullptr, 0, $method(SocketTube$InternalReadPublisher$ReadEvent, init$, void, $SocketTube$InternalReadPublisher*, $SocketChannel*, $SocketTube$InternalReadPublisher$InternalReadSubscription*)},
		{"debug", "()Ljdk/internal/net/http/common/Logger;", nullptr, 0, $virtualMethod(SocketTube$InternalReadPublisher$ReadEvent, debug, $Logger*)},
		{"signalError", "(Ljava/lang/Throwable;)V", nullptr, $PROTECTED | $FINAL, $virtualMethod(SocketTube$InternalReadPublisher$ReadEvent, signalError, void, $Throwable*)},
		{"signalEvent", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(SocketTube$InternalReadPublisher$ReadEvent, signalEvent, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$InternalReadPublisher", "jdk.internal.net.http.SocketTube", "InternalReadPublisher", $PRIVATE | $FINAL},
		{"jdk.internal.net.http.SocketTube$InternalReadPublisher$ReadEvent", "jdk.internal.net.http.SocketTube$InternalReadPublisher", "ReadEvent", $FINAL},
		{"jdk.internal.net.http.SocketTube$SocketFlowEvent", "jdk.internal.net.http.SocketTube", "SocketFlowEvent", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.SocketTube$InternalReadPublisher$ReadEvent",
		"jdk.internal.net.http.SocketTube$SocketFlowEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.SocketTube"
	};
	$loadClass(SocketTube$InternalReadPublisher$ReadEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalReadPublisher$ReadEvent);
	});
	return class$;
}

$Class* SocketTube$InternalReadPublisher$ReadEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk