#include <sun/util/resources/ext/CalendarData_mt.h>

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

$MethodInfo _CalendarData_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_mt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_mt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_mt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_mt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_mt_MethodInfo_
};

$Object* allocate$CalendarData_mt($Class* clazz) {
	return $of($alloc(CalendarData_mt));
}

void CalendarData_mt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_mt::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("minimalDaysInFirstWeek"_s),
		$of("4"_s)
	})});
}

CalendarData_mt::CalendarData_mt() {
}

$Class* CalendarData_mt::load$($String* name, bool initialize) {
	$loadClass(CalendarData_mt, name, initialize, &_CalendarData_mt_ClassInfo_, allocate$CalendarData_mt);
	return class$;
}

$Class* CalendarData_mt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun