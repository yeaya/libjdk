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

void TimeZoneNames_haw::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_haw::getContents() {
	$useLocalObjectStack();
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
			"Pacific/Honolulu"_s,
			$$new($StringArray, {
				""_s,
				"HST"_s,
				""_s,
				"HDT"_s,
				""_s,
				"HST"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"AST"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			$$new($StringArray, {
				""_s,
				"HST"_s,
				""_s,
				"HDT"_s,
				""_s,
				"HST"_s
			})
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			Alaska
		})
	}));
	return data;
}

TimeZoneNames_haw::TimeZoneNames_haw() {
}

$Class* TimeZoneNames_haw::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_haw, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_haw, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_haw",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_haw, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_haw);
	});
	return class$;
}

$Class* TimeZoneNames_haw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun