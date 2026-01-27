#include <sun/util/resources/ext/CalendarData_hi.h>

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

$MethodInfo _CalendarData_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_hi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_hi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_hi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_hi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_hi_MethodInfo_
};

$Object* allocate$CalendarData_hi($Class* clazz) {
	return $of($alloc(CalendarData_hi));
}

void CalendarData_hi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_hi::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_hi::CalendarData_hi() {
}

$Class* CalendarData_hi::load$($String* name, bool initialize) {
	$loadClass(CalendarData_hi, name, initialize, &_CalendarData_hi_ClassInfo_, allocate$CalendarData_hi);
	return class$;
}

$Class* CalendarData_hi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun