#include <java/awt/event/WindowFocusListener.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* WindowFocusListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowFocusListener, windowGainedFocus, void, $WindowEvent*)},
		{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WindowFocusListener, windowLostFocus, void, $WindowEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.WindowFocusListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowFocusListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowFocusListener);
	});
	return class$;
}

$Class* WindowFocusListener::class$ = nullptr;

		} // event
	} // awt
} // java