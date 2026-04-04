#include <com/apple/eawt/event/FullScreenEvent.h>
#include <com/apple/eawt/Application.h>
#include <java/awt/Window.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Application = ::com::apple::eawt::Application;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

void FullScreenEvent::init$($Window* window) {
	$EventObject::init$($($Application::getApplication()));
	$set(this, window, window);
}

$Window* FullScreenEvent::getWindow() {
	return this->window;
}

FullScreenEvent::FullScreenEvent() {
}

$Class* FullScreenEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"window", "Ljava/awt/Window;", nullptr, $FINAL, $field(FullScreenEvent, window)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(FullScreenEvent, init$, void, $Window*)},
		{"getWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC, $virtualMethod(FullScreenEvent, getWindow, $Window*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.event.FullScreenEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FullScreenEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FullScreenEvent);
	});
	return class$;
}

$Class* FullScreenEvent::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com