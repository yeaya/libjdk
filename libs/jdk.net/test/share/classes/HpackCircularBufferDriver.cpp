#include <HpackCircularBufferDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HpackCircularBufferDriver::init$() {
}

HpackCircularBufferDriver::HpackCircularBufferDriver() {
}

$Class* HpackCircularBufferDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HpackCircularBufferDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HpackCircularBufferDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HpackCircularBufferDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HpackCircularBufferDriver);
	});
	return class$;
}

$Class* HpackCircularBufferDriver::class$ = nullptr;