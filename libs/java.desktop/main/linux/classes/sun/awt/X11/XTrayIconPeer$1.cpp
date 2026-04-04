#include <sun/awt/X11/XTrayIconPeer$1.h>
#include <sun/awt/X11/XEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$1::init$() {
}

void XTrayIconPeer$1::dispatchEvent($XEvent* ev) {
}

XTrayIconPeer$1::XTrayIconPeer$1() {
}

$Class* XTrayIconPeer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XTrayIconPeer$1, init$, void)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$1, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTrayIconPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$1",
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
		"sun.awt.X11.XTrayIconPeer"
	};
	$loadClass(XTrayIconPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$1);
	});
	return class$;
}

$Class* XTrayIconPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun