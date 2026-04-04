#include <jdk/internal/net/http/Http1Exchange$Http1Publisher$Http1WriteSubscription.h>
#include <jdk/internal/net/http/Http1Exchange$Http1Publisher.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jdk/internal/net/http/HttpClientImpl$DelegatingExecutor.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SequentialScheduler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http1Exchange$Http1Publisher = ::jdk::internal::net::http::Http1Exchange$Http1Publisher;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void Http1Exchange$Http1Publisher$Http1WriteSubscription::init$($Http1Exchange$Http1Publisher* this$1) {
	$set(this, this$1, this$1);
}

void Http1Exchange$Http1Publisher$Http1WriteSubscription::request(int64_t n) {
	$useLocalObjectStack();
	if (this->this$1->cancelled) {
		return;
	}
	$nc(this->this$1->demand)->increase(n);
	if ($nc(this->this$1->debug)->on()) {
		this->this$1->debug->log("subscription request(%d), demand=%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(n)),
			this->this$1->demand
		}));
	}
	$nc(this->this$1->writeScheduler)->runOrSchedule($($nc($nc(this->this$1->this$0)->client$)->theExecutor()));
}

void Http1Exchange$Http1Publisher$Http1WriteSubscription::cancel() {
	if ($nc(this->this$1->debug)->on()) {
		this->this$1->debug->log("subscription cancelled"_s);
	}
	if (this->this$1->cancelled) {
		return;
	}
	this->this$1->cancelled = true;
	$nc(this->this$1->writeScheduler)->runOrSchedule($($nc($nc(this->this$1->this$0)->client$)->theExecutor()));
}

Http1Exchange$Http1Publisher$Http1WriteSubscription::Http1Exchange$Http1Publisher$Http1WriteSubscription() {
}

$Class* Http1Exchange$Http1Publisher$Http1WriteSubscription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljdk/internal/net/http/Http1Exchange$Http1Publisher;", nullptr, $FINAL | $SYNTHETIC, $field(Http1Exchange$Http1Publisher$Http1WriteSubscription, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/Http1Exchange$Http1Publisher;)V", nullptr, 0, $method(Http1Exchange$Http1Publisher$Http1WriteSubscription, init$, void, $Http1Exchange$Http1Publisher*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1Publisher$Http1WriteSubscription, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(Http1Exchange$Http1Publisher$Http1WriteSubscription, request, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Exchange$Http1Publisher", "jdk.internal.net.http.Http1Exchange", "Http1Publisher", $FINAL},
		{"jdk.internal.net.http.Http1Exchange$Http1Publisher$Http1WriteSubscription", "jdk.internal.net.http.Http1Exchange$Http1Publisher", "Http1WriteSubscription", $FINAL},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.Http1Exchange$Http1Publisher$Http1WriteSubscription",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Exchange"
	};
	$loadClass(Http1Exchange$Http1Publisher$Http1WriteSubscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$Http1Publisher$Http1WriteSubscription);
	});
	return class$;
}

$Class* Http1Exchange$Http1Publisher$Http1WriteSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk