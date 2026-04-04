#include <jdk/internal/net/http/MultiExchange$ConnectTimeoutTracker.h>
#include <java/lang/AssertionError.h>
#include <java/time/Duration.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jcpp.h>

#undef ZERO

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $Objects = ::java::util::Objects;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $MultiExchange = ::jdk::internal::net::http::MultiExchange;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool MultiExchange$ConnectTimeoutTracker::$assertionsDisabled = false;

void MultiExchange$ConnectTimeoutTracker::init$($Duration* connectTimeout) {
	$set(this, startTime, $new($AtomicLong));
	$set(this, max, $cast($Duration, $Objects::requireNonNull(connectTimeout)));
}

$Duration* MultiExchange$ConnectTimeoutTracker::getRemaining() {
	$useLocalObjectStack();
	int64_t now = $System::nanoTime();
	int64_t previous = this->startTime->compareAndExchange(0, now);
	if (previous == 0 || $nc(this->max)->isZero()) {
		return this->max;
	}
	$var($Duration, remaining, $nc(this->max)->minus($($Duration::ofNanos(now - previous))));
	if (!MultiExchange$ConnectTimeoutTracker::$assertionsDisabled && !($nc(remaining)->compareTo(this->max) <= 0)) {
		$throwNew($AssertionError);
	}
	return $nc(remaining)->isNegative() ? $Duration::ZERO : remaining;
}

void MultiExchange$ConnectTimeoutTracker::reset() {
	this->startTime->set(0);
}

void MultiExchange$ConnectTimeoutTracker::clinit$($Class* clazz) {
	$load($MultiExchange);
	MultiExchange$ConnectTimeoutTracker::$assertionsDisabled = !$MultiExchange::class$->desiredAssertionStatus();
}

MultiExchange$ConnectTimeoutTracker::MultiExchange$ConnectTimeoutTracker() {
}

$Class* MultiExchange$ConnectTimeoutTracker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiExchange$ConnectTimeoutTracker, $assertionsDisabled)},
		{"max", "Ljava/time/Duration;", nullptr, $FINAL, $field(MultiExchange$ConnectTimeoutTracker, max)},
		{"startTime", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $FINAL, $field(MultiExchange$ConnectTimeoutTracker, startTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/Duration;)V", nullptr, 0, $method(MultiExchange$ConnectTimeoutTracker, init$, void, $Duration*)},
		{"getRemaining", "()Ljava/time/Duration;", nullptr, 0, $method(MultiExchange$ConnectTimeoutTracker, getRemaining, $Duration*)},
		{"reset", "()V", nullptr, 0, $method(MultiExchange$ConnectTimeoutTracker, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.MultiExchange$ConnectTimeoutTracker", "jdk.internal.net.http.MultiExchange", "ConnectTimeoutTracker", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.MultiExchange$ConnectTimeoutTracker",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.MultiExchange"
	};
	$loadClass(MultiExchange$ConnectTimeoutTracker, name, initialize, &classInfo$$, MultiExchange$ConnectTimeoutTracker::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MultiExchange$ConnectTimeoutTracker);
	});
	return class$;
}

$Class* MultiExchange$ConnectTimeoutTracker::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk