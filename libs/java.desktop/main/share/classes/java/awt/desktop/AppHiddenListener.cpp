#include <java/awt/desktop/AppHiddenListener.h>
#include <java/awt/desktop/AppHiddenEvent.h>
#include <jcpp.h>

using $AppHiddenEvent = ::java::awt::desktop::AppHiddenEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* AppHiddenListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appHidden", "(Ljava/awt/desktop/AppHiddenEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppHiddenListener, appHidden, void, $AppHiddenEvent*)},
		{"appUnhidden", "(Ljava/awt/desktop/AppHiddenEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppHiddenListener, appUnhidden, void, $AppHiddenEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.AppHiddenListener",
		nullptr,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(AppHiddenListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppHiddenListener);
	});
	return class$;
}

$Class* AppHiddenListener::class$ = nullptr;

		} // desktop
	} // awt
} // java