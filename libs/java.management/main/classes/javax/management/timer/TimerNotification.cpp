#include <javax/management/timer/TimerNotification.h>
#include <java/util/EventObject.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {
		namespace timer {

void TimerNotification::init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* msg, $Integer* id) {
	$Notification::init$(type, source, sequenceNumber, timeStamp, msg);
	$set(this, notificationID, id);
}

$Integer* TimerNotification::getNotificationID() {
	return this->notificationID;
}

$Object* TimerNotification::cloneTimerNotification() {
	$useLocalObjectStack();
	$var($String, var$0, this->getType());
	$var($Object, var$1, this->getSource());
	int64_t var$2 = this->getSequenceNumber();
	int64_t var$3 = this->getTimeStamp();
	$var(TimerNotification, clone, $new(TimerNotification, var$0, var$1, var$2, var$3, $(this->getMessage()), this->notificationID));
	clone->setUserData($(this->getUserData()));
	return clone;
}

TimerNotification::TimerNotification() {
}

$Class* TimerNotification::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimerNotification, serialVersionUID)},
		{"notificationID", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(TimerNotification, notificationID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;Ljava/lang/Integer;)V", nullptr, $PUBLIC, $method(TimerNotification, init$, void, $String*, Object$*, int64_t, int64_t, $String*, $Integer*)},
		{"cloneTimerNotification", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(TimerNotification, cloneTimerNotification, $Object*)},
		{"getNotificationID", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(TimerNotification, getNotificationID, $Integer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.timer.TimerNotification",
		"javax.management.Notification",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TimerNotification, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimerNotification);
	});
	return class$;
}

$Class* TimerNotification::class$ = nullptr;

		} // timer
	} // management
} // javax