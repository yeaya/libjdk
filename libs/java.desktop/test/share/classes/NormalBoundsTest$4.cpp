#include <NormalBoundsTest$4.h>
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

void NormalBoundsTest$4::init$() {
}

void NormalBoundsTest$4::run() {
	$init($NormalBoundsTest);
	$assignStatic($NormalBoundsTest::bounds, $nc($NormalBoundsTest::internalFrame)->getBounds());
	if (!$$nc($nc($NormalBoundsTest::internalFrame)->getNormalBounds())->equals($NormalBoundsTest::bounds)) {
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Invalid NormalBounds"_s);
	}
}

NormalBoundsTest$4::NormalBoundsTest$4() {
}

$Class* NormalBoundsTest$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NormalBoundsTest$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NormalBoundsTest$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NormalBoundsTest",
		"executeTest",
		"(Ljava/awt/Robot;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NormalBoundsTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NormalBoundsTest$4",
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
	$loadClass(NormalBoundsTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalBoundsTest$4);
	});
	return class$;
}

$Class* NormalBoundsTest$4::class$ = nullptr;