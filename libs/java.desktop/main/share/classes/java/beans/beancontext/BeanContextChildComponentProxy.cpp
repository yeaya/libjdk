#include <java/beans/beancontext/BeanContextChildComponentProxy.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextChildComponentProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextChildComponentProxy, getComponent, $Component*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextChildComponentProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextChildComponentProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextChildComponentProxy);
	});
	return class$;
}

$Class* BeanContextChildComponentProxy::class$ = nullptr;

		} // beancontext
	} // beans
} // java