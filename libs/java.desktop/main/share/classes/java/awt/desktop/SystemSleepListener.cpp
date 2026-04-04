#include <java/awt/desktop/SystemSleepListener.h>
#include <java/awt/desktop/SystemSleepEvent.h>
#include <jcpp.h>

using $SystemSleepEvent = ::java::awt::desktop::SystemSleepEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* SystemSleepListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"systemAboutToSleep", "(Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SystemSleepListener, systemAboutToSleep, void, $SystemSleepEvent*)},
		{"systemAwoke", "(Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SystemSleepListener, systemAwoke, void, $SystemSleepEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.SystemSleepListener",
		nullptr,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(SystemSleepListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemSleepListener);
	});
	return class$;
}

$Class* SystemSleepListener::class$ = nullptr;

		} // desktop
	} // awt
} // java