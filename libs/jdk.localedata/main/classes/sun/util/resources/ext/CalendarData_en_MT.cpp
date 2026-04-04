#include <sun/util/resources/ext/CalendarData_en_MT.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void CalendarData_en_MT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_en_MT::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"minimalDaysInFirstWeek"_s,
		"4"_s
	})});
}

CalendarData_en_MT::CalendarData_en_MT() {
}

$Class* CalendarData_en_MT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_en_MT, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_en_MT, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_en_MT",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_en_MT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_en_MT);
	});
	return class$;
}

$Class* CalendarData_en_MT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun