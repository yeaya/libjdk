#include <sun/util/resources/ext/CalendarData_de.h>

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

$MethodInfo _CalendarData_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_de",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_de_MethodInfo_
};

$Object* allocate$CalendarData_de($Class* clazz) {
	return $of($alloc(CalendarData_de));
}

void CalendarData_de::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_de::getContents() {
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

CalendarData_de::CalendarData_de() {
}

$Class* CalendarData_de::load$($String* name, bool initialize) {
	$loadClass(CalendarData_de, name, initialize, &_CalendarData_de_ClassInfo_, allocate$CalendarData_de);
	return class$;
}

$Class* CalendarData_de::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun