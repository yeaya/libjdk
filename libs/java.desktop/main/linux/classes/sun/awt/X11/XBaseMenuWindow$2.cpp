#include <sun/awt/X11/XBaseMenuWindow$2.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XBaseMenuWindow$2::init$($XBaseMenuWindow* this$0) {
	$set(this, this$0, this$0);
}

void XBaseMenuWindow$2::run() {
	this->this$0->doDispose();
}

XBaseMenuWindow$2::XBaseMenuWindow$2() {
}

$Class* XBaseMenuWindow$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XBaseMenuWindow;)V", nullptr, 0, $method(XBaseMenuWindow$2, init$, void, $XBaseMenuWindow*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XBaseMenuWindow$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XBaseMenuWindow",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XBaseMenuWindow$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XBaseMenuWindow$2",
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
		"sun.awt.X11.XBaseMenuWindow"
	};
	$loadClass(XBaseMenuWindow$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XBaseMenuWindow$2);
	});
	return class$;
}

$Class* XBaseMenuWindow$2::class$ = nullptr;

		} // X11
	} // awt
} // sun