#include <jdk/internal/net/http/TimeoutEvent.h>
#include <java/lang/AssertionError.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

#undef COUNTER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

bool TimeoutEvent::$assertionsDisabled = false;
$AtomicLong* TimeoutEvent::COUNTER = nullptr;

void TimeoutEvent::init$($Duration* duration) {
	this->id = TimeoutEvent::COUNTER->incrementAndGet();
	$set(this, duration, duration);
	$set(this, deadline$, $$nc($Instant::now())->plus(duration));
}

$Instant* TimeoutEvent::deadline() {
	return this->deadline$;
}

int32_t TimeoutEvent::compareTo(TimeoutEvent* other) {
	if (other == this) {
		return 0;
	}
	int32_t compareDeadline = $nc(this->deadline$)->compareTo($nc(other)->deadline$);
	if (compareDeadline == 0 && !this->equals(other)) {
		int64_t diff = this->id - other->id;
		if (diff < 0) {
			return -1;
		} else if (diff > 0) {
			return 1;
		} else if (!TimeoutEvent::$assertionsDisabled) {
			$throwNew($AssertionError, $of("Different events with same id and deadline"_s));
		}
	}
	return compareDeadline;
}

$String* TimeoutEvent::toString() {
	return $str({"TimeoutEvent[id="_s, $$str(this->id), ", duration="_s, this->duration, ", deadline="_s, this->deadline$, "]"_s});
}

int32_t TimeoutEvent::compareTo(Object$* other) {
	return this->compareTo($cast(TimeoutEvent, other));
}

void TimeoutEvent::clinit$($Class* clazz) {
	TimeoutEvent::$assertionsDisabled = !TimeoutEvent::class$->desiredAssertionStatus();
	$assignStatic(TimeoutEvent::COUNTER, $new($AtomicLong));
}

TimeoutEvent::TimeoutEvent() {
}

$Class* TimeoutEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeoutEvent, $assertionsDisabled)},
		{"COUNTER", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimeoutEvent, COUNTER)},
		{"id", "J", nullptr, $PRIVATE | $FINAL, $field(TimeoutEvent, id)},
		{"duration", "Ljava/time/Duration;", nullptr, $PRIVATE | $FINAL, $field(TimeoutEvent, duration)},
		{"deadline", "Ljava/time/Instant;", nullptr, $PRIVATE | $FINAL, $field(TimeoutEvent, deadline$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/Duration;)V", nullptr, 0, $method(TimeoutEvent, init$, void, $Duration*)},
		{"compareTo", "(Ljdk/internal/net/http/TimeoutEvent;)I", nullptr, $PUBLIC, $virtualMethod(TimeoutEvent, compareTo, int32_t, TimeoutEvent*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TimeoutEvent, compareTo, int32_t, Object$*)},
		{"deadline", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(TimeoutEvent, deadline, $Instant*)},
		{"handle", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimeoutEvent, handle, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TimeoutEvent, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"jdk.internal.net.http.TimeoutEvent",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljdk/internal/net/http/TimeoutEvent;>;"
	};
	$loadClass(TimeoutEvent, name, initialize, &classInfo$$, TimeoutEvent::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TimeoutEvent);
	});
	return class$;
}

$Class* TimeoutEvent::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk