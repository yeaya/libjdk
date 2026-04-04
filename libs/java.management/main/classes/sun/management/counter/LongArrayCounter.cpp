#include <sun/management/counter/LongArrayCounter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$Class* LongArrayCounter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"longArrayValue", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongArrayCounter, longArrayValue, $longs*)},
		{"longAt", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongArrayCounter, longAt, int64_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.counter.LongArrayCounter",
		nullptr,
		"sun.management.counter.Counter",
		nullptr,
		methodInfos$$
	};
	$loadClass(LongArrayCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongArrayCounter);
	});
	return class$;
}

$Class* LongArrayCounter::class$ = nullptr;

		} // counter
	} // management
} // sun