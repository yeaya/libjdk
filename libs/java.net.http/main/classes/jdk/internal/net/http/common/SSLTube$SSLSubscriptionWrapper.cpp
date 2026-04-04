#include <jdk/internal/net/http/common/SSLTube$SSLSubscriptionWrapper.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jdk/internal/net/http/common/Logger.h>
#include <jdk/internal/net/http/common/SSLTube.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $SSLTube = ::jdk::internal::net::http::common::SSLTube;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

void SSLTube$SSLSubscriptionWrapper::init$($SSLTube* this$0) {
	$set(this, this$0, this$0);
}

void SSLTube$SSLSubscriptionWrapper::setSubscription($Flow$Subscription* sub) {
	$useLocalObjectStack();
	int64_t demand = $nc(this->this$0->writeDemand)->get();
	$set(this, delegate, sub);
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("setSubscription: demand=%d, cancelled:%s"_s, $$new($ObjectArray, {
			$($Long::valueOf(demand)),
			$($Boolean::valueOf(this->cancelled))
		}));
	}
	if (this->cancelled) {
		$nc(this->delegate)->cancel();
	} else if (demand > 0) {
		$nc(sub)->request(demand);
	}
}

void SSLTube$SSLSubscriptionWrapper::request(int64_t n) {
	$useLocalObjectStack();
	$nc(this->this$0->writeDemand)->increase(n);
	if ($nc(this->this$0->debug)->on()) {
		this->this$0->debug->log("request: n=%d"_s, $$new($ObjectArray, {$($Long::valueOf(n))}));
	}
	$var($Flow$Subscription, sub, this->delegate);
	if (sub != nullptr && n > 0) {
		sub->request(n);
	}
}

void SSLTube$SSLSubscriptionWrapper::cancel() {
	this->cancelled = true;
	if (this->delegate != nullptr) {
		$nc(this->delegate)->cancel();
	}
}

SSLTube$SSLSubscriptionWrapper::SSLTube$SSLSubscriptionWrapper() {
}

$Class* SSLTube$SSLSubscriptionWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/net/http/common/SSLTube;", nullptr, $FINAL | $SYNTHETIC, $field(SSLTube$SSLSubscriptionWrapper, this$0)},
		{"delegate", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $VOLATILE, $field(SSLTube$SSLSubscriptionWrapper, delegate)},
		{"cancelled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLTube$SSLSubscriptionWrapper, cancelled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/SSLTube;)V", nullptr, 0, $method(SSLTube$SSLSubscriptionWrapper, init$, void, $SSLTube*)},
		{"cancel", "()V", nullptr, $PUBLIC, $virtualMethod(SSLTube$SSLSubscriptionWrapper, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC, $virtualMethod(SSLTube$SSLSubscriptionWrapper, request, void, int64_t)},
		{"setSubscription", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, 0, $method(SSLTube$SSLSubscriptionWrapper, setSubscription, void, $Flow$Subscription*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLTube$SSLSubscriptionWrapper", "jdk.internal.net.http.common.SSLTube", "SSLSubscriptionWrapper", $FINAL},
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.SSLTube$SSLSubscriptionWrapper",
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
		"jdk.internal.net.http.common.SSLTube"
	};
	$loadClass(SSLTube$SSLSubscriptionWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTube$SSLSubscriptionWrapper);
	});
	return class$;
}

$Class* SSLTube$SSLSubscriptionWrapper::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk