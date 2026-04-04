#include <TestJCheckBoxMenuItem$1.h>
#include <TestJCheckBoxMenuItem.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TestJCheckBoxMenuItem = ::TestJCheckBoxMenuItem;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestJCheckBoxMenuItem$1::init$() {
	$WindowAdapter::init$();
}

void TestJCheckBoxMenuItem$1::windowClosing($WindowEvent* e) {
	$TestJCheckBoxMenuItem::disposeUI();
	$nc($TestJCheckBoxMenuItem::countDownLatch)->countDown();
}

TestJCheckBoxMenuItem$1::TestJCheckBoxMenuItem$1() {
}

$Class* TestJCheckBoxMenuItem$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestJCheckBoxMenuItem$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestJCheckBoxMenuItem$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestJCheckBoxMenuItem",
		"createInstructionUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestJCheckBoxMenuItem$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestJCheckBoxMenuItem$1",
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
		"TestJCheckBoxMenuItem"
	};
	$loadClass(TestJCheckBoxMenuItem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestJCheckBoxMenuItem$1));
	});
	return class$;
}

$Class* TestJCheckBoxMenuItem$1::class$ = nullptr;