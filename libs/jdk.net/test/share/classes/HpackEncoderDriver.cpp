#include <HpackEncoderDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HpackEncoderDriver::init$() {
}

HpackEncoderDriver::HpackEncoderDriver() {
}

$Class* HpackEncoderDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HpackEncoderDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HpackEncoderDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HpackEncoderDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HpackEncoderDriver);
	});
	return class$;
}

$Class* HpackEncoderDriver::class$ = nullptr;