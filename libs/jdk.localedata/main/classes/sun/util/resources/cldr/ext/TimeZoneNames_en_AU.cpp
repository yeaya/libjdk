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

$MethodInfo _TimeZoneNames_en_AU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_AU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_AU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_AU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_en_AU",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_AU_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_AU($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_AU));
}

void TimeZoneNames_en_AU::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_AU::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
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
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(Taipei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(Africa_Eastern)
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
			$of("Africa/Mogadishu"_s),
			$of(Africa_Eastern)
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
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of(Cook)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(Africa_Eastern)
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
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(Africa_Eastern)
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
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of("Johnston"_s)
		})
	}));
	return data;
}

TimeZoneNames_en_AU::TimeZoneNames_en_AU() {
}

$Class* TimeZoneNames_en_AU::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_AU, name, initialize, &_TimeZoneNames_en_AU_ClassInfo_, allocate$TimeZoneNames_en_AU);
	return class$;
}

$Class* TimeZoneNames_en_AU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun