#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <java/util/EventObject.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $UnsolicitedNotification = ::javax::naming::ldap::UnsolicitedNotification;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;

namespace javax {
	namespace naming {
		namespace ldap {

void UnsolicitedNotificationEvent::init$(Object$* src, $UnsolicitedNotification* notice) {
	$EventObject::init$(src);
	$set(this, notice, notice);
}

$UnsolicitedNotification* UnsolicitedNotificationEvent::getNotification() {
	return this->notice;
}

void UnsolicitedNotificationEvent::dispatch($UnsolicitedNotificationListener* listener) {
	$nc(listener)->notificationReceived(this);
}

UnsolicitedNotificationEvent::UnsolicitedNotificationEvent() {
}

$Class* UnsolicitedNotificationEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"notice", "Ljavax/naming/ldap/UnsolicitedNotification;", nullptr, $PRIVATE, $field(UnsolicitedNotificationEvent, notice)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsolicitedNotificationEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/naming/ldap/UnsolicitedNotification;)V", nullptr, $PUBLIC, $method(UnsolicitedNotificationEvent, init$, void, Object$*, $UnsolicitedNotification*)},
		{"dispatch", "(Ljavax/naming/ldap/UnsolicitedNotificationListener;)V", nullptr, $PUBLIC, $virtualMethod(UnsolicitedNotificationEvent, dispatch, void, $UnsolicitedNotificationListener*)},
		{"getNotification", "()Ljavax/naming/ldap/UnsolicitedNotification;", nullptr, $PUBLIC, $virtualMethod(UnsolicitedNotificationEvent, getNotification, $UnsolicitedNotification*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.ldap.UnsolicitedNotificationEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsolicitedNotificationEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsolicitedNotificationEvent);
	});
	return class$;
}

$Class* UnsolicitedNotificationEvent::class$ = nullptr;

		} // ldap
	} // naming
} // javax