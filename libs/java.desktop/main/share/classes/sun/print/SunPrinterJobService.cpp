#include <sun/print/SunPrinterJobService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$Class* SunPrinterJobService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"usesClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(SunPrinterJobService, usesClass, bool, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.print.SunPrinterJobService",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SunPrinterJobService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunPrinterJobService);
	});
	return class$;
}

$Class* SunPrinterJobService::class$ = nullptr;

	} // print
} // sun