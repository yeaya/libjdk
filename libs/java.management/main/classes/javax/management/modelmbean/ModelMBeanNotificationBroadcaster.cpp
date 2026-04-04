#include <javax/management/modelmbean/ModelMBeanNotificationBroadcaster.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeChangeNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::management::Attribute;
using $AttributeChangeNotification = ::javax::management::AttributeChangeNotification;
using $Notification = ::javax::management::Notification;
using $NotificationListener = ::javax::management::NotificationListener;

namespace javax {
	namespace management {
		namespace modelmbean {

$Class* ModelMBeanNotificationBroadcaster::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addAttributeChangeNotificationListener", "(Ljavax/management/NotificationListener;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelMBeanNotificationBroadcaster, addAttributeChangeNotificationListener, void, $NotificationListener*, $String*, Object$*), "javax.management.MBeanException,javax.management.RuntimeOperationsException,java.lang.IllegalArgumentException"},
		{"removeAttributeChangeNotificationListener", "(Ljavax/management/NotificationListener;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelMBeanNotificationBroadcaster, removeAttributeChangeNotificationListener, void, $NotificationListener*, $String*), "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.ListenerNotFoundException"},
		{"sendAttributeChangeNotification", "(Ljavax/management/AttributeChangeNotification;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelMBeanNotificationBroadcaster, sendAttributeChangeNotification, void, $AttributeChangeNotification*), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
		{"sendAttributeChangeNotification", "(Ljavax/management/Attribute;Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelMBeanNotificationBroadcaster, sendAttributeChangeNotification, void, $Attribute*, $Attribute*), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
		{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelMBeanNotificationBroadcaster, sendNotification, void, $Notification*), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
		{"sendNotification", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelMBeanNotificationBroadcaster, sendNotification, void, $String*), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.modelmbean.ModelMBeanNotificationBroadcaster",
		nullptr,
		"javax.management.NotificationBroadcaster",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModelMBeanNotificationBroadcaster, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelMBeanNotificationBroadcaster);
	});
	return class$;
}

$Class* ModelMBeanNotificationBroadcaster::class$ = nullptr;

		} // modelmbean
	} // management
} // javax