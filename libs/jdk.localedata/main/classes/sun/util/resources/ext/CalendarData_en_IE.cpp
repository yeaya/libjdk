#include <sun/util/resources/ext/CalendarData_en_IE.h>

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

$MethodInfo _CalendarData_en_IE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_en_IE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_en_IE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_en_IE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_en_IE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_en_IE_MethodInfo_
};

$Object* allocate$CalendarData_en_IE($Class* clazz) {
	return $of($alloc(CalendarData_en_IE));
}

void CalendarData_en_IE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_en_IE::getContents() {
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

CalendarData_en_IE::CalendarData_en_IE() {
}

$Class* CalendarData_en_IE::load$($String* name, bool initialize) {
	$loadClass(CalendarData_en_IE, name, initialize, &_CalendarData_en_IE_ClassInfo_, allocate$CalendarData_en_IE);
	return class$;
}

$Class* CalendarData_en_IE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun