#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$Class* DynamicMBean2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DynamicMBean2, getClassName, $String*)},
		{"getResource", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DynamicMBean2, getResource, $Object*)},
		{"preRegister2", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DynamicMBean2, preRegister2, void, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{"registerFailed", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DynamicMBean2, registerFailed, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.mbeanserver.DynamicMBean2",
		nullptr,
		"javax.management.DynamicMBean",
		nullptr,
		methodInfos$$
	};
	$loadClass(DynamicMBean2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DynamicMBean2);
	});
	return class$;
}

$Class* DynamicMBean2::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com