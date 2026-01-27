#include <sun/util/resources/cldr/ext/TimeZoneNames_es_UY.h>

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

$MethodInfo _TimeZoneNames_es_UY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_UY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_UY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_UY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_UY",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_UY_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_UY($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_UY));
}

void TimeZoneNames_es_UY::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_UY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Uruguay, $new($StringArray, {
		u"hora estándar de Uruguay"_s,
		"UYT"_s,
		"hora de verano de Uruguay"_s,
		"UYST"_s,
		"hora de Uruguay"_s,
		"UYT"_s
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
			$of("America/Montevideo"_s),
			$of(Uruguay)
		})
	}));
	return data;
}

TimeZoneNames_es_UY::TimeZoneNames_es_UY() {
}

$Class* TimeZoneNames_es_UY::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_UY, name, initialize, &_TimeZoneNames_es_UY_ClassInfo_, allocate$TimeZoneNames_es_UY);
	return class$;
}

$Class* TimeZoneNames_es_UY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun