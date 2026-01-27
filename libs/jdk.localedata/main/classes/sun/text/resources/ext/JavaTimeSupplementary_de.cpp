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

$MethodInfo _JavaTimeSupplementary_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_de_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_de",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_de_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_de($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_de));
}

void JavaTimeSupplementary_de::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_de::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("Buddhistischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Gregorianischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Gregorianischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Islamischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Bürgerlicher islamischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Islamischer Kalender (Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Japanischer Kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Kalender der Republik China"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"Tageshälfte"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("Epoche"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Stunde"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("Monat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Sekunde"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("Woche"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("Wochentag"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("Jahr"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Zeitzone"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
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
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		})
	});
}

JavaTimeSupplementary_de::JavaTimeSupplementary_de() {
}

$Class* JavaTimeSupplementary_de::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_de, name, initialize, &_JavaTimeSupplementary_de_ClassInfo_, allocate$JavaTimeSupplementary_de);
	return class$;
}

$Class* JavaTimeSupplementary_de::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun