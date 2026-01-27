#include <sun/util/resources/ext/CalendarData_el_CY.h>

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

$MethodInfo _CalendarData_el_CY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_el_CY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_el_CY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_el_CY_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_el_CY",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_el_CY_MethodInfo_
};

$Object* allocate$CalendarData_el_CY($Class* clazz) {
	return $of($alloc(CalendarData_el_CY));
}

void CalendarData_el_CY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_el_CY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("minimalDaysInFirstWeek"_s),
		$of("1"_s)
	})});
}

CalendarData_el_CY::CalendarData_el_CY() {
}

$Class* CalendarData_el_CY::load$($String* name, bool initialize) {
	$loadClass(CalendarData_el_CY, name, initialize, &_CalendarData_el_CY_ClassInfo_, allocate$CalendarData_el_CY);
	return class$;
}

$Class* CalendarData_el_CY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun