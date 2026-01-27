#include <sun/util/resources/ext/CalendarData_id_ID.h>

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

$MethodInfo _CalendarData_id_ID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CalendarData_id_ID, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CalendarData_id_ID, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CalendarData_id_ID_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CalendarData_id_ID",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CalendarData_id_ID_MethodInfo_
};

$Object* allocate$CalendarData_id_ID($Class* clazz) {
	return $of($alloc(CalendarData_id_ID));
}

void CalendarData_id_ID::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CalendarData_id_ID::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("firstDayOfWeek"_s),
		$of("2"_s)
	})});
}

CalendarData_id_ID::CalendarData_id_ID() {
}

$Class* CalendarData_id_ID::load$($String* name, bool initialize) {
	$loadClass(CalendarData_id_ID, name, initialize, &_CalendarData_id_ID_ClassInfo_, allocate$CalendarData_id_ID);
	return class$;
}

$Class* CalendarData_id_ID::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun