#include <sun/util/resources/ext/CalendarData_it.h>

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

$MethodInfo _CalendarData_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_it",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_it_MethodInfo_
};

$Object* allocate$CalendarData_it($Class* clazz) {
	return $of($alloc(CalendarData_it));
}

void CalendarData_it::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_it::getContents() {
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

CalendarData_it::CalendarData_it() {
}

$Class* CalendarData_it::load$($String* name, bool initialize) {
	$loadClass(CalendarData_it, name, initialize, &_CalendarData_it_ClassInfo_, allocate$CalendarData_it);
	return class$;
}

$Class* CalendarData_it::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun