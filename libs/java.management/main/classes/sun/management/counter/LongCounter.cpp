#include <sun/management/counter/LongCounter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$Class* LongCounter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"longValue", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongCounter, longValue, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.counter.LongCounter",
		nullptr,
		"sun.management.counter.Counter",
		nullptr,
		methodInfos$$
	};
	$loadClass(LongCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongCounter);
	});
	return class$;
}

$Class* LongCounter::class$ = nullptr;

		} // counter
	} // management
} // sun