#include <sun/util/resources/ext/CalendarData_ca.h>

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

$MethodInfo _CalendarData_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_ca_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ca",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ca_MethodInfo_
};

$Object* allocate$CalendarData_ca($Class* clazz) {
	return $of($alloc(CalendarData_ca));
}

void CalendarData_ca::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ca::getContents() {
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

CalendarData_ca::CalendarData_ca() {
}

$Class* CalendarData_ca::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ca, name, initialize, &_CalendarData_ca_ClassInfo_, allocate$CalendarData_ca);
	return class$;
}

$Class* CalendarData_ca::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun