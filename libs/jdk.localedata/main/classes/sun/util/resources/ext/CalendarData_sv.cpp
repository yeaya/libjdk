#include <sun/util/resources/ext/CalendarData_sv.h>

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

$MethodInfo _CalendarData_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sv",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sv_MethodInfo_
};

$Object* allocate$CalendarData_sv($Class* clazz) {
	return $of($alloc(CalendarData_sv));
}

void CalendarData_sv::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sv::getContents() {
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

CalendarData_sv::CalendarData_sv() {
}

$Class* CalendarData_sv::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sv, name, initialize, &_CalendarData_sv_ClassInfo_, allocate$CalendarData_sv);
	return class$;
}

$Class* CalendarData_sv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun