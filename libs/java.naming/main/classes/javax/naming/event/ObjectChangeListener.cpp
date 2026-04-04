#include <javax/naming/event/ObjectChangeListener.h>
#include <javax/naming/event/NamingEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEvent = ::javax::naming::event::NamingEvent;

namespace javax {
	namespace naming {
		namespace event {

$Class* ObjectChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"objectChanged", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectChangeListener, objectChanged, void, $NamingEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.event.ObjectChangeListener",
		nullptr,
		"javax.naming.event.NamingListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ObjectChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectChangeListener);
	});
	return class$;
}

$Class* ObjectChangeListener::class$ = nullptr;

		} // event
	} // naming
} // javax