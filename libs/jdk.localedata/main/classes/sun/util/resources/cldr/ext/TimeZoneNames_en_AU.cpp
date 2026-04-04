#include <sun/util/resources/cldr/ext/TimeZoneNames_en_AU.h>
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

void TimeZoneNames_en_AU::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_AU::getContents() {
	$useLocalObjectStack();
	$var($StringArray, Cook, $new($StringArray, {
		"Cook Island Standard Time"_s,
		""_s,
		"Cook Island Summer Time"_s,
		""_s,
		"Cook Island Time"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		"China Standard Time"_s,
		""_s,
		"China Summer Time"_s,
		""_s,
		"China Time"_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		"Japan Standard Time"_s,
		""_s,
		"Japan Summer Time"_s,
		""_s,
		"Japan Time"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		"Korean Standard Time"_s,
		""_s,
		"Korean Summer Time"_s,
		""_s,
		"Korea Time"_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		"Samoa Standard Time"_s,
		""_s,
		"Samoa Summer Time"_s,
		""_s,
		"Samoa Time"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		"Moscow Standard Time"_s,
		""_s,
		"Moscow Daylight Time"_s,
		""_s,
		"Moscow Time"_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		"Taipei Standard Time"_s,
		""_s,
		"Taipei Summer Time"_s,
		""_s,
		"Taipei Time"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		"Arabia Standard Time"_s,
		""_s,
		"Arabia Daylight Time"_s,
		""_s,
		"Arabia Time"_s,
		""_s
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
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		"Eastern Africa Time"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		"Australian Central Standard Time"_s,
		"ACST"_s,
		"Australian Central Daylight Time"_s,
		"ACDT"_s,
		"Australian Central Time"_s,
		"ACT"_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		"Australian Eastern Standard Time"_s,
		"AEST"_s,
		"Australian Eastern Daylight Time"_s,
		"AEDT"_s,
		"Australian Eastern Time"_s,
		"AET"_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		"Australian Western Standard Time"_s,
		"AWST"_s,
		"Australian Western Daylight Time"_s,
		"AWDT"_s,
		"Australian Western Time"_s,
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
			"Asia/Tokyo"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			China
		}),
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
			"CTT"_s,
			China
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"JST"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			Taipei
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			Africa_Eastern
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
			"Africa/Mogadishu"_s,
			Africa_Eastern
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
			"Europe/Simferopol"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			Africa_Eastern
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
			"Indian/Antananarivo"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			Africa_Eastern
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
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			"Johnston"_s
		})
	}));
	return data;
}

TimeZoneNames_en_AU::TimeZoneNames_en_AU() {
}

$Class* TimeZoneNames_en_AU::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_AU, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_AU, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_en_AU",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_en_AU, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_en_AU);
	});
	return class$;
}

$Class* TimeZoneNames_en_AU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun