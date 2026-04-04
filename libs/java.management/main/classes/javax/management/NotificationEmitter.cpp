#include <javax/management/NotificationEmitter.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

$Class* NotificationEmitter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationEmitter, removeNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*), "javax.management.ListenerNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.NotificationEmitter",
		nullptr,
		"javax.management.NotificationBroadcaster",
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationEmitter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationEmitter);
	});
	return class$;
}

$Class* NotificationEmitter::class$ = nullptr;

	} // management
} // javax