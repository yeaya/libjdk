#include <sun/awt/X11/XEmbedCanvasPeer$1.h>
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

void XEmbedCanvasPeer$1::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$1::run() {
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->focusNextComponent(this->this$0->target);
}

XEmbedCanvasPeer$1::XEmbedCanvasPeer$1() {
}

$Class* XEmbedCanvasPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(XEmbedCanvasPeer$1, init$, void, $XEmbedCanvasPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedCanvasPeer",
		"focusNext",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$1",
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
	$loadClass(XEmbedCanvasPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedCanvasPeer$1);
	});
	return class$;
}

$Class* XEmbedCanvasPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun