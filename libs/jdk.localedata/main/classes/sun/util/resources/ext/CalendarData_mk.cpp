#include <sun/util/resources/ext/CalendarData_mk.h>

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

$MethodInfo _CalendarData_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_mk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_mk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_mk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_mk",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_mk_MethodInfo_
};

$Object* allocate$CalendarData_mk($Class* clazz) {
	return $of($alloc(CalendarData_mk));
}

void CalendarData_mk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_mk::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_mk::CalendarData_mk() {
}

$Class* CalendarData_mk::load$($String* name, bool initialize) {
	$loadClass(CalendarData_mk, name, initialize, &_CalendarData_mk_ClassInfo_, allocate$CalendarData_mk);
	return class$;
}

$Class* CalendarData_mk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun