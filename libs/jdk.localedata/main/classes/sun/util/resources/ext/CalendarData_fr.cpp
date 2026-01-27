#include <sun/util/resources/ext/CalendarData_fr.h>

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

$MethodInfo _CalendarData_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_fr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_fr_MethodInfo_
};

$Object* allocate$CalendarData_fr($Class* clazz) {
	return $of($alloc(CalendarData_fr));
}

void CalendarData_fr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_fr::getContents() {
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

CalendarData_fr::CalendarData_fr() {
}

$Class* CalendarData_fr::load$($String* name, bool initialize) {
	$loadClass(CalendarData_fr, name, initialize, &_CalendarData_fr_ClassInfo_, allocate$CalendarData_fr);
	return class$;
}

$Class* CalendarData_fr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun