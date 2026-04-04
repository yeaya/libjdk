#include <InternalFrameIsNotCollectedTest$1.h>
#include <InternalFrameIsNotCollectedTest.h>
#include <java/beans/PropertyVetoException.h>
#include <jcpp.h>

using $InternalFrameIsNotCollectedTest = ::InternalFrameIsNotCollectedTest;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void InternalFrameIsNotCollectedTest$1::init$() {
}

void InternalFrameIsNotCollectedTest$1::run() {
	$InternalFrameIsNotCollectedTest::initUI();
	try {
		$InternalFrameIsNotCollectedTest::closeInternalFrame();
	} catch ($PropertyVetoException& e) {
		$throwNew($RuntimeException, e);
	}
}

InternalFrameIsNotCollectedTest$1::InternalFrameIsNotCollectedTest$1() {
}

$Class* InternalFrameIsNotCollectedTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InternalFrameIsNotCollectedTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InternalFrameIsNotCollectedTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"InternalFrameIsNotCollectedTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InternalFrameIsNotCollectedTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"InternalFrameIsNotCollectedTest$1",
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
		"InternalFrameIsNotCollectedTest"
	};
	$loadClass(InternalFrameIsNotCollectedTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameIsNotCollectedTest$1);
	});
	return class$;
}

$Class* InternalFrameIsNotCollectedTest$1::class$ = nullptr;