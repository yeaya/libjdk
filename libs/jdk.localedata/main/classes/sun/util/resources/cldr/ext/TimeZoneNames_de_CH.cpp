#include <sun/util/resources/cldr/ext/TimeZoneNames_de_CH.h>

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

$MethodInfo _TimeZoneNames_de_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_de_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_de_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_de_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_de_CH",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_de_CH_MethodInfo_
};

$Object* allocate$TimeZoneNames_de_CH($Class* clazz) {
	return $of($alloc(TimeZoneNames_de_CH));
}

void TimeZoneNames_de_CH::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_de_CH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Brunei, $new($StringArray, {
		"Brunei-Zeit"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		"Salomoninseln-Zeit"_s,
		""_s,
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
			$of("SST"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of(Brunei)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of("Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of("Saratov"_s)
		})
	}));
	return data;
}

TimeZoneNames_de_CH::TimeZoneNames_de_CH() {
}

$Class* TimeZoneNames_de_CH::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_de_CH, name, initialize, &_TimeZoneNames_de_CH_ClassInfo_, allocate$TimeZoneNames_de_CH);
	return class$;
}

$Class* TimeZoneNames_de_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun