#include <sun/awt/X11/XDropTargetRegistry$1.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;

namespace sun {
	namespace awt {
		namespace X11 {

void XDropTargetRegistry$1::init$($XDropTargetRegistry* this$0, int64_t val$window) {
	$set(this, this$0, this$0);
	this->val$window = val$window;
}

void XDropTargetRegistry$1::run() {
	this->this$0->removeDelayedRegistrationEntry(this->val$window);
	this->this$0->registerDropSite(this->val$window);
}

XDropTargetRegistry$1::XDropTargetRegistry$1() {
}

$Class* XDropTargetRegistry$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XDropTargetRegistry;", nullptr, $FINAL | $SYNTHETIC, $field(XDropTargetRegistry$1, this$0)},
		{"val$window", "J", nullptr, $FINAL | $SYNTHETIC, $field(XDropTargetRegistry$1, val$window)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XDropTargetRegistry;J)V", "()V", 0, $method(XDropTargetRegistry$1, init$, void, $XDropTargetRegistry*, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XDropTargetRegistry$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XDropTargetRegistry",
		"addDelayedRegistrationEntry",
		"(J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XDropTargetRegistry$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XDropTargetRegistry$1",
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
		"sun.awt.X11.XDropTargetRegistry"
	};
	$loadClass(XDropTargetRegistry$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XDropTargetRegistry$1);
	});
	return class$;
}

$Class* XDropTargetRegistry$1::class$ = nullptr;

		} // X11
	} // awt
} // sun