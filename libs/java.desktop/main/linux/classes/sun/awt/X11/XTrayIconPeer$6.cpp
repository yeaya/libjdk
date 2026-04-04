#include <sun/awt/X11/XTrayIconPeer$6.h>
#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer$TrayIconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$6::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

void XTrayIconPeer$6::run() {
	$nc(this->this$0->canvas)->updateImage($($nc(this->this$0->target)->getImage()));
}

XTrayIconPeer$6::XTrayIconPeer$6() {
}

$Class* XTrayIconPeer$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(XTrayIconPeer$6, init$, void, $XTrayIconPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTrayIconPeer",
		"updateImage",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$6",
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
		"sun.awt.X11.XTrayIconPeer"
	};
	$loadClass(XTrayIconPeer$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$6);
	});
	return class$;
}

$Class* XTrayIconPeer$6::class$ = nullptr;

		} // X11
	} // awt
} // sun