#include <javax/management/StandardEmitterMBean.h>
#include <java/lang/ClassCastException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/StandardMBean.h>
#include <jcpp.h>

#undef NO_NOTIFICATION_INFO

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $StandardMBean = ::javax::management::StandardMBean;

namespace javax {
	namespace management {

int32_t StandardEmitterMBean::hashCode() {
	return this->$StandardMBean::hashCode();
}

bool StandardEmitterMBean::equals(Object$* arg0) {
	return this->$StandardMBean::equals(arg0);
}

$Object* StandardEmitterMBean::clone() {
	return this->$StandardMBean::clone();
}

$String* StandardEmitterMBean::toString() {
	return this->$StandardMBean::toString();
}

void StandardEmitterMBean::finalize() {
	this->$StandardMBean::finalize();
}

$MBeanNotificationInfoArray* StandardEmitterMBean::NO_NOTIFICATION_INFO = nullptr;

void StandardEmitterMBean::init$(Object$* implementation, $Class* mbeanInterface, $NotificationEmitter* emitter) {
	StandardEmitterMBean::init$(implementation, mbeanInterface, false, emitter);
}

void StandardEmitterMBean::init$(Object$* implementation, $Class* mbeanInterface, bool isMXBean, $NotificationEmitter* emitter) {
	$StandardMBean::init$(implementation, mbeanInterface, isMXBean);
	if (emitter == nullptr) {
		$throwNew($IllegalArgumentException, "Null emitter"_s);
	}
	$set(this, emitter, emitter);
	$var($MBeanNotificationInfoArray, infos, $nc(emitter)->getNotificationInfo());
	if (infos == nullptr || infos->length == 0) {
		$set(this, notificationInfo, StandardEmitterMBean::NO_NOTIFICATION_INFO);
	} else {
		$set(this, notificationInfo, $cast($MBeanNotificationInfoArray, infos->clone()));
	}
}

void StandardEmitterMBean::init$($Class* mbeanInterface, $NotificationEmitter* emitter) {
	StandardEmitterMBean::init$(mbeanInterface, false, emitter);
}

void StandardEmitterMBean::init$($Class* mbeanInterface, bool isMXBean, $NotificationEmitter* emitter) {
	$StandardMBean::init$(mbeanInterface, isMXBean);
	if (emitter == nullptr) {
		$throwNew($IllegalArgumentException, "Null emitter"_s);
	}
	$set(this, emitter, emitter);
	$var($MBeanNotificationInfoArray, infos, $nc(emitter)->getNotificationInfo());
	if (infos == nullptr || infos->length == 0) {
		$set(this, notificationInfo, StandardEmitterMBean::NO_NOTIFICATION_INFO);
	} else {
		$set(this, notificationInfo, $cast($MBeanNotificationInfoArray, infos->clone()));
	}
}

void StandardEmitterMBean::removeNotificationListener($NotificationListener* listener) {
	$nc(this->emitter)->removeNotificationListener(listener);
}

void StandardEmitterMBean::removeNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$nc(this->emitter)->removeNotificationListener(listener, filter, handback);
}

void StandardEmitterMBean::addNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$nc(this->emitter)->addNotificationListener(listener, filter, handback);
}

$MBeanNotificationInfoArray* StandardEmitterMBean::getNotificationInfo() {
	if (this->notificationInfo == nullptr) {
		return StandardEmitterMBean::NO_NOTIFICATION_INFO;
	}
	if ($nc(this->notificationInfo)->length == 0) {
		return this->notificationInfo;
	} else {
		return $cast($MBeanNotificationInfoArray, this->notificationInfo->clone());
	}
}

void StandardEmitterMBean::sendNotification($Notification* n) {
	$useLocalObjectStack();
	if ($instanceOf($NotificationBroadcasterSupport, this->emitter)) {
		$cast($NotificationBroadcasterSupport, this->emitter)->sendNotification(n);
	} else {
		$var($String, msg, $str({"Cannot sendNotification when emitter is not an instance of NotificationBroadcasterSupport: "_s, $($nc(this->emitter)->getClass()->getName())}));
		$throwNew($ClassCastException, msg);
	}
}

$MBeanNotificationInfoArray* StandardEmitterMBean::getNotifications($MBeanInfo* info) {
	return getNotificationInfo();
}

void StandardEmitterMBean::clinit$($Class* clazz) {
	$assignStatic(StandardEmitterMBean::NO_NOTIFICATION_INFO, $new($MBeanNotificationInfoArray, 0));
}

StandardEmitterMBean::StandardEmitterMBean() {
}

$Class* StandardEmitterMBean::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_NOTIFICATION_INFO", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StandardEmitterMBean, NO_NOTIFICATION_INFO)},
		{"emitter", "Ljavax/management/NotificationEmitter;", nullptr, $PRIVATE | $FINAL, $field(StandardEmitterMBean, emitter)},
		{"notificationInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $FINAL, $field(StandardEmitterMBean, notificationInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;Ljavax/management/NotificationEmitter;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;Ljavax/management/NotificationEmitter;)V", $PUBLIC, $method(StandardEmitterMBean, init$, void, Object$*, $Class*, $NotificationEmitter*)},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;ZLjavax/management/NotificationEmitter;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;ZLjavax/management/NotificationEmitter;)V", $PUBLIC, $method(StandardEmitterMBean, init$, void, Object$*, $Class*, bool, $NotificationEmitter*)},
		{"<init>", "(Ljava/lang/Class;Ljavax/management/NotificationEmitter;)V", "(Ljava/lang/Class<*>;Ljavax/management/NotificationEmitter;)V", $PROTECTED, $method(StandardEmitterMBean, init$, void, $Class*, $NotificationEmitter*)},
		{"<init>", "(Ljava/lang/Class;ZLjavax/management/NotificationEmitter;)V", "(Ljava/lang/Class<*>;ZLjavax/management/NotificationEmitter;)V", $PROTECTED, $method(StandardEmitterMBean, init$, void, $Class*, bool, $NotificationEmitter*)},
		{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StandardEmitterMBean, addNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*)},
		{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC, $virtualMethod(StandardEmitterMBean, getNotificationInfo, $MBeanNotificationInfoArray*)},
		{"getNotifications", "(Ljavax/management/MBeanInfo;)[Ljavax/management/MBeanNotificationInfo;", nullptr, 0, $virtualMethod(StandardEmitterMBean, getNotifications, $MBeanNotificationInfoArray*, $MBeanInfo*)},
		{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, $virtualMethod(StandardEmitterMBean, removeNotificationListener, void, $NotificationListener*), "javax.management.ListenerNotFoundException"},
		{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StandardEmitterMBean, removeNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*), "javax.management.ListenerNotFoundException"},
		{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC, $virtualMethod(StandardEmitterMBean, sendNotification, void, $Notification*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.StandardEmitterMBean",
		"javax.management.StandardMBean",
		"javax.management.NotificationEmitter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StandardEmitterMBean, name, initialize, &classInfo$$, StandardEmitterMBean::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(StandardEmitterMBean));
	});
	return class$;
}

$Class* StandardEmitterMBean::class$ = nullptr;

	} // management
} // javax