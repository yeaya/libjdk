#include <sun/util/resources/ext/CalendarData_el.h>

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

$MethodInfo _CalendarData_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_el_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_el",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_el_MethodInfo_
};

$Object* allocate$CalendarData_el($Class* clazz) {
	return $of($alloc(CalendarData_el));
}

void CalendarData_el::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_el::getContents() {
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

CalendarData_el::CalendarData_el() {
}

$Class* CalendarData_el::load$($String* name, bool initialize) {
	$loadClass(CalendarData_el, name, initialize, &_CalendarData_el_ClassInfo_, allocate$CalendarData_el);
	return class$;
}

$Class* CalendarData_el::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun