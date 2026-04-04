#include <jdk/internal/net/http/websocket/TransportImpl$ReadEvent.h>
#include <java/nio/channels/SelectionKey.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jdk/internal/net/http/websocket/TransportImpl$ChannelState.h>
#include <jdk/internal/net/http/websocket/TransportImpl.h>
#include <jcpp.h>

#undef AVAILABLE
#undef OP_READ

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

void TransportImpl$ReadEvent::init$($TransportImpl* this$0) {
	$set(this, this$0, this$0);
}

int32_t TransportImpl$ReadEvent::interestOps() {
	return $SelectionKey::OP_READ;
}

void TransportImpl$ReadEvent::handle() {
	$init($TransportImpl);
	if ($nc($TransportImpl::debug)->on()) {
		$TransportImpl::debug->log("read event"_s);
	}
	$init($TransportImpl$ChannelState);
	$set(this->this$0, readState, $TransportImpl$ChannelState::AVAILABLE);
	$nc(this->this$0->receiveScheduler)->runOrSchedule();
}

TransportImpl$ReadEvent::TransportImpl$ReadEvent() {
}

$Class* TransportImpl$ReadEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/websocket/TransportImpl;", nullptr, $FINAL | $SYNTHETIC, $field(TransportImpl$ReadEvent, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/websocket/TransportImpl;)V", nullptr, $PRIVATE, $method(TransportImpl$ReadEvent, init$, void, $TransportImpl*)},
		{"handle", "()V", nullptr, $PUBLIC, $virtualMethod(TransportImpl$ReadEvent, handle, void)},
		{"interestOps", "()I", nullptr, $PUBLIC, $virtualMethod(TransportImpl$ReadEvent, interestOps, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.websocket.TransportImpl$ReadEvent", "jdk.internal.net.http.websocket.TransportImpl", "ReadEvent", $PRIVATE},
		{"jdk.internal.net.http.websocket.RawChannel$RawEvent", "jdk.internal.net.http.websocket.RawChannel", "RawEvent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.websocket.TransportImpl$ReadEvent",
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
	$loadClass(TransportImpl$ReadEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportImpl$ReadEvent);
	});
	return class$;
}

$Class* TransportImpl$ReadEvent::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk