#include <sun/text/resources/cldr/ext/FormatData_kn.h>
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

void FormatData_kn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_kn::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"ಜನವರಿ"_s,
		u"ಫೆಬ್ರವರಿ"_s,
		u"ಮಾರ್ಚ್"_s,
		u"ಏಪ್ರಿಲ್"_s,
		u"ಮೇ"_s,
		u"ಜೂನ್"_s,
		u"ಜುಲೈ"_s,
		u"ಆಗಸ್ಟ್"_s,
		u"ಸೆಪ್ಟೆಂಬರ್"_s,
		u"ಅಕ್ಟೋಬರ್"_s,
		u"ನವೆಂಬರ್"_s,
		u"ಡಿಸೆಂಬರ್"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"ಜನವರಿ"_s,
		u"ಫೆಬ್ರವರಿ"_s,
		u"ಮಾರ್ಚ್"_s,
		u"ಏಪ್ರಿ"_s,
		u"ಮೇ"_s,
		u"ಜೂನ್"_s,
		u"ಜುಲೈ"_s,
		u"ಆಗ"_s,
		u"ಸೆಪ್ಟೆಂ"_s,
		u"ಅಕ್ಟೋ"_s,
		u"ನವೆಂ"_s,
		u"ಡಿಸೆಂ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"ಜ"_s,
		u"ಫೆ"_s,
		u"ಮಾ"_s,
		u"ಏ"_s,
		u"ಮೇ"_s,
		u"ಜೂ"_s,
		u"ಜು"_s,
		u"ಆ"_s,
		u"ಸೆ"_s,
		u"ಅ"_s,
		u"ನ"_s,
		u"ಡಿ"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"ಭಾನುವಾರ"_s,
		u"ಸೋಮವಾರ"_s,
		u"ಮಂಗಳವಾರ"_s,
		u"ಬುಧವಾರ"_s,
		u"ಗುರುವಾರ"_s,
		u"ಶುಕ್ರವಾರ"_s,
		u"ಶನಿವಾರ"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"ಭಾನು"_s,
		u"ಸೋಮ"_s,
		u"ಮಂಗಳ"_s,
		u"ಬುಧ"_s,
		u"ಗುರು"_s,
		u"ಶುಕ್ರ"_s,
		u"ಶನಿ"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"ಭಾ"_s,
		u"ಸೋ"_s,
		u"ಮಂ"_s,
		u"ಬು"_s,
		u"ಗು"_s,
		u"ಶು"_s,
		u"ಶ"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1ನೇ ತ್ರೈಮಾಸಿಕ"_s,
		u"2ನೇ ತ್ರೈಮಾಸಿಕ"_s,
		u"3ನೇ ತ್ರೈಮಾಸಿಕ"_s,
		u"4ನೇ ತ್ರೈಮಾಸಿಕ"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"ತ್ರೈ 1"_s,
		u"ತ್ರೈ 2"_s,
		u"ತ್ರೈ 3"_s,
		u"ತ್ರೈ 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"ಪೂರ್ವಾಹ್ನ"_s,
		u"ಅಪರಾಹ್ನ"_s,
		u"ಮಧ್ಯ ರಾತ್ರಿ"_s,
		""_s,
		u"ಬೆಳಗ್ಗೆ"_s,
		""_s,
		u"ಮಧ್ಯಾಹ್ನ"_s,
		""_s,
		u"ಸಂಜೆ"_s,
		""_s,
		u"ರಾತ್ರಿ"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"ಪೂ"_s,
		u"ಅ"_s,
		u"ಮಧ್ಯರಾತ್ರಿ"_s,
		""_s,
		u"ಬೆಳಗ್ಗೆ"_s,
		""_s,
		u"ಮಧ್ಯಾಹ್ನ"_s,
		""_s,
		u"ಸಂಜೆ"_s,
		""_s,
		u"ರಾತ್ರಿ"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"ಕ್ರಿ.ಪೂ"_s,
		u"ಕ್ರಿ.ಶ"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"hh:mm:ss a zzzz"_s,
		"hh:mm:ss a z"_s,
		"hh:mm:ss a"_s,
		"hh:mm a"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"ಆರ್.ಓ.ಸಿ.ಗೆ ಮುಂಚೆ"_s,
		u"ಮಿಂಗೋ"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"ಗ್ರೆಗೋರಿಯನ್ ಕ್ಯಾಲೆಂಡರ್"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"ವರ್ಷ"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"ಇಸ್ಲಾಮಿಕ್ ಕ್ಯಾಲೆಂಡರ್ (ಉಮ್ ಅಲ್-ಖುರಾ)"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
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
			u"ಇಸ್ಲಾಮಿಕ್-ಸಿವಿಲ್ ಕ್ಯಾಲೆಂಡರ್"_s
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"{0} ಪ್ರಮಾಣಿತ ಸಮಯ"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"ಜಪಾನೀಸ್ ಕ್ಯಾಲೆಂಡರ್"_s
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
				u"ಕ್ರಿಸ್ತ ಪೂರ್ವ"_s,
				u"ಕ್ರಿಸ್ತ ಶಕ"_s
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
			u"ನಿಮಿಷ"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ಯುಗ"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"AM/PM"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"ಮುಹರಮ್"_s,
				u"ಸಫಾರ್"_s,
				u"ರಬಿ‘ I"_s,
				u"ರಬಿ‘ II"_s,
				u"ಜುಮಾದಾ I"_s,
				u"ಜುಮಾದಾ II"_s,
				u"ರಜಬ್"_s,
				u"ಶ’ಬಾನ್"_s,
				u"ರಮದಾನ್"_s,
				u"ಶವ್ವಾಲ್"_s,
				u"ಧು‘ಲ್-ಕಿ‘ಡಾಹ್"_s,
				u"ಧು‘ಲ್-ಹಿಜಾಹ್"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"ಮಿಂಗೋ ಕ್ಯಾಲೆಂಡರ್"_s
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
			"islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"ತಿಂಗಳು"_s
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"ಸೆಕೆಂಡ್"_s
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
			u"ಇಸ್ಲಾಮಿಕ್ ಕ್ಯಾಲೆಂಡರ್"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;night1:21:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-21:00"_s
		}),
		$$new($ObjectArray, {
			"knda.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"೦"_s,
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
			$$new($StringArray, {
				u"ಜನ"_s,
				u"ಫೆಬ್ರ"_s,
				u"ಮಾರ್ಚ್"_s,
				u"ಏಪ್ರಿ"_s,
				u"ಮೇ"_s,
				u"ಜೂನ್"_s,
				u"ಜುಲೈ"_s,
				u"ಆಗ"_s,
				u"ಸೆಪ್ಟೆಂ"_s,
				u"ಅಕ್ಟೋ"_s,
				u"ನವೆಂ"_s,
				u"ಡಿಸೆಂ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"{0} ಸಮಯ"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'ಸಾವಿರ other:0\' \'ಸಾವಿರ}"_s,
				u"{one:00\' \'ಸಾವಿರ other:00\' \'ಸಾವಿರ}"_s,
				u"{one:000\' \'ಸಾವಿರ other:000\' \'ಸಾವಿರ}"_s,
				u"{one:0\' \'ಮಿಲಿಯನ್ other:0\' \'ಮಿಲಿಯನ್}"_s,
				u"{one:00\' \'ಮಿಲಿಯನ್ other:00\' \'ಮಿಲಿಯನ್}"_s,
				u"{one:000\' \'ಮಿಲಿಯನ್ other:000\' \'ಮಿಲಿಯನ್}"_s,
				u"{one:0\' \'ಬಿಲಿಯನ್ other:0\' \'ಬಿಲಿಯನ್}"_s,
				u"{one:00\' \'ಬಿಲಿಯನ್ other:00\' \'ಬಿಲಿಯನ್}"_s,
				u"{one:000\' \'ಬಿಲಿಯನ್ other:000\' \'ಬಿಲಿಯನ್}"_s,
				u"{one:0\' \'ಟ್ರಿಲಿಯನ್\u200c other:0\' \'ಟ್ರಿಲಿಯನ್\u200c}"_s,
				u"{one:00\' \'ಟ್ರಿಲಿಯನ್\u200c other:00\' \'ಟ್ರಿಲಿಯನ್\u200c}"_s,
				u"{one:000\' \'ಟ್ರಿಲಿಯನ್\u200c other:000\' \'ಟ್ರಿಲಿಯನ್\u200c}"_s
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
			u"ಸಮಯ ವಲಯ"_s
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
			metaValue_AmPmMarkers
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"ವಾರದ ದಿನ"_s
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
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"knda.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s,
				""_s
			})
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
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"ವಾರ"_s
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
				u"{one:0ಸಾ other:0ಸಾ}"_s,
				u"{one:00ಸಾ other:00ಸಾ}"_s,
				u"{one:000ಸಾ other:000ಸಾ}"_s,
				u"{one:0ಮಿ other:0ಮಿ}"_s,
				u"{one:00ಮಿ other:00ಮಿ}"_s,
				u"{one:000ಮಿ other:000ಮಿ}"_s,
				u"{one:0ಬಿ other:0ಬಿ}"_s,
				u"{one:00ಬಿ other:00ಬಿ}"_s,
				u"{one:000ಬಿ other:000ಬಿ}"_s,
				u"{one:0ಟ್ರಿ other:0ಟ್ರಿ}"_s,
				u"{one:00ಟ್ರಿ other:00ಟ್ರಿ}"_s,
				u"{one:000ಟ್ರಿ other:000ಟ್ರಿ}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} ದಿನದ ಸಮಯ"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, MMMM d, y"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
				"d/M/yy"_s
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
			"one:i = 0 or n = 1"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ಗಂಟೆ"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"ಮುಹ್."_s,
				u"ಸಫಾ."_s,
				u"ರಬಿ‘ I"_s,
				u"ರಬಿ‘ II"_s,
				u"ಜುಮ್. I"_s,
				u"ಜುಮ್. II"_s,
				u"ರಜ್."_s,
				u"ಶ."_s,
				u"ರಮ್."_s,
				u"ಶವ್."_s,
				u"ಧು‘ಲ್-ಕಿ."_s,
				u"ಧು‘ಲ್-ಹ."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"ಬೌದ್ಧರ ಕ್ಯಾಲೆಂಡರ್"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s
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
			"QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_kn::FormatData_kn() {
}

$Class* FormatData_kn::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_kn, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_kn, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_kn",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_kn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_kn);
	});
	return class$;
}

$Class* FormatData_kn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun