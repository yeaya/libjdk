#include <bug8048110$2.h>
#include <bug8048110.h>
#include <java/awt/Robot.h>
#include <jcpp.h>

using $bug8048110 = ::bug8048110;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8048110$2::init$() {
	$Thread::init$();
}

void bug8048110$2::run() {
	$init($bug8048110);
	$nc($bug8048110::robot)->waitForIdle();
	$synchronized($bug8048110::lock) {
		$bug8048110::isRealSyncPerformed = true;
		$bug8048110::lock->notifyAll();
	}
}

bug8048110$2::bug8048110$2() {
}

$Class* bug8048110$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8048110$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8048110$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8048110",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8048110$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8048110$2",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8048110"
	};
	$loadClass(bug8048110$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8048110$2);
	});
	return class$;
}

$Class* bug8048110$2::class$ = nullptr;