#include <sun/awt/X11/XTrayIconPeer$5.h>
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

void XTrayIconPeer$5::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

void XTrayIconPeer$5::run() {
	this->this$0->disposeOnEDT();
}

XTrayIconPeer$5::XTrayIconPeer$5() {
}

$Class* XTrayIconPeer$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$5, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(XTrayIconPeer$5, init$, void, $XTrayIconPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTrayIconPeer",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$5",
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
	$loadClass(XTrayIconPeer$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$5);
	});
	return class$;
}

$Class* XTrayIconPeer$5::class$ = nullptr;

		} // X11
	} // awt
} // sun