#include <TckDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TckDriver::init$() {
}

TckDriver::TckDriver() {
}

$Class* TckDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TckDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TckDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TckDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TckDriver);
	});
	return class$;
}

$Class* TckDriver::class$ = nullptr;