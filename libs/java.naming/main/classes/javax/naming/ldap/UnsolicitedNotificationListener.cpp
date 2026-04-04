#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsolicitedNotificationEvent = ::javax::naming::ldap::UnsolicitedNotificationEvent;

namespace javax {
	namespace naming {
		namespace ldap {

$Class* UnsolicitedNotificationListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notificationReceived", "(Ljavax/naming/ldap/UnsolicitedNotificationEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnsolicitedNotificationListener, notificationReceived, void, $UnsolicitedNotificationEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.ldap.UnsolicitedNotificationListener",
		nullptr,
		"javax.naming.event.NamingListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnsolicitedNotificationListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsolicitedNotificationListener);
	});
	return class$;
}

$Class* UnsolicitedNotificationListener::class$ = nullptr;

		} // ldap
	} // naming
} // javax