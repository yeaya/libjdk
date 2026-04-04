#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef REGISTRATION_NOTIFICATION
#undef UNREGISTRATION_NOTIFICATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$String* MBeanServerNotification::REGISTRATION_NOTIFICATION = nullptr;
$String* MBeanServerNotification::UNREGISTRATION_NOTIFICATION = nullptr;

void MBeanServerNotification::init$($String* type, Object$* source, int64_t sequenceNumber, $ObjectName* objectName) {
	$Notification::init$(type, source, sequenceNumber);
	$set(this, objectName, objectName);
}

$ObjectName* MBeanServerNotification::getMBeanName() {
	return this->objectName;
}

$String* MBeanServerNotification::toString() {
	return $str({$($Notification::toString()), "[mbeanName="_s, this->objectName, "]"_s});
}

MBeanServerNotification::MBeanServerNotification() {
}

void MBeanServerNotification::clinit$($Class* clazz) {
	$assignStatic(MBeanServerNotification::REGISTRATION_NOTIFICATION, "JMX.mbean.registered"_s);
	$assignStatic(MBeanServerNotification::UNREGISTRATION_NOTIFICATION, "JMX.mbean.unregistered"_s);
}

$Class* MBeanServerNotification::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerNotification, serialVersionUID)},
		{"REGISTRATION_NOTIFICATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MBeanServerNotification, REGISTRATION_NOTIFICATION)},
		{"UNREGISTRATION_NOTIFICATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MBeanServerNotification, UNREGISTRATION_NOTIFICATION)},
		{"objectName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerNotification, objectName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JLjavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(MBeanServerNotification, init$, void, $String*, Object$*, int64_t, $ObjectName*)},
		{"getMBeanName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(MBeanServerNotification, getMBeanName, $ObjectName*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MBeanServerNotification, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanServerNotification",
		"javax.management.Notification",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanServerNotification, name, initialize, &classInfo$$, MBeanServerNotification::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerNotification);
	});
	return class$;
}

$Class* MBeanServerNotification::class$ = nullptr;

	} // management
} // javax