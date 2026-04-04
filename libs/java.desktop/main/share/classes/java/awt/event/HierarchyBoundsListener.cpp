#include <java/awt/event/HierarchyBoundsListener.h>
#include <java/awt/event/HierarchyEvent.h>
#include <jcpp.h>

using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* HierarchyBoundsListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"ancestorMoved", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HierarchyBoundsListener, ancestorMoved, void, $HierarchyEvent*)},
		{"ancestorResized", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HierarchyBoundsListener, ancestorResized, void, $HierarchyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.HierarchyBoundsListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(HierarchyBoundsListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HierarchyBoundsListener);
	});
	return class$;
}

$Class* HierarchyBoundsListener::class$ = nullptr;

		} // event
	} // awt
} // java