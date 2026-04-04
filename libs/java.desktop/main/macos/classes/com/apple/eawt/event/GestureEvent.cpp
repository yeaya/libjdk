#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

void GestureEvent::init$() {
}

void GestureEvent::consume() {
	this->consumed = true;
}

bool GestureEvent::isConsumed() {
	return this->consumed;
}

GestureEvent::GestureEvent() {
}

$Class* GestureEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"consumed", "Z", nullptr, 0, $field(GestureEvent, consumed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GestureEvent, init$, void)},
		{"consume", "()V", nullptr, $PUBLIC, $virtualMethod(GestureEvent, consume, void)},
		{"isConsumed", "()Z", nullptr, $PROTECTED, $virtualMethod(GestureEvent, isConsumed, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.apple.eawt.event.GestureEvent",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GestureEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GestureEvent);
	});
	return class$;
}

$Class* GestureEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com