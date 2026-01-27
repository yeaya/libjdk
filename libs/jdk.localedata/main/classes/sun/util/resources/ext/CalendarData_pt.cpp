#include <sun/util/resources/ext/CalendarData_pt.h>

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

$MethodInfo _CalendarData_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_pt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_pt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_pt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_pt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_pt_MethodInfo_
};

$Object* allocate$CalendarData_pt($Class* clazz) {
	return $of($alloc(CalendarData_pt));
}

void CalendarData_pt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_pt::getContents() {
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

CalendarData_pt::CalendarData_pt() {
}

$Class* CalendarData_pt::load$($String* name, bool initialize) {
	$loadClass(CalendarData_pt, name, initialize, &_CalendarData_pt_ClassInfo_, allocate$CalendarData_pt);
	return class$;
}

$Class* CalendarData_pt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun