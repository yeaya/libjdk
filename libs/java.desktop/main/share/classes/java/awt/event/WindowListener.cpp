#include <java/awt/event/WindowListener.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* WindowListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowActivated, void, $WindowEvent*)},
		{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowClosed, void, $WindowEvent*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowClosing, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowDeactivated, void, $WindowEvent*)},
		{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowDeiconified, void, $WindowEvent*)},
		{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowIconified, void, $WindowEvent*)},
		{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowListener, windowOpened, void, $WindowEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.WindowListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowListener);
	});
	return class$;
}

$Class* WindowListener::class$ = nullptr;

		} // event
	} // awt
} // java