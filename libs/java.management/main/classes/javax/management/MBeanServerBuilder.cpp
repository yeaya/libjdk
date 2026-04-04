#include <javax/management/MBeanServerBuilder.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <jcpp.h>

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;

namespace javax {
	namespace management {

void MBeanServerBuilder::init$() {
}

$MBeanServerDelegate* MBeanServerBuilder::newMBeanServerDelegate() {
	return $JmxMBeanServer::newMBeanServerDelegate();
}

$MBeanServer* MBeanServerBuilder::newMBeanServer($String* defaultDomain, $MBeanServer* outer, $MBeanServerDelegate* delegate) {
	return $JmxMBeanServer::newMBeanServer(defaultDomain, outer, delegate, false);
}

MBeanServerBuilder::MBeanServerBuilder() {
}

$Class* MBeanServerBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MBeanServerBuilder, init$, void)},
		{"newMBeanServer", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC, $virtualMethod(MBeanServerBuilder, newMBeanServer, $MBeanServer*, $String*, $MBeanServer*, $MBeanServerDelegate*)},
		{"newMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC, $virtualMethod(MBeanServerBuilder, newMBeanServerDelegate, $MBeanServerDelegate*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanServerBuilder",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MBeanServerBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerBuilder);
	});
	return class$;
}

$Class* MBeanServerBuilder::class$ = nullptr;

	} // management
} // javax