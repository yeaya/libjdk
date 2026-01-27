#include <sun/util/resources/cldr/ext/TimeZoneNames_fr_GF.h>

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

$MethodInfo _TimeZoneNames_fr_GF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_fr_GF, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_fr_GF, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_fr_GF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_fr_GF",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_fr_GF_MethodInfo_
};

$Object* allocate$TimeZoneNames_fr_GF($Class* clazz) {
	return $of($alloc(TimeZoneNames_fr_GF));
}

void TimeZoneNames_fr_GF::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_fr_GF::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"heure de la Guyane française"_s,
		"GFT"_s,
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
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		})
	}));
	return data;
}

TimeZoneNames_fr_GF::TimeZoneNames_fr_GF() {
}

$Class* TimeZoneNames_fr_GF::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_fr_GF, name, initialize, &_TimeZoneNames_fr_GF_ClassInfo_, allocate$TimeZoneNames_fr_GF);
	return class$;
}

$Class* TimeZoneNames_fr_GF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun