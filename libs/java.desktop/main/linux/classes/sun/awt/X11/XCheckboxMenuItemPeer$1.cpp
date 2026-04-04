#include <sun/awt/X11/XCheckboxMenuItemPeer$1.h>
#include <sun/awt/X11/XCheckboxMenuItemPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XCheckboxMenuItemPeer = ::sun::awt::X11::XCheckboxMenuItemPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XCheckboxMenuItemPeer$1::init$($XCheckboxMenuItemPeer* this$0, int64_t val$when) {
	$set(this, this$0, this$0);
	this->val$when = val$when;
}

void XCheckboxMenuItemPeer$1::run() {
	this->this$0->doToggleState(this->val$when);
}

XCheckboxMenuItemPeer$1::XCheckboxMenuItemPeer$1() {
}

$Class* XCheckboxMenuItemPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XCheckboxMenuItemPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxMenuItemPeer$1, this$0)},
		{"val$when", "J", nullptr, $FINAL | $SYNTHETIC, $field(XCheckboxMenuItemPeer$1, val$when)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XCheckboxMenuItemPeer;J)V", "()V", 0, $method(XCheckboxMenuItemPeer$1, init$, void, $XCheckboxMenuItemPeer*, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XCheckboxMenuItemPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XCheckboxMenuItemPeer",
		"action",
		"(JI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XCheckboxMenuItemPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XCheckboxMenuItemPeer$1",
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
		"sun.awt.X11.XCheckboxMenuItemPeer"
	};
	$loadClass(XCheckboxMenuItemPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XCheckboxMenuItemPeer$1);
	});
	return class$;
}

$Class* XCheckboxMenuItemPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun