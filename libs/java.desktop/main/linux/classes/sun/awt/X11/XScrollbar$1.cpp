#include <sun/awt/X11/XScrollbar$1.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollbar = ::sun::awt::X11::XScrollbar;

namespace sun {
	namespace awt {
		namespace X11 {

void XScrollbar$1::init$($XScrollbar* this$0, int32_t val$mode, int32_t val$value, bool val$isAdjusting) {
	$set(this, this$0, this$0);
	this->val$mode = val$mode;
	this->val$value = val$value;
	this->val$isAdjusting = val$isAdjusting;
}

void XScrollbar$1::run() {
	$nc(this->this$0->sb)->notifyValue(this->this$0, this->val$mode, this->val$value, this->val$isAdjusting);
}

XScrollbar$1::XScrollbar$1() {
}

$Class* XScrollbar$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XScrollbar;", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, this$0)},
		{"val$isAdjusting", "Z", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, val$isAdjusting)},
		{"val$value", "I", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, val$value)},
		{"val$mode", "I", nullptr, $FINAL | $SYNTHETIC, $field(XScrollbar$1, val$mode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XScrollbar;IIZ)V", "()V", 0, $method(XScrollbar$1, init$, void, $XScrollbar*, int32_t, int32_t, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XScrollbar$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XScrollbar",
		"notifyValue",
		"(IZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XScrollbar$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XScrollbar$1",
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
		"sun.awt.X11.XScrollbar"
	};
	$loadClass(XScrollbar$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XScrollbar$1);
	});
	return class$;
}

$Class* XScrollbar$1::class$ = nullptr;

		} // X11
	} // awt
} // sun