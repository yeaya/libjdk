#include <sun/management/counter/StringCounter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {

$Class* StringCounter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringCounter, stringValue, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.counter.StringCounter",
		nullptr,
		"sun.management.counter.Counter",
		nullptr,
		methodInfos$$
	};
	$loadClass(StringCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringCounter);
	});
	return class$;
}

$Class* StringCounter::class$ = nullptr;

		} // counter
	} // management
} // sun