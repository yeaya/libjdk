#include <sun/util/resources/ext/CalendarData_es_US.h>

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

$MethodInfo _CalendarData_es_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_es_US, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_es_US, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_es_US_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_es_US",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_es_US_MethodInfo_
};

$Object* allocate$CalendarData_es_US($Class* clazz) {
	return $of($alloc(CalendarData_es_US));
}

void CalendarData_es_US::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_es_US::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("firstDayOfWeek"_s),
		$of("1"_s)
	})});
}

CalendarData_es_US::CalendarData_es_US() {
}

$Class* CalendarData_es_US::load$($String* name, bool initialize) {
	$loadClass(CalendarData_es_US, name, initialize, &_CalendarData_es_US_ClassInfo_, allocate$CalendarData_es_US);
	return class$;
}

$Class* CalendarData_es_US::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun