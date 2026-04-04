#include <jdk/internal/net/http/Http2Connection$ConnectionWindowUpdateSender.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/WindowUpdateSender.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http2Connection = ::jdk::internal::net::http::Http2Connection;
using $WindowUpdateSender = ::jdk::internal::net::http::WindowUpdateSender;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http2Connection$ConnectionWindowUpdateSender::init$($Http2Connection* connection, int32_t initialWindowSize) {
	$WindowUpdateSender::init$(connection, initialWindowSize);
	this->initialWindowSize = initialWindowSize;
}

int32_t Http2Connection$ConnectionWindowUpdateSender::getStreamId() {
	return 0;
}

Http2Connection$ConnectionWindowUpdateSender::Http2Connection$ConnectionWindowUpdateSender() {
}

$Class* Http2Connection$ConnectionWindowUpdateSender::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"initialWindowSize", "I", nullptr, $FINAL, $field(Http2Connection$ConnectionWindowUpdateSender, initialWindowSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http2Connection;I)V", nullptr, $PUBLIC, $method(Http2Connection$ConnectionWindowUpdateSender, init$, void, $Http2Connection*, int32_t)},
		{"getStreamId", "()I", nullptr, 0, $virtualMethod(Http2Connection$ConnectionWindowUpdateSender, getStreamId, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http2Connection$ConnectionWindowUpdateSender", "jdk.internal.net.http.Http2Connection", "ConnectionWindowUpdateSender", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http2Connection$ConnectionWindowUpdateSender",
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
		"jdk.internal.net.http.Http2Connection"
	};
	$loadClass(Http2Connection$ConnectionWindowUpdateSender, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http2Connection$ConnectionWindowUpdateSender);
	});
	return class$;
}

$Class* Http2Connection$ConnectionWindowUpdateSender::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk