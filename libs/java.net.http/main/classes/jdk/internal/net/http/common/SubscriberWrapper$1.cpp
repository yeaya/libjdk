#include <jdk/internal/net/http/common/SubscriberWrapper$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/common/SubscriberWrapper$SchedulingAction.h>
#include <jdk/internal/net/http/common/SubscriberWrapper.h>
#include <jcpp.h>

#undef CONTINUE
#undef RESCHEDULE
#undef RETURN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SubscriberWrapper$SchedulingAction = ::jdk::internal::net::http::common::SubscriberWrapper$SchedulingAction;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$ints* SubscriberWrapper$1::$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction = nullptr;

void SubscriberWrapper$1::clinit$($Class* clazz) {
	$assignStatic(SubscriberWrapper$1::$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction, $new($ints, $($SubscriberWrapper$SchedulingAction::values())->length));
	{
		try {
			SubscriberWrapper$1::$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction->set($SubscriberWrapper$SchedulingAction::CONTINUE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SubscriberWrapper$1::$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction->set($SubscriberWrapper$SchedulingAction::RESCHEDULE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SubscriberWrapper$1::$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction->set($SubscriberWrapper$SchedulingAction::RETURN->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SubscriberWrapper$1::SubscriberWrapper$1() {
}

$Class* SubscriberWrapper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SubscriberWrapper$1, $SwitchMap$jdk$internal$net$http$common$SubscriberWrapper$SchedulingAction)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.common.SubscriberWrapper",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SubscriberWrapper$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.common.SubscriberWrapper$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.SubscriberWrapper"
	};
	$loadClass(SubscriberWrapper$1, name, initialize, &classInfo$$, SubscriberWrapper$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SubscriberWrapper$1);
	});
	return class$;
}

$Class* SubscriberWrapper$1::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk