#include <javax/swing/event/PopupMenuEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

void PopupMenuEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

PopupMenuEvent::PopupMenuEvent() {
}

$Class* PopupMenuEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PopupMenuEvent, init$, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.PopupMenuEvent",
		"java.util.EventObject",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PopupMenuEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PopupMenuEvent);
	});
	return class$;
}

$Class* PopupMenuEvent::class$ = nullptr;

		} // event
	} // swing
} // javax