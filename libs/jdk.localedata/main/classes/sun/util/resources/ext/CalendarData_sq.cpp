#include <sun/util/resources/ext/CalendarData_sq.h>

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

$MethodInfo _CalendarData_sq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_sq, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_sq, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_sq_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_sq",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_sq_MethodInfo_
};

$Object* allocate$CalendarData_sq($Class* clazz) {
	return $of($alloc(CalendarData_sq));
}

void CalendarData_sq::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_sq::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_sq::CalendarData_sq() {
}

$Class* CalendarData_sq::load$($String* name, bool initialize) {
	$loadClass(CalendarData_sq, name, initialize, &_CalendarData_sq_ClassInfo_, allocate$CalendarData_sq);
	return class$;
}

$Class* CalendarData_sq::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun