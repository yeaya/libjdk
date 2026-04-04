#include <sun/awt/X11/XBaseMenuWindow$1.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XBaseMenuWindow$1::init$($XBaseMenuWindow* this$0, $XMenuPeer* val$submenuToShow) {
	$set(this, this$0, this$0);
	$set(this, val$submenuToShow, val$submenuToShow);
}

void XBaseMenuWindow$1::run() {
	this->this$0->doShowSubmenu(this->val$submenuToShow);
}

XBaseMenuWindow$1::XBaseMenuWindow$1() {
}

$Class* XBaseMenuWindow$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$1, this$0)},
		{"val$submenuToShow", "Lsun/awt/X11/XMenuPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$1, val$submenuToShow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XBaseMenuWindow;Lsun/awt/X11/XMenuPeer;)V", "()V", 0, $method(XBaseMenuWindow$1, init$, void, $XBaseMenuWindow*, $XMenuPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XBaseMenuWindow$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XBaseMenuWindow",
		"selectItem",
		"(Lsun/awt/X11/XMenuItemPeer;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XBaseMenuWindow$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XBaseMenuWindow$1",
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
	$loadClass(XBaseMenuWindow$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XBaseMenuWindow$1);
	});
	return class$;
}

$Class* XBaseMenuWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun