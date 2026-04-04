#include <com/apple/eawt/event/MagnificationEvent.h>
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

void MagnificationEvent::init$(double magnification) {
	$GestureEvent::init$();
	this->magnification = magnification;
}

double MagnificationEvent::getMagnification() {
	return this->magnification;
}

MagnificationEvent::MagnificationEvent() {
}

$Class* MagnificationEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"magnification", "D", nullptr, $FINAL, $field(MagnificationEvent, magnification)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(D)V", nullptr, 0, $method(MagnificationEvent, init$, void, double)},
		{"getMagnification", "()D", nullptr, $PUBLIC, $virtualMethod(MagnificationEvent, getMagnification, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.event.MagnificationEvent",
		"com.apple.eawt.event.GestureEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MagnificationEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MagnificationEvent);
	});
	return class$;
}

$Class* MagnificationEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com