#include <sun/awt/X11/XMSelection$2.h>
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

void XMSelection$2::init$($XMSelection* this$0, int32_t val$screen) {
	$set(this, this$0, this$0);
	this->val$screen = val$screen;
}

void XMSelection$2::dispatchEvent($XEvent* ev) {
	this->this$0->dispatchSelectionEvent(ev, this->val$screen);
}

XMSelection$2::XMSelection$2() {
}

$Class* XMSelection$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XMSelection;", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$2, this$0)},
		{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$2, val$screen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XMSelection;I)V", "()V", 0, $method(XMSelection$2, init$, void, $XMSelection*, int32_t)},
		{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC, $virtualMethod(XMSelection$2, dispatchEvent, void, $XEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XMSelection",
		"resetOwner",
		"(JI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XMSelection$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XMSelection$2",
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
	$loadClass(XMSelection$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMSelection$2);
	});
	return class$;
}

$Class* XMSelection$2::class$ = nullptr;

		} // X11
	} // awt
} // sun