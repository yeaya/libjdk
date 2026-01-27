#include <sun/util/resources/ext/CalendarData_he.h>

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

$MethodInfo _CalendarData_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_he, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_he, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_he_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_he",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_he_MethodInfo_
};

$Object* allocate$CalendarData_he($Class* clazz) {
	return $of($alloc(CalendarData_he));
}

void CalendarData_he::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_he::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_he::CalendarData_he() {
}

$Class* CalendarData_he::load$($String* name, bool initialize) {
	$loadClass(CalendarData_he, name, initialize, &_CalendarData_he_ClassInfo_, allocate$CalendarData_he);
	return class$;
}

$Class* CalendarData_he::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun