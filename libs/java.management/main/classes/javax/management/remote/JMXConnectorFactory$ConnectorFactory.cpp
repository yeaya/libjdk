#include <javax/management/remote/JMXConnectorFactory$ConnectorFactory.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {

$Class* JMXConnectorFactory$ConnectorFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TP;)TC;", $PUBLIC | $ABSTRACT, $virtualMethod(JMXConnectorFactory$ConnectorFactory, apply, $Object*, Object$*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.JMXConnectorFactory$ConnectorFactory", "javax.management.remote.JMXConnectorFactory", "ConnectorFactory", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.management.remote.JMXConnectorFactory$ConnectorFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<P:Ljava/lang/Object;C:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"javax.management.remote.JMXConnectorFactory"
	};
	$loadClass(JMXConnectorFactory$ConnectorFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXConnectorFactory$ConnectorFactory);
	});
	return class$;
}

$Class* JMXConnectorFactory$ConnectorFactory::class$ = nullptr;

		} // remote
	} // management
} // javax