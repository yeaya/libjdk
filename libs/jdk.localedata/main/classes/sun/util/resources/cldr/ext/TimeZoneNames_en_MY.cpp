#include <sun/util/resources/cldr/ext/TimeZoneNames_en_MY.h>

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

$MethodInfo _TimeZoneNames_en_MY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_MY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_MY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_MY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_MY",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_MY_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_MY($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_MY));
}

void TimeZoneNames_en_MY::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_MY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Malaysia, $new($StringArray, {
		"Malaysia Time"_s,
		"MYT"_s,
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
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		})
	}));
	return data;
}

TimeZoneNames_en_MY::TimeZoneNames_en_MY() {
}

$Class* TimeZoneNames_en_MY::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_MY, name, initialize, &_TimeZoneNames_en_MY_ClassInfo_, allocate$TimeZoneNames_en_MY);
	return class$;
}

$Class* TimeZoneNames_en_MY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun