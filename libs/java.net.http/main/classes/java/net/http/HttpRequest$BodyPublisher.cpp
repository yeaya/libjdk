#include <java/net/http/HttpRequest$BodyPublisher.h>
#include <java/net/http/HttpRequest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace net {
		namespace http {

$Class* HttpRequest$BodyPublisher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contentLength", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HttpRequest$BodyPublisher, contentLength, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.http.HttpRequest$BodyPublisher",
		nullptr,
		"java.util.concurrent.Flow$Publisher",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<Ljava/nio/ByteBuffer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.http.HttpRequest"
	};
	$loadClass(HttpRequest$BodyPublisher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpRequest$BodyPublisher);
	});
	return class$;
}

$Class* HttpRequest$BodyPublisher::class$ = nullptr;

		} // http
	} // net
} // java