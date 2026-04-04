#include <NormalBoundsTest$6.h>
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

void NormalBoundsTest$6::init$() {
}

void NormalBoundsTest$6::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setIcon(true);
	} catch ($PropertyVetoException& ex) {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Iconize InternalFrame Failed"_s);
	}
}

NormalBoundsTest$6::NormalBoundsTest$6() {
}

$Class* NormalBoundsTest$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NormalBoundsTest$6, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NormalBoundsTest$6, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NormalBoundsTest",
		"executeTest",
		"(Ljava/awt/Robot;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NormalBoundsTest$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NormalBoundsTest$6",
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
	$loadClass(NormalBoundsTest$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalBoundsTest$6);
	});
	return class$;
}

$Class* NormalBoundsTest$6::class$ = nullptr;