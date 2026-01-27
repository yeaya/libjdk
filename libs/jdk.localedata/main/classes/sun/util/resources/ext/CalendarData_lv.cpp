#include <sun/util/resources/ext/CalendarData_lv.h>

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

$MethodInfo _CalendarData_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_lv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_lv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_lv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_lv",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_lv_MethodInfo_
};

$Object* allocate$CalendarData_lv($Class* clazz) {
	return $of($alloc(CalendarData_lv));
}

void CalendarData_lv::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_lv::getContents() {
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

CalendarData_lv::CalendarData_lv() {
}

$Class* CalendarData_lv::load$($String* name, bool initialize) {
	$loadClass(CalendarData_lv, name, initialize, &_CalendarData_lv_ClassInfo_, allocate$CalendarData_lv);
	return class$;
}

$Class* CalendarData_lv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun