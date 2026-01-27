#include <sun/util/resources/cldr/ext/TimeZoneNames_es_VE.h>

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

$MethodInfo _TimeZoneNames_es_VE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_VE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_VE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_VE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_VE",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_VE_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_VE($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_VE));
}

void TimeZoneNames_es_VE::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_VE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Venezuela, $new($StringArray, {
		"hora de Venezuela"_s,
		"VET"_s,
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
			$of("America/Caracas"_s),
			$of(Venezuela)
		})
	}));
	return data;
}

TimeZoneNames_es_VE::TimeZoneNames_es_VE() {
}

$Class* TimeZoneNames_es_VE::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_VE, name, initialize, &_TimeZoneNames_es_VE_ClassInfo_, allocate$TimeZoneNames_es_VE);
	return class$;
}

$Class* TimeZoneNames_es_VE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun