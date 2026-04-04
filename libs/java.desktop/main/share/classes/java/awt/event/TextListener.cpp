#include <java/awt/event/TextListener.h>
#include <java/awt/event/TextEvent.h>
#include <jcpp.h>

using $TextEvent = ::java::awt::event::TextEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$Class* TextListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"textValueChanged", "(Ljava/awt/event/TextEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextListener, textValueChanged, void, $TextEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.event.TextListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TextListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextListener);
	});
	return class$;
}

$Class* TextListener::class$ = nullptr;

		} // event
	} // awt
} // java