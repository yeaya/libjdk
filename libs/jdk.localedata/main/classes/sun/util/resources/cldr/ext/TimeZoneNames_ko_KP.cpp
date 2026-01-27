#include <sun/util/resources/cldr/ext/TimeZoneNames_ko_KP.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_ko_KP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_ko_KP, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_ko_KP, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_ko_KP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_ko_KP",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_ko_KP_MethodInfo_
};

$Object* allocate$TimeZoneNames_ko_KP($Class* clazz) {
	return $of($alloc(TimeZoneNames_ko_KP));
}

void TimeZoneNames_ko_KP::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_ko_KP::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Korea, $new($StringArray, {
		u"조선 표준시"_s,
		""_s,
		u"조선 하계 표준시"_s,
		""_s,
		u"조선 시간"_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		})
	}));
	return data;
}

TimeZoneNames_ko_KP::TimeZoneNames_ko_KP() {
}

$Class* TimeZoneNames_ko_KP::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_ko_KP, name, initialize, &_TimeZoneNames_ko_KP_ClassInfo_, allocate$TimeZoneNames_ko_KP);
	return class$;
}

$Class* TimeZoneNames_ko_KP::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun