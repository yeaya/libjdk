#include <jdk/internal/net/http/Http2Connection$HeaderDecoder.h>
#include <java/lang/CharSequence.h>
#include <java/net/http/HttpHeaders.h>
#include <jdk/internal/net/http/Http2Connection$ValidatingHeadersConsumer.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/common/HttpHeadersBuilder.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $Http2Connection$ValidatingHeadersConsumer = ::jdk::internal::net::http::Http2Connection$ValidatingHeadersConsumer;
using $HttpHeadersBuilder = ::jdk::internal::net::http::common::HttpHeadersBuilder;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http2Connection$HeaderDecoder::init$() {
	$Http2Connection$ValidatingHeadersConsumer::init$();
	$set(this, headersBuilder, $new($HttpHeadersBuilder));
}

void Http2Connection$HeaderDecoder::onDecoded($CharSequence* name, $CharSequence* value) {
	$useLocalObjectStack();
	$var($String, n, $nc(name)->toString());
	$var($String, v, $nc(value)->toString());
	$Http2Connection$ValidatingHeadersConsumer::onDecoded(n, v);
	$nc(this->headersBuilder)->addHeader(n, v);
}

$HttpHeaders* Http2Connection$HeaderDecoder::headers() {
	return $nc(this->headersBuilder)->build();
}

Http2Connection$HeaderDecoder::Http2Connection$HeaderDecoder() {
}

$Class* Http2Connection$HeaderDecoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"headersBuilder", "Ljdk/internal/net/http/common/HttpHeadersBuilder;", nullptr, 0, $field(Http2Connection$HeaderDecoder, headersBuilder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Http2Connection$HeaderDecoder, init$, void)},
		{"headers", "()Ljava/net/http/HttpHeaders;", nullptr, 0, $virtualMethod(Http2Connection$HeaderDecoder, headers, $HttpHeaders*)},
		{"onDecoded", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(Http2Connection$HeaderDecoder, onDecoded, void, $CharSequence*, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http2Connection$HeaderDecoder", "jdk.internal.net.http.Http2Connection", "HeaderDecoder", $STATIC},
		{"jdk.internal.net.http.Http2Connection$ValidatingHeadersConsumer", "jdk.internal.net.http.Http2Connection", "ValidatingHeadersConsumer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Http2Connection$HeaderDecoder",
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
		"jdk.internal.net.http.Http2Connection"
	};
	$loadClass(Http2Connection$HeaderDecoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http2Connection$HeaderDecoder);
	});
	return class$;
}

$Class* Http2Connection$HeaderDecoder::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk