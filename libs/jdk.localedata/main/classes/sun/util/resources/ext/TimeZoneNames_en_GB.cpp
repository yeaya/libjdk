#include <sun/util/resources/ext/TimeZoneNames_en_GB.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _TimeZoneNames_en_GB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_GB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_GB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_GB_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_en_GB",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_GB_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_GB($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_GB));
}

void TimeZoneNames_en_GB::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_GB::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Europe/London"_s),
		$of($$new($StringArray, {
			"Greenwich Mean Time"_s,
			"GMT"_s,
			"British Summer Time"_s,
			"BST"_s,
			"British Time"_s,
			"BT"_s
		}))
	})});
}

TimeZoneNames_en_GB::TimeZoneNames_en_GB() {
}

$Class* TimeZoneNames_en_GB::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_GB, name, initialize, &_TimeZoneNames_en_GB_ClassInfo_, allocate$TimeZoneNames_en_GB);
	return class$;
}

$Class* TimeZoneNames_en_GB::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun