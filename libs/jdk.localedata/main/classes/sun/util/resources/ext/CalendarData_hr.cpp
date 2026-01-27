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

$MethodInfo _CalendarData_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_hr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_hr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_hr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_hr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_hr_MethodInfo_
};

$Object* allocate$CalendarData_hr($Class* clazz) {
	return $of($alloc(CalendarData_hr));
}

void CalendarData_hr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_hr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("firstDayOfWeek"_s),
		$of("2"_s)
	})});
}

CalendarData_hr::CalendarData_hr() {
}

$Class* CalendarData_hr::load$($String* name, bool initialize) {
	$loadClass(CalendarData_hr, name, initialize, &_CalendarData_hr_ClassInfo_, allocate$CalendarData_hr);
	return class$;
}

$Class* CalendarData_hr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun