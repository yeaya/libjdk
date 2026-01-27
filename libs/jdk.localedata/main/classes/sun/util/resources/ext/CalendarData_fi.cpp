#include <sun/util/resources/ext/CalendarData_fi.h>

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

$MethodInfo _CalendarData_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_fi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_fi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_fi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_fi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_fi_MethodInfo_
};

$Object* allocate$CalendarData_fi($Class* clazz) {
	return $of($alloc(CalendarData_fi));
}

void CalendarData_fi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_fi::getContents() {
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

CalendarData_fi::CalendarData_fi() {
}

$Class* CalendarData_fi::load$($String* name, bool initialize) {
	$loadClass(CalendarData_fi, name, initialize, &_CalendarData_fi_ClassInfo_, allocate$CalendarData_fi);
	return class$;
}

$Class* CalendarData_fi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun