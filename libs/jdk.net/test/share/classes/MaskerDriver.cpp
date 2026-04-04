#include <MaskerDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MaskerDriver::init$() {
}

MaskerDriver::MaskerDriver() {
}

$Class* MaskerDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MaskerDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"MaskerDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MaskerDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaskerDriver);
	});
	return class$;
}

$Class* MaskerDriver::class$ = nullptr;