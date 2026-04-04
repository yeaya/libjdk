#include <sun/util/resources/ext/CalendarData_el_CY.h>
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

void CalendarData_el_CY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_el_CY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"minimalDaysInFirstWeek"_s,
		"1"_s
	})});
}

CalendarData_el_CY::CalendarData_el_CY() {
}

$Class* CalendarData_el_CY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_el_CY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_el_CY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_el_CY",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_el_CY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_el_CY);
	});
	return class$;
}

$Class* CalendarData_el_CY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun