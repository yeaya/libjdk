#include <sun/java2d/StateTracker.h>
#include <sun/java2d/StateTracker$1.h>
#include <sun/java2d/StateTracker$2.h>
#include <jcpp.h>

#undef ALWAYS_CURRENT
#undef NEVER_CURRENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTracker$1 = ::sun::java2d::StateTracker$1;
using $StateTracker$2 = ::sun::java2d::StateTracker$2;

namespace sun {
	namespace java2d {

StateTracker* StateTracker::ALWAYS_CURRENT = nullptr;
StateTracker* StateTracker::NEVER_CURRENT = nullptr;

void StateTracker::clinit$($Class* clazz) {
	$assignStatic(StateTracker::ALWAYS_CURRENT, $new($StateTracker$1));
	$assignStatic(StateTracker::NEVER_CURRENT, $new($StateTracker$2));
}

$Class* StateTracker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ALWAYS_CURRENT", "Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateTracker, ALWAYS_CURRENT)},
		{"NEVER_CURRENT", "Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateTracker, NEVER_CURRENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"isCurrent", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StateTracker, isCurrent, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.StateTracker$2", nullptr, nullptr, 0},
		{"sun.java2d.StateTracker$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.StateTracker",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.StateTracker$2,sun.java2d.StateTracker$1"
	};
	$loadClass(StateTracker, name, initialize, &classInfo$$, StateTracker::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StateTracker);
	});
	return class$;
}

$Class* StateTracker::class$ = nullptr;

	} // java2d
} // sun