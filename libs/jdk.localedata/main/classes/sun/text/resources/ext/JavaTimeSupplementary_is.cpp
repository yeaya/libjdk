#include <sun/text/resources/ext/JavaTimeSupplementary_is.h>
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

void JavaTimeSupplementary_is::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_is::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"F1"_s,
		"F2"_s,
		"F3"_s,
		"F4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. fjórðungur"_s,
		u"2. fjórðungur"_s,
		u"3. fjórðungur"_s,
		u"4. fjórðungur"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"f.h."_s,
		"e.h."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"sun."_s,
		u"mán."_s,
		u"þri."_s,
		u"mið."_s,
		"fim."_s,
		u"fös."_s,
		"lau."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"sunnudagur"_s,
		u"mánudagur"_s,
		u"þriðjudagur"_s,
		u"miðvikudagur"_s,
		"fimmtudagur"_s,
		u"föstudagur"_s,
		"laugardagur"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		u"Þ"_s,
		"M"_s,
		"F"_s,
		"F"_s,
		"L"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"f."_s,
		"e."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
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
			u"Búddískt dagatal"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Gregorískt dagatal"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Gregorískt dagatal"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Íslamskt dagatal"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Íslamskt borgaradagatal"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Japanskt dagatal"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Minguo dagatal"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"f.h./e.h."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"tímabil"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"klukkustund"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"mínúta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"mánuður"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"sekúnda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"vika"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"vikudagur"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"ár"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"tímabelti"_s
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
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"fyrir Krist"_s,
				"eftir Krist"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"f.Kr."_s,
				"e.Kr."_s
			})
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
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"jan."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				u"maí"_s,
				u"jún."_s,
				u"júl."_s,
				u"ágú."_s,
				"sep."_s,
				"okt."_s,
				u"nóv."_s,
				"des."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"janúar"_s,
				u"febrúar"_s,
				"mars"_s,
				u"apríl"_s,
				u"maí"_s,
				u"júní"_s,
				u"júlí"_s,
				u"ágúst"_s,
				"september"_s,
				u"október"_s,
				u"nóvember"_s,
				"desember"_s,
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
				u"Á"_s,
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
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		})
	});
}

JavaTimeSupplementary_is::JavaTimeSupplementary_is() {
}

$Class* JavaTimeSupplementary_is::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_is, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_is, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_is",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_is, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_is);
	});
	return class$;
}

$Class* JavaTimeSupplementary_is::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun