#include <jdk/internal/net/http/websocket/TransportImpl$WriteEvent.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ChannelState.h>
#include <jdk/internal/net/http/websocket/TransportImpl.h>
#include <jcpp.h>

#undef AVAILABLE
#undef CLOSED
#undef OP_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $TransportImpl = ::jdk::internal::net::http::websocket::TransportImpl;
using $TransportImpl$ChannelState = ::jdk::internal::net::http::websocket::TransportImpl$ChannelState;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

void TransportImpl$WriteEvent::init$($TransportImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t TransportImpl$WriteEvent::interestOps() {
	return $SelectionKey::OP_WRITE;
}

void TransportImpl$WriteEvent::handle() {
	$useLocalObjectStack();
	$init($TransportImpl);
	if ($nc($TransportImpl::debug)->on()) {
		$TransportImpl::debug->log("write event"_s);
	}
	$TransportImpl$ChannelState* s = nullptr;
	$init($TransportImpl$ChannelState);
	do {
		s = $cast($TransportImpl$ChannelState, $nc(this->this$0->writeState)->get());
		$init($TransportImpl$ChannelState);
		if (s == $TransportImpl$ChannelState::CLOSED) {
			if ($TransportImpl::debug->on()) {
				$TransportImpl::debug->log("write state %s"_s, $$new($ObjectArray, {s}));
			}
			break;
		}
	} while (!$nc(this->this$0->writeState)->compareAndSet(s, $TransportImpl$ChannelState::AVAILABLE));
	$nc(this->this$0->sendScheduler)->runOrSchedule();
}

TransportImpl$WriteEvent::TransportImpl$WriteEvent() {
}

$Class* TransportImpl$WriteEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/websocket/TransportImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TransportImpl$WriteEvent, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TransportImpl;)V", nullptr, $PRIVATE, $method(TransportImpl$WriteEvent, init$, void, $TransportImpl*)},
		{"handle", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl$WriteEvent, handle, void)},
		{"interestOps", "()I", nullptr, $PUBLIC, $virtualMethod(TransportImpl$WriteEvent, interestOps, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TransportImpl$WriteEvent", "jdk.internal.net.http.websocket.TransportImpl", "WriteEvent", $PRIVATE},
		{"jdk.internal.net.http.websocket.RawChannel$RawEvent", "jdk.internal.net.http.websocket.RawChannel", "RawEvent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.TransportImpl$WriteEvent",
		"java.lang.Object",
		"jdk.internal.net.http.websocket.RawChannel$RawEvent",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.websocket.TransportImpl"
	};
	$loadClass(TransportImpl$WriteEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportImpl$WriteEvent);
	});
	return class$;
}

$Class* TransportImpl$WriteEvent::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk