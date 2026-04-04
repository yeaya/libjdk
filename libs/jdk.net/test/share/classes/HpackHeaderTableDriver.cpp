#include <HpackHeaderTableDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HpackHeaderTableDriver::init$() {
}

HpackHeaderTableDriver::HpackHeaderTableDriver() {
}

$Class* HpackHeaderTableDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HpackHeaderTableDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HpackHeaderTableDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HpackHeaderTableDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HpackHeaderTableDriver);
	});
	return class$;
}

$Class* HpackHeaderTableDriver::class$ = nullptr;