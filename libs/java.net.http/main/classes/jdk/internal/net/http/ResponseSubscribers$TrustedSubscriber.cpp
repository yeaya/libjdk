#include <jdk/internal/net/http/ResponseSubscribers$TrustedSubscriber.h>
#include <java/net/http/HttpResponse$BodySubscriber.h>
#include <jdk/internal/net/http/ResponseSubscribers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpResponse$BodySubscriber = ::java::net::http::HttpResponse$BodySubscriber;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool ResponseSubscribers$TrustedSubscriber::needsExecutor() {
	return false;
}

bool ResponseSubscribers$TrustedSubscriber::needsExecutor($HttpResponse$BodySubscriber* bs) {
	$init(ResponseSubscribers$TrustedSubscriber);
	if ($instanceOf(ResponseSubscribers$TrustedSubscriber, bs)) {
		return $cast(ResponseSubscribers$TrustedSubscriber, bs)->needsExecutor();
	} else {
		return true;
	}
}

$Class* ResponseSubscribers$TrustedSubscriber::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"needsExecutor", "()Z", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$TrustedSubscriber, needsExecutor, bool)},
		{"needsExecutor", "(Ljava/net/http/HttpResponse$BodySubscriber;)Z", "(Ljava/net/http/HttpResponse$BodySubscriber<*>;)Z", $PUBLIC | $STATIC, $staticMethod(ResponseSubscribers$TrustedSubscriber, needsExecutor, bool, $HttpResponse$BodySubscriber*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.net.http.HttpResponse$BodySubscriber", "java.net.http.HttpResponse", "BodySubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
		nullptr,
		"java.net.http.HttpResponse$BodySubscriber",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/net/http/HttpResponse$BodySubscriber<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$TrustedSubscriber, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$TrustedSubscriber);
	});
	return class$;
}

$Class* ResponseSubscribers$TrustedSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk