#include <TestCCEOnEditEvent$2.h>
#include <TestCCEOnEditEvent.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestCCEOnEditEvent$2::init$() {
}

void TestCCEOnEditEvent$2::run() {
	$init($TestCCEOnEditEvent);
	$nc($TestCCEOnEditEvent::frame)->dispose();
}

TestCCEOnEditEvent$2::TestCCEOnEditEvent$2() {
}

$Class* TestCCEOnEditEvent$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestCCEOnEditEvent$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestCCEOnEditEvent$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCCEOnEditEvent",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCCEOnEditEvent$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCCEOnEditEvent$2",
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
		"TestCCEOnEditEvent"
	};
	$loadClass(TestCCEOnEditEvent$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestCCEOnEditEvent$2);
	});
	return class$;
}

$Class* TestCCEOnEditEvent$2::class$ = nullptr;