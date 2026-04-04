#include <sun/awt/X11/XWindowPeer$3.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XWindowPeer$3::init$($XWindowPeer* this$0) {
	$set(this, this$0, this$0);
}

void XWindowPeer$3::dispatchEvent($XEvent* ev) {
	if ($nc(ev)->get_type() == $XConstants::PropertyNotify) {
		this->this$0->handleRootPropertyNotify(ev);
	}
}

XWindowPeer$3::XWindowPeer$3() {
}

$Class* XWindowPeer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XWindowPeer$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, 0, $method(XWindowPeer$3, init$, void, $XWindowPeer*)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XWindowPeer$3, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWindowPeer",
		"addRootPropertyEventDispatcher",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWindowPeer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWindowPeer$3",
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
		"sun.awt.X11.XWindowPeer"
	};
	$loadClass(XWindowPeer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWindowPeer$3);
	});
	return class$;
}

$Class* XWindowPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun