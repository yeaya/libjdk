#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>
#include <java/beans/beancontext/BeanContextServiceRevokedEvent.h>
#include <jcpp.h>

using $BeanContextServiceRevokedEvent = ::java::beans::beancontext::BeanContextServiceRevokedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextServiceRevokedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"serviceRevoked", "(Ljava/beans/beancontext/BeanContextServiceRevokedEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextServiceRevokedListener, serviceRevoked, void, $BeanContextServiceRevokedEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextServiceRevokedListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextServiceRevokedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServiceRevokedListener);
	});
	return class$;
}

$Class* BeanContextServiceRevokedListener::class$ = nullptr;

		} // beancontext
	} // beans
} // java