#include <javax/management/remote/JMXConnectorServerProvider.h>
#include <java/util/Map.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/remote/JMXConnectorServer.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MBeanServer = ::javax::management::MBeanServer;
using $JMXConnectorServer = ::javax::management::remote::JMXConnectorServer;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

$Class* JMXConnectorServerProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"newJMXConnectorServer", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/MBeanServer;)Ljavax/management/remote/JMXConnectorServer;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/management/MBeanServer;)Ljavax/management/remote/JMXConnectorServer;", $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerProvider, newJMXConnectorServer, $JMXConnectorServer*, $JMXServiceURL*, $Map*, $MBeanServer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.JMXConnectorServerProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JMXConnectorServerProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorServerProvider);
	});
	return class$;
}

$Class* JMXConnectorServerProvider::class$ = nullptr;

		} // remote
	} // management
} // javax