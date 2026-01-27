#include <sun/util/resources/ext/CalendarData_zh.h>

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

$MethodInfo _CalendarData_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_zh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_zh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_zh_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_zh",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_zh_MethodInfo_
};

$Object* allocate$CalendarData_zh($Class* clazz) {
	return $of($alloc(CalendarData_zh));
}

void CalendarData_zh::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_zh::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_zh::CalendarData_zh() {
}

$Class* CalendarData_zh::load$($String* name, bool initialize) {
	$loadClass(CalendarData_zh, name, initialize, &_CalendarData_zh_ClassInfo_, allocate$CalendarData_zh);
	return class$;
}

$Class* CalendarData_zh::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun