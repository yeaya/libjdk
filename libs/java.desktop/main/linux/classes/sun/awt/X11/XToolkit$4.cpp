#include <sun/awt/X11/XToolkit$4.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XToolkit$4::init$($XToolkit* this$0) {
	$set(this, this$0, this$0);
}

void XToolkit$4::dispatchEvent($XEvent* e) {
	if ($nc(e)->get_type() == $XConstants::ConfigureNotify) {
		$init($XToolkit);
		$XToolkit::oops_updated = true;
		$SunToolkit::awtLockNotifyAll();
	}
}

XToolkit$4::XToolkit$4() {
}

$Class* XToolkit$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(XToolkit$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, 0, $method(XToolkit$4, init$, void, $XToolkit*)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XToolkit$4, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XToolkit",
		"syncNativeQueue",
		"(J)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XToolkit$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XToolkit$4",
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
	$loadClass(XToolkit$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XToolkit$4);
	});
	return class$;
}

$Class* XToolkit$4::class$ = nullptr;

		} // X11
	} // awt
} // sun