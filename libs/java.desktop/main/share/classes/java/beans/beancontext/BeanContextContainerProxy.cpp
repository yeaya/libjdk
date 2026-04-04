#include <java/beans/beancontext/BeanContextContainerProxy.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextContainerProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextContainerProxy, getContainer, $Container*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextContainerProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextContainerProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextContainerProxy);
	});
	return class$;
}

$Class* BeanContextContainerProxy::class$ = nullptr;

		} // beancontext
	} // beans
} // java