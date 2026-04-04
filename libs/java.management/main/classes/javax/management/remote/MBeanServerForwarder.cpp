#include <javax/management/remote/MBeanServerForwarder.h>
#include <javax/management/MBeanServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;

namespace javax {
	namespace management {
		namespace remote {

$Class* MBeanServerForwarder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerForwarder, getMBeanServer, $MBeanServer*)},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerForwarder, setMBeanServer, void, $MBeanServer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.MBeanServerForwarder",
		nullptr,
		"javax.management.MBeanServer",
		nullptr,
		methodInfos$$
	};
	$loadClass(MBeanServerForwarder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerForwarder);
	});
	return class$;
}

$Class* MBeanServerForwarder::class$ = nullptr;

		} // remote
	} // management
} // javax