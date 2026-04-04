#include <HpackDecoderDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HpackDecoderDriver::init$() {
}

HpackDecoderDriver::HpackDecoderDriver() {
}

$Class* HpackDecoderDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HpackDecoderDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HpackDecoderDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HpackDecoderDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HpackDecoderDriver);
	});
	return class$;
}

$Class* HpackDecoderDriver::class$ = nullptr;