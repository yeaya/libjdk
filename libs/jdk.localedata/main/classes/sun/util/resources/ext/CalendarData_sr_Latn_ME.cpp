#include <sun/util/resources/ext/CalendarData_sr_Latn_ME.h>
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

void CalendarData_sr_Latn_ME::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sr_Latn_ME::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"minimalDaysInFirstWeek"_s,
		"4"_s
	})});
}

CalendarData_sr_Latn_ME::CalendarData_sr_Latn_ME() {
}

$Class* CalendarData_sr_Latn_ME::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sr_Latn_ME, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sr_Latn_ME, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_sr_Latn_ME",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_sr_Latn_ME, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_sr_Latn_ME);
	});
	return class$;
}

$Class* CalendarData_sr_Latn_ME::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun