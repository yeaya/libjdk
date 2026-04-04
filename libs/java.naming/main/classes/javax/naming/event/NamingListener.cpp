#include <javax/naming/event/NamingListener.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;

namespace javax {
	namespace naming {
		namespace event {

$Class* NamingListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"namingExceptionThrown", "(Ljavax/naming/event/NamingExceptionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamingListener, namingExceptionThrown, void, $NamingExceptionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.event.NamingListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(NamingListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamingListener);
	});
	return class$;
}

$Class* NamingListener::class$ = nullptr;

		} // event
	} // naming
} // javax