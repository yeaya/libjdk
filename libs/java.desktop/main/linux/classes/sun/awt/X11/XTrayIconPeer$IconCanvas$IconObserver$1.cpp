#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver$1.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer$IconCanvas$IconObserver = ::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver;

namespace sun {
	namespace awt {
		namespace X11 {

void XTrayIconPeer$IconCanvas$IconObserver$1::init$($XTrayIconPeer$IconCanvas$IconObserver* this$1) {
	$set(this, this$1, this$1);
}

void XTrayIconPeer$IconCanvas$IconObserver$1::run() {
	$nc(this->this$1->this$0)->repaintImage(false);
}

XTrayIconPeer$IconCanvas$IconObserver$1::XTrayIconPeer$IconCanvas$IconObserver$1() {
}

$Class* XTrayIconPeer$IconCanvas$IconObserver$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$IconCanvas$IconObserver$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver;)V", nullptr, 0, $method(XTrayIconPeer$IconCanvas$IconObserver$1, init$, void, $XTrayIconPeer$IconCanvas$IconObserver*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XTrayIconPeer$IconCanvas$IconObserver$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver",
		"imageUpdate",
		"(Ljava/awt/Image;IIIII)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
		{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver", "sun.awt.X11.XTrayIconPeer$IconCanvas", "IconObserver", 0},
		{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1",
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
	$loadClass(XTrayIconPeer$IconCanvas$IconObserver$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTrayIconPeer$IconCanvas$IconObserver$1);
	});
	return class$;
}

$Class* XTrayIconPeer$IconCanvas$IconObserver$1::class$ = nullptr;

		} // X11
	} // awt
} // sun