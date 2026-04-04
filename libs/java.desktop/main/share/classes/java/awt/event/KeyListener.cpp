#include <java/awt/event/KeyListener.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* KeyListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyListener, keyPressed, void, $KeyEvent*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyListener, keyReleased, void, $KeyEvent*)},
		{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyListener, keyTyped, void, $KeyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.KeyListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyListener);
	});
	return class$;
}

$Class* KeyListener::class$ = nullptr;

		} // event
	} // awt
} // java