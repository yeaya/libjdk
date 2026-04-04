#include <java/awt/event/MouseWheelListener.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <jcpp.h>

using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* MouseWheelListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseWheelListener, mouseWheelMoved, void, $MouseWheelEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.MouseWheelListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MouseWheelListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MouseWheelListener);
	});
	return class$;
}

$Class* MouseWheelListener::class$ = nullptr;

		} // event
	} // awt
} // java