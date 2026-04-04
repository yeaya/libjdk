#include <java/awt/event/FocusListener.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* FocusListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusListener, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusListener, focusLost, void, $FocusEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.FocusListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(FocusListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusListener);
	});
	return class$;
}

$Class* FocusListener::class$ = nullptr;

		} // event
	} // awt
} // java