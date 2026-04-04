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

void FormatData_he::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_he::getContents() {
	$useLocalObjectStack();
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
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"שנה"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"לוח השנה המוסלמי אום אל-קורא"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			u"GMT{0}\u200e"_s
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"standalone.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"לוח השנה המוסלמי האזרחי"_s
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"שעון {0} (חורף)"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"לוח השנה היפני"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"לפני הספירה"_s,
				u"לספירה"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"cakm.NumberPatterns"_s,
			metaValue_cakm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {
				u"{1} בשעה {0}"_s,
				u"{1} בשעה {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"דקה"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"תקופה"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"לפנה״צ/אחה״צ"_s
		}),
		$$new($ObjectArray, {
			"cham.NumberElements"_s,
			$$new($StringArray, {
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
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"לוח השנה הטייוואני"_s
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
			"roc.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"חודש"_s
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"שנייה"_s
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"לוח השנה המוסלמי"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;night1:22:00-03:00;afternoon1:12:00-16:00;morning1:06:00-12:00;afternoon2:16:00-18:00;evening1:18:00-22:00;night2:03:00-06:00"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.narrow.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"שעון {0}"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.roc.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"אזור זמן"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
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
			"field.weekday"_s,
			u"יום בשבוע"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"java.time.islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			u"\u200e+HH:mm;-HH:mm\u200e"_s
		}),
		$$new($ObjectArray, {
			"cakm.NumberElements"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"שבוע"_s
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"שעון {0} (קיץ)"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, d בMMMM y"_s,
				u"d בMMMM y"_s,
				u"d בMMM y"_s,
				"d.M.y"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"cham.NumberPatterns"_s,
			metaValue_cakm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"PluralRules"_s,
			"one:i = 1 and v = 0;many:v = 0 and n != 0..10 and n % 10 = 0;two:i = 2 and v = 0"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"שעה"_s
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
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"לוח השנה הבודהיסטי"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"\u200f#,##0.00 ¤;\u200f-#,##0.00 ¤"_s,
				"#,##0%"_s,
				u"#,##0.00 ¤"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_he::FormatData_he() {
}

$Class* FormatData_he::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_he, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_he, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_he",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_he, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_he);
	});
	return class$;
}

$Class* FormatData_he::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun