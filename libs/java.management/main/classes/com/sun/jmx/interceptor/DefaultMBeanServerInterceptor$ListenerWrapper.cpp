#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ListenerWrapper.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

void DefaultMBeanServerInterceptor$ListenerWrapper::init$($NotificationListener* l, $ObjectName* name, Object$* mbean) {
	$set(this, listener, l);
	$set(this, name, name);
	$set(this, mbean, mbean);
}

void DefaultMBeanServerInterceptor$ListenerWrapper::handleNotification($Notification* notification, Object$* handback) {
	if (notification != nullptr) {
		if ($equals(notification->getSource(), this->mbean)) {
			notification->setSource(this->name);
		}
	}
	$nc(this->listener)->handleNotification(notification, handback);
}

bool DefaultMBeanServerInterceptor$ListenerWrapper::equals(Object$* o) {
	if (!($instanceOf(DefaultMBeanServerInterceptor$ListenerWrapper, o))) {
		return false;
	}
	$var(DefaultMBeanServerInterceptor$ListenerWrapper, w, $cast(DefaultMBeanServerInterceptor$ListenerWrapper, o));
	return ($nc(w)->listener == this->listener && $equals(w->mbean, this->mbean) && $nc(w->name)->equals(this->name));
}

int32_t DefaultMBeanServerInterceptor$ListenerWrapper::hashCode() {
	int32_t var$0 = $System::identityHashCode(this->listener);
	return (var$0 ^ $System::identityHashCode(this->mbean));
}

DefaultMBeanServerInterceptor$ListenerWrapper::DefaultMBeanServerInterceptor$ListenerWrapper() {
}

$Class* DefaultMBeanServerInterceptor$ListenerWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listener", "Ljavax/management/NotificationListener;", nullptr, $PRIVATE, $field(DefaultMBeanServerInterceptor$ListenerWrapper, listener)},
		{"name", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(DefaultMBeanServerInterceptor$ListenerWrapper, name)},
		{"mbean", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DefaultMBeanServerInterceptor$ListenerWrapper, mbean)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/NotificationListener;Ljavax/management/ObjectName;Ljava/lang/Object;)V", nullptr, 0, $method(DefaultMBeanServerInterceptor$ListenerWrapper, init$, void, $NotificationListener*, $ObjectName*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$ListenerWrapper, equals, bool, Object$*)},
		{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$ListenerWrapper, handleNotification, void, $Notification*, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultMBeanServerInterceptor$ListenerWrapper, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ListenerWrapper", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper",
		"java.lang.Object",
		"javax.management.NotificationListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
	};
	$loadClass(DefaultMBeanServerInterceptor$ListenerWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMBeanServerInterceptor$ListenerWrapper);
	});
	return class$;
}

$Class* DefaultMBeanServerInterceptor$ListenerWrapper::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com