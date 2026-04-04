#include <javax/management/timer/TimerAlarmClockNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/timer/TimerAlarmClock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $TimerAlarmClock = ::javax::management::timer::TimerAlarmClock;

namespace javax {
	namespace management {
		namespace timer {

void TimerAlarmClockNotification::init$($TimerAlarmClock* source) {
	$Notification::init$(""_s, source, 0);
}

TimerAlarmClockNotification::TimerAlarmClockNotification() {
}

$Class* TimerAlarmClockNotification::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimerAlarmClockNotification, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/timer/TimerAlarmClock;)V", nullptr, $PUBLIC, $method(TimerAlarmClockNotification, init$, void, $TimerAlarmClock*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.timer.TimerAlarmClockNotification",
		"javax.management.Notification",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TimerAlarmClockNotification, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimerAlarmClockNotification);
	});
	return class$;
}

$Class* TimerAlarmClockNotification::class$ = nullptr;

		} // timer
	} // management
} // javax