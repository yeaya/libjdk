#include <ReaderDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ReaderDriver::init$() {
}

ReaderDriver::ReaderDriver() {
}

$Class* ReaderDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReaderDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"ReaderDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReaderDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReaderDriver);
	});
	return class$;
}

$Class* ReaderDriver::class$ = nullptr;