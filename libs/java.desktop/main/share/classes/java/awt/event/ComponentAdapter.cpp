#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <jcpp.h>

using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void ComponentAdapter::init$() {
}

void ComponentAdapter::componentResized($ComponentEvent* e) {
}

void ComponentAdapter::componentMoved($ComponentEvent* e) {
}

void ComponentAdapter::componentShown($ComponentEvent* e) {
}

void ComponentAdapter::componentHidden($ComponentEvent* e) {
}

ComponentAdapter::ComponentAdapter() {
}

$Class* ComponentAdapter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ComponentAdapter, init$, void)},
		{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(ComponentAdapter, componentHidden, void, $ComponentEvent*)},
		{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(ComponentAdapter, componentMoved, void, $ComponentEvent*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(ComponentAdapter, componentResized, void, $ComponentEvent*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(ComponentAdapter, componentShown, void, $ComponentEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.event.ComponentAdapter",
		"java.lang.Object",
		"java.awt.event.ComponentListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ComponentAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentAdapter);
	});
	return class$;
}

$Class* ComponentAdapter::class$ = nullptr;

		} // event
	} // awt
} // java