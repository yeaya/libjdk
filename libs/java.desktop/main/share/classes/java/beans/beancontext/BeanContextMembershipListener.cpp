#include <java/beans/beancontext/BeanContextMembershipListener.h>
#include <java/beans/beancontext/BeanContextMembershipEvent.h>
#include <jcpp.h>

using $BeanContextMembershipEvent = ::java::beans::beancontext::BeanContextMembershipEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$Class* BeanContextMembershipListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"childrenAdded", "(Ljava/beans/beancontext/BeanContextMembershipEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextMembershipListener, childrenAdded, void, $BeanContextMembershipEvent*)},
		{"childrenRemoved", "(Ljava/beans/beancontext/BeanContextMembershipEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanContextMembershipListener, childrenRemoved, void, $BeanContextMembershipEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.beancontext.BeanContextMembershipListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(BeanContextMembershipListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextMembershipListener);
	});
	return class$;
}

$Class* BeanContextMembershipListener::class$ = nullptr;

		} // beancontext
	} // beans
} // java