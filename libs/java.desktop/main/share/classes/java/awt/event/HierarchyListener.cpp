#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/HierarchyEvent.h>
#include <jcpp.h>

using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* HierarchyListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HierarchyListener, hierarchyChanged, void, $HierarchyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.HierarchyListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(HierarchyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HierarchyListener);
	});
	return class$;
}

$Class* HierarchyListener::class$ = nullptr;

		} // event
	} // awt
} // java