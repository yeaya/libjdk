#include <sun/util/resources/ext/CalendarData_hr.h>
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

void CalendarData_hr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_hr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"firstDayOfWeek"_s,
		"2"_s
	})});
}

CalendarData_hr::CalendarData_hr() {
}

$Class* CalendarData_hr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_hr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_hr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_hr",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_hr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_hr);
	});
	return class$;
}

$Class* CalendarData_hr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun