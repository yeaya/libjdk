#include <sun/util/resources/ext/CalendarData_es_ES.h>

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

$MethodInfo _CalendarData_es_ES_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_es_ES, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_es_ES, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_es_ES_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_es_ES",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_es_ES_MethodInfo_
};

$Object* allocate$CalendarData_es_ES($Class* clazz) {
	return $of($alloc(CalendarData_es_ES));
}

void CalendarData_es_ES::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_es_ES::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("4"_s)
		})
	});
}

CalendarData_es_ES::CalendarData_es_ES() {
}

$Class* CalendarData_es_ES::load$($String* name, bool initialize) {
	$loadClass(CalendarData_es_ES, name, initialize, &_CalendarData_es_ES_ClassInfo_, allocate$CalendarData_es_ES);
	return class$;
}

$Class* CalendarData_es_ES::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun