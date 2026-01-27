#include <sun/util/resources/cldr/ext/TimeZoneNames_en_IN.h>

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

$MethodInfo _TimeZoneNames_en_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_IN",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_IN_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_IN($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_IN));
}

void TimeZoneNames_en_IN::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, India, $new($StringArray, {
		"India Standard Time"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
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
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of("Rangoon"_s)
		})
	}));
	return data;
}

TimeZoneNames_en_IN::TimeZoneNames_en_IN() {
}

$Class* TimeZoneNames_en_IN::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_IN, name, initialize, &_TimeZoneNames_en_IN_ClassInfo_, allocate$TimeZoneNames_en_IN);
	return class$;
}

$Class* TimeZoneNames_en_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun