#include <sun/util/resources/ext/CalendarData_th.h>

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

$MethodInfo _CalendarData_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_th_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_th",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_th_MethodInfo_
};

$Object* allocate$CalendarData_th($Class* clazz) {
	return $of($alloc(CalendarData_th));
}

void CalendarData_th::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_th::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_th::CalendarData_th() {
}

$Class* CalendarData_th::load$($String* name, bool initialize) {
	$loadClass(CalendarData_th, name, initialize, &_CalendarData_th_ClassInfo_, allocate$CalendarData_th);
	return class$;
}

$Class* CalendarData_th::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun