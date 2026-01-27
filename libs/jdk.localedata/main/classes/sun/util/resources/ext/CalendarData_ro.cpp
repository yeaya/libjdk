#include <sun/util/resources/ext/CalendarData_ro.h>

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

$MethodInfo _CalendarData_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ro, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ro, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_ro_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ro",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ro_MethodInfo_
};

$Object* allocate$CalendarData_ro($Class* clazz) {
	return $of($alloc(CalendarData_ro));
}

void CalendarData_ro::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ro::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1"_s)
		})
	});
}

CalendarData_ro::CalendarData_ro() {
}

$Class* CalendarData_ro::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ro, name, initialize, &_CalendarData_ro_ClassInfo_, allocate$CalendarData_ro);
	return class$;
}

$Class* CalendarData_ro::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun