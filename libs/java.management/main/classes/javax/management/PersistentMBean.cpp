#include <javax/management/PersistentMBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$Class* PersistentMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"load", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PersistentMBean, load, void), "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException"},
		{"store", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PersistentMBean, store, void), "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.PersistentMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PersistentMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PersistentMBean);
	});
	return class$;
}

$Class* PersistentMBean::class$ = nullptr;

	} // management
} // javax