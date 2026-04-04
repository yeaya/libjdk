#include <sun/awt/X11/XToolkit$XEventListener.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XToolkit$XEventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"eventProcessed", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XToolkit$XEventListener, eventProcessed, void, $XEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XToolkit$XEventListener", "sun.awt.X11.XToolkit", "XEventListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.XToolkit$XEventListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XToolkit"
	};
	$loadClass(XToolkit$XEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XToolkit$XEventListener);
	});
	return class$;
}

$Class* XToolkit$XEventListener::class$ = nullptr;

		} // X11
	} // awt
} // sun