#include <sun/awt/X11/XMSelection$1.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XMSelection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;
using $XMSelection = ::sun::awt::X11::XMSelection;

namespace sun {
	namespace awt {
		namespace X11 {

void XMSelection$1::init$(int32_t val$screen) {
	this->val$screen = val$screen;
}

void XMSelection$1::dispatchEvent($XEvent* ev) {
	$XMSelection::processRootEvent(ev, this->val$screen);
}

XMSelection$1::XMSelection$1() {
}

$Class* XMSelection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$1, val$screen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(XMSelection$1, init$, void, int32_t)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XMSelection$1, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XMSelection",
		"initScreen",
		"(JI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XMSelection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XMSelection$1",
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
		"sun.awt.X11.XMSelection"
	};
	$loadClass(XMSelection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMSelection$1);
	});
	return class$;
}

$Class* XMSelection$1::class$ = nullptr;

		} // X11
	} // awt
} // sun