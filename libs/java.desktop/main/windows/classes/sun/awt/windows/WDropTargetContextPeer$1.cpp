#include <sun/awt/windows/WDropTargetContextPeer$1.h>
#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/awt/windows/WDropTargetContextPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $WDropTargetContextPeer = ::sun::awt::windows::WDropTargetContextPeer;

namespace sun {
	namespace awt {
		namespace windows {

void WDropTargetContextPeer$1::init$($WDropTargetContextPeer* this$0, $SunDropTargetEvent* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

void WDropTargetContextPeer$1::run() {
	$$nc($nc(this->val$e)->getDispatcher())->unregisterAllEvents();
}

WDropTargetContextPeer$1::WDropTargetContextPeer$1() {
}

$Class* WDropTargetContextPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WDropTargetContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WDropTargetContextPeer$1, this$0)},
		{"val$e", "Lsun/awt/dnd/SunDropTargetEvent;", nullptr, $FINAL | $SYNTHETIC, $field(WDropTargetContextPeer$1, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WDropTargetContextPeer;Lsun/awt/dnd/SunDropTargetEvent;)V", "()V", 0, $method(WDropTargetContextPeer$1, init$, void, $WDropTargetContextPeer*, $SunDropTargetEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WDropTargetContextPeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WDropTargetContextPeer",
		"eventPosted",
		"(Lsun/awt/dnd/SunDropTargetEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WDropTargetContextPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WDropTargetContextPeer$1",
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
		"sun.awt.windows.WDropTargetContextPeer"
	};
	$loadClass(WDropTargetContextPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WDropTargetContextPeer$1);
	});
	return class$;
}

$Class* WDropTargetContextPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun