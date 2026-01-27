#include <sun/util/resources/ext/CalendarData_ja.h>

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

$MethodInfo _CalendarData_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_ja",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_ja_MethodInfo_
};

$Object* allocate$CalendarData_ja($Class* clazz) {
	return $of($alloc(CalendarData_ja));
}

void CalendarData_ja::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_ja::getContents() {
	return $new($ObjectArray2, 0);
}

CalendarData_ja::CalendarData_ja() {
}

$Class* CalendarData_ja::load$($String* name, bool initialize) {
	$loadClass(CalendarData_ja, name, initialize, &_CalendarData_ja_ClassInfo_, allocate$CalendarData_ja);
	return class$;
}

$Class* CalendarData_ja::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun