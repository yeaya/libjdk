#include <sun/awt/X11/XDecoratedPeer$1.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XDecoratedPeer$1::init$($XDecoratedPeer* this$0) {
	$set(this, this$0, this$0);
}

void XDecoratedPeer$1::run() {
	$var($XWindowPeer, fw, nullptr);
	$synchronized(this->this$0->getStateLock()) {
		$assign(fw, this->this$0->actualFocusedWindow);
		$set(this->this$0, actualFocusedWindow, nullptr);
		bool var$0 = nullptr == fw || !fw->isVisible();
		if (var$0 || !fw->isFocusableWindow()) {
			$assign(fw, this->this$0);
		}
	}
	$nc(fw)->handleWindowFocusIn_Dispatch();
}

XDecoratedPeer$1::XDecoratedPeer$1() {
}

$Class* XDecoratedPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XDecoratedPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XDecoratedPeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XDecoratedPeer;)V", nullptr, 0, $method(XDecoratedPeer$1, init$, void, $XDecoratedPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XDecoratedPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XDecoratedPeer",
		"handleWindowFocusIn",
		"(J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XDecoratedPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XDecoratedPeer$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XDecoratedPeer"
	};
	$loadClass(XDecoratedPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XDecoratedPeer$1);
	});
	return class$;
}

$Class* XDecoratedPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun