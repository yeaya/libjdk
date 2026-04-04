#include <java/awt/desktop/AppHiddenEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

void AppHiddenEvent::init$() {
	$AppEvent::init$();
}

AppHiddenEvent::AppHiddenEvent() {
}

$Class* AppHiddenEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppHiddenEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AppHiddenEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.AppHiddenEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AppHiddenEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppHiddenEvent);
	});
	return class$;
}

$Class* AppHiddenEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java