#include <sun/util/resources/ext/CalendarData_hu.h>

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

$MethodInfo _CalendarData_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_hu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_hu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_hu_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_hu",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_hu_MethodInfo_
};

$Object* allocate$CalendarData_hu($Class* clazz) {
	return $of($alloc(CalendarData_hu));
}

void CalendarData_hu::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_hu::getContents() {
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

CalendarData_hu::CalendarData_hu() {
}

$Class* CalendarData_hu::load$($String* name, bool initialize) {
	$loadClass(CalendarData_hu, name, initialize, &_CalendarData_hu_ClassInfo_, allocate$CalendarData_hu);
	return class$;
}

$Class* CalendarData_hu::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun