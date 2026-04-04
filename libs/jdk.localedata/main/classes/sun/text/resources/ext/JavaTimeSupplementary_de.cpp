#include <sun/text/resources/ext/JavaTimeSupplementary_de.h>
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

void JavaTimeSupplementary_de::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_de::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. Quartal"_s,
		"2. Quartal"_s,
		"3. Quartal"_s,
		"4. Quartal"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"vorm."_s,
		"nachm."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"dd.MM.y GGGG"_s,
		"dd.MM.yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"So."_s,
		"Mo."_s,
		"Di."_s,
		"Mi."_s,
		"Do."_s,
		"Fr."_s,
		"Sa."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"Sonntag"_s,
		"Montag"_s,
		"Dienstag"_s,
		"Mittwoch"_s,
		"Donnerstag"_s,
		"Freitag"_s,
		"Samstag"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"D"_s,
		"M"_s,
		"D"_s,
		"F"_s,
		"S"_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"vm."_s,
		"nm."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"dd.MM.y G"_s,
		"dd.MM.yy GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"v. Chr."_s,
		"n. Chr."_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"Buddhistischer Kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Gregorianischer Kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Gregorianischer Kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"Islamischer Kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Bürgerlicher islamischer Kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"Islamischer Kalender (Umm al-Qura"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Japanischer Kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Kalender der Republik China"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"Tageshälfte"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"Epoche"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"Stunde"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"Monat"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Sekunde"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"Woche"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"Wochentag"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"Jahr"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Zeitzone"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
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
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
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
				"Jan."_s,
				"Feb."_s,
				u"März"_s,
				"Apr."_s,
				"Mai"_s,
				"Juni"_s,
				"Juli"_s,
				"Aug."_s,
				"Sep."_s,
				"Okt."_s,
				"Nov."_s,
				"Dez."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"Januar"_s,
				"Februar"_s,
				u"März"_s,
				"April"_s,
				"Mai"_s,
				"Juni"_s,
				"Juli"_s,
				"August"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Dezember"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
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

JavaTimeSupplementary_de::JavaTimeSupplementary_de() {
}

$Class* JavaTimeSupplementary_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_de",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_de);
	});
	return class$;
}

$Class* JavaTimeSupplementary_de::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun