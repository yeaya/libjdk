#include <sun/util/resources/ext/CalendarData_pt_PT.h>

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

$MethodInfo _CalendarData_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_pt_PT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_pt_PT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_pt_PT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_pt_PT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_pt_PT_MethodInfo_
};

$Object* allocate$CalendarData_pt_PT($Class* clazz) {
	return $of($alloc(CalendarData_pt_PT));
}

void CalendarData_pt_PT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_pt_PT::getContents() {
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

CalendarData_pt_PT::CalendarData_pt_PT() {
}

$Class* CalendarData_pt_PT::load$($String* name, bool initialize) {
	$loadClass(CalendarData_pt_PT, name, initialize, &_CalendarData_pt_PT_ClassInfo_, allocate$CalendarData_pt_PT);
	return class$;
}

$Class* CalendarData_pt_PT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun