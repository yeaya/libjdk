#include <sun/util/resources/ext/TimeZoneNames_hi.h>

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

$MethodInfo _TimeZoneNames_hi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_hi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_hi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_hi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_hi",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_hi_MethodInfo_
};

$Object* allocate$TimeZoneNames_hi($Class* clazz) {
	return $of($alloc(TimeZoneNames_hi));
}

void TimeZoneNames_hi::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_hi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Asia/Calcutta"_s),
		$of($$new($StringArray, {
			u"भारतीय समय"_s,
			"IST"_s,
			u"भारतीय समय"_s,
			"IST"_s,
			u"भारतीय समय"_s,
			"IT"_s
		}))
	})});
}

TimeZoneNames_hi::TimeZoneNames_hi() {
}

$Class* TimeZoneNames_hi::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_hi, name, initialize, &_TimeZoneNames_hi_ClassInfo_, allocate$TimeZoneNames_hi);
	return class$;
}

$Class* TimeZoneNames_hi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun