#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServices.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $BeanContextServices = ::java::beans::beancontext::BeanContextServices;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextServiceProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCurrentServiceSelectors", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class;)Ljava/util/Iterator;", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Class<*>;)Ljava/util/Iterator<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextServiceProvider, getCurrentServiceSelectors, $Iterator*, $BeanContextServices*, $Class*)},
		{"getService", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextServiceProvider, getService, $Object*, $BeanContextServices*, Object$*, $Class*, Object$*)},
		{"releaseService", "(Ljava/beans/beancontext/BeanContextServices;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextServiceProvider, releaseService, void, $BeanContextServices*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextServiceProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextServiceProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServiceProvider);
	});
	return class$;
}

$Class* BeanContextServiceProvider::class$ = nullptr;

		} // beancontext
	} // beans
} // java