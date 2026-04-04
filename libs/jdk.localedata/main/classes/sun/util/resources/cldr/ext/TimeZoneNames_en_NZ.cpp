#include <sun/util/resources/cldr/ext/TimeZoneNames_en_NZ.h>
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

void TimeZoneNames_en_NZ::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_NZ::getContents() {
	$useLocalObjectStack();
	$var($StringArray, Chatham, $new($StringArray, {
		"Chatham Standard Time"_s,
		"CHAST"_s,
		"Chatham Daylight Time"_s,
		"CHADT"_s,
		"Chatham Time"_s,
		"CHAT"_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		"Lord Howe Standard Time"_s,
		"LHST"_s,
		"Lord Howe Daylight Time"_s,
		"LHDT"_s,
		"Lord Howe Time"_s,
		"LHT"_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		"New Zealand Standard Time"_s,
		"NZST"_s,
		"New Zealand Daylight Time"_s,
		"NZDT"_s,
		"New Zealand Time"_s,
		"NZT"_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		"Australian Central Standard Time"_s,
		"ACST"_s,
		"Australian Central Daylight Time"_s,
		"ACDT"_s,
		"Central Australia Time"_s,
		"ACT"_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		"Australian Eastern Standard Time"_s,
		"AEST"_s,
		"Australian Eastern Daylight Time"_s,
		"AEDT"_s,
		"Eastern Australia Time"_s,
		"AET"_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		"Australian Western Standard Time"_s,
		"AWST"_s,
		"Australian Western Daylight Time"_s,
		"AWDT"_s,
		"Western Australia Time"_s,
		"AWT"_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		"Australian Central Western Standard Time"_s,
		"ACWST"_s,
		"Australian Central Western Daylight Time"_s,
		"ACWDT"_s,
		"Australian Central Western Time"_s,
		"ACWT"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"AET"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			Australia_CentralWestern
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			Australia_Western
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			Chatham
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			Lord_Howe
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			Australia_Central
		})
	}));
	return data;
}

TimeZoneNames_en_NZ::TimeZoneNames_en_NZ() {
}

$Class* TimeZoneNames_en_NZ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_NZ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_NZ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_en_NZ",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_en_NZ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_en_NZ);
	});
	return class$;
}

$Class* TimeZoneNames_en_NZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun