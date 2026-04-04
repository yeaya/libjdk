#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* MouseMotionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseMotionListener, mouseDragged, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseMotionListener, mouseMoved, void, $MouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.MouseMotionListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MouseMotionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MouseMotionListener);
	});
	return class$;
}

$Class* MouseMotionListener::class$ = nullptr;

		} // event
	} // awt
} // java