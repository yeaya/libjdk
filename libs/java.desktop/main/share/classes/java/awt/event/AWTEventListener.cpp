#include <java/awt/event/AWTEventListener.h>
#include <java/awt/AWTEvent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* AWTEventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTEventListener, eventDispatched, void, $AWTEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.AWTEventListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(AWTEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTEventListener);
	});
	return class$;
}

$Class* AWTEventListener::class$ = nullptr;

		} // event
	} // awt
} // java