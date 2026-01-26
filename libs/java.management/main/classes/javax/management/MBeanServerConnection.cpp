#include <javax/management/MBeanServerConnection.h>

#include <java/util/Set.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryExp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;

namespace javax {
	namespace management {

$MethodInfo _MBeanServerConnection_MethodInfo_[] = {
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, addNotificationListener, void, $ObjectName*, $NotificationListener*, $NotificationFilter*, Object$*), "javax.management.InstanceNotFoundException,java.io.IOException"},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, addNotificationListener, void, $ObjectName*, $ObjectName*, $NotificationFilter*, Object$*), "javax.management.InstanceNotFoundException,java.io.IOException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, createMBean, $ObjectInstance*, $String*, $ObjectName*), "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,java.io.IOException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, createMBean, $ObjectInstance*, $String*, $ObjectName*, $ObjectName*), "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException,java.io.IOException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, createMBean, $ObjectInstance*, $String*, $ObjectName*, $ObjectArray*, $StringArray*), "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,java.io.IOException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, createMBean, $ObjectInstance*, $String*, $ObjectName*, $ObjectName*, $ObjectArray*, $StringArray*), "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException,java.io.IOException"},
	{"getAttribute", "(Ljavax/management/ObjectName;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getAttribute, $Object*, $ObjectName*, $String*), "javax.management.MBeanException,javax.management.AttributeNotFoundException,javax.management.InstanceNotFoundException,javax.management.ReflectionException,java.io.IOException"},
	{"getAttributes", "(Ljavax/management/ObjectName;[Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getAttributes, $AttributeList*, $ObjectName*, $StringArray*), "javax.management.InstanceNotFoundException,javax.management.ReflectionException,java.io.IOException"},
	{"getDefaultDomain", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getDefaultDomain, $String*), "java.io.IOException"},
	{"getDomains", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getDomains, $StringArray*), "java.io.IOException"},
	{"getMBeanCount", "()Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getMBeanCount, $Integer*), "java.io.IOException"},
	{"getMBeanInfo", "(Ljavax/management/ObjectName;)Ljavax/management/MBeanInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getMBeanInfo, $MBeanInfo*, $ObjectName*), "javax.management.InstanceNotFoundException,javax.management.IntrospectionException,javax.management.ReflectionException,java.io.IOException"},
	{"getObjectInstance", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, getObjectInstance, $ObjectInstance*, $ObjectName*), "javax.management.InstanceNotFoundException,java.io.IOException"},
	{"invoke", "(Ljavax/management/ObjectName;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, invoke, $Object*, $ObjectName*, $String*, $ObjectArray*, $StringArray*), "javax.management.InstanceNotFoundException,javax.management.MBeanException,javax.management.ReflectionException,java.io.IOException"},
	{"isInstanceOf", "(Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, isInstanceOf, bool, $ObjectName*, $String*), "javax.management.InstanceNotFoundException,java.io.IOException"},
	{"isRegistered", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, isRegistered, bool, $ObjectName*), "java.io.IOException"},
	{"queryMBeans", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, queryMBeans, $Set*, $ObjectName*, $QueryExp*), "java.io.IOException"},
	{"queryNames", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, queryNames, $Set*, $ObjectName*, $QueryExp*), "java.io.IOException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, removeNotificationListener, void, $ObjectName*, $ObjectName*), "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException,java.io.IOException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, removeNotificationListener, void, $ObjectName*, $ObjectName*, $NotificationFilter*, Object$*), "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException,java.io.IOException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, removeNotificationListener, void, $ObjectName*, $NotificationListener*), "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException,java.io.IOException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, removeNotificationListener, void, $ObjectName*, $NotificationListener*, $NotificationFilter*, Object$*), "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException,java.io.IOException"},
	{"setAttribute", "(Ljavax/management/ObjectName;Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, setAttribute, void, $ObjectName*, $Attribute*), "javax.management.InstanceNotFoundException,javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException,java.io.IOException"},
	{"setAttributes", "(Ljavax/management/ObjectName;Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, setAttributes, $AttributeList*, $ObjectName*, $AttributeList*), "javax.management.InstanceNotFoundException,javax.management.ReflectionException,java.io.IOException"},
	{"unregisterMBean", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerConnection, unregisterMBean, void, $ObjectName*), "javax.management.InstanceNotFoundException,javax.management.MBeanRegistrationException,java.io.IOException"},
	{}
};

$ClassInfo _MBeanServerConnection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.MBeanServerConnection",
	nullptr,
	nullptr,
	nullptr,
	_MBeanServerConnection_MethodInfo_
};

$Object* allocate$MBeanServerConnection($Class* clazz) {
	return $of($alloc(MBeanServerConnection));
}

$Class* MBeanServerConnection::load$($String* name, bool initialize) {
	$loadClass(MBeanServerConnection, name, initialize, &_MBeanServerConnection_ClassInfo_, allocate$MBeanServerConnection);
	return class$;
}

$Class* MBeanServerConnection::class$ = nullptr;

	} // management
} // javax