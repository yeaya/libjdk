#include <NormalBoundsTest$9.h>
#include <NormalBoundsTest.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void NormalBoundsTest$9::init$() {
}

void NormalBoundsTest$9::run() {
	$init($NormalBoundsTest);
	if (!$$nc($nc($NormalBoundsTest::internalFrame)->getBounds())->equals($NormalBoundsTest::bounds)) {
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Regression Test Failed"_s);
	}
}

NormalBoundsTest$9::NormalBoundsTest$9() {
}

$Class* NormalBoundsTest$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NormalBoundsTest$9, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NormalBoundsTest$9, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NormalBoundsTest",
		"executeTest",
		"(Ljava/awt/Robot;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NormalBoundsTest$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NormalBoundsTest$9",
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
		"NormalBoundsTest"
	};
	$loadClass(NormalBoundsTest$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalBoundsTest$9);
	});
	return class$;
}

$Class* NormalBoundsTest$9::class$ = nullptr;