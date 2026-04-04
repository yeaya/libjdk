#include <sun/awt/X11/XToolkit$1.h>
#include <java/awt/GraphicsEnvironment.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;

namespace sun {
	namespace awt {
		namespace X11 {

void XToolkit$1::init$($XToolkit* this$0) {
	$set(this, this$0, this$0);
}

void XToolkit$1::dispatchEvent($XEvent* ev) {
	$useLocalObjectStack();
	if ($nc(ev)->get_type() == $XConstants::ConfigureNotify) {
		$SunToolkit::awtUnlock();
		$var($Throwable, var$0, nullptr);
		try {
			$$sure($X11GraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment())->rebuildDevices();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XToolkit$1::XToolkit$1() {
}

$Class* XToolkit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(XToolkit$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, 0, $method(XToolkit$1, init$, void, $XToolkit*)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XToolkit$1, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XToolkit",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XToolkit$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XToolkit$1",
		"java.lang.Object",
		"sun.awt.X11.XEventDispatcher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XToolkit"
	};
	$loadClass(XToolkit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XToolkit$1);
	});
	return class$;
}

$Class* XToolkit$1::class$ = nullptr;

		} // X11
	} // awt
} // sun