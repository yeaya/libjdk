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

$MethodInfo _JavaTimeSupplementary_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_he, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_he, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_he",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_he_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_he($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_he));
}

void JavaTimeSupplementary_he::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_he::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"לוח שנה בודהיסטי"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"לוח שנה גרגוריאני"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"לוח שנה גרגוריאני"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"לוח שנה מוסלמי"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"לוח שנה מוסלמי-אזרחי"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"לוח שנה יפני"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"לוח השנה הסיני Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"לפנה״צ/אחה״צ"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"תקופה"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"שעה"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"דקה"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"חודש"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"שנייה"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"שבוע"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"יום בשבוע"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"שנה"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"אזור"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d בMMMM y GGGG"_s,
				u"d בMMMM y GGGG"_s,
				u"d בMMM y GGGG"_s,
				"dd/MM/yy G"_s
			}))
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
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d בMMMM y G"_s,
				u"d בMMMM y G"_s,
				u"d בMMM y G"_s,
				"dd/MM/yy GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"לפני הספירה"_s,
				u"לספירה"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"לסה\"נ"_s,
				u"לפסה\"נ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d בMMMM y GGGG"_s,
				u"d בMMMM y GGGG"_s,
				u"d בMMM y GGGG"_s,
				"d.M.y G"_s
			}))
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"GMT{0}\u200e"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"\u200e+HH:mm;-HH:mm\u200e"_s)
		})
	});
}

JavaTimeSupplementary_he::JavaTimeSupplementary_he() {
}

$Class* JavaTimeSupplementary_he::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_he, name, initialize, &_JavaTimeSupplementary_he_ClassInfo_, allocate$JavaTimeSupplementary_he);
	return class$;
}

$Class* JavaTimeSupplementary_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun