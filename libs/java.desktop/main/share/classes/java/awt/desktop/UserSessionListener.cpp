#include <java/awt/desktop/UserSessionListener.h>
#include <java/awt/desktop/UserSessionEvent.h>
#include <jcpp.h>

using $UserSessionEvent = ::java::awt::desktop::UserSessionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* UserSessionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"userSessionActivated", "(Ljava/awt/desktop/UserSessionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserSessionListener, userSessionActivated, void, $UserSessionEvent*)},
		{"userSessionDeactivated", "(Ljava/awt/desktop/UserSessionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserSessionListener, userSessionDeactivated, void, $UserSessionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.UserSessionListener",
		nullptr,
		"java.awt.desktop.SystemEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(UserSessionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserSessionListener);
	});
	return class$;
}

$Class* UserSessionListener::class$ = nullptr;

		} // desktop
	} // awt
} // java