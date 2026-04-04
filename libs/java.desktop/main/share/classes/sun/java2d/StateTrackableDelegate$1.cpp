#include <sun/java2d/StateTrackableDelegate$1.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <sun/java2d/StateTracker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace sun {
	namespace java2d {

void StateTrackableDelegate$1::init$($StateTrackableDelegate* this$0) {
	$set(this, this$0, this$0);
}

bool StateTrackableDelegate$1::isCurrent() {
	return ($equals(this->this$0->theTracker, this));
}

StateTrackableDelegate$1::StateTrackableDelegate$1() {
}

$Class* StateTrackableDelegate$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/StateTrackableDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(StateTrackableDelegate$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/StateTrackableDelegate;)V", nullptr, 0, $method(StateTrackableDelegate$1, init$, void, $StateTrackableDelegate*)},
		{"isCurrent", "()Z", nullptr, $PUBLIC, $virtualMethod(StateTrackableDelegate$1, isCurrent, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.StateTrackableDelegate",
		"getStateTracker",
		"()Lsun/java2d/StateTracker;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.StateTrackableDelegate$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.StateTrackableDelegate$1",
		"java.lang.Object",
		"sun.java2d.StateTracker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.StateTrackableDelegate"
	};
	$loadClass(StateTrackableDelegate$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StateTrackableDelegate$1);
	});
	return class$;
}

$Class* StateTrackableDelegate$1::class$ = nullptr;

	} // java2d
} // sun