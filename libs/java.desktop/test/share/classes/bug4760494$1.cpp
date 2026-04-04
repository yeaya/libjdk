#include <bug4760494$1.h>
#include <bug4760494.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug4760494 = ::bug4760494;
using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4760494$1::init$() {
	$MouseAdapter::init$();
}

void bug4760494$1::mouseReleased($MouseEvent* e) {
	$init($bug4760494);
	$var($Component, var$0, $bug4760494::frame);
	int32_t var$1 = $nc(e)->getX();
	$nc($bug4760494::popup)->show(var$0, var$1, e->getY());
}

bug4760494$1::bug4760494$1() {
}

$Class* bug4760494$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4760494$1, init$, void)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4760494$1, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4760494",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4760494$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4760494$1",
		"java.awt.event.MouseAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4760494"
	};
	$loadClass(bug4760494$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4760494$1));
	});
	return class$;
}

$Class* bug4760494$1::class$ = nullptr;