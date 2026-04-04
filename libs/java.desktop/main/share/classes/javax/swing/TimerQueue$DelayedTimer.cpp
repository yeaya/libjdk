#include <javax/swing/TimerQueue$DelayedTimer.h>
#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <javax/swing/Timer.h>
#include <javax/swing/TimerQueue.h>
#include <jcpp.h>

#undef NANOSECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Delayed = ::java::util::concurrent::Delayed;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Timer = ::javax::swing::Timer;
using $TimerQueue = ::javax::swing::TimerQueue;

namespace javax {
	namespace swing {

$AtomicLong* TimerQueue$DelayedTimer::sequencer = nullptr;

void TimerQueue$DelayedTimer::init$($Timer* timer, int64_t nanos) {
	$set(this, timer, timer);
	this->time = nanos;
	this->sequenceNumber = TimerQueue$DelayedTimer::sequencer->getAndIncrement();
}

int64_t TimerQueue$DelayedTimer::getDelay($TimeUnit* unit) {
	$init($TimeUnit);
	return $nc(unit)->convert(this->time - $TimerQueue::now(), $TimeUnit::NANOSECONDS);
}

void TimerQueue$DelayedTimer::setTime(int64_t nanos) {
	this->time = nanos;
}

$Timer* TimerQueue$DelayedTimer::getTimer() {
	return this->timer;
}

int32_t TimerQueue$DelayedTimer::compareTo($Delayed* other) {
	if ($equals(other, this)) {
		return 0;
	}
	if ($instanceOf(TimerQueue$DelayedTimer, other)) {
		$var(TimerQueue$DelayedTimer, x, $cast(TimerQueue$DelayedTimer, other));
		int64_t diff = this->time - x->time;
		if (diff < 0) {
			return -1;
		} else if (diff > 0) {
			return 1;
		} else if (this->sequenceNumber < x->sequenceNumber) {
			return -1;
		} else {
			return 1;
		}
	}
	$init($TimeUnit);
	int64_t var$0 = getDelay($TimeUnit::NANOSECONDS);
	int64_t d = (var$0 - $nc(other)->getDelay($TimeUnit::NANOSECONDS));
	return (d == 0) ? 0 : ((d < 0) ? -1 : 1);
}

int32_t TimerQueue$DelayedTimer::compareTo(Object$* other) {
	return this->compareTo($cast($Delayed, other));
}

void TimerQueue$DelayedTimer::clinit$($Class* clazz) {
	$assignStatic(TimerQueue$DelayedTimer::sequencer, $new($AtomicLong));
}

TimerQueue$DelayedTimer::TimerQueue$DelayedTimer() {
}

$Class* TimerQueue$DelayedTimer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sequencer", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TimerQueue$DelayedTimer, sequencer)},
		{"sequenceNumber", "J", nullptr, $PRIVATE | $FINAL, $field(TimerQueue$DelayedTimer, sequenceNumber)},
		{"time", "J", nullptr, $PRIVATE | $VOLATILE, $field(TimerQueue$DelayedTimer, time)},
		{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $FINAL, $field(TimerQueue$DelayedTimer, timer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Timer;J)V", nullptr, 0, $method(TimerQueue$DelayedTimer, init$, void, $Timer*, int64_t)},
		{"compareTo", "(Ljava/util/concurrent/Delayed;)I", nullptr, $PUBLIC, $virtualMethod(TimerQueue$DelayedTimer, compareTo, int32_t, $Delayed*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TimerQueue$DelayedTimer, compareTo, int32_t, Object$*)},
		{"getDelay", "(Ljava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC | $FINAL, $virtualMethod(TimerQueue$DelayedTimer, getDelay, int64_t, $TimeUnit*)},
		{"getTimer", "()Ljavax/swing/Timer;", nullptr, $FINAL, $method(TimerQueue$DelayedTimer, getTimer, $Timer*)},
		{"setTime", "(J)V", nullptr, $FINAL, $method(TimerQueue$DelayedTimer, setTime, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TimerQueue$DelayedTimer", "javax.swing.TimerQueue", "DelayedTimer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.TimerQueue$DelayedTimer",
		"java.lang.Object",
		"java.util.concurrent.Delayed",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.TimerQueue"
	};
	$loadClass(TimerQueue$DelayedTimer, name, initialize, &classInfo$$, TimerQueue$DelayedTimer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TimerQueue$DelayedTimer);
	});
	return class$;
}

$Class* TimerQueue$DelayedTimer::class$ = nullptr;

	} // swing
} // javax