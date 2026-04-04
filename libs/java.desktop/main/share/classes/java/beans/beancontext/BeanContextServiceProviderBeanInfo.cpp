#include <java/beans/beancontext/BeanContextServiceProviderBeanInfo.h>
#include <java/beans/BeanInfo.h>
#include <jcpp.h>

using $BeanInfoArray = $Array<::java::beans::BeanInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextServiceProviderBeanInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getServicesBeanInfo", "()[Ljava/beans/BeanInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextServiceProviderBeanInfo, getServicesBeanInfo, $BeanInfoArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextServiceProviderBeanInfo",
		nullptr,
		"java.beans.BeanInfo",
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextServiceProviderBeanInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServiceProviderBeanInfo);
	});
	return class$;
}

$Class* BeanContextServiceProviderBeanInfo::class$ = nullptr;

		} // beancontext
	} // beans
} // java