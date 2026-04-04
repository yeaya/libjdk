#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$NamedNotification::init$($ObjectName* sender, $Notification* notif) {
	$set(this, sender, sender);
	$set(this, notification, notif);
}

$ObjectName* ArrayNotificationBuffer$NamedNotification::getObjectName() {
	return this->sender;
}

$Notification* ArrayNotificationBuffer$NamedNotification::getNotification() {
	return this->notification;
}

$String* ArrayNotificationBuffer$NamedNotification::toString() {
	return $str({"NamedNotification("_s, this->sender, ", "_s, this->notification, ")"_s});
}

ArrayNotificationBuffer$NamedNotification::ArrayNotificationBuffer$NamedNotification() {
}

$Class* ArrayNotificationBuffer$NamedNotification::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sender", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer$NamedNotification, sender)},
		{"notification", "Ljavax/management/Notification;", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer$NamedNotification, notification)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ObjectName;Ljavax/management/Notification;)V", nullptr, 0, $method(ArrayNotificationBuffer$NamedNotification, init$, void, $ObjectName*, $Notification*)},
		{"getNotification", "()Ljavax/management/Notification;", nullptr, 0, $virtualMethod(ArrayNotificationBuffer$NamedNotification, getNotification, $Notification*)},
		{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, 0, $virtualMethod(ArrayNotificationBuffer$NamedNotification, getObjectName, $ObjectName*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$NamedNotification, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "NamedNotification", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$NamedNotification",
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
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
	};
	$loadClass(ArrayNotificationBuffer$NamedNotification, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$NamedNotification);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$NamedNotification::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com