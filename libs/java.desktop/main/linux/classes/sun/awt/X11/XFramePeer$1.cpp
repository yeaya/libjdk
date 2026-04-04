#include <sun/awt/X11/XFramePeer$1.h>
#include <java/awt/Component.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XFramePeer = ::sun::awt::X11::XFramePeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XFramePeer$1::init$($XFramePeer* this$0) {
	$set(this, this$0, this$0);
}

void XFramePeer$1::run() {
	this->this$0->updateChildrenSizes();
	bool heightChanged = false;
	int32_t height = this->this$0->getMenuBarHeight();
	$synchronized(this->this$0->getStateLock()) {
		if (height != this->this$0->lastAppliedMenubarHeight) {
			this->this$0->lastAppliedMenubarHeight = height;
			heightChanged = true;
		}
	}
	if (heightChanged) {
		$nc(this->this$0->target)->invalidate();
		$nc(this->this$0->target)->validate();
	}
}

XFramePeer$1::XFramePeer$1() {
}

$Class* XFramePeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XFramePeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFramePeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XFramePeer;)V", nullptr, 0, $method(XFramePeer$1, init$, void, $XFramePeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XFramePeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XFramePeer",
		"reshapeMenubarPeer",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XFramePeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XFramePeer$1",
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
		"sun.awt.X11.XFramePeer"
	};
	$loadClass(XFramePeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XFramePeer$1);
	});
	return class$;
}

$Class* XFramePeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun