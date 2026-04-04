#include <javax/management/NotificationBroadcasterSupport$ListenerInfo.h>
#include <java/util/Objects.h>
#include <javax/management/NotificationBroadcasterSupport$WildcardListenerInfo.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $NotificationBroadcasterSupport$WildcardListenerInfo = ::javax::management::NotificationBroadcasterSupport$WildcardListenerInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {

void NotificationBroadcasterSupport$ListenerInfo::init$($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$set(this, listener, listener);
	$set(this, filter, filter);
	$set(this, handback, handback);
}

bool NotificationBroadcasterSupport$ListenerInfo::equals(Object$* o) {
	if (!($instanceOf(NotificationBroadcasterSupport$ListenerInfo, o))) {
		return false;
	}
	$var(NotificationBroadcasterSupport$ListenerInfo, li, $cast(NotificationBroadcasterSupport$ListenerInfo, o));
	if ($instanceOf($NotificationBroadcasterSupport$WildcardListenerInfo, li)) {
		return (li->listener == this->listener);
	} else {
		return ($nc(li)->listener == this->listener && li->filter == this->filter && $equals(li->handback, this->handback));
	}
}

int32_t NotificationBroadcasterSupport$ListenerInfo::hashCode() {
	return $Objects::hashCode(this->listener);
}

NotificationBroadcasterSupport$ListenerInfo::NotificationBroadcasterSupport$ListenerInfo() {
}

$Class* NotificationBroadcasterSupport$ListenerInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listener", "Ljavax/management/NotificationListener;", nullptr, 0, $field(NotificationBroadcasterSupport$ListenerInfo, listener)},
		{"filter", "Ljavax/management/NotificationFilter;", nullptr, 0, $field(NotificationBroadcasterSupport$ListenerInfo, filter)},
		{"handback", "Ljava/lang/Object;", nullptr, 0, $field(NotificationBroadcasterSupport$ListenerInfo, handback)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, 0, $method(NotificationBroadcasterSupport$ListenerInfo, init$, void, $NotificationListener*, $NotificationFilter*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport$ListenerInfo, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(NotificationBroadcasterSupport$ListenerInfo, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.NotificationBroadcasterSupport$ListenerInfo", "javax.management.NotificationBroadcasterSupport", "ListenerInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.NotificationBroadcasterSupport$ListenerInfo",
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
		"javax.management.NotificationBroadcasterSupport"
	};
	$loadClass(NotificationBroadcasterSupport$ListenerInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBroadcasterSupport$ListenerInfo);
	});
	return class$;
}

$Class* NotificationBroadcasterSupport$ListenerInfo::class$ = nullptr;

	} // management
} // javax