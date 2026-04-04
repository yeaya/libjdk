#include <java/awt/desktop/AppEvent.h>
#include <java/awt/Desktop.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Desktop = ::java::awt::Desktop;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace desktop {

void AppEvent::init$() {
	$EventObject::init$($($Desktop::getDesktop()));
}

AppEvent::AppEvent() {
}

$Class* AppEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AppEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AppEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.desktop.AppEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AppEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppEvent);
	});
	return class$;
}

$Class* AppEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java