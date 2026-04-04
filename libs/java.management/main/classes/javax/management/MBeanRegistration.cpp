#include <javax/management/MBeanRegistration.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$Class* MBeanRegistration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"postDeregister", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanRegistration, postDeregister, void)},
		{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanRegistration, postRegister, void, $Boolean*)},
		{"preDeregister", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanRegistration, preDeregister, void), "java.lang.Exception"},
		{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanRegistration, preRegister, $ObjectName*, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.MBeanRegistration",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MBeanRegistration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanRegistration);
	});
	return class$;
}

$Class* MBeanRegistration::class$ = nullptr;

	} // management
} // javax