#include <java/awt/desktop/PreferencesEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

void PreferencesEvent::init$() {
	$AppEvent::init$();
}

PreferencesEvent::PreferencesEvent() {
}

$Class* PreferencesEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PreferencesEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PreferencesEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.PreferencesEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PreferencesEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreferencesEvent);
	});
	return class$;
}

$Class* PreferencesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java