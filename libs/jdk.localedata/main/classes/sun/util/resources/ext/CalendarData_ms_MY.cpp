#include <sun/util/resources/ext/CalendarData_ms_MY.h>

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

$MethodInfo _CalendarData_ms_MY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ms_MY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ms_MY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_ms_MY_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ms_MY",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ms_MY_MethodInfo_
};

$Object* allocate$CalendarData_ms_MY($Class* clazz) {
	return $of($alloc(CalendarData_ms_MY));
}

void CalendarData_ms_MY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ms_MY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("firstDayOfWeek"_s),
		$of("2"_s)
	})});
}

CalendarData_ms_MY::CalendarData_ms_MY() {
}

$Class* CalendarData_ms_MY::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ms_MY, name, initialize, &_CalendarData_ms_MY_ClassInfo_, allocate$CalendarData_ms_MY);
	return class$;
}

$Class* CalendarData_ms_MY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun