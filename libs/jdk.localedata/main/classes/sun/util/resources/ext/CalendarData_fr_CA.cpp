#include <sun/util/resources/ext/CalendarData_fr_CA.h>

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

$MethodInfo _CalendarData_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_fr_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_fr_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_fr_CA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_fr_CA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_fr_CA_MethodInfo_
};

$Object* allocate$CalendarData_fr_CA($Class* clazz) {
	return $of($alloc(CalendarData_fr_CA));
}

void CalendarData_fr_CA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("1"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1"_s)
		})
	});
}

CalendarData_fr_CA::CalendarData_fr_CA() {
}

$Class* CalendarData_fr_CA::load$($String* name, bool initialize) {
	$loadClass(CalendarData_fr_CA, name, initialize, &_CalendarData_fr_CA_ClassInfo_, allocate$CalendarData_fr_CA);
	return class$;
}

$Class* CalendarData_fr_CA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun