#include <sun/util/resources/ext/CalendarData_bg.h>

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

$MethodInfo _CalendarData_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_bg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_bg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_bg_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_bg",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_bg_MethodInfo_
};

$Object* allocate$CalendarData_bg($Class* clazz) {
	return $of($alloc(CalendarData_bg));
}

void CalendarData_bg::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_bg::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_bg::CalendarData_bg() {
}

$Class* CalendarData_bg::load$($String* name, bool initialize) {
	$loadClass(CalendarData_bg, name, initialize, &_CalendarData_bg_ClassInfo_, allocate$CalendarData_bg);
	return class$;
}

$Class* CalendarData_bg::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun