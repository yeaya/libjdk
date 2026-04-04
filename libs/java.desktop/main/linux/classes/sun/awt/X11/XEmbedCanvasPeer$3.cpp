#include <sun/awt/X11/XEmbedCanvasPeer$3.h>
#include <java/awt/Component.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedCanvasPeer$3::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedCanvasPeer$3::run() {
	$nc(this->this$0->target)->requestFocus();
}

XEmbedCanvasPeer$3::XEmbedCanvasPeer$3() {
}

$Class* XEmbedCanvasPeer$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(XEmbedCanvasPeer$3, init$, void, $XEmbedCanvasPeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedCanvasPeer$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedCanvasPeer",
		"requestXEmbedFocus",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedCanvasPeer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedCanvasPeer$3",
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
	$loadClass(XEmbedCanvasPeer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedCanvasPeer$3);
	});
	return class$;
}

$Class* XEmbedCanvasPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun