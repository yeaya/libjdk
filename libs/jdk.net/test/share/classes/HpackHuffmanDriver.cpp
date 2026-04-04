#include <HpackHuffmanDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HpackHuffmanDriver::init$() {
}

HpackHuffmanDriver::HpackHuffmanDriver() {
}

$Class* HpackHuffmanDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HpackHuffmanDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HpackHuffmanDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HpackHuffmanDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HpackHuffmanDriver);
	});
	return class$;
}

$Class* HpackHuffmanDriver::class$ = nullptr;