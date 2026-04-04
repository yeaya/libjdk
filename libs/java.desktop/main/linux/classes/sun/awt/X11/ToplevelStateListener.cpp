#include <sun/awt/X11/ToplevelStateListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* ToplevelStateListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"stateChangedICCCM", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToplevelStateListener, stateChangedICCCM, void, int32_t, int32_t)},
		{"stateChangedJava", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToplevelStateListener, stateChangedJava, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.ToplevelStateListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ToplevelStateListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToplevelStateListener);
	});
	return class$;
}

$Class* ToplevelStateListener::class$ = nullptr;

		} // X11
	} // awt
} // sun