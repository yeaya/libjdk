#include <sun/util/resources/cldr/ext/TimeZoneNames_haw.h>

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

$MethodInfo _TimeZoneNames_haw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_haw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_haw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_haw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_haw",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_haw_MethodInfo_
};

$Object* allocate$TimeZoneNames_haw($Class* clazz) {
	return $of($alloc(TimeZoneNames_haw));
}

void TimeZoneNames_haw::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_haw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Alaska, $new($StringArray, {
		""_s,
		"AKST"_s,
		""_s,
		"AKDT"_s,
		""_s,
		"AKT"_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		""_s,
		"HAST"_s,
		""_s,
		"HADT"_s,
		""_s,
		"HAT"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of($$new($StringArray, {
				""_s,
				"HST"_s,
				""_s,
				"HDT"_s,
				""_s,
				"HST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of($$new($StringArray, {
				""_s,
				"HST"_s,
				""_s,
				"HDT"_s,
				""_s,
				"HST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(Alaska)
		})
	}));
	return data;
}

TimeZoneNames_haw::TimeZoneNames_haw() {
}

$Class* TimeZoneNames_haw::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_haw, name, initialize, &_TimeZoneNames_haw_ClassInfo_, allocate$TimeZoneNames_haw);
	return class$;
}

$Class* TimeZoneNames_haw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun