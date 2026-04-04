#include <com/sun/jmx/remote/protocol/rmi/ServerProvider.h>
#include <java/net/MalformedURLException.h>
#include <java/util/Map.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/remote/JMXConnectorServer.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <javax/management/remote/rmi/RMIConnectorServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $Map = ::java::util::Map;
using $MBeanServer = ::javax::management::MBeanServer;
using $JMXConnectorServer = ::javax::management::remote::JMXConnectorServer;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;
using $RMIConnectorServer = ::javax::management::remote::rmi::RMIConnectorServer;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace protocol {
					namespace rmi {

void ServerProvider::init$() {
}

$JMXConnectorServer* ServerProvider::newJMXConnectorServer($JMXServiceURL* serviceURL, $Map* environment, $MBeanServer* mbeanServer) {
	$useLocalObjectStack();
	if (!$$nc($nc(serviceURL)->getProtocol())->equals("rmi"_s)) {
		$throwNew($MalformedURLException, $$str({"Protocol not rmi: "_s, $(serviceURL->getProtocol())}));
	}
	return $new($RMIConnectorServer, serviceURL, environment, mbeanServer);
}

ServerProvider::ServerProvider() {
}

$Class* ServerProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ServerProvider, init$, void)},
		{"newJMXConnectorServer", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;Ljavax/management/MBeanServer;)Ljavax/management/remote/JMXConnectorServer;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/management/MBeanServer;)Ljavax/management/remote/JMXConnectorServer;", $PUBLIC, $virtualMethod(ServerProvider, newJMXConnectorServer, $JMXConnectorServer*, $JMXServiceURL*, $Map*, $MBeanServer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.remote.protocol.rmi.ServerProvider",
		"java.lang.Object",
		"javax.management.remote.JMXConnectorServerProvider",
		nullptr,
		methodInfos$$
	};
	$loadClass(ServerProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerProvider);
	});
	return class$;
}

$Class* ServerProvider::class$ = nullptr;

					} // rmi
				} // protocol
			} // remote
		} // jmx
	} // sun
} // com