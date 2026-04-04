#include <javax/management/JMX.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/MBeanServerInvocationHandler.h>
#include <javax/management/MXBean.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef ALLOW_NONPUBLIC_MBEAN
#undef DEFAULT_VALUE_FIELD
#undef IMMUTABLE_INFO_FIELD
#undef INTERFACE_CLASS_NAME_FIELD
#undef JMX
#undef LEGAL_VALUES_FIELD
#undef MAX_VALUE_FIELD
#undef MIN_VALUE_FIELD
#undef MXBEAN_FIELD
#undef OPEN_TYPE_FIELD
#undef ORIGINAL_TYPE_FIELD

using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $MBeanServerInvocationHandler = ::javax::management::MBeanServerInvocationHandler;
using $MXBean = ::javax::management::MXBean;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

JMX* JMX::proof = nullptr;
$String* JMX::DEFAULT_VALUE_FIELD = nullptr;
$String* JMX::IMMUTABLE_INFO_FIELD = nullptr;
$String* JMX::INTERFACE_CLASS_NAME_FIELD = nullptr;
$String* JMX::LEGAL_VALUES_FIELD = nullptr;
$String* JMX::MAX_VALUE_FIELD = nullptr;
$String* JMX::MIN_VALUE_FIELD = nullptr;
$String* JMX::MXBEAN_FIELD = nullptr;
$String* JMX::OPEN_TYPE_FIELD = nullptr;
$String* JMX::ORIGINAL_TYPE_FIELD = nullptr;

void JMX::init$() {
}

$Object* JMX::newMBeanProxy($MBeanServerConnection* connection, $ObjectName* objectName, $Class* interfaceClass) {
	$init(JMX);
	return newMBeanProxy(connection, objectName, interfaceClass, false);
}

$Object* JMX::newMBeanProxy($MBeanServerConnection* connection, $ObjectName* objectName, $Class* interfaceClass, bool notificationEmitter) {
	$init(JMX);
	return createProxy(connection, objectName, interfaceClass, notificationEmitter, false);
}

$Object* JMX::newMXBeanProxy($MBeanServerConnection* connection, $ObjectName* objectName, $Class* interfaceClass) {
	$init(JMX);
	return newMXBeanProxy(connection, objectName, interfaceClass, false);
}

$Object* JMX::newMXBeanProxy($MBeanServerConnection* connection, $ObjectName* objectName, $Class* interfaceClass, bool notificationEmitter) {
	$init(JMX);
	return createProxy(connection, objectName, interfaceClass, notificationEmitter, true);
}

bool JMX::isMXBeanInterface($Class* interfaceClass) {
	$init(JMX);
	$useLocalObjectStack();
	if (!$nc(interfaceClass)->isInterface()) {
		return false;
	}
	$init($Introspector);
	if (!$Modifier::isPublic(interfaceClass->getModifiers()) && !$Introspector::ALLOW_NONPUBLIC_MBEAN) {
		return false;
	}
	$load($MXBean);
	$var($MXBean, a, $cast($MXBean, interfaceClass->getAnnotation($MXBean::class$)));
	if (a != nullptr) {
		return a->value();
	}
	return $$nc(interfaceClass->getName())->endsWith("MXBean"_s);
}

$Object* JMX::createProxy($MBeanServerConnection* connection, $ObjectName* objectName, $Class* interfaceClass, bool notificationEmitter, bool isMXBean) {
	$init(JMX);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		if (isMXBean) {
			$Introspector::testComplianceMXBeanInterface(interfaceClass);
		} else {
			$Introspector::testComplianceMBeanInterface(interfaceClass);
		}
	} catch ($NotCompliantMBeanException& e) {
		$throwNew($IllegalArgumentException, e);
	}
	$var($InvocationHandler, handler, $new($MBeanServerInvocationHandler, connection, objectName, isMXBean));
	$var($ClassArray, interfaces, nullptr);
	if (notificationEmitter) {
		$load($NotificationEmitter);
		$assign(interfaces, $new($ClassArray, {
			interfaceClass,
			$NotificationEmitter::class$
		}));
	} else {
		$assign(interfaces, $new($ClassArray, {interfaceClass}));
	}
	$var($Object, proxy, $Proxy::newProxyInstance($($nc(interfaceClass)->getClassLoader()), interfaces, handler));
	return interfaceClass->cast(proxy);
}

void JMX::clinit$($Class* clazz) {
	$assignStatic(JMX::DEFAULT_VALUE_FIELD, "defaultValue"_s);
	$assignStatic(JMX::IMMUTABLE_INFO_FIELD, "immutableInfo"_s);
	$assignStatic(JMX::INTERFACE_CLASS_NAME_FIELD, "interfaceClassName"_s);
	$assignStatic(JMX::LEGAL_VALUES_FIELD, "legalValues"_s);
	$assignStatic(JMX::MAX_VALUE_FIELD, "maxValue"_s);
	$assignStatic(JMX::MIN_VALUE_FIELD, "minValue"_s);
	$assignStatic(JMX::MXBEAN_FIELD, "mxbean"_s);
	$assignStatic(JMX::OPEN_TYPE_FIELD, "openType"_s);
	$assignStatic(JMX::ORIGINAL_TYPE_FIELD, "originalType"_s);
	$assignStatic(JMX::proof, $new(JMX));
}

JMX::JMX() {
}

$Class* JMX::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"proof", "Ljavax/management/JMX;", nullptr, $STATIC | $FINAL, $staticField(JMX, proof)},
		{"DEFAULT_VALUE_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, DEFAULT_VALUE_FIELD)},
		{"IMMUTABLE_INFO_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, IMMUTABLE_INFO_FIELD)},
		{"INTERFACE_CLASS_NAME_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, INTERFACE_CLASS_NAME_FIELD)},
		{"LEGAL_VALUES_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, LEGAL_VALUES_FIELD)},
		{"MAX_VALUE_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, MAX_VALUE_FIELD)},
		{"MIN_VALUE_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, MIN_VALUE_FIELD)},
		{"MXBEAN_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, MXBEAN_FIELD)},
		{"OPEN_TYPE_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, OPEN_TYPE_FIELD)},
		{"ORIGINAL_TYPE_FIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JMX, ORIGINAL_TYPE_FIELD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JMX, init$, void)},
		{"createProxy", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class;ZZ)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;ZZ)TT;", $PRIVATE | $STATIC, $staticMethod(JMX, createProxy, $Object*, $MBeanServerConnection*, $ObjectName*, $Class*, bool, bool)},
		{"isMXBeanInterface", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $staticMethod(JMX, isMXBeanInterface, bool, $Class*)},
		{"newMBeanProxy", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(JMX, newMBeanProxy, $Object*, $MBeanServerConnection*, $ObjectName*, $Class*)},
		{"newMBeanProxy", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;Z)TT;", $PUBLIC | $STATIC, $staticMethod(JMX, newMBeanProxy, $Object*, $MBeanServerConnection*, $ObjectName*, $Class*, bool)},
		{"newMXBeanProxy", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(JMX, newMXBeanProxy, $Object*, $MBeanServerConnection*, $ObjectName*, $Class*)},
		{"newMXBeanProxy", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;Z)TT;", $PUBLIC | $STATIC, $staticMethod(JMX, newMXBeanProxy, $Object*, $MBeanServerConnection*, $ObjectName*, $Class*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.JMX",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMX, name, initialize, &classInfo$$, JMX::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JMX);
	});
	return class$;
}

$Class* JMX::class$ = nullptr;

	} // management
} // javax