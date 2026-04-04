#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XEventDispatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XEventDispatcher, dispatchEvent, void, $XEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.XEventDispatcher",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XEventDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEventDispatcher);
	});
	return class$;
}

$Class* XEventDispatcher::class$ = nullptr;

		} // X11
	} // awt
} // sun