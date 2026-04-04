#include <sun/util/resources/ext/CalendarData_ca.h>
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

void CalendarData_ca::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ca::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"firstDayOfWeek"_s,
			"2"_s
		}),
		$$new($ObjectArray, {
			"minimalDaysInFirstWeek"_s,
			"4"_s
		})
	});
}

CalendarData_ca::CalendarData_ca() {
}

$Class* CalendarData_ca::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ca, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ca, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_ca",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_ca, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_ca);
	});
	return class$;
}

$Class* CalendarData_ca::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun