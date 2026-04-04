#include <java/awt/desktop/SystemEventListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* SystemEventListener::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		"java.util.EventListener"
	};
	$loadClass(SystemEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemEventListener);
	});
	return class$;
}

$Class* SystemEventListener::class$ = nullptr;

		} // desktop
	} // awt
} // java