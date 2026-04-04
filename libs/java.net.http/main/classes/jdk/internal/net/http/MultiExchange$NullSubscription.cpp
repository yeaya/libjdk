#include <jdk/internal/net/http/MultiExchange$NullSubscription.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void MultiExchange$NullSubscription::init$() {
}

void MultiExchange$NullSubscription::request(int64_t n) {
}

void MultiExchange$NullSubscription::cancel() {
}

MultiExchange$NullSubscription::MultiExchange$NullSubscription() {
}

$Class* MultiExchange$NullSubscription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MultiExchange$NullSubscription, init$, void)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(MultiExchange$NullSubscription, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(MultiExchange$NullSubscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.MultiExchange$NullSubscription", "jdk.internal.net.http.MultiExchange", "NullSubscription", $STATIC},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.MultiExchange$NullSubscription",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.MultiExchange"
	};
	$loadClass(MultiExchange$NullSubscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiExchange$NullSubscription);
	});
	return class$;
}

$Class* MultiExchange$NullSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk