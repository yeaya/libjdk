#include <sun/util/resources/ext/CalendarData_es.h>

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

$MethodInfo _CalendarData_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_es",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_es_MethodInfo_
};

$Object* allocate$CalendarData_es($Class* clazz) {
	return $of($alloc(CalendarData_es));
}

void CalendarData_es::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("firstDayOfWeek"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("minimalDaysInFirstWeek"_s),
			$of("1"_s)
		})
	});
}

CalendarData_es::CalendarData_es() {
}

$Class* CalendarData_es::load$($String* name, bool initialize) {
	$loadClass(CalendarData_es, name, initialize, &_CalendarData_es_ClassInfo_, allocate$CalendarData_es);
	return class$;
}

$Class* CalendarData_es::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun