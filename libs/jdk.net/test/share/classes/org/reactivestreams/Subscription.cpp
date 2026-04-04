#include <org/reactivestreams/Subscription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {

$Class* Subscription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Subscription, cancel, void)},
		{"request", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Subscription, request, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.reactivestreams.Subscription",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Subscription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Subscription);
	});
	return class$;
}

$Class* Subscription::class$ = nullptr;

	} // reactivestreams
} // org