#include <sun/text/resources/ext/JavaTimeSupplementary_da.h>

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

$MethodInfo _JavaTimeSupplementary_da_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_da, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_da, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_da_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_da",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_da_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_da($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_da));
}

void JavaTimeSupplementary_da::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_da::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"1. kvt."_s,
		"2. kvt."_s,
		"3. kvt."_s,
		"4. kvt."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. kvartal"_s,
		"2. kvartal"_s,
		"3. kvartal"_s,
		"4. kvartal"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d. MMM y GGGG"_s,
		"d/M/y"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"søn."_s,
		"man."_s,
		"tir."_s,
		"ons."_s,
		"tor."_s,
		"fre."_s,
		u"lør."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"søndag"_s,
		"mandag"_s,
		"tirsdag"_s,
		"onsdag"_s,
		"torsdag"_s,
		"fredag"_s,
		u"lørdag"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"T"_s,
		"O"_s,
		"T"_s,
		"F"_s,
		"L"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"d. MMM y G"_s,
		"d/M/y"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"f.Kr."_s,
		"e.Kr."_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
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
			$of("buddhistisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("gregoriansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("gregoriansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("verdslig islamisk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("islamisk kalender (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("japansk kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("kalender for Republikken Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"æra"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("time"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minut"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"måned"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekund"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("uge"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("ugedag"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"år"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("tidszone"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
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
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
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
				"jan."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				"maj"_s,
				"jun."_s,
				"jul."_s,
				"aug."_s,
				"sep."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"marts"_s,
				"april"_s,
				"maj"_s,
				"juni"_s,
				"juli"_s,
				"august"_s,
				"september"_s,
				"oktober"_s,
				"november"_s,
				"december"_s,
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
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
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
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+HH.mm;-HH.mm"_s)
		})
	});
}

JavaTimeSupplementary_da::JavaTimeSupplementary_da() {
}

$Class* JavaTimeSupplementary_da::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_da, name, initialize, &_JavaTimeSupplementary_da_ClassInfo_, allocate$JavaTimeSupplementary_da);
	return class$;
}

$Class* JavaTimeSupplementary_da::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun