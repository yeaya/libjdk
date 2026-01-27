#include <sun/util/resources/cldr/ext/TimeZoneNames_en_GU.h>

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

$MethodInfo _TimeZoneNames_en_GU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_GU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_GU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_GU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_GU",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_GU_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_GU($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_GU));
}

void TimeZoneNames_en_GU::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_GU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Chamorro, $new($StringArray, {
		"Chamorro Standard Time"_s,
		"ChST"_s,
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
			$of("Pacific/Guam"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(Chamorro)
		})
	}));
	return data;
}

TimeZoneNames_en_GU::TimeZoneNames_en_GU() {
}

$Class* TimeZoneNames_en_GU::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_GU, name, initialize, &_TimeZoneNames_en_GU_ClassInfo_, allocate$TimeZoneNames_en_GU);
	return class$;
}

$Class* TimeZoneNames_en_GU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun