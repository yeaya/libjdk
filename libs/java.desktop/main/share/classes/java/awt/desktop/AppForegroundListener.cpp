#include <java/awt/desktop/AppForegroundListener.h>
#include <java/awt/desktop/AppForegroundEvent.h>
#include <jcpp.h>

using $AppForegroundEvent = ::java::awt::desktop::AppForegroundEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* AppForegroundListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appMovedToBackground", "(Ljava/awt/desktop/AppForegroundEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppForegroundListener, appMovedToBackground, void, $AppForegroundEvent*)},
		{"appRaisedToForeground", "(Ljava/awt/desktop/AppForegroundEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppForegroundListener, appRaisedToForeground, void, $AppForegroundEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.AppForegroundListener",
		nullptr,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(AppForegroundListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppForegroundListener);
	});
	return class$;
}

$Class* AppForegroundListener::class$ = nullptr;

		} // desktop
	} // awt
} // java