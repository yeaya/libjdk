#include <jdk/internal/net/http/WindowUpdateSender.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jdk/internal/net/http/common/FlowTube.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jdk/internal/net/http/frame/SettingsFrame.h>
#include <jdk/internal/net/http/frame/WindowUpdateFrame.h>
#include <jcpp.h>

#undef DEBUG
#undef INITIAL_WINDOW_SIZE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Supplier = ::java::util::function::Supplier;
using $Http2Connection = ::jdk::internal::net::http::Http2Connection;
using $FlowTube = ::jdk::internal::net::http::common::FlowTube;
using $Utils = ::jdk::internal::net::http::common::Utils;
using $SettingsFrame = ::jdk::internal::net::http::frame::SettingsFrame;
using $WindowUpdateFrame = ::jdk::internal::net::http::frame::WindowUpdateFrame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class WindowUpdateSender$$Lambda$dbgString : public $Supplier {
	$class(WindowUpdateSender$$Lambda$dbgString, $NO_CLASS_INIT, $Supplier)
public:
	void init$(WindowUpdateSender* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->dbgString());
	}
	WindowUpdateSender* inst$ = nullptr;
};
$Class* WindowUpdateSender$$Lambda$dbgString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WindowUpdateSender$$Lambda$dbgString, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/WindowUpdateSender;)V", nullptr, $PUBLIC, $method(WindowUpdateSender$$Lambda$dbgString, init$, void, WindowUpdateSender*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowUpdateSender$$Lambda$dbgString, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.WindowUpdateSender$$Lambda$dbgString",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowUpdateSender$$Lambda$dbgString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowUpdateSender$$Lambda$dbgString);
	});
	return class$;
}
$Class* WindowUpdateSender$$Lambda$dbgString::class$ = nullptr;

void WindowUpdateSender::init$($Http2Connection* connection) {
	WindowUpdateSender::init$(connection, $nc($nc(connection)->clientSettings)->getParameter($SettingsFrame::INITIAL_WINDOW_SIZE));
}

void WindowUpdateSender::init$($Http2Connection* connection, int32_t initWindowSize) {
	WindowUpdateSender::init$(connection, $nc(connection)->getMaxReceiveFrameSize(), initWindowSize);
}

void WindowUpdateSender::init$($Http2Connection* connection, int32_t maxFrameSize, int32_t initWindowSize) {
	$useLocalObjectStack();
	$init($Utils);
	$set(this, debug, $Utils::getDebugLogger($$new(WindowUpdateSender$$Lambda$dbgString, this), $Utils::DEBUG));
	$set(this, received, $new($AtomicInteger));
	$set(this, connection, connection);
	int32_t v0 = $Math::max(0, initWindowSize - maxFrameSize);
	int32_t v1 = $div((initWindowSize + (maxFrameSize - 1)), maxFrameSize);
	v1 = v1 * maxFrameSize / 2;
	this->limit = $Math::min(v0, v1);
	if ($nc(this->debug)->on()) {
		this->debug->log("maxFrameSize=%d, initWindowSize=%d, limit=%d"_s, $$new($ObjectArray, {
			$($Integer::valueOf(maxFrameSize)),
			$($Integer::valueOf(initWindowSize)),
			$($Integer::valueOf(this->limit))
		}));
	}
}

void WindowUpdateSender::update(int32_t delta) {
	$useLocalObjectStack();
	int32_t rcv = $nc(this->received)->addAndGet(delta);
	if ($nc(this->debug)->on()) {
		this->debug->log("update: %d, received: %d, limit: %d"_s, $$new($ObjectArray, {
			$($Integer::valueOf(delta)),
			$($Integer::valueOf(rcv)),
			$($Integer::valueOf(this->limit))
		}));
	}
	if (rcv > this->limit) {
		$synchronized(this) {
			int32_t tosend = this->received->get();
			if (tosend > this->limit) {
				this->received->getAndAdd(-tosend);
				sendWindowUpdate(tosend);
			}
		}
	}
}

void WindowUpdateSender::sendWindowUpdate(int32_t delta) {
	$useLocalObjectStack();
	if ($nc(this->debug)->on()) {
		this->debug->log("sending window update: %d"_s, $$new($ObjectArray, {$($Integer::valueOf(delta))}));
	}
	$nc(this->connection)->sendUnorderedFrame($$new($WindowUpdateFrame, getStreamId(), delta));
}

$String* WindowUpdateSender::dbgString() {
	$useLocalObjectStack();
	$var($String, dbg, this->dbgString$);
	if (dbg != nullptr) {
		return dbg;
	}
	$var($FlowTube, tube, $nc($nc(this->connection)->connection)->getConnectionFlow());
	if (tube == nullptr) {
		return $str({"WindowUpdateSender(stream: "_s, $$str(getStreamId()), ")"_s});
	} else {
		int32_t streamId = getStreamId();
		$assign(dbg, $str({$(this->connection->dbgString()), ":WindowUpdateSender(stream: "_s, $$str(streamId), ")"_s}));
		return streamId == 0 ? dbg : ($set(this, dbgString$, dbg));
	}
}

WindowUpdateSender::WindowUpdateSender() {
}

$Class* WindowUpdateSender::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.WindowUpdateSender$$Lambda$dbgString")) {
			return WindowUpdateSender$$Lambda$dbgString::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Ljdk/internal/net/http/common/Logger;", nullptr, $FINAL, $field(WindowUpdateSender, debug)},
		{"limit", "I", nullptr, $FINAL, $field(WindowUpdateSender, limit)},
		{"connection", "Ljdk/internal/net/http/Http2Connection;", nullptr, $FINAL, $field(WindowUpdateSender, connection)},
		{"received", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(WindowUpdateSender, received)},
		{"dbgString", "Ljava/lang/String;", nullptr, $VOLATILE, $field(WindowUpdateSender, dbgString$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http2Connection;)V", nullptr, 0, $method(WindowUpdateSender, init$, void, $Http2Connection*)},
		{"<init>", "(Ljdk/internal/net/http/Http2Connection;I)V", nullptr, 0, $method(WindowUpdateSender, init$, void, $Http2Connection*, int32_t)},
		{"<init>", "(Ljdk/internal/net/http/Http2Connection;II)V", nullptr, 0, $method(WindowUpdateSender, init$, void, $Http2Connection*, int32_t, int32_t)},
		{"dbgString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(WindowUpdateSender, dbgString, $String*)},
		{"getStreamId", "()I", nullptr, $ABSTRACT, $virtualMethod(WindowUpdateSender, getStreamId, int32_t)},
		{"sendWindowUpdate", "(I)V", nullptr, 0, $virtualMethod(WindowUpdateSender, sendWindowUpdate, void, int32_t)},
		{"update", "(I)V", nullptr, 0, $virtualMethod(WindowUpdateSender, update, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.WindowUpdateSender",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowUpdateSender, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowUpdateSender);
	});
	return class$;
}

$Class* WindowUpdateSender::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk