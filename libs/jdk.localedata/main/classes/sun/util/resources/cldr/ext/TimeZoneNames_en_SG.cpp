#include <sun/util/resources/cldr/ext/TimeZoneNames_en_SG.h>

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

$MethodInfo _TimeZoneNames_en_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_SG",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_SG_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_SG($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_SG));
}

void TimeZoneNames_en_SG::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Malaysia, $new($StringArray, {
		"Malaysia Time"_s,
		"MYT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		"Singapore Standard Time"_s,
		"SGT"_s,
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
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		})
	}));
	return data;
}

TimeZoneNames_en_SG::TimeZoneNames_en_SG() {
}

$Class* TimeZoneNames_en_SG::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_SG, name, initialize, &_TimeZoneNames_en_SG_ClassInfo_, allocate$TimeZoneNames_en_SG);
	return class$;
}

$Class* TimeZoneNames_en_SG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun