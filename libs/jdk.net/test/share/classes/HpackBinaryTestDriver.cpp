#include <HpackBinaryTestDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HpackBinaryTestDriver::init$() {
}

HpackBinaryTestDriver::HpackBinaryTestDriver() {
}

$Class* HpackBinaryTestDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HpackBinaryTestDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HpackBinaryTestDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HpackBinaryTestDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HpackBinaryTestDriver);
	});
	return class$;
}

$Class* HpackBinaryTestDriver::class$ = nullptr;