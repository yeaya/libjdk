#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/InputMethodEvent.h>
#include <jcpp.h>

using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* InputMethodListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodListener, caretPositionChanged, void, $InputMethodEvent*)},
		{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputMethodListener, inputMethodTextChanged, void, $InputMethodEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.InputMethodListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(InputMethodListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputMethodListener);
	});
	return class$;
}

$Class* InputMethodListener::class$ = nullptr;

		} // event
	} // awt
} // java