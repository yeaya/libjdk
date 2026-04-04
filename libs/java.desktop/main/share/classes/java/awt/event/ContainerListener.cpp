#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <jcpp.h>

using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* ContainerListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerListener, componentAdded, void, $ContainerEvent*)},
		{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerListener, componentRemoved, void, $ContainerEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.ContainerListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ContainerListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContainerListener);
	});
	return class$;
}

$Class* ContainerListener::class$ = nullptr;

		} // event
	} // awt
} // java