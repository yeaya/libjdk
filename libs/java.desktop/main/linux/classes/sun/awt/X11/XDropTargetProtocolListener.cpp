#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XDropTargetProtocolListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleDropTargetNotification", "(Lsun/awt/X11/XWindow;IIII[JJI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDropTargetProtocolListener, handleDropTargetNotification, void, $XWindow*, int32_t, int32_t, int32_t, int32_t, $longs*, int64_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.awt.X11.XDropTargetProtocolListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XDropTargetProtocolListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XDropTargetProtocolListener);
	});
	return class$;
}

$Class* XDropTargetProtocolListener::class$ = nullptr;

		} // X11
	} // awt
} // sun