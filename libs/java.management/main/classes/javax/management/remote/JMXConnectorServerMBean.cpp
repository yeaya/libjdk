#include <javax/management/remote/JMXConnectorServerMBean.h>
#include <java/util/Map.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <javax/management/remote/MBeanServerForwarder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;
using $MBeanServerForwarder = ::javax::management::remote::MBeanServerForwarder;

namespace javax {
	namespace management {
		namespace remote {

$Class* JMXConnectorServerMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAddress", "()Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, getAddress, $JMXServiceURL*)},
		{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, getAttributes, $Map*)},
		{"getConnectionIds", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, getConnectionIds, $StringArray*)},
		{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, isActive, bool)},
		{"setMBeanServerForwarder", "(Ljavax/management/remote/MBeanServerForwarder;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, setMBeanServerForwarder, void, $MBeanServerForwarder*)},
		{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, start, void), "java.io.IOException"},
		{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, stop, void), "java.io.IOException"},
		{"toJMXConnector", "(Ljava/util/Map;)Ljavax/management/remote/JMXConnector;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/JMXConnector;", $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorServerMBean, toJMXConnector, $JMXConnector*, $Map*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.JMXConnectorServerMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JMXConnectorServerMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorServerMBean);
	});
	return class$;
}

$Class* JMXConnectorServerMBean::class$ = nullptr;

		} // remote
	} // management
} // javax