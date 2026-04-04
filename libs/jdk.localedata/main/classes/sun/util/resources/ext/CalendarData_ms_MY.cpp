#include <sun/util/resources/ext/CalendarData_ms_MY.h>
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

void CalendarData_ms_MY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ms_MY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"firstDayOfWeek"_s,
		"2"_s
	})});
}

CalendarData_ms_MY::CalendarData_ms_MY() {
}

$Class* CalendarData_ms_MY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ms_MY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ms_MY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_ms_MY",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_ms_MY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_ms_MY);
	});
	return class$;
}

$Class* CalendarData_ms_MY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun