#include <jdk/internal/net/http/Http1Response$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http1Response$1::init$() {
}

void Http1Response$1::request(int64_t n) {
}

void Http1Response$1::cancel() {
}

Http1Response$1::Http1Response$1() {
}

$Class* Http1Response$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Http1Response$1, init$, void)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(Http1Response$1, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(Http1Response$1, request, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.Http1Response",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Response$1", nullptr, nullptr, 0},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Http1Response$1",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Response"
	};
	$loadClass(Http1Response$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Response$1);
	});
	return class$;
}

$Class* Http1Response$1::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk