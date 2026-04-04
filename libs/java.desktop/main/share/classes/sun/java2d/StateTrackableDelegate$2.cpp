#include <sun/java2d/StateTrackableDelegate$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

#undef DYNAMIC
#undef IMMUTABLE
#undef STABLE
#undef UNTRACKABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;

namespace sun {
	namespace java2d {

$ints* StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State = nullptr;

void StateTrackableDelegate$2::clinit$($Class* clazz) {
	$assignStatic(StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State, $new($ints, $($StateTrackable$State::values())->length));
	{
		try {
			StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State->set($StateTrackable$State::UNTRACKABLE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State->set($StateTrackable$State::STABLE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State->set($StateTrackable$State::DYNAMIC->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StateTrackableDelegate$2::$SwitchMap$sun$java2d$StateTrackable$State->set($StateTrackable$State::IMMUTABLE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StateTrackableDelegate$2::StateTrackableDelegate$2() {
}

$Class* StateTrackableDelegate$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$java2d$StateTrackable$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StateTrackableDelegate$2, $SwitchMap$sun$java2d$StateTrackable$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.StateTrackableDelegate",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.StateTrackableDelegate$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.java2d.StateTrackableDelegate$2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.StateTrackableDelegate"
	};
	$loadClass(StateTrackableDelegate$2, name, initialize, &classInfo$$, StateTrackableDelegate$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StateTrackableDelegate$2);
	});
	return class$;
}

$Class* StateTrackableDelegate$2::class$ = nullptr;

	} // java2d
} // sun