#include <sun/util/resources/ext/CalendarData_ar.h>

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

$MethodInfo _CalendarData_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_ar_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ar",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ar_MethodInfo_
};

$Object* allocate$CalendarData_ar($Class* clazz) {
	return $of($alloc(CalendarData_ar));
}

void CalendarData_ar::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("7"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1"_s)
		})
	});
}

CalendarData_ar::CalendarData_ar() {
}

$Class* CalendarData_ar::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ar, name, initialize, &_CalendarData_ar_ClassInfo_, allocate$CalendarData_ar);
	return class$;
}

$Class* CalendarData_ar::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun