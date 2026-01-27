#include <sun/util/resources/ext/CalendarData_nl.h>

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

$MethodInfo _CalendarData_nl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_nl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_nl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_nl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_nl",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_nl_MethodInfo_
};

$Object* allocate$CalendarData_nl($Class* clazz) {
	return $of($alloc(CalendarData_nl));
}

void CalendarData_nl::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_nl::getContents() {
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

CalendarData_nl::CalendarData_nl() {
}

$Class* CalendarData_nl::load$($String* name, bool initialize) {
	$loadClass(CalendarData_nl, name, initialize, &_CalendarData_nl_ClassInfo_, allocate$CalendarData_nl);
	return class$;
}

$Class* CalendarData_nl::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun