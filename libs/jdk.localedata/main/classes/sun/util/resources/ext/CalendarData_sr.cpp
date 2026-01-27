#include <sun/util/resources/ext/CalendarData_sr.h>

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

$MethodInfo _CalendarData_sr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_sr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sr_MethodInfo_
};

$Object* allocate$CalendarData_sr($Class* clazz) {
	return $of($alloc(CalendarData_sr));
}

void CalendarData_sr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sr::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("firstDayOfWeek"_s),
		$of("2"_s)
	})});
}

CalendarData_sr::CalendarData_sr() {
}

$Class* CalendarData_sr::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sr, name, initialize, &_CalendarData_sr_ClassInfo_, allocate$CalendarData_sr);
	return class$;
}

$Class* CalendarData_sr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun