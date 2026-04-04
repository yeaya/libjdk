#include <jdk/internal/net/http/SocketTube$InternalWriteSubscriber$WriteEvent.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <jdk/internal/net/http/AsyncEvent.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/SocketTube$InternalWriteSubscriber.h>
#include <jdk/internal/net/http/SocketTube$SocketFlowEvent.h>
#include <jdk/internal/net/http/SocketTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

#undef OP_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SocketTube$InternalWriteSubscriber = ::jdk::internal::net::http::SocketTube$InternalWriteSubscriber;
using $SocketTube$SocketFlowEvent = ::jdk::internal::net::http::SocketTube$SocketFlowEvent;
using $Logger = ::jdk::internal::net::http::common::Logger;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void SocketTube$InternalWriteSubscriber$WriteEvent::init$($SocketTube$InternalWriteSubscriber* this$1, $SocketChannel* channel, $SocketTube$InternalWriteSubscriber* sub) {
	$set(this, this$1, this$1);
	$SocketTube$SocketFlowEvent::init$($SelectionKey::OP_WRITE, channel);
	$set(this, sub, sub);
}

void SocketTube$InternalWriteSubscriber$WriteEvent::signalEvent() {
	try {
		$nc($nc(this->this$1->this$0)->client)->eventUpdated(this);
		$nc(this->sub)->signalWritable();
	} catch ($Throwable& t) {
		$nc(this->sub)->signalError(t);
	}
}

void SocketTube$InternalWriteSubscriber$WriteEvent::signalError($Throwable* error) {
	$nc(this->sub)->signalError(error);
}

$Logger* SocketTube$InternalWriteSubscriber$WriteEvent::debug() {
	return $nc(this->this$1->this$0)->debug;
}

SocketTube$InternalWriteSubscriber$WriteEvent::SocketTube$InternalWriteSubscriber$WriteEvent() {
}

$Class* SocketTube$InternalWriteSubscriber$WriteEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;", nullptr, $FINAL | $SYNTHETIC, $field(SocketTube$InternalWriteSubscriber$WriteEvent, this$1)},
		{"sub", "Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;", nullptr, $FINAL, $field(SocketTube$InternalWriteSubscriber$WriteEvent, sub)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;Ljava/nio/channels/SocketChannel;Ljdk/internal/net/http/SocketTube$InternalWriteSubscriber;)V", nullptr, 0, $method(SocketTube$InternalWriteSubscriber$WriteEvent, init$, void, $SocketTube$InternalWriteSubscriber*, $SocketChannel*, $SocketTube$InternalWriteSubscriber*)},
		{"debug", "()Ljdk/internal/net/http/common/Logger;", nullptr, 0, $virtualMethod(SocketTube$InternalWriteSubscriber$WriteEvent, debug, $Logger*)},
		{"signalError", "(Ljava/lang/Throwable;)V", nullptr, $PROTECTED, $virtualMethod(SocketTube$InternalWriteSubscriber$WriteEvent, signalError, void, $Throwable*)},
		{"signalEvent", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(SocketTube$InternalWriteSubscriber$WriteEvent, signalEvent, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.SocketTube$InternalWriteSubscriber", "jdk.internal.net.http.SocketTube", "InternalWriteSubscriber", $PRIVATE | $FINAL},
		{"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$WriteEvent", "jdk.internal.net.http.SocketTube$InternalWriteSubscriber", "WriteEvent", $FINAL},
		{"jdk.internal.net.http.SocketTube$SocketFlowEvent", "jdk.internal.net.http.SocketTube", "SocketFlowEvent", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.SocketTube$InternalWriteSubscriber$WriteEvent",
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
	$loadClass(SocketTube$InternalWriteSubscriber$WriteEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketTube$InternalWriteSubscriber$WriteEvent);
	});
	return class$;
}

$Class* SocketTube$InternalWriteSubscriber$WriteEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk