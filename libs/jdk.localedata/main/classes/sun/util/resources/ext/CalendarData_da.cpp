#include <sun/util/resources/ext/CalendarData_da.h>
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

void CalendarData_da::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_da::getContents() {
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

CalendarData_da::CalendarData_da() {
}

$Class* CalendarData_da::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_da, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_da, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_da",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_da, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_da);
	});
	return class$;
}

$Class* CalendarData_da::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun