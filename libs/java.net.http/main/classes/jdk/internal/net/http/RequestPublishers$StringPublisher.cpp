#include <jdk/internal/net/http/RequestPublishers$StringPublisher.h>
#include <java/nio/charset/Charset.h>
#include <jdk/internal/net/http/RequestPublishers$ByteArrayPublisher.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $RequestPublishers$ByteArrayPublisher = ::jdk::internal::net::http::RequestPublishers$ByteArrayPublisher;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void RequestPublishers$StringPublisher::init$($String* content, $Charset* charset) {
	$RequestPublishers$ByteArrayPublisher::init$($($nc(content)->getBytes(charset)));
}

RequestPublishers$StringPublisher::RequestPublishers$StringPublisher() {
}

$Class* RequestPublishers$StringPublisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(RequestPublishers$StringPublisher, init$, void, $String*, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$StringPublisher", "jdk.internal.net.http.RequestPublishers", "StringPublisher", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.RequestPublishers$ByteArrayPublisher", "jdk.internal.net.http.RequestPublishers", "ByteArrayPublisher", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$StringPublisher",
		"jdk.internal.net.http.RequestPublishers$ByteArrayPublisher",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RequestPublishers"
	};
	$loadClass(RequestPublishers$StringPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$StringPublisher);
	});
	return class$;
}

$Class* RequestPublishers$StringPublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk