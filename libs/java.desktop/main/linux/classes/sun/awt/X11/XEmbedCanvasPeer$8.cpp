#include <sun/awt/X11/XEmbedCanvasPeer$8.h>
#include <java/awt/Component.h>
#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedDropTarget.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedCanvasPeer$XEmbedDropTarget = ::sun::awt::X11::XEmbedCanvasPeer$XEmbedDropTarget;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedCanvasPeer$8::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$8::run() {
	$nc(this->this$0->target)->setDropTarget($$new($XEmbedCanvasPeer$XEmbedDropTarget));
}

XEmbedCanvasPeer$8::XEmbedCanvasPeer$8() {
}

$Class* XEmbedCanvasPeer$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$8, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(XEmbedCanvasPeer$8, init$, void, $XEmbedCanvasPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$8, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedCanvasPeer",
		"setXEmbedDropTarget",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$8",
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
	$loadClass(XEmbedCanvasPeer$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedCanvasPeer$8);
	});
	return class$;
}

$Class* XEmbedCanvasPeer$8::class$ = nullptr;

		} // X11
	} // awt
} // sun