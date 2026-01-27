#include <sun/util/resources/cldr/ext/TimeZoneNames_en_GY.h>

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

$MethodInfo _TimeZoneNames_en_GY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_GY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_GY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_GY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_GY",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_GY_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_GY($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_GY));
}

void TimeZoneNames_en_GY::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_GY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Guyana, $new($StringArray, {
		"Guyana Time"_s,
		"GYT"_s,
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
			$of("America/Guyana"_s),
			$of(Guyana)
		})
	}));
	return data;
}

TimeZoneNames_en_GY::TimeZoneNames_en_GY() {
}

$Class* TimeZoneNames_en_GY::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_GY, name, initialize, &_TimeZoneNames_en_GY_ClassInfo_, allocate$TimeZoneNames_en_GY);
	return class$;
}

$Class* TimeZoneNames_en_GY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun