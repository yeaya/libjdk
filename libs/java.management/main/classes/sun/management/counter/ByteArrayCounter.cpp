#include <sun/management/counter/ByteArrayCounter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$Class* ByteArrayCounter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"byteArrayValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteArrayCounter, byteArrayValue, $bytes*)},
		{"byteAt", "(I)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteArrayCounter, byteAt, int8_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.counter.ByteArrayCounter",
		nullptr,
		"sun.management.counter.Counter",
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteArrayCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayCounter);
	});
	return class$;
}

$Class* ByteArrayCounter::class$ = nullptr;

		} // counter
	} // management
} // sun