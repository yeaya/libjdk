#include <sun/lwawt/macosx/CPlatformResponder$DeltaAccumulator.h>
#include <java/lang/Math.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/NSEvent.h>
#include <jcpp.h>

#undef SCROLL_PHASE_BEGAN
#undef SCROLL_PHASE_ENDED
#undef SCROLL_PHASE_MOMENTUM_BEGAN
#undef SCROLL_PHASE_UNSUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NSEvent = ::sun::lwawt::macosx::NSEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPlatformResponder$DeltaAccumulator::init$() {
}

int32_t CPlatformResponder$DeltaAccumulator::getRoundedDelta(double delta, int32_t scrollPhase) {
	int32_t roundDelta = (int32_t)$Math::round(delta);
	if (scrollPhase == $NSEvent::SCROLL_PHASE_UNSUPPORTED) {
		if (roundDelta == 0 && delta != 0) {
			roundDelta = delta > 0 ? 1 : -1;
		}
	} else {
		if (scrollPhase == $NSEvent::SCROLL_PHASE_BEGAN) {
			this->accumulatedDelta = 0;
			this->accumulate = true;
		} else if (scrollPhase == $NSEvent::SCROLL_PHASE_MOMENTUM_BEGAN) {
			this->accumulate = true;
		}
		if (this->accumulate) {
			this->accumulatedDelta += delta;
			roundDelta = (int32_t)$Math::round(this->accumulatedDelta);
			this->accumulatedDelta -= roundDelta;
			if (scrollPhase == $NSEvent::SCROLL_PHASE_ENDED) {
				this->accumulate = false;
			}
		}
	}
	return roundDelta;
}

CPlatformResponder$DeltaAccumulator::CPlatformResponder$DeltaAccumulator() {
}

$Class* CPlatformResponder$DeltaAccumulator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accumulatedDelta", "D", nullptr, 0, $field(CPlatformResponder$DeltaAccumulator, accumulatedDelta)},
		{"accumulate", "Z", nullptr, 0, $field(CPlatformResponder$DeltaAccumulator, accumulate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CPlatformResponder$DeltaAccumulator, init$, void)},
		{"getRoundedDelta", "(DI)I", nullptr, 0, $virtualMethod(CPlatformResponder$DeltaAccumulator, getRoundedDelta, int32_t, double, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator", "sun.lwawt.macosx.CPlatformResponder", "DeltaAccumulator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformResponder$DeltaAccumulator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPlatformResponder"
	};
	$loadClass(CPlatformResponder$DeltaAccumulator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformResponder$DeltaAccumulator);
	});
	return class$;
}

$Class* CPlatformResponder$DeltaAccumulator::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun