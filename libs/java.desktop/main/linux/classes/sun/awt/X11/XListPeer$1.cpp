#include <sun/awt/X11/XListPeer$1.h>
#include <java/awt/event/MouseEvent.h>
#include <sun/awt/X11/XListPeer.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XListPeer = ::sun::awt::X11::XListPeer;

namespace sun {
	namespace awt {
		namespace X11 {

void XListPeer$1::init$($XListPeer* this$0, $MouseEvent* val$me) {
	$set(this, this$0, this$0);
	$set(this, val$me, val$me);
}

void XListPeer$1::run() {
	this->this$0->handleJavaMouseEvent(this->val$me);
}

XListPeer$1::XListPeer$1() {
}

$Class* XListPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11/XListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XListPeer$1, this$0)},
		{"val$me", "Ljava/awt/event/MouseEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XListPeer$1, val$me)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XListPeer;Ljava/awt/event/MouseEvent;)V", "()V", 0, $method(XListPeer$1, init$, void, $XListPeer*, $MouseEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(XListPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XListPeer",
		"handleJavaMouseEventOnEDT",
		"(Ljava/awt/event/MouseEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XListPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XListPeer$1",
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
		"sun.awt.X11.XListPeer"
	};
	$loadClass(XListPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XListPeer$1);
	});
	return class$;
}

$Class* XListPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun