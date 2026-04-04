#include <sun/awt/X11/XEmbedClientHelper$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <sun/awt/X11/XEmbedClientHelper.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbedClientHelper = ::sun::awt::X11::XEmbedClientHelper;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedClientHelper$2::init$($XEmbedClientHelper* this$0) {
	$set(this, this$0, this$0);
}

void XEmbedClientHelper$2::run() {
	$useLocalObjectStack();
	$var($Component, comp, $$nc($nc($cast($Container, $nc(this->this$0->embedded)->target))->getFocusTraversalPolicy())->getLastComponent($cast($Container, $nc(this->this$0->embedded)->target)));
	if (comp != nullptr) {
		comp->requestFocusInWindow();
	}
}

XEmbedClientHelper$2::XEmbedClientHelper$2() {
}

$Class* XEmbedClientHelper$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XEmbedClientHelper;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedClientHelper$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbedClientHelper;)V", nullptr, 0, $method(XEmbedClientHelper$2, init$, void, $XEmbedClientHelper*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedClientHelper$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XEmbedClientHelper",
		"handleFocusIn",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XEmbedClientHelper$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XEmbedClientHelper$2",
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
		"sun.awt.X11.XEmbedClientHelper"
	};
	$loadClass(XEmbedClientHelper$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XEmbedClientHelper$2);
	});
	return class$;
}

$Class* XEmbedClientHelper$2::class$ = nullptr;

		} // X11
	} // awt
} // sun