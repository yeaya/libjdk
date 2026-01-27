#include <sun/util/resources/ext/CalendarData_sk.h>

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

$MethodInfo _CalendarData_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_sk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sk",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sk_MethodInfo_
};

$Object* allocate$CalendarData_sk($Class* clazz) {
	return $of($alloc(CalendarData_sk));
}

void CalendarData_sk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sk::getContents() {
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

CalendarData_sk::CalendarData_sk() {
}

$Class* CalendarData_sk::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sk, name, initialize, &_CalendarData_sk_ClassInfo_, allocate$CalendarData_sk);
	return class$;
}

$Class* CalendarData_sk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun