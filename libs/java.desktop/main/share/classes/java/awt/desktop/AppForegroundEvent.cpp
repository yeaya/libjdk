#include <java/awt/desktop/AppForegroundEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

void AppForegroundEvent::init$() {
	$AppEvent::init$();
}

AppForegroundEvent::AppForegroundEvent() {
}

$Class* AppForegroundEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppForegroundEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AppForegroundEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.AppForegroundEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AppForegroundEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppForegroundEvent);
	});
	return class$;
}

$Class* AppForegroundEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java