#include <ScrollableTabbedPaneTest$1.h>
#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ScrollableTabbedPaneTest = ::ScrollableTabbedPaneTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ScrollableTabbedPaneTest$1::init$() {
}

void ScrollableTabbedPaneTest$1::run() {
	$init($ScrollableTabbedPaneTest);
	$nc($ScrollableTabbedPaneTest::frame)->dispose();
}

ScrollableTabbedPaneTest$1::ScrollableTabbedPaneTest$1() {
}

$Class* ScrollableTabbedPaneTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ScrollableTabbedPaneTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScrollableTabbedPaneTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ScrollableTabbedPaneTest",
		"cleanUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ScrollableTabbedPaneTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ScrollableTabbedPaneTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ScrollableTabbedPaneTest"
	};
	$loadClass(ScrollableTabbedPaneTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollableTabbedPaneTest$1);
	});
	return class$;
}

$Class* ScrollableTabbedPaneTest$1::class$ = nullptr;