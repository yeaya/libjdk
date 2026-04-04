#include <com/sun/jmx/remote/protocol/rmi/ClientProvider.h>
#include <java/net/MalformedURLException.h>
#include <java/util/Map.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <javax/management/remote/rmi/RMIConnector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $Map = ::java::util::Map;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;
using $RMIConnector = ::javax::management::remote::rmi::RMIConnector;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace protocol {
					namespace rmi {

void ClientProvider::init$() {
}

$JMXConnector* ClientProvider::newJMXConnector($JMXServiceURL* serviceURL, $Map* environment) {
	$useLocalObjectStack();
	if (!$$nc($nc(serviceURL)->getProtocol())->equals("rmi"_s)) {
		$throwNew($MalformedURLException, $$str({"Protocol not rmi: "_s, $(serviceURL->getProtocol())}));
	}
	return $new($RMIConnector, serviceURL, environment);
}

ClientProvider::ClientProvider() {
}

$Class* ClientProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClientProvider, init$, void)},
		{"newJMXConnector", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC, $virtualMethod(ClientProvider, newJMXConnector, $JMXConnector*, $JMXServiceURL*, $Map*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.remote.protocol.rmi.ClientProvider",
		"java.lang.Object",
		"javax.management.remote.JMXConnectorProvider",
		nullptr,
		methodInfos$$
	};
	$loadClass(ClientProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClientProvider);
	});
	return class$;
}

$Class* ClientProvider::class$ = nullptr;

					} // rmi
				} // protocol
			} // remote
		} // jmx
	} // sun
} // com