#include <ComponentTest$1.h>
#include <ComponentTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ComponentTest = ::ComponentTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ComponentTest$1::init$() {
}

void ComponentTest$1::run() {
	$init($ComponentTest);
	$assignStatic($ComponentTest::frame, $new($ComponentTest));
	$ComponentTest::frame->setVisible(true);
}

ComponentTest$1::ComponentTest$1() {
}

$Class* ComponentTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ComponentTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ComponentTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ComponentTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ComponentTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ComponentTest$1",
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
		"ComponentTest"
	};
	$loadClass(ComponentTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentTest$1);
	});
	return class$;
}

$Class* ComponentTest$1::class$ = nullptr;