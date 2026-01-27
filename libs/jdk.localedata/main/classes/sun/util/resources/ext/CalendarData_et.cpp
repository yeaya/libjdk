#include <sun/util/resources/ext/CalendarData_et.h>

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

$MethodInfo _CalendarData_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_et, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_et, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_et_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_et",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_et_MethodInfo_
};

$Object* allocate$CalendarData_et($Class* clazz) {
	return $of($alloc(CalendarData_et));
}

void CalendarData_et::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_et::getContents() {
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

CalendarData_et::CalendarData_et() {
}

$Class* CalendarData_et::load$($String* name, bool initialize) {
	$loadClass(CalendarData_et, name, initialize, &_CalendarData_et_ClassInfo_, allocate$CalendarData_et);
	return class$;
}

$Class* CalendarData_et::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun