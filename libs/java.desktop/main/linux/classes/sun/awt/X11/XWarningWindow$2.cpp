#include <sun/awt/X11/XWarningWindow$2.h>
#include <java/awt/Graphics.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XWarningWindow$2::init$($XWarningWindow* this$0, int32_t val$x, int32_t val$y, int32_t val$width, int32_t val$height) {
	$set(this, this$0, this$0);
	this->val$x = val$x;
	this->val$y = val$y;
	this->val$width = val$width;
	this->val$height = val$height;
}

void XWarningWindow$2::run() {
	$useLocalObjectStack();
	$var($Graphics, g, this->this$0->getGraphics());
	if (g != nullptr) {
		$var($Throwable, var$0, nullptr);
		try {
			this->this$0->paint(g, this->val$x, this->val$y, this->val$width, this->val$height);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			g->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

XWarningWindow$2::XWarningWindow$2() {
}

$Class* XWarningWindow$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, this$0)},
		{"val$height", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$height)},
		{"val$width", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$width)},
		{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$y)},
		{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$2, val$x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XWarningWindow;IIII)V", "()V", 0, $method(XWarningWindow$2, init$, void, $XWarningWindow*, int32_t, int32_t, int32_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XWarningWindow$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWarningWindow",
		"handleExposeEvent",
		"(Lsun/awt/X11/XEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWarningWindow$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWarningWindow$2",
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
	$loadClass(XWarningWindow$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWarningWindow$2);
	});
	return class$;
}

$Class* XWarningWindow$2::class$ = nullptr;

		} // X11
	} // awt
} // sun