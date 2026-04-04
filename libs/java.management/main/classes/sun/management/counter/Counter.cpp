#include <sun/management/counter/Counter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {

$Class* Counter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFlags", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getFlags, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getName, $String*)},
		{"getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getUnits, $Units*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getValue, $Object*)},
		{"getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getVariability, $Variability*)},
		{"getVectorLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, getVectorLength, int32_t)},
		{"isInternal", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, isInternal, bool)},
		{"isVector", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Counter, isVector, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.counter.Counter",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Counter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Counter);
	});
	return class$;
}

$Class* Counter::class$ = nullptr;

		} // counter
	} // management
} // sun