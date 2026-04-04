#include <java/beans/beancontext/BeanContextProxy.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <jcpp.h>

using $BeanContextChild = ::java::beans::beancontext::BeanContextChild;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBeanContextProxy", "()Ljava/beans/beancontext/BeanContextChild;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextProxy, getBeanContextProxy, $BeanContextChild*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextProxy);
	});
	return class$;
}

$Class* BeanContextProxy::class$ = nullptr;

		} // beancontext
	} // beans
} // java