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

$MethodInfo _FormatData_kn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_kn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_kn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_kn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_kn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_kn_MethodInfo_
};

$Object* allocate$FormatData_kn($Class* clazz) {
	return $of($alloc(FormatData_kn));
}

void FormatData_kn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_kn::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"ವರ್ಷ"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"ಇಸ್ಲಾಮಿಕ್ ಕ್ಯಾಲೆಂಡರ್ (ಉಮ್ ಅಲ್-ಖುರಾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"ಇಸ್ಲಾಮಿಕ್-ಸಿವಿಲ್ ಕ್ಯಾಲೆಂಡರ್"_s)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} ಪ್ರಮಾಣಿತ ಸಮಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"ಜಪಾನೀಸ್ ಕ್ಯಾಲೆಂಡರ್"_s)
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
				u"ಕ್ರಿಸ್ತ ಪೂರ್ವ"_s,
				u"ಕ್ರಿಸ್ತ ಶಕ"_s
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
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
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
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of(u"ನಿಮಿಷ"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ಯುಗ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"ಮಿಂಗೋ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"ತಿಂಗಳು"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"ಸೆಕೆಂಡ್"_s)
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
			$of(u"ಇಸ್ಲಾಮಿಕ್ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:21:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-21:00"_s)
		}),
		$$new($ObjectArray, {
			$of("knda.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
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
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0} ಸಮಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
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
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"ಸಮಯ ವಲಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"ವಾರದ ದಿನ"_s)
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
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("knda.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
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
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"ವಾರ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
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
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} ದಿನದ ಸಮಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y"_s,
				"MMMM d, y"_s,
				"MMM d, y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("one:i = 0 or n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"ಗಂಟೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"ಬೌದ್ಧರ ಕ್ಯಾಲೆಂಡರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s
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
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_kn::FormatData_kn() {
}

$Class* FormatData_kn::load$($String* name, bool initialize) {
	$loadClass(FormatData_kn, name, initialize, &_FormatData_kn_ClassInfo_, allocate$FormatData_kn);
	return class$;
}

$Class* FormatData_kn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun