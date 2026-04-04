#include <com/apple/eawt/event/RotationEvent.h>
#include <com/apple/eawt/event/GestureEvent.h>
#include <jcpp.h>

using $GestureEvent = ::com::apple::eawt::event::GestureEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

void RotationEvent::init$(double rotation) {
	$GestureEvent::init$();
	this->rotation = rotation;
}

double RotationEvent::getRotation() {
	return this->rotation;
}

RotationEvent::RotationEvent() {
}

$Class* RotationEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rotation", "D", nullptr, $FINAL, $field(RotationEvent, rotation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(D)V", nullptr, 0, $method(RotationEvent, init$, void, double)},
		{"getRotation", "()D", nullptr, $PUBLIC, $virtualMethod(RotationEvent, getRotation, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.event.RotationEvent",
		"com.apple.eawt.event.GestureEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RotationEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RotationEvent);
	});
	return class$;
}

$Class* RotationEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com