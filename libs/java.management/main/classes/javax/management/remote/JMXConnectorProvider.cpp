#include <javax/management/remote/JMXConnectorProvider.h>
#include <java/util/Map.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

$Class* JMXConnectorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"newJMXConnector", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorProvider, newJMXConnector, $JMXConnector*, $JMXServiceURL*, $Map*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.JMXConnectorProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JMXConnectorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorProvider);
	});
	return class$;
}

$Class* JMXConnectorProvider::class$ = nullptr;

		} // remote
	} // management
} // javax