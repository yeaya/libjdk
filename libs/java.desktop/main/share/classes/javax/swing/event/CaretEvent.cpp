#include <javax/swing/event/CaretEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace javax {
	namespace swing {
		namespace event {

void CaretEvent::init$(Object$* source) {
	$EventObject::init$(source);
}

CaretEvent::CaretEvent() {
}

$Class* CaretEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CaretEvent, init$, void, Object$*)},
		{"getDot", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CaretEvent, getDot, int32_t)},
		{"getMark", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CaretEvent, getMark, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.event.CaretEvent",
		"java.util.EventObject",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CaretEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CaretEvent);
	});
	return class$;
}

$Class* CaretEvent::class$ = nullptr;

		} // event
	} // swing
} // javax