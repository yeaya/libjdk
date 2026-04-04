#include <java/beans/beancontext/BeanContextServicesListener.h>
#include <java/beans/beancontext/BeanContextServiceAvailableEvent.h>
#include <jcpp.h>

using $BeanContextServiceAvailableEvent = ::java::beans::beancontext::BeanContextServiceAvailableEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextServicesListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"serviceAvailable", "(Ljava/beans/beancontext/BeanContextServiceAvailableEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextServicesListener, serviceAvailable, void, $BeanContextServiceAvailableEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextServicesListener",
		nullptr,
		"java.beans.beancontext.BeanContextServiceRevokedListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextServicesListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServicesListener);
	});
	return class$;
}

$Class* BeanContextServicesListener::class$ = nullptr;

		} // beancontext
	} // beans
} // java