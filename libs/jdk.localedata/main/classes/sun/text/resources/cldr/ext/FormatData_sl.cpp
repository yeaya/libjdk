#include <sun/text/resources/cldr/ext/FormatData_sl.h>
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

void FormatData_sl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sl::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"januar"_s,
		"februar"_s,
		"marec"_s,
		"april"_s,
		"maj"_s,
		"junij"_s,
		"julij"_s,
		"avgust"_s,
		"september"_s,
		"oktober"_s,
		"november"_s,
		"december"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"jan."_s,
		"feb."_s,
		"mar."_s,
		"apr."_s,
		"maj"_s,
		"jun."_s,
		"jul."_s,
		"avg."_s,
		"sep."_s,
		"okt."_s,
		"nov."_s,
		"dec."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"j"_s,
		"f"_s,
		"m"_s,
		"a"_s,
		"m"_s,
		"j"_s,
		"j"_s,
		"a"_s,
		"s"_s,
		"o"_s,
		"n"_s,
		"d"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"nedelja"_s,
		"ponedeljek"_s,
		"torek"_s,
		"sreda"_s,
		u"četrtek"_s,
		"petek"_s,
		"sobota"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"ned."_s,
		"pon."_s,
		"tor."_s,
		"sre."_s,
		u"čet."_s,
		"pet."_s,
		"sob."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"t"_s,
		"s"_s,
		u"č"_s,
		"p"_s,
		"s"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1. četrtletje"_s,
		u"2. četrtletje"_s,
		u"3. četrtletje"_s,
		u"4. četrtletje"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1. čet."_s,
		u"2. čet."_s,
		u"3. čet."_s,
		u"4. čet."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"dop."_s,
		"pop."_s,
		u"opolnoči"_s,
		"opoldne"_s,
		"zjutraj"_s,
		"dopoldan"_s,
		"popoldan"_s,
		""_s,
		u"zvečer"_s,
		""_s,
		u"ponoči"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"d"_s,
		"p"_s,
		"24.00"_s,
		"12.00"_s,
		"zj"_s,
		"d"_s,
		"p"_s,
		""_s,
		"zv"_s,
		""_s,
		"po"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"dop."_s,
		"pop."_s,
		"opoln."_s,
		"opold."_s,
		"zjut."_s,
		"dop."_s,
		"pop."_s,
		""_s,
		u"zveč."_s,
		""_s,
		u"ponoči"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"pr. Kr."_s,
		"po Kr."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"budistični koledar"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"bud. kol."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_narrow_Eras, $new($StringArray, {
		"BC"_s,
		"BK"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd. MMMM y G"_s,
		"dd. MMMM y G"_s,
		"d. MMM y G"_s,
		"d. MM. yy GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd. MMMM y GGGG"_s,
		"dd. MMMM y GGGG"_s,
		"d. MMM y GGGG"_s,
		"d. MM. yy G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"pred RK"_s,
		"Minguo koledar"_s
	}));
	$var($String, metaValue_calendarname_gregorian, "gregorijanski koledar"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"leto"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"islamski koledar Umm al-Qura"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_narrow_Eras
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"standalone.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"islamski civilni koledar"_s
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
			u"{0} standardni čas"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"japonski koledar"_s
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
			"long.Eras"_s,
			$$new($StringArray, {
				"pred Kristusom"_s,
				"po Kristusu"_s
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
			"DateTimePatterns"_s,
			$$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"−"_s,
				"e"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			metaValue_MonthNarrows
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
			"minuta"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"doba"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"dop/pop"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"koledar Minguo"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mesec"_s
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
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
			"islamski koledar"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;night1:22:00-06:00;morning2:10:00-12:00;afternoon1:12:00-18:00;morning1:06:00-10:00;evening1:18:00-22:00"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
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
			u"{0} čas"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'tisoč two:0\' \'tisoč few:0\' \'tisoč other:0\' \'tisoč}"_s,
				u"{one:00\' \'tisoč two:00\' \'tisoč few:00\' \'tisoč other:00\' \'tisoč}"_s,
				u"{one:000\' \'tisoč two:000\' \'tisoč few:000\' \'tisoč other:000\' \'tisoč}"_s,
				"{one:0\' \'milijon two:0\' \'milijona few:0\' \'milijone other:0\' \'milijonov}"_s,
				"{one:00\' \'milijon two:00\' \'milijona few:00\' \'milijoni other:00\' \'milijonov}"_s,
				"{one:000\' \'milijon two:000\' \'milijona few:000\' \'milijoni other:000\' \'milijonov}"_s,
				"{one:0\' \'milijarda two:0\' \'milijardi few:0\' \'milijarde other:0\' \'milijard}"_s,
				"{one:00\' \'milijarda two:00\' \'milijardi few:00\' \'milijarde other:00\' \'milijard}"_s,
				"{one:000\' \'milijarda two:000\' \'milijardi few:000\' \'milijarde other:000\' \'milijard}"_s,
				"{one:0\' \'bilijon two:0\' \'bilijona few:0\' \'bilijoni other:0\' \'bilijonov}"_s,
				"{one:00\' \'bilijon two:00\' \'bilijona few:00\' \'bilijoni other:00\' \'bilijonov}"_s,
				"{one:000\' \'bilijon two:000\' \'bilijona few:000\' \'bilijoni other:000\' \'bilijonov}"_s
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
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"časovni pas"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
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
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"dan v tednu"_s
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
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			"+HH.mm;-HH.mm"_s
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
			"teden"_s
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNames"_s,
			metaValue_QuarterNames
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
				u"{one:0 tis\'.\' two:0 tis\'.\' few:0 tis\'.\' other:0 tis\'.\'}"_s,
				u"{one:00 tis\'.\' two:00 tis\'.\' few:00 tis\'.\' other:00 tis\'.\'}"_s,
				u"{one:000 tis\'.\' two:000 tis\'.\' few:000 tis\'.\' other:000 tis\'.\'}"_s,
				u"{one:0 mio\'.\' two:0 mio\'.\' few:0 mio\'.\' other:0 mio\'.\'}"_s,
				u"{one:00 mio\'.\' two:00 mio\'.\' few:00 mio\'.\' other:00 mio\'.\'}"_s,
				u"{one:000 mio\'.\' two:000 mio\'.\' few:000 mio\'.\' other:000 mio\'.\'}"_s,
				u"{one:0 mrd\'.\' two:0 mrd\'.\' few:0 mrd\'.\' other:0 mrd\'.\'}"_s,
				u"{one:00 mrd\'.\' two:00 mrd\'.\' few:00 mrd\'.\' other:00 mrd\'.\'}"_s,
				u"{one:000 mrd\'.\' two:000 mrd\'.\' few:000 mrd\'.\' other:000 mrd\'.\'}"_s,
				u"{one:0 bil\'.\' two:0 bil\'.\' few:0 bil\'.\' other:0 bil\'.\'}"_s,
				u"{one:00 bil\'.\' two:00 bil\'.\' few:00 bil\'.\' other:00 bil\'.\'}"_s,
				u"{one:000 bil\'.\' two:000 bil\'.\' few:000 bil\'.\' other:000 bil\'.\'}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_narrow_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} poletni čas"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, dd. MMMM y"_s,
				"dd. MMMM y"_s,
				"d. MMM y"_s,
				"d. MM. yy"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
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
			"one:v = 0 and i % 100 = 1;few:v = 0 and i % 100 = 3..4 or v != 0;two:v = 0 and i % 100 = 2"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"ura"_s
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"budistični koledar"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤;(#,##0.00 ¤)"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNarrows"_s,
			metaValue_DayNarrows
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
			"QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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

FormatData_sl::FormatData_sl() {
}

$Class* FormatData_sl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sl, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sl, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_sl",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_sl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_sl);
	});
	return class$;
}

$Class* FormatData_sl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun