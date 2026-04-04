#include <sun/awt/X11/XBaseMenuWindow$3.h>
#include <java/awt/AWTEvent.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;

namespace sun {
	namespace awt {
		namespace X11 {

void XBaseMenuWindow$3::init$($XBaseMenuWindow* this$0, $AWTEvent* val$event) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
}

void XBaseMenuWindow$3::run() {
	this->this$0->handleEvent(this->val$event);
}

XBaseMenuWindow$3::XBaseMenuWindow$3() {
}

$Class* XBaseMenuWindow$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XBaseMenuWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$3, this$0)},
		{"val$event", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XBaseMenuWindow$3, val$event)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XBaseMenuWindow;Ljava/awt/AWTEvent;)V", "()V", 0, $method(XBaseMenuWindow$3, init$, void, $XBaseMenuWindow*, $AWTEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XBaseMenuWindow$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XBaseMenuWindow",
		"postEvent",
		"(Ljava/awt/AWTEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XBaseMenuWindow$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XBaseMenuWindow$3",
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
	$loadClass(XBaseMenuWindow$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XBaseMenuWindow$3);
	});
	return class$;
}

$Class* XBaseMenuWindow$3::class$ = nullptr;

		} // X11
	} // awt
} // sun