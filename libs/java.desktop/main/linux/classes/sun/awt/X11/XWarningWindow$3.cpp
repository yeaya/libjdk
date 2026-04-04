#include <sun/awt/X11/XWarningWindow$3.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XWarningWindow$3::init$($XWarningWindow* this$0) {
	$set(this, this$0, this$0);
}

void XWarningWindow$3::run() {
	this->this$0->xSetVisible(false);
}

XWarningWindow$3::XWarningWindow$3() {
}

$Class* XWarningWindow$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XWarningWindow;)V", nullptr, 0, $method(XWarningWindow$3, init$, void, $XWarningWindow*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XWarningWindow$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWarningWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWarningWindow$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XWarningWindow$3",
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
	$loadClass(XWarningWindow$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XWarningWindow$3);
	});
	return class$;
}

$Class* XWarningWindow$3::class$ = nullptr;

		} // X11
	} // awt
} // sun