#include <javax/swing/event/MenuEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

void MenuEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

MenuEvent::MenuEvent() {
}

$Class* MenuEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(MenuEvent, init$, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.MenuEvent",
		"java.util.EventObject",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuEvent);
	});
	return class$;
}

$Class* MenuEvent::class$ = nullptr;

		} // event
	} // swing
} // javax