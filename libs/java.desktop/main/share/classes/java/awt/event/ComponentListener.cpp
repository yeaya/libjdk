#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <jcpp.h>

using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* ComponentListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentListener, componentHidden, void, $ComponentEvent*)},
		{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentListener, componentMoved, void, $ComponentEvent*)},
		{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentListener, componentResized, void, $ComponentEvent*)},
		{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComponentListener, componentShown, void, $ComponentEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.ComponentListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ComponentListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentListener);
	});
	return class$;
}

$Class* ComponentListener::class$ = nullptr;

		} // event
	} // awt
} // java