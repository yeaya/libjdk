#include <bug8031573$1.h>
#include <bug8031573.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $bug8031573 = ::bug8031573;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8031573$1::init$() {
	$WindowAdapter::init$();
}

void bug8031573$1::windowClosing($WindowEvent* e) {
	$init($bug8031573);
	$nc($bug8031573::latch)->countDown();
}

bug8031573$1::bug8031573$1() {
}

$Class* bug8031573$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8031573$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug8031573$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8031573",
		"createTestGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8031573$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8031573$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8031573"
	};
	$loadClass(bug8031573$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8031573$1));
	});
	return class$;
}

$Class* bug8031573$1::class$ = nullptr;