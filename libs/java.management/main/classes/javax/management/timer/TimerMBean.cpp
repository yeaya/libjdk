#include <javax/management/timer/TimerMBean.h>

#include <java/util/Date.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $Vector = ::java::util::Vector;

namespace javax {
	namespace management {
		namespace timer {

$MethodInfo _TimerMBean_MethodInfo_[] = {
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;JJZ)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, addNotification, $Integer*, $String*, $String*, Object$*, $Date*, int64_t, int64_t, bool), "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;JJ)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, addNotification, $Integer*, $String*, $String*, Object$*, $Date*, int64_t, int64_t), "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;J)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, addNotification, $Integer*, $String*, $String*, Object$*, $Date*, int64_t), "java.lang.IllegalArgumentException"},
	{"addNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Date;)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, addNotification, $Integer*, $String*, $String*, Object$*, $Date*), "java.lang.IllegalArgumentException"},
	{"getAllNotificationIDs", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getAllNotificationIDs, $Vector*)},
	{"getDate", "(Ljava/lang/Integer;)Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getDate, $Date*, $Integer*)},
	{"getFixedRate", "(Ljava/lang/Integer;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getFixedRate, $Boolean*, $Integer*)},
	{"getNbNotifications", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getNbNotifications, int32_t)},
	{"getNbOccurences", "(Ljava/lang/Integer;)Ljava/lang/Long;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getNbOccurences, $Long*, $Integer*)},
	{"getNotificationIDs", "(Ljava/lang/String;)Ljava/util/Vector;", "(Ljava/lang/String;)Ljava/util/Vector<Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getNotificationIDs, $Vector*, $String*)},
	{"getNotificationMessage", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getNotificationMessage, $String*, $Integer*)},
	{"getNotificationType", "(Ljava/lang/Integer;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getNotificationType, $String*, $Integer*)},
	{"getNotificationUserData", "(Ljava/lang/Integer;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getNotificationUserData, $Object*, $Integer*)},
	{"getPeriod", "(Ljava/lang/Integer;)Ljava/lang/Long;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getPeriod, $Long*, $Integer*)},
	{"getSendPastNotifications", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, getSendPastNotifications, bool)},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, isActive, bool)},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, isEmpty, bool)},
	{"removeAllNotifications", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, removeAllNotifications, void)},
	{"removeNotification", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, removeNotification, void, $Integer*), "javax.management.InstanceNotFoundException"},
	{"removeNotifications", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, removeNotifications, void, $String*), "javax.management.InstanceNotFoundException"},
	{"setSendPastNotifications", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, setSendPastNotifications, void, bool)},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, start, void)},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimerMBean, stop, void)},
	{}
};

$ClassInfo _TimerMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.timer.TimerMBean",
	nullptr,
	nullptr,
	nullptr,
	_TimerMBean_MethodInfo_
};

$Object* allocate$TimerMBean($Class* clazz) {
	return $of($alloc(TimerMBean));
}

$Class* TimerMBean::load$($String* name, bool initialize) {
	$loadClass(TimerMBean, name, initialize, &_TimerMBean_ClassInfo_, allocate$TimerMBean);
	return class$;
}

$Class* TimerMBean::class$ = nullptr;

		} // timer
	} // management
} // javax