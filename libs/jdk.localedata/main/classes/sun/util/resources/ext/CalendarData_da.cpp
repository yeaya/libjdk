#include <sun/util/resources/ext/CalendarData_da.h>

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

$MethodInfo _CalendarData_da_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_da, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_da, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_da_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_da",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_da_MethodInfo_
};

$Object* allocate$CalendarData_da($Class* clazz) {
	return $of($alloc(CalendarData_da));
}

void CalendarData_da::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_da::getContents() {
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

CalendarData_da::CalendarData_da() {
}

$Class* CalendarData_da::load$($String* name, bool initialize) {
	$loadClass(CalendarData_da, name, initialize, &_CalendarData_da_ClassInfo_, allocate$CalendarData_da);
	return class$;
}

$Class* CalendarData_da::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun