#include <sun/management/NotificationEmitterSupport$ListenerInfo.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <sun/management/NotificationEmitterSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $NotificationEmitterSupport = ::sun::management::NotificationEmitterSupport;

namespace sun {
	namespace management {

void NotificationEmitterSupport$ListenerInfo::init$($NotificationEmitterSupport* this$0, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$set(this, this$0, this$0);
	$set(this, listener, listener);
	$set(this, filter, filter);
	$set(this, handback, handback);
}

NotificationEmitterSupport$ListenerInfo::NotificationEmitterSupport$ListenerInfo() {
}

$Class* NotificationEmitterSupport$ListenerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/management/NotificationEmitterSupport;", nullptr, $FINAL | $SYNTHETIC, $field(NotificationEmitterSupport$ListenerInfo, this$0)},
		{"listener", "Ljavax/management/NotificationListener;", nullptr, $PUBLIC, $field(NotificationEmitterSupport$ListenerInfo, listener)},
		{"filter", "Ljavax/management/NotificationFilter;", nullptr, 0, $field(NotificationEmitterSupport$ListenerInfo, filter)},
		{"handback", "Ljava/lang/Object;", nullptr, 0, $field(NotificationEmitterSupport$ListenerInfo, handback)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/NotificationEmitterSupport;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(NotificationEmitterSupport$ListenerInfo, init$, void, $NotificationEmitterSupport*, $NotificationListener*, $NotificationFilter*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.NotificationEmitterSupport$ListenerInfo", "sun.management.NotificationEmitterSupport", "ListenerInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.NotificationEmitterSupport$ListenerInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.NotificationEmitterSupport"
	};
	$loadClass(NotificationEmitterSupport$ListenerInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationEmitterSupport$ListenerInfo);
	});
	return class$;
}

$Class* NotificationEmitterSupport$ListenerInfo::class$ = nullptr;

	} // management
} // sun