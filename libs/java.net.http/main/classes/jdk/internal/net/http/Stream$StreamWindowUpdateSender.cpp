#include <jdk/internal/net/http/Stream$StreamWindowUpdateSender.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/Stream.h>
#include <jdk/internal/net/http/WindowUpdateSender.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http2Connection = ::jdk::internal::net::http::Http2Connection;
using $Stream = ::jdk::internal::net::http::Stream;
using $WindowUpdateSender = ::jdk::internal::net::http::WindowUpdateSender;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Stream$StreamWindowUpdateSender::init$($Stream* this$0, $Http2Connection* connection) {
	$set(this, this$0, this$0);
	$WindowUpdateSender::init$(connection);
}

int32_t Stream$StreamWindowUpdateSender::getStreamId() {
	return this->this$0->streamid;
}

$String* Stream$StreamWindowUpdateSender::dbgString() {
	$useLocalObjectStack();
	$var($String, dbg, this->$WindowUpdateSender::dbgString$);
	if (dbg != nullptr) {
		return dbg;
	}
	if (this->this$0->streamid == 0) {
		return $str({$($nc(this->connection)->dbgString()), ":WindowUpdateSender(stream: ?)"_s});
	} else {
		$assign(dbg, $str({$($nc(this->connection)->dbgString()), ":WindowUpdateSender(stream: "_s, $$str(this->this$0->streamid), ")"_s}));
		return $set(this, dbgString$, dbg);
	}
}

Stream$StreamWindowUpdateSender::Stream$StreamWindowUpdateSender() {
}

$Class* Stream$StreamWindowUpdateSender::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Stream;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$StreamWindowUpdateSender, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream;Ljdk/internal/net/http/Http2Connection;)V", nullptr, 0, $method(Stream$StreamWindowUpdateSender, init$, void, $Stream*, $Http2Connection*)},
		{"dbgString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Stream$StreamWindowUpdateSender, dbgString, $String*)},
		{"getStreamId", "()I", nullptr, 0, $virtualMethod(Stream$StreamWindowUpdateSender, getStreamId, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Stream$StreamWindowUpdateSender", "jdk.internal.net.http.Stream", "StreamWindowUpdateSender", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Stream$StreamWindowUpdateSender",
		"jdk.internal.net.http.WindowUpdateSender",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Stream"
	};
	$loadClass(Stream$StreamWindowUpdateSender, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$StreamWindowUpdateSender);
	});
	return class$;
}

$Class* Stream$StreamWindowUpdateSender::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk