#include <sun/java2d/StateTracker$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

void StateTracker$1::init$() {
}

bool StateTracker$1::isCurrent() {
	return true;
}

StateTracker$1::StateTracker$1() {
}

$Class* StateTracker$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StateTracker$1, init$, void)},
		{"isCurrent", "()Z", nullptr, $PUBLIC, $virtualMethod(StateTracker$1, isCurrent, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.StateTracker",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.StateTracker$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.StateTracker$1",
		"java.lang.Object",
		"sun.java2d.StateTracker",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.StateTracker"
	};
	$loadClass(StateTracker$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StateTracker$1);
	});
	return class$;
}

$Class* StateTracker$1::class$ = nullptr;

	} // java2d
} // sun