#include <java/awt/desktop/SystemSleepEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

void SystemSleepEvent::init$() {
	$AppEvent::init$();
}

SystemSleepEvent::SystemSleepEvent() {
}

$Class* SystemSleepEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemSleepEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SystemSleepEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.SystemSleepEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SystemSleepEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemSleepEvent);
	});
	return class$;
}

$Class* SystemSleepEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java