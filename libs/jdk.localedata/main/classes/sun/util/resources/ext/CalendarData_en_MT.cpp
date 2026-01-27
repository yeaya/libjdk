#include <sun/util/resources/ext/CalendarData_en_MT.h>

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

$MethodInfo _CalendarData_en_MT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_en_MT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_en_MT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_en_MT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_en_MT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_en_MT_MethodInfo_
};

$Object* allocate$CalendarData_en_MT($Class* clazz) {
	return $of($alloc(CalendarData_en_MT));
}

void CalendarData_en_MT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_en_MT::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("minimalDaysInFirstWeek"_s),
		$of("4"_s)
	})});
}

CalendarData_en_MT::CalendarData_en_MT() {
}

$Class* CalendarData_en_MT::load$($String* name, bool initialize) {
	$loadClass(CalendarData_en_MT, name, initialize, &_CalendarData_en_MT_ClassInfo_, allocate$CalendarData_en_MT);
	return class$;
}

$Class* CalendarData_en_MT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun