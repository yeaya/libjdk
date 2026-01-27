#include <sun/util/resources/cldr/ext/TimeZoneNames_es_PE.h>

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

$MethodInfo _TimeZoneNames_es_PE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_PE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_PE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_PE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_PE",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_PE_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_PE($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_PE));
}

void TimeZoneNames_es_PE::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_PE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Peru, $new($StringArray, {
		u"hora estándar de Perú"_s,
		"PET"_s,
		u"hora de verano de Perú"_s,
		"PEST"_s,
		u"hora de Perú"_s,
		"PET"_s
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
			$of("America/Lima"_s),
			$of(Peru)
		})
	}));
	return data;
}

TimeZoneNames_es_PE::TimeZoneNames_es_PE() {
}

$Class* TimeZoneNames_es_PE::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_PE, name, initialize, &_TimeZoneNames_es_PE_ClassInfo_, allocate$TimeZoneNames_es_PE);
	return class$;
}

$Class* TimeZoneNames_es_PE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun