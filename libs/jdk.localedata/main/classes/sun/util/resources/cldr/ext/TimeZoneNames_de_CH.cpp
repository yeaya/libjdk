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

void TimeZoneNames_de_CH::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_de_CH::getContents() {
	$useLocalObjectStack();
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
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"SST"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			Brunei
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			"Macao"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			"Brunei"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			"Saratov"_s
		})
	}));
	return data;
}

TimeZoneNames_de_CH::TimeZoneNames_de_CH() {
}

$Class* TimeZoneNames_de_CH::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_de_CH, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_de_CH, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_de_CH",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_de_CH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_de_CH);
	});
	return class$;
}

$Class* TimeZoneNames_de_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun