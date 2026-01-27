#include <sun/text/resources/cldr/ext/FormatData_he.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_he, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_he, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_he_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_he",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_he_MethodInfo_
};

$Object* allocate$FormatData_he($Class* clazz) {
	return $of($alloc(FormatData_he));
}

void FormatData_he::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_he::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
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
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
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
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"יום ראשון"_s,
		u"יום שני"_s,
		u"יום שלישי"_s,
		u"יום רביעי"_s,
		u"יום חמישי"_s,
		u"יום שישי"_s,
		u"יום שבת"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"יום א׳"_s,
		u"יום ב׳"_s,
		u"יום ג׳"_s,
		u"יום ד׳"_s,
		u"יום ה׳"_s,
		u"יום ו׳"_s,
		u"שבת"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"א׳"_s,
		u"ב׳"_s,
		u"ג׳"_s,
		u"ד׳"_s,
		u"ה׳"_s,
		u"ו׳"_s,
		u"ש׳"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"רבעון 1"_s,
		u"רבעון 2"_s,
		u"רבעון 3"_s,
		u"רבעון 4"_s
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"לפנה״צ"_s,
		u"אחה״צ"_s,
		u"חצות"_s,
		""_s,
		u"בבוקר"_s,
		""_s,
		u"בצהריים"_s,
		u"אחר הצהריים"_s,
		u"בערב"_s,
		""_s,
		u"בלילה"_s,
		u"לפנות בוקר"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"לפנה״צ"_s,
		u"אחה״צ"_s,
		u"חצות"_s,
		""_s,
		u"בבוקר"_s,
		""_s,
		u"בצהריים"_s,
		u"אחה״צ"_s,
		u"בערב"_s,
		""_s,
		u"בלילה"_s,
		u"לפנות בוקר"_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"לפנה״צ"_s,
		u"אחה״צ"_s,
		u"חצות"_s,
		""_s,
		u"בוקר"_s,
		""_s,
		u"צהריים"_s,
		u"אחר הצהריים"_s,
		u"ערב"_s,
		""_s,
		u"לילה"_s,
		u"לפנות בוקר"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"לפנה״ס"_s,
		u"לספירה"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_MonthNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s,
		"7"_s,
		"8"_s,
		"9"_s,
		"10"_s,
		"11"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"הספירה הבודהיסטית"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, d בMMMM y G"_s,
		u"d בMMMM y G"_s,
		u"d בMMM y G"_s,
		"d.M.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, d בMMMM y GGGG"_s,
		u"d בMMMM y GGGG"_s,
		u"d בMMM y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"לפני הרפובליקה של סין"_s,
		u"לספירת הרפובליקה של סין"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		u"לפני R.O.C"_s,
		"R.O.C."_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"שנת היג׳רה"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"לוח השנה הגרגוריאני"_s);
	$var($StringArray, metaValue_cakm_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"¤ #,##0.00"_s,
		"#,##0%"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"שנה"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"לוח השנה המוסלמי אום אל-קורא"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"GMT{0}\u200e"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"לוח השנה המוסלמי האזרחי"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"שעון {0} (חורף)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"לוח השנה היפני"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"לפני הספירה"_s,
				u"לספירה"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("cakm.NumberPatterns"_s),
			$of(metaValue_cakm_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} בשעה {0}"_s,
				u"{1} בשעה {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"דקה"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"תקופה"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"לפנה״צ/אחה״צ"_s)
		}),
		$$new($ObjectArray, {
			$of("cham.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꩐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"לוח השנה הטייוואני"_s)
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
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"חודש"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"שנייה"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"לוח השנה המוסלמי"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:22:00-03:00;afternoon1:12:00-16:00;morning1:06:00-12:00;afternoon2:16:00-18:00;evening1:18:00-22:00;night2:03:00-06:00"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"שעון {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:\u200f0\' \'אלף two:\u200f0\' \'אלף many:\u200f0\' \'אלף other:\u200f0\' \'אלף}"_s,
				u"{one:\u200f00\' \'אלף two:\u200f00\' \'אלף many:\u200f00\' \'אלף other:\u200f00\' \'אלף}"_s,
				u"{one:\u200f000\' \'אלף two:\u200f000\' \'אלף many:\u200f000\' \'אלף other:\u200f000\' \'אלף}"_s,
				u"{one:\u200f0\' \'מיליון two:\u200f0\' \'מיליון many:\u200f0\' \'מיליון other:\u200f0\' \'מיליון}"_s,
				u"{one:\u200f00\' \'מיליון two:\u200f00\' \'מיליון many:\u200f00\' \'מיליון other:\u200f00\' \'מיליון}"_s,
				u"{one:\u200f000\' \'מיליון two:\u200f000\' \'מיליון many:\u200f000\' \'מיליון other:\u200f000\' \'מיליון}"_s,
				u"{one:\u200f0\' \'מיליארד two:\u200f0\' \'מיליארד many:\u200f0\' \'מיליארד other:\u200f0\' \'מיליארד}"_s,
				u"{one:\u200f00\' \'מיליארד two:\u200f00\' \'מיליארד many:\u200f00\' \'מיליארד other:\u200f00\' \'מיליארד}"_s,
				u"{one:\u200f000\' \'מיליארד two:\u200f000\' \'מיליארד many:\u200f000\' \'מיליארד other:\u200f000\' \'מיליארד}"_s,
				u"{one:\u200f0\' \'טריליון two:\u200f0\' \'טריליון many:\u200f0\' \'טריליון other:\u200f0\' \'טריליון}"_s,
				u"{one:\u200f00\' \'טריליון two:\u200f00\' \'טריליון many:\u200f00\' \'טריליון other:\u200f00\' \'טריליון}"_s,
				u"{one:\u200f000\' \'טריליון two:\u200f000\' \'טריליון many:\u200f000\' \'טריליון other:\u200f000\' \'טריליון}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.long.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"אזור זמן"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
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
			$of("field.weekday"_s),
			$of(u"יום בשבוע"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"\u200e+HH:mm;-HH:mm\u200e"_s)
		}),
		$$new($ObjectArray, {
			$of("cakm.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"שבוע"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_buddhist_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0K\u200f two:0K\u200f many:0K\u200f other:0K\u200f}"_s,
				u"{one:00K\u200f two:00K\u200f many:00K\u200f other:00K\u200f}"_s,
				u"{one:000K\u200f two:000K\u200f many:000K\u200f other:000K\u200f}"_s,
				u"{one:0M\u200f two:0M\u200f many:0M\u200f other:0M\u200f}"_s,
				u"{one:00M\u200f two:00M\u200f many:00M\u200f other:00M\u200f}"_s,
				u"{one:000M\u200f two:000M\u200f many:000M\u200f other:000M\u200f}"_s,
				u"{one:0B\u200f two:0B\u200f many:0B\u200f other:0B\u200f}"_s,
				u"{one:00B\u200f two:00B\u200f many:00B\u200f other:00B\u200f}"_s,
				u"{one:000B\u200f two:000B\u200f many:000B\u200f other:000B\u200f}"_s,
				u"{one:0T\u200f two:0T\u200f many:0T\u200f other:0T\u200f}"_s,
				u"{one:00T\u200f two:00T\u200f many:00T\u200f other:00T\u200f}"_s,
				u"{one:000T\u200f two:000T\u200f many:000T\u200f other:000T\u200f}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"שעון {0} (קיץ)"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d בMMMM y"_s,
				u"d בMMMM y"_s,
				u"d בMMM y"_s,
				"d.M.y"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("cham.NumberPatterns"_s),
			$of(metaValue_cakm_NumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:i = 1 and v = 0;many:v = 0 and n != 0..10 and n % 10 = 0;two:i = 2 and v = 0"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"שעה"_s)
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
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"לוח השנה הבודהיסטי"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"\u200f#,##0.00 ¤;\u200f-#,##0.00 ¤"_s,
				"#,##0%"_s,
				u"#,##0.00 ¤"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_he::FormatData_he() {
}

$Class* FormatData_he::load$($String* name, bool initialize) {
	$loadClass(FormatData_he, name, initialize, &_FormatData_he_ClassInfo_, allocate$FormatData_he);
	return class$;
}

$Class* FormatData_he::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun