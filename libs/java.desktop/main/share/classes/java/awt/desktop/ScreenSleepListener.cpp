#include <java/awt/desktop/ScreenSleepListener.h>
#include <java/awt/desktop/ScreenSleepEvent.h>
#include <jcpp.h>

using $ScreenSleepEvent = ::java::awt::desktop::ScreenSleepEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* ScreenSleepListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"screenAboutToSleep", "(Ljava/awt/desktop/ScreenSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenSleepListener, screenAboutToSleep, void, $ScreenSleepEvent*)},
		{"screenAwoke", "(Ljava/awt/desktop/ScreenSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenSleepListener, screenAwoke, void, $ScreenSleepEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.ScreenSleepListener",
		nullptr,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ScreenSleepListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScreenSleepListener);
	});
	return class$;
}

$Class* ScreenSleepListener::class$ = nullptr;

		} // desktop
	} // awt
} // java