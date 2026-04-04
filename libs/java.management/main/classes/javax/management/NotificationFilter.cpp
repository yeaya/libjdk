#include <javax/management/NotificationFilter.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {

$Class* NotificationFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isNotificationEnabled", "(Ljavax/management/Notification;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationFilter, isNotificationEnabled, bool, $Notification*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.NotificationFilter",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationFilter);
	});
	return class$;
}

$Class* NotificationFilter::class$ = nullptr;

	} // management
} // javax