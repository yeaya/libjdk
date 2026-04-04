#include <sun/util/resources/ext/CalendarData_no.h>
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

void CalendarData_no::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_no::getContents() {
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

CalendarData_no::CalendarData_no() {
}

$Class* CalendarData_no::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_no, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_no, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_no",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_no, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_no);
	});
	return class$;
}

$Class* CalendarData_no::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun