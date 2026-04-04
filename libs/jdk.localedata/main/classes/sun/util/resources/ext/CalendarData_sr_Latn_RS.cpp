#include <sun/util/resources/ext/CalendarData_sr_Latn_RS.h>
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

void CalendarData_sr_Latn_RS::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sr_Latn_RS::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"minimalDaysInFirstWeek"_s,
		"4"_s
	})});
}

CalendarData_sr_Latn_RS::CalendarData_sr_Latn_RS() {
}

$Class* CalendarData_sr_Latn_RS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sr_Latn_RS, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sr_Latn_RS, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_sr_Latn_RS",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_sr_Latn_RS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_sr_Latn_RS);
	});
	return class$;
}

$Class* CalendarData_sr_Latn_RS::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun