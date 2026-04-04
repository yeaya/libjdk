#include <jdk/internal/net/http/Stream$HeadersConsumer.h>
#include <java/lang/CharSequence.h>
#include <jdk/internal/net/http/Http2Connection$ValidatingHeadersConsumer.h>
#include <jdk/internal/net/http/Stream.h>
#include <jdk/internal/net/http/common/HttpHeadersBuilder.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http2Connection$ValidatingHeadersConsumer = ::jdk::internal::net::http::Http2Connection$ValidatingHeadersConsumer;
using $Stream = ::jdk::internal::net::http::Stream;
using $Log = ::jdk::internal::net::http::common::Log;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Stream$HeadersConsumer::init$($Stream* this$0) {
	$set(this, this$0, this$0);
	$Http2Connection$ValidatingHeadersConsumer::init$();
}

void Stream$HeadersConsumer::reset() {
	$Http2Connection$ValidatingHeadersConsumer::reset();
	$nc(this->this$0->responseHeadersBuilder)->clear();
	$nc(this->this$0->debug)->log("Response builder cleared, ready to receive new headers."_s);
}

void Stream$HeadersConsumer::onDecoded($CharSequence* name, $CharSequence* value) {
	$useLocalObjectStack();
	$var($String, n, $nc(name)->toString());
	$var($String, v, $nc(value)->toString());
	$Http2Connection$ValidatingHeadersConsumer::onDecoded(n, v);
	$nc(this->this$0->responseHeadersBuilder)->addHeader(n, v);
	bool var$0 = $Log::headers();
	if (var$0 && $Log::trace()) {
		$Log::logTrace("RECEIVED HEADER (streamid={0}): {1}: {2}"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->this$0->streamid)),
			n,
			v
		}));
	}
}

Stream$HeadersConsumer::Stream$HeadersConsumer() {
}

$Class* Stream$HeadersConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/Stream;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$HeadersConsumer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Stream;)V", nullptr, $PRIVATE, $method(Stream$HeadersConsumer, init$, void, $Stream*)},
		{"onDecoded", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(Stream$HeadersConsumer, onDecoded, void, $CharSequence*, $CharSequence*), "java.io.UncheckedIOException"},
		{"reset", "()V", nullptr, 0, $virtualMethod(Stream$HeadersConsumer, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Stream$HeadersConsumer", "jdk.internal.net.http.Stream", "HeadersConsumer", $PRIVATE},
		{"jdk.internal.net.http.Http2Connection$ValidatingHeadersConsumer", "jdk.internal.net.http.Http2Connection", "ValidatingHeadersConsumer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Stream$HeadersConsumer",
		"jdk.internal.net.http.Http2Connection$ValidatingHeadersConsumer",
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
	$loadClass(Stream$HeadersConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stream$HeadersConsumer);
	});
	return class$;
}

$Class* Stream$HeadersConsumer::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk