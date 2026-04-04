#include <com/sun/jmx/mbeanserver/SunJmxMBeanServer.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <jcpp.h>

using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$Class* SunJmxMBeanServer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMBeanInstantiator", "()Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunJmxMBeanServer, getMBeanInstantiator, $MBeanInstantiator*)},
		{"getMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunJmxMBeanServer, getMBeanServerDelegate, $MBeanServerDelegate*)},
		{"getMBeanServerInterceptor", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunJmxMBeanServer, getMBeanServerInterceptor, $MBeanServer*)},
		{"interceptorsEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunJmxMBeanServer, interceptorsEnabled, bool)},
		{"setMBeanServerInterceptor", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunJmxMBeanServer, setMBeanServerInterceptor, void, $MBeanServer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.mbeanserver.SunJmxMBeanServer",
		nullptr,
		"javax.management.MBeanServer",
		nullptr,
		methodInfos$$
	};
	$loadClass(SunJmxMBeanServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunJmxMBeanServer);
	});
	return class$;
}

$Class* SunJmxMBeanServer::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com