#include <com/sun/jmx/mbeanserver/JmxMBeanServerBuilder.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerBuilder.h>
#include <javax/management/MBeanServerDelegate.h>
#include <jcpp.h>

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerBuilder = ::javax::management::MBeanServerBuilder;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void JmxMBeanServerBuilder::init$() {
	$MBeanServerBuilder::init$();
}

$MBeanServerDelegate* JmxMBeanServerBuilder::newMBeanServerDelegate() {
	return $JmxMBeanServer::newMBeanServerDelegate();
}

$MBeanServer* JmxMBeanServerBuilder::newMBeanServer($String* defaultDomain, $MBeanServer* outer, $MBeanServerDelegate* delegate) {
	return $JmxMBeanServer::newMBeanServer(defaultDomain, outer, delegate, true);
}

JmxMBeanServerBuilder::JmxMBeanServerBuilder() {
}

$Class* JmxMBeanServerBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JmxMBeanServerBuilder, init$, void)},
		{"newMBeanServer", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC, $virtualMethod(JmxMBeanServerBuilder, newMBeanServer, $MBeanServer*, $String*, $MBeanServer*, $MBeanServerDelegate*)},
		{"newMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC, $virtualMethod(JmxMBeanServerBuilder, newMBeanServerDelegate, $MBeanServerDelegate*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.JmxMBeanServerBuilder",
		"javax.management.MBeanServerBuilder",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JmxMBeanServerBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JmxMBeanServerBuilder);
	});
	return class$;
}

$Class* JmxMBeanServerBuilder::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com