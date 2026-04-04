#include <sun/java2d/StateTracker$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

void StateTracker$2::init$() {
}

bool StateTracker$2::isCurrent() {
	return false;
}

StateTracker$2::StateTracker$2() {
}

$Class* StateTracker$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StateTracker$2, init$, void)},
		{"isCurrent", "()Z", nullptr, $PUBLIC, $virtualMethod(StateTracker$2, isCurrent, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.StateTracker",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.StateTracker$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.StateTracker$2",
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
	$loadClass(StateTracker$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StateTracker$2);
	});
	return class$;
}

$Class* StateTracker$2::class$ = nullptr;

	} // java2d
} // sun