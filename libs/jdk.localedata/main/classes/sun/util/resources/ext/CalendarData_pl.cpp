#include <sun/util/resources/ext/CalendarData_pl.h>

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

$MethodInfo _CalendarData_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_pl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_pl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_pl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_pl",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_pl_MethodInfo_
};

$Object* allocate$CalendarData_pl($Class* clazz) {
	return $of($alloc(CalendarData_pl));
}

void CalendarData_pl::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_pl::getContents() {
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

CalendarData_pl::CalendarData_pl() {
}

$Class* CalendarData_pl::load$($String* name, bool initialize) {
	$loadClass(CalendarData_pl, name, initialize, &_CalendarData_pl_ClassInfo_, allocate$CalendarData_pl);
	return class$;
}

$Class* CalendarData_pl::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun