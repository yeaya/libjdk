#include <sun/util/resources/ext/CalendarData_lt.h>

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

$MethodInfo _CalendarData_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_lt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_lt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_lt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_lt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_lt_MethodInfo_
};

$Object* allocate$CalendarData_lt($Class* clazz) {
	return $of($alloc(CalendarData_lt));
}

void CalendarData_lt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_lt::getContents() {
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

CalendarData_lt::CalendarData_lt() {
}

$Class* CalendarData_lt::load$($String* name, bool initialize) {
	$loadClass(CalendarData_lt, name, initialize, &_CalendarData_lt_ClassInfo_, allocate$CalendarData_lt);
	return class$;
}

$Class* CalendarData_lt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun