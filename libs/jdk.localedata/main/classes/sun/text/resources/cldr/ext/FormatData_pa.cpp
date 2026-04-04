#include <sun/text/resources/cldr/ext/FormatData_pa.h>
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

void FormatData_pa::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pa::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"ਜਨਵਰੀ"_s,
		u"ਫ਼ਰਵਰੀ"_s,
		u"ਮਾਰਚ"_s,
		u"ਅਪ੍ਰੈਲ"_s,
		u"ਮਈ"_s,
		u"ਜੂਨ"_s,
		u"ਜੁਲਾਈ"_s,
		u"ਅਗਸਤ"_s,
		u"ਸਤੰਬਰ"_s,
		u"ਅਕਤੂਬਰ"_s,
		u"ਨਵੰਬਰ"_s,
		u"ਦਸੰਬਰ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"ਜਨ"_s,
		u"ਫ਼ਰ"_s,
		u"ਮਾਰਚ"_s,
		u"ਅਪ੍ਰੈ"_s,
		u"ਮਈ"_s,
		u"ਜੂਨ"_s,
		u"ਜੁਲਾ"_s,
		u"ਅਗ"_s,
		u"ਸਤੰ"_s,
		u"ਅਕਤੂ"_s,
		u"ਨਵੰ"_s,
		u"ਦਸੰ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"ਜ"_s,
		u"ਫ਼"_s,
		u"ਮਾ"_s,
		u"ਅ"_s,
		u"ਮ"_s,
		u"ਜੂ"_s,
		u"ਜੁ"_s,
		u"ਅ"_s,
		u"ਸ"_s,
		u"ਅ"_s,
		u"ਨ"_s,
		u"ਦ"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"ਐਤਵਾਰ"_s,
		u"ਸੋਮਵਾਰ"_s,
		u"ਮੰਗਲਵਾਰ"_s,
		u"ਬੁੱਧਵਾਰ"_s,
		u"ਵੀਰਵਾਰ"_s,
		u"ਸ਼ੁੱਕਰਵਾਰ"_s,
		u"ਸ਼ਨਿੱਚਰਵਾਰ"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"ਐਤ"_s,
		u"ਸੋਮ"_s,
		u"ਮੰਗਲ"_s,
		u"ਬੁੱਧ"_s,
		u"ਵੀਰ"_s,
		u"ਸ਼ੁੱਕਰ"_s,
		u"ਸ਼ਨਿੱਚਰ"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"ਐ"_s,
		u"ਸੋ"_s,
		u"ਮੰ"_s,
		u"ਬੁੱ"_s,
		u"ਵੀ"_s,
		u"ਸ਼ੁੱ"_s,
		u"ਸ਼"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"ਪਹਿਲੀ ਤਿਮਾਹੀ"_s,
		u"ਦੂਜੀ ਤਿਮਾਹੀ"_s,
		u"ਤੀਜੀ ਤਿਮਾਹੀ"_s,
		u"ਚੌਥੀ ਤਿਮਾਹੀ"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"ਤਿਮਾਹੀ1"_s,
		u"ਤਿਮਾਹੀ2"_s,
		u"ਤਿਮਾਹੀ3"_s,
		u"ਤਿਮਾਹੀ4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"ਪੂ.ਦੁ."_s,
		u"ਬਾ.ਦੁ."_s,
		u"ਅੱਧੀ ਰਾਤ"_s,
		""_s,
		u"ਸਵੇਰੇ"_s,
		""_s,
		u"ਦੁਪਹਿਰੇ"_s,
		""_s,
		u"ਸ਼ਾਮੀਂ"_s,
		""_s,
		u"ਰਾਤੀਂ"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"ਸ."_s,
		u"ਸ਼."_s,
		u"ਅੱਧੀ ਰਾਤ"_s,
		""_s,
		u"ਸਵੇਰੇ"_s,
		""_s,
		u"ਦੁਪਹਿਰੇ"_s,
		""_s,
		u"ਸ਼ਾਮੀਂ"_s,
		""_s,
		u"ਰਾਤੀਂ"_s,
		""_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"ਈਸਵੀ ਪੂਰਵ"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_narrow_Eras, $new($StringArray, {
		"BC"_s,
		u"ਈ. ਪੂ."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"ਚੀਨ ਦੇ ਗਣਰਾਜ ਤੋਂ ਪਹਿਲਾਂ"_s,
		u"ਮਿੰਗ"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		u"ਆਰ.ਓ.ਸੀ ਤੋਂ ਪਹਿਲਾਂ"_s,
		u"ਮਿੰਗ"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"ਗਰੇਗੋਰੀਅਨ ਕੈਲੰਡਰ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"ਸਾਲ"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਅਮ ਅਲ-ਕੁਰਾ)"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				","_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				"-"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
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
			u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਸਾਰਨੀਬੱਧ, ਸਮਾਜਿਕ ਯੁੱਗ)"_s
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
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			$$new($StringArray, {
				u"ਈ.ਪੂ."_s,
				u"ਸੰਨ"_s
			})
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"{0} ਮਿਆਰੀ ਵੇਲਾ"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"ਜਪਾਨੀ ਕੈਲੰਡਰ"_s
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
				u"ਈਸਵੀ ਪੂਰਵ"_s,
				u"ਈਸਵੀ ਸੰਨ"_s
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
			"guru.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"੦"_s,
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
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"ਮਿੰਟ"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ਸੰਮਤ"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ਪੂ.ਦੁ./ਬਾ.ਦੁ."_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"ਮੁਹੱਰਮ"_s,
				u"ਸਫਰ"_s,
				u"ਰਬੀ ʻ I"_s,
				u"ਰਬੀ ʻ II"_s,
				u"ਜੁਮਾਦਾ I"_s,
				u"ਜੁਮਾਦਾ II"_s,
				u"ਰਜਬ"_s,
				u"ਸ਼ਬਾਨ"_s,
				u"ਰਮਜ਼ਾਨ"_s,
				u"ਸ਼ਵਾਲ"_s,
				u"ਦੂ-ਅਲ-ਕੀਦਾਹ"_s,
				u"ਦੂ-ਅਲ-ਹਿਜ੍ਹਾ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"ਮਿੰਗੂਓ ਕੈਲੰਡਰ"_s
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
			u"ਮਹੀਨਾ"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"ਸਕਿੰਟ"_s
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
			u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ"_s
		}),
		$$new($ObjectArray, {
			"guru.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤ #,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;night1:21:00-04:00;afternoon1:12:00-16:00;morning1:04:00-12:00;evening1:16:00-21:00"_s
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
			u"{0} ਵੇਲਾ"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'ਹਜ਼ਾਰ other:0\' \'ਹਜ਼ਾਰ}"_s,
				u"{one:00\' \'ਹਜ਼ਾਰ other:00\' \'ਹਜ਼ਾਰ}"_s,
				u"{one:0\' \'ਲੱਖ other:0\' \'ਲੱਖ}"_s,
				u"{one:00\' \'ਲੱਖ other:00\' \'ਲੱਖ}"_s,
				u"{one:0\' \'ਕਰੋੜ other:0\' \'ਕਰੋੜ}"_s,
				u"{one:00\' \'ਕਰੋੜ other:00\' \'ਕਰੋੜ}"_s,
				u"{one:0\' \'ਅਰਬ other:0\' \'ਅਰਬ}"_s,
				u"{one:00\' \'ਅਰਬ other:00\' \'ਅਰਬ}"_s,
				u"{one:0\' \'ਖਰਬ other:0\' \'ਖਰਬ}"_s,
				u"{one:00\' \'ਖਰਬ other:00\' \'ਖਰਬ}"_s,
				u"{one:0\' \'ਨੀਲ other:0\' \'ਨੀਲ}"_s,
				u"{one:00\' \'ਨੀਲ other:00\' \'ਨੀਲ}"_s
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
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"ਇਲਾਕਾਈ ਵੇਲਾ"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"ਈ. ਪੂ."_s,
				u"ਸੰਨ"_s
			})
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
			u"ਹਫ਼ਤੇ ਦਾ ਦਿਨ"_s
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
			u"ਹਫ਼ਤਾ"_s
		}),
		$$new($ObjectArray, {
			"buddhist.DateTimePatterns"_s,
			$$new($StringArray, {
				u"{0} ਵਿਖੇ {1}"_s,
				u"{0} ਵਿਖੇ {1}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			})
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
				u"{one:0 ਹਜ਼ਾਰ other:0 ਹਜ਼ਾਰ}"_s,
				u"{one:00 ਹਜ਼ਾਰ other:00 ਹਜ਼ਾਰ}"_s,
				u"{one:0 ਲੱਖ other:0 ਲੱਖ}"_s,
				u"{one:00 ਲੱਖ other:00 ਲੱਖ}"_s,
				u"{one:0 ਕਰੋੜ other:0 ਕਰੋੜ}"_s,
				u"{one:00 ਕਰੋੜ other:00 ਕਰੋੜ}"_s,
				u"{one:0 ਅਰਬ other:0 ਅਰਬ}"_s,
				u"{one:00 ਅਰਬ other:00 ਅਰਬ}"_s,
				u"{one:0 ਖਰਬ other:0 ਖਰਬ}"_s,
				u"{one:00 ਖਰਬ other:00 ਖਰਬ}"_s,
				u"{one:0 ਨੀਲ other:0 ਨੀਲ}"_s,
				u"{one:00 ਨੀਲ other:00 ਨੀਲ}"_s
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
			u"{0} ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
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
			"one:n = 0..1"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ਘੰਟਾ"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"ਮੁਹੱ."_s,
				u"ਸਫ."_s,
				u"ਰਬ. I"_s,
				u"ਰਬ. II"_s,
				u"ਜੁਮ. I"_s,
				u"ਜੁਮ. II"_s,
				u"ਰਾਜ."_s,
				u"ਸ਼ਾ."_s,
				u"ਰਾਮ."_s,
				u"ਸ਼ਅ."_s,
				u"ਦੂ-ਅਲ-ਕੀ."_s,
				u"ਦੂ-ਅਲ-ਹਿ."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"ਬੋਧੀ ਕੈਲੰਡਰ"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤ #,##,##0.00"_s,
				"#,##,##0%"_s,
				u"¤ #,##0.00"_s
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

FormatData_pa::FormatData_pa() {
}

$Class* FormatData_pa::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pa, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pa, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_pa",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_pa, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_pa);
	});
	return class$;
}

$Class* FormatData_pa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun