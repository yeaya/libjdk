#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber$1.h>
#include <jdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResponseSubscribers$PublishingBodySubscriber = ::jdk::internal::net::http::ResponseSubscribers$PublishingBodySubscriber;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void ResponseSubscribers$PublishingBodySubscriber$1::init$($ResponseSubscribers$PublishingBodySubscriber* this$0) {
	$set(this, this$0, this$0);
}

void ResponseSubscribers$PublishingBodySubscriber$1::request(int64_t n) {
}

void ResponseSubscribers$PublishingBodySubscriber$1::cancel() {
}

ResponseSubscribers$PublishingBodySubscriber$1::ResponseSubscribers$PublishingBodySubscriber$1() {
}

$Class* ResponseSubscribers$PublishingBodySubscriber$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;", nullptr, $FINAL | $SYNTHETIC, $field(ResponseSubscribers$PublishingBodySubscriber$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PublishingBodySubscriber;)V", nullptr, 0, $method(ResponseSubscribers$PublishingBodySubscriber$1, init$, void, $ResponseSubscribers$PublishingBodySubscriber*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$1, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PublishingBodySubscriber$1, request, void, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber",
		"subscribe",
		"(Ljava/util/concurrent/Flow$Subscriber;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber", "jdk.internal.net.http.ResponseSubscribers", "PublishingBodySubscriber", $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$1", nullptr, nullptr, 0},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$PublishingBodySubscriber$1",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$PublishingBodySubscriber$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PublishingBodySubscriber$1);
	});
	return class$;
}

$Class* ResponseSubscribers$PublishingBodySubscriber$1::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk