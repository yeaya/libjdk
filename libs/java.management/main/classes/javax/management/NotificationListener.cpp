#include <javax/management/NotificationListener.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {

$Class* NotificationListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationListener, handleNotification, void, $Notification*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.NotificationListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationListener);
	});
	return class$;
}

$Class* NotificationListener::class$ = nullptr;

	} // management
} // javax