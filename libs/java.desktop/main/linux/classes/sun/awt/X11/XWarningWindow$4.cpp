#include <sun/awt/X11/XWarningWindow$4.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XWarningWindow$4::init$($XWarningWindow* this$0) {
	$set(this, this$0, this$0);
}

void XWarningWindow$4::run() {
	if (!this->this$0->isVisible()) {
		this->this$0->xSetVisible(true);
		this->this$0->updateIconSize();
		$var($XWindowPeer, peer, $cast($XWindowPeer, $nc(this->this$0->ownerPeer)->get()));
		if (peer != nullptr) {
			peer->repositionSecurityWarning();
		}
	}
	this->this$0->repaint();
	if (this->this$0->currentIcon > 0) {
		--this->this$0->currentIcon;
		$XToolkit::schedule(this->this$0->showingTask, 330);
	}
}

XWarningWindow$4::XWarningWindow$4() {
}

$Class* XWarningWindow$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XWarningWindow;)V", nullptr, 0, $method(XWarningWindow$4, init$, void, $XWarningWindow*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XWarningWindow$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWarningWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWarningWindow$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWarningWindow$4",
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
		"sun.awt.X11.XWarningWindow"
	};
	$loadClass(XWarningWindow$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWarningWindow$4);
	});
	return class$;
}

$Class* XWarningWindow$4::class$ = nullptr;

		} // X11
	} // awt
} // sun