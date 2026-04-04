#include <sun/util/resources/ext/CalendarData_es_US.h>
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

void CalendarData_es_US::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_es_US::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"firstDayOfWeek"_s,
		"1"_s
	})});
}

CalendarData_es_US::CalendarData_es_US() {
}

$Class* CalendarData_es_US::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_es_US, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_es_US, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CalendarData_es_US",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CalendarData_es_US, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CalendarData_es_US);
	});
	return class$;
}

$Class* CalendarData_es_US::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun