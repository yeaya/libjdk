#include <sun/util/resources/ext/CalendarData_sr_Latn_ME.h>

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

$MethodInfo _CalendarData_sr_Latn_ME_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sr_Latn_ME, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sr_Latn_ME, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_sr_Latn_ME_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sr_Latn_ME",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sr_Latn_ME_MethodInfo_
};

$Object* allocate$CalendarData_sr_Latn_ME($Class* clazz) {
	return $of($alloc(CalendarData_sr_Latn_ME));
}

void CalendarData_sr_Latn_ME::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sr_Latn_ME::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("minimalDaysInFirstWeek"_s),
		$of("4"_s)
	})});
}

CalendarData_sr_Latn_ME::CalendarData_sr_Latn_ME() {
}

$Class* CalendarData_sr_Latn_ME::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sr_Latn_ME, name, initialize, &_CalendarData_sr_Latn_ME_ClassInfo_, allocate$CalendarData_sr_Latn_ME);
	return class$;
}

$Class* CalendarData_sr_Latn_ME::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun