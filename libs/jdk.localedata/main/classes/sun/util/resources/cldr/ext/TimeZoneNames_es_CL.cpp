#include <sun/util/resources/cldr/ext/TimeZoneNames_es_CL.h>

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

$MethodInfo _TimeZoneNames_es_CL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_CL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_CL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_CL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_CL",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_CL_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_CL($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_CL));
}

void TimeZoneNames_es_CL::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_CL::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Chile, $new($StringArray, {
		u"hora estándar de Chile"_s,
		"CLT"_s,
		"hora de verano de Chile"_s,
		"CLST"_s,
		"hora de Chile"_s,
		"CLT"_s
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
			$of("America/Santiago"_s),
			$of(Chile)
		})
	}));
	return data;
}

TimeZoneNames_es_CL::TimeZoneNames_es_CL() {
}

$Class* TimeZoneNames_es_CL::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_CL, name, initialize, &_TimeZoneNames_es_CL_ClassInfo_, allocate$TimeZoneNames_es_CL);
	return class$;
}

$Class* TimeZoneNames_es_CL::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun