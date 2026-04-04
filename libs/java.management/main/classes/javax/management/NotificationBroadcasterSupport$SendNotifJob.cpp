#include <javax/management/NotificationBroadcasterSupport$SendNotifJob.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationBroadcasterSupport$ListenerInfo = ::javax::management::NotificationBroadcasterSupport$ListenerInfo;

namespace javax {
	namespace management {

void NotificationBroadcasterSupport$SendNotifJob::init$($NotificationBroadcasterSupport* this$0, $Notification* notif, $NotificationBroadcasterSupport$ListenerInfo* listenerInfo) {
	$set(this, this$0, this$0);
	$set(this, notif, notif);
	$set(this, listenerInfo, listenerInfo);
}

void NotificationBroadcasterSupport$SendNotifJob::run() {
	try {
		this->this$0->handleNotification($nc(this->listenerInfo)->listener, this->notif, $nc(this->listenerInfo)->handback);
	} catch ($Exception& e) {
		$init($NotificationBroadcasterSupport);
		if ($nc($NotificationBroadcasterSupport::logger)->debugOn()) {
			$NotificationBroadcasterSupport::logger->debug("SendNotifJob-run"_s, e);
		}
	}
}

NotificationBroadcasterSupport$SendNotifJob::NotificationBroadcasterSupport$SendNotifJob() {
}

$Class* NotificationBroadcasterSupport$SendNotifJob::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/NotificationBroadcasterSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NotificationBroadcasterSupport$SendNotifJob, this$0)},
		{"notif", "Ljavax/management/Notification;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport$SendNotifJob, notif)},
		{"listenerInfo", "Ljavax/management/NotificationBroadcasterSupport$ListenerInfo;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport$SendNotifJob, listenerInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/NotificationBroadcasterSupport;Ljavax/management/Notification;Ljavax/management/NotificationBroadcasterSupport$ListenerInfo;)V", nullptr, $PUBLIC, $method(NotificationBroadcasterSupport$SendNotifJob, init$, void, $NotificationBroadcasterSupport*, $Notification*, $NotificationBroadcasterSupport$ListenerInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport$SendNotifJob, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.NotificationBroadcasterSupport$SendNotifJob", "javax.management.NotificationBroadcasterSupport", "SendNotifJob", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.NotificationBroadcasterSupport$SendNotifJob",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.NotificationBroadcasterSupport"
	};
	$loadClass(NotificationBroadcasterSupport$SendNotifJob, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBroadcasterSupport$SendNotifJob);
	});
	return class$;
}

$Class* NotificationBroadcasterSupport$SendNotifJob::class$ = nullptr;

	} // management
} // javax