#include <sun/java2d/SurfaceDataProxy$CountdownTracker.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

void SurfaceDataProxy$CountdownTracker::init$(int32_t threshold) {
	this->countdown = threshold;
}

bool SurfaceDataProxy$CountdownTracker::isCurrent() {
	$synchronized(this) {
		return (--this->countdown >= 0);
	}
}

SurfaceDataProxy$CountdownTracker::SurfaceDataProxy$CountdownTracker() {
}

$Class* SurfaceDataProxy$CountdownTracker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"countdown", "I", nullptr, $PRIVATE, $field(SurfaceDataProxy$CountdownTracker, countdown)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(SurfaceDataProxy$CountdownTracker, init$, void, int32_t)},
		{"isCurrent", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SurfaceDataProxy$CountdownTracker, isCurrent, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.SurfaceDataProxy$CountdownTracker", "sun.java2d.SurfaceDataProxy", "CountdownTracker", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.SurfaceDataProxy$CountdownTracker",
		"java.lang.Object",
		"sun.java2d.StateTracker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.SurfaceDataProxy"
	};
	$loadClass(SurfaceDataProxy$CountdownTracker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SurfaceDataProxy$CountdownTracker);
	});
	return class$;
}

$Class* SurfaceDataProxy$CountdownTracker::class$ = nullptr;

	} // java2d
} // sun