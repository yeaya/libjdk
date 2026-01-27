#include <sun/util/resources/ext/CalendarData_is.h>

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

$MethodInfo _CalendarData_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_is, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_is, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_is_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_is",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_is_MethodInfo_
};

$Object* allocate$CalendarData_is($Class* clazz) {
	return $of($alloc(CalendarData_is));
}

void CalendarData_is::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_is::getContents() {
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

CalendarData_is::CalendarData_is() {
}

$Class* CalendarData_is::load$($String* name, bool initialize) {
	$loadClass(CalendarData_is, name, initialize, &_CalendarData_is_ClassInfo_, allocate$CalendarData_is);
	return class$;
}

$Class* CalendarData_is::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun