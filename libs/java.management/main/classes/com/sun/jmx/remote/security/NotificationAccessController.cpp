#include <com/sun/jmx/remote/security/NotificationAccessController.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$Class* NotificationAccessController::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addNotificationListener", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationAccessController, addNotificationListener, void, $String*, $ObjectName*, $Subject*), "java.lang.SecurityException"},
		{"fetchNotification", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/Notification;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationAccessController, fetchNotification, void, $String*, $ObjectName*, $Notification*, $Subject*), "java.lang.SecurityException"},
		{"removeNotificationListener", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/security/auth/Subject;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationAccessController, removeNotificationListener, void, $String*, $ObjectName*, $Subject*), "java.lang.SecurityException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.remote.security.NotificationAccessController",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationAccessController, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationAccessController);
	});
	return class$;
}

$Class* NotificationAccessController::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com