#include <sun/util/resources/ext/CalendarData_vi.h>

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

$MethodInfo _CalendarData_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_vi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_vi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_vi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_vi",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_vi_MethodInfo_
};

$Object* allocate$CalendarData_vi($Class* clazz) {
	return $of($alloc(CalendarData_vi));
}

void CalendarData_vi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_vi::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_vi::CalendarData_vi() {
}

$Class* CalendarData_vi::load$($String* name, bool initialize) {
	$loadClass(CalendarData_vi, name, initialize, &_CalendarData_vi_ClassInfo_, allocate$CalendarData_vi);
	return class$;
}

$Class* CalendarData_vi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun