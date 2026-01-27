#include <sun/util/resources/ext/CalendarData_ko.h>

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

$MethodInfo _CalendarData_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ko",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ko_MethodInfo_
};

$Object* allocate$CalendarData_ko($Class* clazz) {
	return $of($alloc(CalendarData_ko));
}

void CalendarData_ko::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ko::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_ko::CalendarData_ko() {
}

$Class* CalendarData_ko::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ko, name, initialize, &_CalendarData_ko_ClassInfo_, allocate$CalendarData_ko);
	return class$;
}

$Class* CalendarData_ko::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun