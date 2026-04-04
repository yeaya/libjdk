#include <sun/awt/X11/XMenuWindow$1.h>
#include <java/awt/Dimension.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XMenuWindow.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMenuWindow = ::sun::awt::X11::XMenuWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XMenuWindow$1::init$($XMenuWindow* this$0) {
	$set(this, this$0, this$0);
}

void XMenuWindow$1::run() {
	$var($Dimension, dim, this->this$0->getDesiredSize());
	this->this$0->reshape(this->this$0->x, this->this$0->y, $nc(dim)->width, $nc(dim)->height);
}

XMenuWindow$1::XMenuWindow$1() {
}

$Class* XMenuWindow$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XMenuWindow$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XMenuWindow;)V", nullptr, 0, $method(XMenuWindow$1, init$, void, $XMenuWindow*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XMenuWindow$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XMenuWindow",
		"updateSize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XMenuWindow$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XMenuWindow$1",
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
		"sun.awt.X11.XMenuWindow"
	};
	$loadClass(XMenuWindow$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMenuWindow$1);
	});
	return class$;
}

$Class* XMenuWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun