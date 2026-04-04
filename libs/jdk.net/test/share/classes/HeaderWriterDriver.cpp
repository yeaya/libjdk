#include <HeaderWriterDriver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeaderWriterDriver::init$() {
}

HeaderWriterDriver::HeaderWriterDriver() {
}

$Class* HeaderWriterDriver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeaderWriterDriver, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"HeaderWriterDriver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeaderWriterDriver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeaderWriterDriver);
	});
	return class$;
}

$Class* HeaderWriterDriver::class$ = nullptr;