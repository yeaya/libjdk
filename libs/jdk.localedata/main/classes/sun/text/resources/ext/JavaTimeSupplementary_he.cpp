#include <sun/text/resources/ext/JavaTimeSupplementary_he.h>
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

void JavaTimeSupplementary_he::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_he::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"רבעון 1"_s,
		u"רבעון 2"_s,
		u"רבעון 3"_s,
		u"רבעון 4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"לפנה״צ"_s,
		u"אחה״צ"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"יום א׳"_s,
		u"יום ב׳"_s,
		u"יום ג׳"_s,
		u"יום ד׳"_s,
		u"יום ה׳"_s,
		u"יום ו׳"_s,
		u"שבת"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"יום ראשון"_s,
		u"יום שני"_s,
		u"יום שלישי"_s,
		u"יום רביעי"_s,
		u"יום חמישי"_s,
		u"יום שישי"_s,
		u"יום שבת"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"א׳"_s,
		u"ב׳"_s,
		u"ג׳"_s,
		u"ד׳"_s,
		u"ה׳"_s,
		u"ו׳"_s,
		u"ש׳"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"שנת היג׳רה"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d בMMMM y G"_s,
		u"d בMMMM y G"_s,
		u"d בMMM y G"_s,
		"d.M.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"לוח שנה בודהיסטי"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"לוח שנה גרגוריאני"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"לוח שנה גרגוריאני"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"לוח שנה מוסלמי"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"לוח שנה מוסלמי-אזרחי"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"לוח שנה יפני"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"לוח השנה הסיני Minguo"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"לפנה״צ/אחה״צ"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"תקופה"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"שעה"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"דקה"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"חודש"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"שנייה"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"שבוע"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"יום בשבוע"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"שנה"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"אזור"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, d בMMMM y GGGG"_s,
				u"d בMMMM y GGGG"_s,
				u"d בMMM y GGGG"_s,
				"dd/MM/yy G"_s
			})
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
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"מוחרם"_s,
				u"צפר"_s,
				u"רביע א׳"_s,
				u"רביע ב׳"_s,
				u"ג׳ומאדא א׳"_s,
				u"ג׳ומאדא ב׳"_s,
				u"רג׳ב"_s,
				u"שעבאן"_s,
				u"רמדאן"_s,
				u"שוואל"_s,
				u"ד׳ו אל־קעדה"_s,
				u"ד׳ו אל־חיג׳ה"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"מוחרם"_s,
				u"צפר"_s,
				u"רביע אל-אוול"_s,
				u"רביע א-ת׳אני"_s,
				u"ג׳ומאדא אל-אולא"_s,
				u"ג׳ומאדא א-ת׳אניה"_s,
				u"רג׳ב"_s,
				u"שעבאן"_s,
				u"רמדאן"_s,
				u"שוואל"_s,
				u"ד׳ו אל־קעדה"_s,
				u"ד׳ו אל־חיג׳ה"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			sharedTimePatterns
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
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, d בMMMM y G"_s,
				u"d בMMMM y G"_s,
				u"d בMMM y G"_s,
				"dd/MM/yy GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"לפני הספירה"_s,
				u"לספירה"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"לסה\"נ"_s,
				u"לפסה\"נ"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, d בMMMM y GGGG"_s,
				u"d בMMMM y GGGG"_s,
				u"d בMMM y GGGG"_s,
				"d.M.y G"_s
			})
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
				u"ינו׳"_s,
				u"פבר׳"_s,
				u"מרץ"_s,
				u"אפר׳"_s,
				u"מאי"_s,
				u"יוני"_s,
				u"יולי"_s,
				u"אוג׳"_s,
				u"ספט׳"_s,
				u"אוק׳"_s,
				u"נוב׳"_s,
				u"דצמ׳"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"ינואר"_s,
				u"פברואר"_s,
				u"מרץ"_s,
				u"אפריל"_s,
				u"מאי"_s,
				u"יוני"_s,
				u"יולי"_s,
				u"אוגוסט"_s,
				u"ספטמבר"_s,
				u"אוקטובר"_s,
				u"נובמבר"_s,
				u"דצמבר"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			u"GMT{0}\u200e"_s
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			u"\u200e+HH:mm;-HH:mm\u200e"_s
		})
	});
}

JavaTimeSupplementary_he::JavaTimeSupplementary_he() {
}

$Class* JavaTimeSupplementary_he::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_he, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_he, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_he",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_he, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_he);
	});
	return class$;
}

$Class* JavaTimeSupplementary_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun