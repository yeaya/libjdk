#include <NormalBoundsTest$7.h>
#include <NormalBoundsTest.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void NormalBoundsTest$7::init$() {
}

void NormalBoundsTest$7::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setIcon(false);
	} catch ($PropertyVetoException& ex) {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "DeIcoize InternalFrame  Failed"_s);
	}
}

NormalBoundsTest$7::NormalBoundsTest$7() {
}

$Class* NormalBoundsTest$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NormalBoundsTest$7, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NormalBoundsTest$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NormalBoundsTest",
		"executeTest",
		"(Ljava/awt/Robot;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NormalBoundsTest$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NormalBoundsTest$7",
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
	$loadClass(NormalBoundsTest$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalBoundsTest$7);
	});
	return class$;
}

$Class* NormalBoundsTest$7::class$ = nullptr;