#include <sun/util/resources/ext/CalendarData_cs.h>

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

$MethodInfo _CalendarData_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_cs, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_cs, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_cs_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_cs",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_cs_MethodInfo_
};

$Object* allocate$CalendarData_cs($Class* clazz) {
	return $of($alloc(CalendarData_cs));
}

void CalendarData_cs::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_cs::getContents() {
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

CalendarData_cs::CalendarData_cs() {
}

$Class* CalendarData_cs::load$($String* name, bool initialize) {
	$loadClass(CalendarData_cs, name, initialize, &_CalendarData_cs_ClassInfo_, allocate$CalendarData_cs);
	return class$;
}

$Class* CalendarData_cs::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun