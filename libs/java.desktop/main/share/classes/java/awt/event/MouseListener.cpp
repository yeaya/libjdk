#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* MouseListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseListener, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseListener, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseListener, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseListener, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MouseListener, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.MouseListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MouseListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MouseListener);
	});
	return class$;
}

$Class* MouseListener::class$ = nullptr;

		} // event
	} // awt
} // java