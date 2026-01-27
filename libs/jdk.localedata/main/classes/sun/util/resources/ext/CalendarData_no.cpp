#include <sun/util/resources/ext/CalendarData_no.h>

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

$MethodInfo _CalendarData_no_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_no, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_no, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_no_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_no",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_no_MethodInfo_
};

$Object* allocate$CalendarData_no($Class* clazz) {
	return $of($alloc(CalendarData_no));
}

void CalendarData_no::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_no::getContents() {
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

CalendarData_no::CalendarData_no() {
}

$Class* CalendarData_no::load$($String* name, bool initialize) {
	$loadClass(CalendarData_no, name, initialize, &_CalendarData_no_ClassInfo_, allocate$CalendarData_no);
	return class$;
}

$Class* CalendarData_no::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun