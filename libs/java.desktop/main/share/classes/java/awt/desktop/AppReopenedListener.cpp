#include <java/awt/desktop/AppReopenedListener.h>
#include <java/awt/desktop/AppReopenedEvent.h>
#include <jcpp.h>

using $AppReopenedEvent = ::java::awt::desktop::AppReopenedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* AppReopenedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appReopened", "(Ljava/awt/desktop/AppReopenedEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppReopenedListener, appReopened, void, $AppReopenedEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.AppReopenedListener",
		nullptr,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(AppReopenedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppReopenedListener);
	});
	return class$;
}

$Class* AppReopenedListener::class$ = nullptr;

		} // desktop
	} // awt
} // java