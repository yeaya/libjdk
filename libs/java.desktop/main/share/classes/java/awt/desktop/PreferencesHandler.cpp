#include <java/awt/desktop/PreferencesHandler.h>
#include <java/awt/desktop/PreferencesEvent.h>
#include <jcpp.h>

using $PreferencesEvent = ::java::awt::desktop::PreferencesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* PreferencesHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handlePreferences", "(Ljava/awt/desktop/PreferencesEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreferencesHandler, handlePreferences, void, $PreferencesEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.PreferencesHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PreferencesHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreferencesHandler);
	});
	return class$;
}

$Class* PreferencesHandler::class$ = nullptr;

		} // desktop
	} // awt
} // java