#include <javax/management/NotificationBroadcasterSupport.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/Executor.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport$1.h>
#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport$SendNotifJob.h>
#include <javax/management/NotificationBroadcasterSupport$WildcardListenerInfo.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

#undef NO_NOTIFICATION_INFO

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Executor = ::java::util::concurrent::Executor;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport$1 = ::javax::management::NotificationBroadcasterSupport$1;
using $NotificationBroadcasterSupport$ListenerInfo = ::javax::management::NotificationBroadcasterSupport$ListenerInfo;
using $NotificationBroadcasterSupport$SendNotifJob = ::javax::management::NotificationBroadcasterSupport$SendNotifJob;
using $NotificationBroadcasterSupport$WildcardListenerInfo = ::javax::management::NotificationBroadcasterSupport$WildcardListenerInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$Executor* NotificationBroadcasterSupport::defaultExecutor = nullptr;
$MBeanNotificationInfoArray* NotificationBroadcasterSupport::NO_NOTIFICATION_INFO = nullptr;
$ClassLogger* NotificationBroadcasterSupport::logger = nullptr;

void NotificationBroadcasterSupport::init$() {
	NotificationBroadcasterSupport::init$(nullptr, ($MBeanNotificationInfoArray*)nullptr);
}

void NotificationBroadcasterSupport::init$($Executor* executor) {
	NotificationBroadcasterSupport::init$(executor, ($MBeanNotificationInfoArray*)nullptr);
}

void NotificationBroadcasterSupport::init$($MBeanNotificationInfoArray* info) {
	NotificationBroadcasterSupport::init$(nullptr, info);
}

void NotificationBroadcasterSupport::init$($Executor* executor, $MBeanNotificationInfoArray* info) {
	$set(this, listenerList, $new($CopyOnWriteArrayList));
	$set(this, executor, (executor != nullptr) ? executor : NotificationBroadcasterSupport::defaultExecutor);
	$set(this, notifInfo, info == nullptr ? NotificationBroadcasterSupport::NO_NOTIFICATION_INFO : $cast($MBeanNotificationInfoArray, info->clone()));
}

void NotificationBroadcasterSupport::addNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	if (listener == nullptr) {
		$throwNew($IllegalArgumentException, "Listener can\'t be null"_s);
	}
	$nc(this->listenerList)->add($$new($NotificationBroadcasterSupport$ListenerInfo, listener, filter, handback));
}

void NotificationBroadcasterSupport::removeNotificationListener($NotificationListener* listener) {
	$useLocalObjectStack();
	$var($NotificationBroadcasterSupport$ListenerInfo, wildcard, $new($NotificationBroadcasterSupport$WildcardListenerInfo, listener));
	bool removed = $nc(this->listenerList)->removeAll($($Collections::singleton(wildcard)));
	if (!removed) {
		$throwNew($ListenerNotFoundException, "Listener not registered"_s);
	}
}

void NotificationBroadcasterSupport::removeNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$var($NotificationBroadcasterSupport$ListenerInfo, li, $new($NotificationBroadcasterSupport$ListenerInfo, listener, filter, handback));
	bool removed = $nc(this->listenerList)->remove(li);
	if (!removed) {
		$throwNew($ListenerNotFoundException, "Listener not registered (with this filter and handback)"_s);
	}
}

$MBeanNotificationInfoArray* NotificationBroadcasterSupport::getNotificationInfo() {
	if ($nc(this->notifInfo)->length == 0) {
		return this->notifInfo;
	} else {
		return $cast($MBeanNotificationInfoArray, this->notifInfo->clone());
	}
}

void NotificationBroadcasterSupport::sendNotification($Notification* notification) {
	$useLocalObjectStack();
	if (notification == nullptr) {
		return;
	}
	bool enabled = false;
	{
		$var($Iterator, i$, $nc(this->listenerList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NotificationBroadcasterSupport$ListenerInfo, li, $cast($NotificationBroadcasterSupport$ListenerInfo, i$->next()));
			{
				try {
					enabled = $nc(li)->filter == nullptr || li->filter->isNotificationEnabled(notification);
				} catch ($Exception& e) {
					if (NotificationBroadcasterSupport::logger->debugOn()) {
						NotificationBroadcasterSupport::logger->debug("sendNotification"_s, e);
					}
					continue;
				}
				if (enabled) {
					$nc(this->executor)->execute($$new($NotificationBroadcasterSupport$SendNotifJob, this, notification, li));
				}
			}
		}
	}
}

void NotificationBroadcasterSupport::handleNotification($NotificationListener* listener, $Notification* notif, Object$* handback) {
	$nc(listener)->handleNotification(notif, handback);
}

void NotificationBroadcasterSupport::clinit$($Class* clazz) {
	$assignStatic(NotificationBroadcasterSupport::defaultExecutor, $new($NotificationBroadcasterSupport$1));
	$assignStatic(NotificationBroadcasterSupport::NO_NOTIFICATION_INFO, $new($MBeanNotificationInfoArray, 0));
	$assignStatic(NotificationBroadcasterSupport::logger, $new($ClassLogger, "javax.management"_s, "NotificationBroadcasterSupport"_s));
}

NotificationBroadcasterSupport::NotificationBroadcasterSupport() {
}

$Class* NotificationBroadcasterSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listenerList", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/NotificationBroadcasterSupport$ListenerInfo;>;", $PRIVATE, $field(NotificationBroadcasterSupport, listenerList)},
		{"executor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport, executor)},
		{"notifInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $FINAL, $field(NotificationBroadcasterSupport, notifInfo)},
		{"defaultExecutor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NotificationBroadcasterSupport, defaultExecutor)},
		{"NO_NOTIFICATION_INFO", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NotificationBroadcasterSupport, NO_NOTIFICATION_INFO)},
		{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NotificationBroadcasterSupport, logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotificationBroadcasterSupport, init$, void)},
		{"<init>", "(Ljava/util/concurrent/Executor;)V", nullptr, $PUBLIC, $method(NotificationBroadcasterSupport, init$, void, $Executor*)},
		{"<init>", "([Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC | $TRANSIENT, $method(NotificationBroadcasterSupport, init$, void, $MBeanNotificationInfoArray*)},
		{"<init>", "(Ljava/util/concurrent/Executor;[Ljavax/management/MBeanNotificationInfo;)V", nullptr, $PUBLIC | $TRANSIENT, $method(NotificationBroadcasterSupport, init$, void, $Executor*, $MBeanNotificationInfoArray*)},
		{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport, addNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*)},
		{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport, getNotificationInfo, $MBeanNotificationInfoArray*)},
		{"handleNotification", "(Ljavax/management/NotificationListener;Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(NotificationBroadcasterSupport, handleNotification, void, $NotificationListener*, $Notification*, Object$*)},
		{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport, removeNotificationListener, void, $NotificationListener*), "javax.management.ListenerNotFoundException"},
		{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport, removeNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*), "javax.management.ListenerNotFoundException"},
		{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport, sendNotification, void, $Notification*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.NotificationBroadcasterSupport$SendNotifJob", "javax.management.NotificationBroadcasterSupport", "SendNotifJob", $PRIVATE},
		{"javax.management.NotificationBroadcasterSupport$WildcardListenerInfo", "javax.management.NotificationBroadcasterSupport", "WildcardListenerInfo", $PRIVATE | $STATIC},
		{"javax.management.NotificationBroadcasterSupport$ListenerInfo", "javax.management.NotificationBroadcasterSupport", "ListenerInfo", $PRIVATE | $STATIC},
		{"javax.management.NotificationBroadcasterSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.NotificationBroadcasterSupport",
		"java.lang.Object",
		"javax.management.NotificationEmitter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.management.NotificationBroadcasterSupport$SendNotifJob,javax.management.NotificationBroadcasterSupport$WildcardListenerInfo,javax.management.NotificationBroadcasterSupport$ListenerInfo,javax.management.NotificationBroadcasterSupport$1"
	};
	$loadClass(NotificationBroadcasterSupport, name, initialize, &classInfo$$, NotificationBroadcasterSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBroadcasterSupport);
	});
	return class$;
}

$Class* NotificationBroadcasterSupport::class$ = nullptr;

	} // management
} // javax