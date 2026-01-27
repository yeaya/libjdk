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

$MethodInfo _TimeZoneNames_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_NZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_NZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_NZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_NZ",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_NZ_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_NZ($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_NZ));
}

void TimeZoneNames_en_NZ::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_NZ::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of(Australia_CentralWestern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(Chatham)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		})
	}));
	return data;
}

TimeZoneNames_en_NZ::TimeZoneNames_en_NZ() {
}

$Class* TimeZoneNames_en_NZ::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_NZ, name, initialize, &_TimeZoneNames_en_NZ_ClassInfo_, allocate$TimeZoneNames_en_NZ);
	return class$;
}

$Class* TimeZoneNames_en_NZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun