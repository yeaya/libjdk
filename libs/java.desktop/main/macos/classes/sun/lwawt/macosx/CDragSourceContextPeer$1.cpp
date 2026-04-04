#include <sun/lwawt/macosx/CDragSourceContextPeer$1.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CDragSourceContextPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CDragSourceContextPeer = ::sun::lwawt::macosx::CDragSourceContextPeer;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CDragSourceContextPeer$1::init$($CDragSourceContextPeer* this$0, int32_t val$x, int32_t val$y) {
	$set(this, this$0, this$0);
	this->val$x = val$x;
	this->val$y = val$y;
}

$Object* CDragSourceContextPeer$1::call() {
	$useLocalObjectStack();
	$var($LWWindowPeer, mouseEventComponent, $LWWindowPeer::getWindowUnderCursor());
	if (mouseEventComponent == nullptr) {
		return nullptr;
	}
	$var($Component, root, $SwingUtilities::getRoot($($nc(mouseEventComponent)->getTarget())));
	if (root == nullptr) {
		return nullptr;
	}
	$var($Point, rootLocation, $nc(root)->getLocationOnScreen());
	return $of($CDragSourceContextPeer::getDropTargetAt(root, this->val$x - $nc(rootLocation)->x, this->val$y - $nc(rootLocation)->y));
}

CDragSourceContextPeer$1::CDragSourceContextPeer$1() {
}

$Class* CDragSourceContextPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CDragSourceContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(CDragSourceContextPeer$1, this$0)},
		{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(CDragSourceContextPeer$1, val$y)},
		{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(CDragSourceContextPeer$1, val$x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CDragSourceContextPeer;II)V", "()V", 0, $method(CDragSourceContextPeer$1, init$, void, $CDragSourceContextPeer*, int32_t, int32_t)},
		{"call", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(CDragSourceContextPeer$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CDragSourceContextPeer",
		"dragMouseMoved",
		"(IIII)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CDragSourceContextPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CDragSourceContextPeer$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Component;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CDragSourceContextPeer"
	};
	$loadClass(CDragSourceContextPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CDragSourceContextPeer$1);
	});
	return class$;
}

$Class* CDragSourceContextPeer$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun