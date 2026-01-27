#include <sun/util/resources/ext/CalendarData_sr_Latn_BA.h>

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

$MethodInfo _CalendarData_sr_Latn_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sr_Latn_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sr_Latn_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_sr_Latn_BA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sr_Latn_BA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sr_Latn_BA_MethodInfo_
};

$Object* allocate$CalendarData_sr_Latn_BA($Class* clazz) {
	return $of($alloc(CalendarData_sr_Latn_BA));
}

void CalendarData_sr_Latn_BA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sr_Latn_BA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("minimalDaysInFirstWeek"_s),
		$of("4"_s)
	})});
}

CalendarData_sr_Latn_BA::CalendarData_sr_Latn_BA() {
}

$Class* CalendarData_sr_Latn_BA::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sr_Latn_BA, name, initialize, &_CalendarData_sr_Latn_BA_ClassInfo_, allocate$CalendarData_sr_Latn_BA);
	return class$;
}

$Class* CalendarData_sr_Latn_BA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun