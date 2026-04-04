#include <javax/swing/event/ChangeEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

void ChangeEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

ChangeEvent::ChangeEvent() {
}

$Class* ChangeEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ChangeEvent, init$, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.ChangeEvent",
		"java.util.EventObject",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ChangeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChangeEvent);
	});
	return class$;
}

$Class* ChangeEvent::class$ = nullptr;

		} // event
	} // swing
} // javax