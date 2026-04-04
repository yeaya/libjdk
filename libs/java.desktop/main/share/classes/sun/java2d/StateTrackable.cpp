#include <sun/java2d/StateTrackable.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTracker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTracker = ::sun::java2d::StateTracker;

namespace sun {
	namespace java2d {

$Class* StateTrackable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getState", "()Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StateTrackable, getState, $StateTrackable$State*)},
		{"getStateTracker", "()Lsun/java2d/StateTracker;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StateTrackable, getStateTracker, $StateTracker*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.StateTrackable$State", "sun.java2d.StateTrackable", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.StateTrackable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.StateTrackable$State"
	};
	$loadClass(StateTrackable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StateTrackable);
	});
	return class$;
}

$Class* StateTrackable::class$ = nullptr;

	} // java2d
} // sun