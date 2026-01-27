#include <sun/util/resources/cldr/ext/TimeZoneNames_en_HK.h>

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

$MethodInfo _TimeZoneNames_en_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_HK",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_HK_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_HK($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_HK));
}

void TimeZoneNames_en_HK::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Hong_Kong, $new($StringArray, {
		"Hong Kong Standard Time"_s,
		"HKT"_s,
		"Hong Kong Summer Time"_s,
		"HKST"_s,
		"Hong Kong Time"_s,
		"HKT"_s
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
			$of("Asia/Hong_Kong"_s),
			$of(Hong_Kong)
		})
	}));
	return data;
}

TimeZoneNames_en_HK::TimeZoneNames_en_HK() {
}

$Class* TimeZoneNames_en_HK::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_HK, name, initialize, &_TimeZoneNames_en_HK_ClassInfo_, allocate$TimeZoneNames_en_HK);
	return class$;
}

$Class* TimeZoneNames_en_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun