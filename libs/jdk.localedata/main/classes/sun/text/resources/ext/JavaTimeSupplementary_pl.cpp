#include <sun/text/resources/ext/JavaTimeSupplementary_pl.h>
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

void JavaTimeSupplementary_pl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_pl::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"I kwartał"_s,
		u"II kwartał"_s,
		u"III kwartał"_s,
		u"IV kwartał"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd.MM.y GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"niedz."_s,
		"pon."_s,
		"wt."_s,
		u"śr."_s,
		"czw."_s,
		"pt."_s,
		"sob."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"niedziela"_s,
		u"poniedziałek"_s,
		"wtorek"_s,
		u"środa"_s,
		"czwartek"_s,
		u"piątek"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"N"_s,
		"P"_s,
		"W"_s,
		u"Ś"_s,
		"C"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"p.n.e."_s,
		"n.e."_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Przed ROC"_s,
		"ROC"_s
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
			"kalendarz buddyjski"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"kalendarz gregoriański"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"kalendarz gregoriański"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"kalendarz islamski (metoda wzrokowa)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"kalendarz islamski (metoda obliczeniowa)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"kalendarz islamski (Umm al-Kura)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"kalendarz japoński"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"kalendarz Republiki Chińskiej"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"rano / po południu / wieczorem"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"godzina"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"miesiąc"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"tydzień"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"dzień tygodnia"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"rok"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"strefa czasowa"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			$$new($StringArray, {
				"AM"_s,
				"PM"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
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
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				"Muh."_s,
				"Saf."_s,
				"Rab. I"_s,
				"Rab. II"_s,
				u"Dżu. I"_s,
				u"Dżu. II"_s,
				"Ra."_s,
				"Sza."_s,
				"Ram."_s,
				"Szaw."_s,
				"Zu al-k."_s,
				"Zu al-h."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"Muharram"_s,
				"Safar"_s,
				u"Rabiʻ I"_s,
				u"Rabiʻ II"_s,
				u"Dżumada I"_s,
				u"Dżumada II"_s,
				u"Radżab"_s,
				"Szaban"_s,
				"Ramadan"_s,
				"Szawwal"_s,
				"Zu al-kada"_s,
				u"Zu al-hidżdża"_s,
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
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"BE"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
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
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"sty"_s,
				"lut"_s,
				"mar"_s,
				"kwi"_s,
				"maj"_s,
				"cze"_s,
				"lip"_s,
				"sie"_s,
				"wrz"_s,
				u"paź"_s,
				"lis"_s,
				"gru"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"stycznia"_s,
				"lutego"_s,
				"marca"_s,
				"kwietnia"_s,
				"maja"_s,
				"czerwca"_s,
				"lipca"_s,
				"sierpnia"_s,
				u"września"_s,
				u"października"_s,
				"listopada"_s,
				"grudnia"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"s"_s,
				"l"_s,
				"m"_s,
				"k"_s,
				"m"_s,
				"c"_s,
				"l"_s,
				"s"_s,
				"w"_s,
				"p"_s,
				"l"_s,
				"g"_s,
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
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedEras
		})
	});
}

JavaTimeSupplementary_pl::JavaTimeSupplementary_pl() {
}

$Class* JavaTimeSupplementary_pl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_pl, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_pl, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_pl",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_pl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_pl);
	});
	return class$;
}

$Class* JavaTimeSupplementary_pl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun