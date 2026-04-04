#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$Class* NotificationBroadcaster::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationBroadcaster, addNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*), "java.lang.IllegalArgumentException"},
		{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationBroadcaster, getNotificationInfo, $MBeanNotificationInfoArray*)},
		{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationBroadcaster, removeNotificationListener, void, $NotificationListener*), "javax.management.ListenerNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.NotificationBroadcaster",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationBroadcaster, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBroadcaster);
	});
	return class$;
}

$Class* NotificationBroadcaster::class$ = nullptr;

	} // management
} // javax