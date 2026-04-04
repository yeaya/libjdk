#include <sun/awt/X11/XEmbedCanvasPeer$2.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedCanvasPeer$2::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$2::run() {
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->focusPreviousComponent(this->this$0->target);
}

XEmbedCanvasPeer$2::XEmbedCanvasPeer$2() {
}

$Class* XEmbedCanvasPeer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(XEmbedCanvasPeer$2, init$, void, $XEmbedCanvasPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedCanvasPeer",
		"focusPrev",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$2",
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
		"sun.awt.X11.XEmbedCanvasPeer"
	};
	$loadClass(XEmbedCanvasPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedCanvasPeer$2);
	});
	return class$;
}

$Class* XEmbedCanvasPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun