#include <javax/management/NotificationBroadcasterSupport$WildcardListenerInfo.h>
#include <java/lang/AssertionError.h>
#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationBroadcasterSupport$ListenerInfo = ::javax::management::NotificationBroadcasterSupport$ListenerInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

bool NotificationBroadcasterSupport$WildcardListenerInfo::$assertionsDisabled = false;

void NotificationBroadcasterSupport$WildcardListenerInfo::init$($NotificationListener* listener) {
	$NotificationBroadcasterSupport$ListenerInfo::init$(listener, nullptr, nullptr);
}

bool NotificationBroadcasterSupport$WildcardListenerInfo::equals(Object$* o) {
	if (!NotificationBroadcasterSupport$WildcardListenerInfo::$assertionsDisabled && !(!($instanceOf(NotificationBroadcasterSupport$WildcardListenerInfo, o)))) {
		$throwNew($AssertionError);
	}
	return $nc($of(o))->equals(this);
}

int32_t NotificationBroadcasterSupport$WildcardListenerInfo::hashCode() {
	return $NotificationBroadcasterSupport$ListenerInfo::hashCode();
}

void NotificationBroadcasterSupport$WildcardListenerInfo::clinit$($Class* clazz) {
	$load($NotificationBroadcasterSupport);
	NotificationBroadcasterSupport$WildcardListenerInfo::$assertionsDisabled = !$NotificationBroadcasterSupport::class$->desiredAssertionStatus();
}

NotificationBroadcasterSupport$WildcardListenerInfo::NotificationBroadcasterSupport$WildcardListenerInfo() {
}

$Class* NotificationBroadcasterSupport$WildcardListenerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NotificationBroadcasterSupport$WildcardListenerInfo, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/NotificationListener;)V", nullptr, 0, $method(NotificationBroadcasterSupport$WildcardListenerInfo, init$, void, $NotificationListener*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport$WildcardListenerInfo, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport$WildcardListenerInfo, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.NotificationBroadcasterSupport$WildcardListenerInfo", "javax.management.NotificationBroadcasterSupport", "WildcardListenerInfo", $PRIVATE | $STATIC},
		{"javax.management.NotificationBroadcasterSupport$ListenerInfo", "javax.management.NotificationBroadcasterSupport", "ListenerInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.NotificationBroadcasterSupport$WildcardListenerInfo",
		"javax.management.NotificationBroadcasterSupport$ListenerInfo",
		nullptr,
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
	$loadClass(NotificationBroadcasterSupport$WildcardListenerInfo, name, initialize, &classInfo$$, NotificationBroadcasterSupport$WildcardListenerInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBroadcasterSupport$WildcardListenerInfo);
	});
	return class$;
}

$Class* NotificationBroadcasterSupport$WildcardListenerInfo::class$ = nullptr;

	} // management
} // javax