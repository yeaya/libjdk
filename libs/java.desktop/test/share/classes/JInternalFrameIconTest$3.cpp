#include <JInternalFrameIconTest$3.h>
#include <JInternalFrameIconTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JInternalFrameIconTest = ::JInternalFrameIconTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JInternalFrameIconTest$3::init$() {
}

void JInternalFrameIconTest$3::run() {
	$init($JInternalFrameIconTest);
	$nc($JInternalFrameIconTest::frame)->dispose();
}

JInternalFrameIconTest$3::JInternalFrameIconTest$3() {
}

$Class* JInternalFrameIconTest$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JInternalFrameIconTest$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JInternalFrameIconTest",
		"cleanUp",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JInternalFrameIconTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JInternalFrameIconTest$3",
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
		"JInternalFrameIconTest"
	};
	$loadClass(JInternalFrameIconTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JInternalFrameIconTest$3);
	});
	return class$;
}

$Class* JInternalFrameIconTest$3::class$ = nullptr;