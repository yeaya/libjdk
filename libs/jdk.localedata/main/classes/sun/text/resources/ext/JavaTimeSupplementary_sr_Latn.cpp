#include <sun/text/resources/ext/JavaTimeSupplementary_sr_Latn.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void JavaTimeSupplementary_sr_Latn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sr_Latn::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"prvi kvartal"_s,
		"drugi kvartal"_s,
		u"treći kvartal"_s,
		u"četvrti kvartal"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"pre podne"_s,
		"po podne"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ned"_s,
		"pon"_s,
		"uto"_s,
		"sre"_s,
		u"čet"_s,
		"pet"_s,
		"sub"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"nedelja"_s,
		"ponedeljak"_s,
		"utorak"_s,
		"sreda"_s,
		u"četvrtak"_s,
		"petak"_s,
		"subota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"u"_s,
		"s"_s,
		u"č"_s,
		"p"_s,
		"s"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		"Pre RK"_s,
		"RK"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"budistički kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"gregorijanski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"gregorijanski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"Islamski civilni kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"japanski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"kalendar Republike Kine"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"pre podne/po podne"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"sat"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minut"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mesec"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekund"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"nedelja"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"dan u nedelji"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"godina"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"vremenska zona"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"Muraham"_s,
				"Safar"_s,
				u"Rabiʻ I"_s,
				u"Rabiʻ II"_s,
				"Jumada I"_s,
				"Jumada II"_s,
				u"Rađab"_s,
				u"Šaʻban"_s,
				"Ramadan"_s,
				u"Šaval"_s,
				u"Duʻl-Kiʻda"_s,
				u"Duʻl-hiđa"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.short.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			$$new($StringArray, {
				"nove ere"_s,
				u"Meiđi"_s,
				u"Taišo"_s,
				u"Šova"_s,
				"Haisei"_s,
				"Reiva"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			$$new($StringArray, {
				"n. e."_s,
				u"Meiđi"_s,
				u"Taišo"_s,
				u"Šova"_s,
				"Haisei"_s,
				"Reiva"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"pre nove ere"_s,
				"nove ere"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"p. n. e."_s,
				"n. e"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"jan"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				"maj"_s,
				"jun"_s,
				"jul"_s,
				"avg"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"dec"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"mart"_s,
				"april"_s,
				"maj"_s,
				"jun"_s,
				"jul"_s,
				"avgust"_s,
				"septembar"_s,
				"oktobar"_s,
				"novembar"_s,
				"decembar"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"j"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				"a"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedShortEras
		})
	});
}

JavaTimeSupplementary_sr_Latn::JavaTimeSupplementary_sr_Latn() {
}

$Class* JavaTimeSupplementary_sr_Latn::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sr_Latn, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sr_Latn, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_sr_Latn",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_sr_Latn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_sr_Latn);
	});
	return class$;
}

$Class* JavaTimeSupplementary_sr_Latn::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun