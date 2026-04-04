#include <sun/awt/X11/XToolkit$3.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XToolkit$3::init$() {
}

void XToolkit$3::dispatchEvent($XEvent* ev) {
	$useLocalObjectStack();
	$var($XPropertyEvent, xpe, nullptr);
	switch ($nc(ev)->get_type()) {
	case $XConstants::PropertyNotify:
		{
			$assign(xpe, ev->get_xproperty());
			$SunToolkit::awtLock();
			$var($Throwable, var$0, nullptr);
			try {
				$init($XToolkit);
				$XToolkit::timeStamp = $nc(xpe)->get_time();
				$XToolkit::timeStampUpdated = true;
				$SunToolkit::awtLockNotifyAll();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$SunToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			break;
		}
	}
}

XToolkit$3::XToolkit$3() {
}

$Class* XToolkit$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XToolkit$3, init$, void)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XToolkit$3, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XToolkit",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XToolkit$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XToolkit$3",
		"java.lang.Object",
		"sun.awt.X11.XEventDispatcher",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XToolkit"
	};
	$loadClass(XToolkit$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XToolkit$3);
	});
	return class$;
}

$Class* XToolkit$3::class$ = nullptr;

		} // X11
	} // awt
} // sun