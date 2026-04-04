#include <java/awt/event/HierarchyBoundsAdapter.h>
#include <java/awt/event/HierarchyEvent.h>
#include <jcpp.h>

using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void HierarchyBoundsAdapter::init$() {
}

void HierarchyBoundsAdapter::ancestorMoved($HierarchyEvent* e) {
}

void HierarchyBoundsAdapter::ancestorResized($HierarchyEvent* e) {
}

HierarchyBoundsAdapter::HierarchyBoundsAdapter() {
}

$Class* HierarchyBoundsAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(HierarchyBoundsAdapter, init$, void)},
		{"ancestorMoved", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC, $virtualMethod(HierarchyBoundsAdapter, ancestorMoved, void, $HierarchyEvent*)},
		{"ancestorResized", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC, $virtualMethod(HierarchyBoundsAdapter, ancestorResized, void, $HierarchyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.event.HierarchyBoundsAdapter",
		"java.lang.Object",
		"java.awt.event.HierarchyBoundsListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(HierarchyBoundsAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HierarchyBoundsAdapter);
	});
	return class$;
}

$Class* HierarchyBoundsAdapter::class$ = nullptr;

		} // event
	} // awt
} // java