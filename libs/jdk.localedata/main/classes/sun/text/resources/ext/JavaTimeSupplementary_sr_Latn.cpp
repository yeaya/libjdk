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

$MethodInfo _JavaTimeSupplementary_sr_Latn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sr_Latn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sr_Latn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_sr_Latn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_sr_Latn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_sr_Latn_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_sr_Latn($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_sr_Latn));
}

void JavaTimeSupplementary_sr_Latn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sr_Latn::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budistički kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Islamski civilni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("japanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("kalendar Republike Kine"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("pre podne/po podne"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("sat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minut"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mesec"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekund"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("nedelja"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dan u nedelji"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("godina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("vremenska zona"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				"nove ere"_s,
				u"Meiđi"_s,
				u"Taišo"_s,
				u"Šova"_s,
				"Haisei"_s,
				"Reiva"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				"n. e."_s,
				u"Meiđi"_s,
				u"Taišo"_s,
				u"Šova"_s,
				"Haisei"_s,
				"Reiva"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"pre nove ere"_s,
				"nove ere"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"p. n. e."_s,
				"n. e"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		})
	});
}

JavaTimeSupplementary_sr_Latn::JavaTimeSupplementary_sr_Latn() {
}

$Class* JavaTimeSupplementary_sr_Latn::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_sr_Latn, name, initialize, &_JavaTimeSupplementary_sr_Latn_ClassInfo_, allocate$JavaTimeSupplementary_sr_Latn);
	return class$;
}

$Class* JavaTimeSupplementary_sr_Latn::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun