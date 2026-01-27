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

$MethodInfo _FormatData_pa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pa, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pa, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_pa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_pa",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pa_MethodInfo_
};

$Object* allocate$FormatData_pa($Class* clazz) {
	return $of($alloc(FormatData_pa));
}

void FormatData_pa::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pa::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"ਸਾਲ"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਅਮ ਅਲ-ਕੁਰਾ)"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_narrow_Eras)
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
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ (ਸਾਰਨੀਬੱਧ, ਸਮਾਜਿਕ ਯੁੱਗ)"_s)
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
			$of("roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"ਈ.ਪੂ."_s,
				u"ਸੰਨ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of(u"{0} ਮਿਆਰੀ ਵੇਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"ਜਪਾਨੀ ਕੈਲੰਡਰ"_s)
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
				u"ਈਸਵੀ ਪੂਰਵ"_s,
				u"ਈਸਵੀ ਸੰਨ"_s
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
			$of("guru.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"ਮਿੰਟ"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ਸੰਮਤ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"ਪੂ.ਦੁ./ਬਾ.ਦੁ."_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"ਮਿੰਗੂਓ ਕੈਲੰਡਰ"_s)
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
			$of(u"ਮਹੀਨਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤#,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"ਸਕਿੰਟ"_s)
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
			$of(u"ਇਸਲਾਮੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("guru.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤ #,##,##0.00"_s,
				"#,##,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.long.Eras"_s),
			$of(metaValue_java_time_roc_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:21:00-04:00;afternoon1:12:00-16:00;morning1:04:00-12:00;evening1:16:00-21:00"_s)
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
			$of(u"{0} ਵੇਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
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
			$of(metaValue_java_time_roc_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"ਇਲਾਕਾਈ ਵੇਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"ਈ. ਪੂ."_s,
				u"ਸੰਨ"_s
			}))
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
			$of(u"ਹਫ਼ਤੇ ਦਾ ਦਿਨ"_s)
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
			$of(u"ਹਫ਼ਤਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{0} ਵਿਖੇ {1}"_s,
				u"{0} ਵਿਖੇ {1}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			}))
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
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.narrow.Eras"_s),
			$of(metaValue_java_time_buddhist_narrow_Eras)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} ਪ੍ਰਕਾਸ਼ ਵੇਲਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
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
			$of("one:n = 0..1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"ਘੰਟਾ"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"ਬੋਧੀ ਕੈਲੰਡਰ"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤ #,##,##0.00"_s,
				"#,##,##0%"_s,
				u"¤ #,##0.00"_s
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

FormatData_pa::FormatData_pa() {
}

$Class* FormatData_pa::load$($String* name, bool initialize) {
	$loadClass(FormatData_pa, name, initialize, &_FormatData_pa_ClassInfo_, allocate$FormatData_pa);
	return class$;
}

$Class* FormatData_pa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun