#include <jdk/internal/net/http/AbstractSubscription.h>
#include <jdk/internal/net/http/common/Demand.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Demand = ::jdk::internal::net::http::common::Demand;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void AbstractSubscription::init$() {
	$set(this, demand$, $new($Demand));
}

$Demand* AbstractSubscription::demand() {
	return this->demand$;
}

AbstractSubscription::AbstractSubscription() {
}

$Class* AbstractSubscription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"demand", "Ljdk/internal/net/http/common/Demand;", nullptr, $PRIVATE | $FINAL, $field(AbstractSubscription, demand$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractSubscription, init$, void)},
		{"demand", "()Ljdk/internal/net/http/common/Demand;", nullptr, $PROTECTED, $virtualMethod(AbstractSubscription, demand, $Demand*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.AbstractSubscription",
		"java.lang.Object",
		"java.util.concurrent.Flow$Subscription",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(AbstractSubscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSubscription);
	});
	return class$;
}

$Class* AbstractSubscription::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk