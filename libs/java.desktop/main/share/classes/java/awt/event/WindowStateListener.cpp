#include <java/awt/event/WindowStateListener.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* WindowStateListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowStateListener, windowStateChanged, void, $WindowEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.WindowStateListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowStateListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowStateListener);
	});
	return class$;
}

$Class* WindowStateListener::class$ = nullptr;

		} // event
	} // awt
} // java