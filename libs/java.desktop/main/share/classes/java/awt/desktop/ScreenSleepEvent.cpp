#include <java/awt/desktop/ScreenSleepEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

void ScreenSleepEvent::init$() {
	$AppEvent::init$();
}

ScreenSleepEvent::ScreenSleepEvent() {
}

$Class* ScreenSleepEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScreenSleepEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ScreenSleepEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.ScreenSleepEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScreenSleepEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScreenSleepEvent);
	});
	return class$;
}

$Class* ScreenSleepEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java