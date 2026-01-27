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

$MethodInfo _JavaTimeSupplementary_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_is, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_is, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_is_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_is",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_is_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_is($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_is));
}

void JavaTimeSupplementary_is::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_is::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Búddískt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Gregorískt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Gregorískt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Íslamskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Íslamskt borgaradagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Japanskt dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Minguo dagatal"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("f.h./e.h."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"tímabil"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("klukkustund"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"mínúta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"mánuður"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"sekúnda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("vika"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("vikudagur"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"ár"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"tímabelti"_s)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"fyrir Krist"_s,
				"eftir Krist"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"f.Kr."_s,
				"e.Kr."_s
			}))
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
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
				u"Á"_s,
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
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_is::JavaTimeSupplementary_is() {
}

$Class* JavaTimeSupplementary_is::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_is, name, initialize, &_JavaTimeSupplementary_is_ClassInfo_, allocate$JavaTimeSupplementary_is);
	return class$;
}

$Class* JavaTimeSupplementary_is::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun