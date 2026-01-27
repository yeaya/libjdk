#include <sun/util/resources/cldr/ext/TimeZoneNames_es_CO.h>

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

$MethodInfo _TimeZoneNames_es_CO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_CO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_CO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_CO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_CO",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_CO_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_CO($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_CO));
}

void TimeZoneNames_es_CO::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_CO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Colombia, $new($StringArray, {
		u"hora estándar de Colombia"_s,
		"COT"_s,
		"hora de verano de Colombia"_s,
		"COST"_s,
		"hora de Colombia"_s,
		"COT"_s
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
			$of("America/Bogota"_s),
			$of(Colombia)
		})
	}));
	return data;
}

TimeZoneNames_es_CO::TimeZoneNames_es_CO() {
}

$Class* TimeZoneNames_es_CO::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_CO, name, initialize, &_TimeZoneNames_es_CO_ClassInfo_, allocate$TimeZoneNames_es_CO);
	return class$;
}

$Class* TimeZoneNames_es_CO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun