#include <sun/text/resources/cldr/ext/FormatData_az.h>
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

void FormatData_az::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_az::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"yanvar"_s,
		"fevral"_s,
		"mart"_s,
		"aprel"_s,
		"may"_s,
		"iyun"_s,
		"iyul"_s,
		"avqust"_s,
		"sentyabr"_s,
		"oktyabr"_s,
		"noyabr"_s,
		"dekabr"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"yan"_s,
		"fev"_s,
		"mar"_s,
		"apr"_s,
		"may"_s,
		"iyn"_s,
		"iyl"_s,
		"avq"_s,
		"sen"_s,
		"okt"_s,
		"noy"_s,
		"dek"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"bazar"_s,
		u"bazar ertəsi"_s,
		u"çərşənbə axşamı"_s,
		u"çərşənbə"_s,
		u"cümə axşamı"_s,
		u"cümə"_s,
		u"şənbə"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"B."_s,
		"B.e."_s,
		u"Ç.a."_s,
		u"Ç."_s,
		"C.a."_s,
		"C."_s,
		u"Ş."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"7"_s,
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"1-ci kvartal"_s,
		"2-ci kvartal"_s,
		u"3-cü kvartal"_s,
		u"4-cü kvartal"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"1-ci kv."_s,
		"2-ci kv."_s,
		u"3-cü kv."_s,
		u"4-cü kv."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"gecəyarı"_s,
		u"günorta"_s,
		u"sübh"_s,
		u"səhər"_s,
		u"gündüz"_s,
		""_s,
		u"axşamüstü"_s,
		""_s,
		u"axşam"_s,
		u"gecə"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"gecəyarı"_s,
		"g"_s,
		u"sübh"_s,
		u"səhər"_s,
		u"gündüz"_s,
		""_s,
		u"axşamüstü"_s,
		""_s,
		u"axşam"_s,
		u"gecə"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"e.ə."_s,
		"y.e."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
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
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"G d MMMM y, EEEE"_s,
		"G d MMMM, y"_s,
		"G d MMM y"_s,
		"GGGGG dd.MM.y"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"GGGG d MMMM y, EEEE"_s,
		"GGGG d MMMM, y"_s,
		"GGGG d MMM y"_s,
		"G dd.MM.y"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Qreqorian Təqvimi"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"İl"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Ivrit təqvimi"_s
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
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"{0} Standart Vaxtı"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Yapon Təqvimi"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				"B."_s,
				"B.E."_s,
				u"Ç.A."_s,
				u"Ç."_s,
				"C.A."_s,
				"C."_s,
				u"Ş."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"eramızdan əvvəl"_s,
				"yeni era"_s
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
			"japanese.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"Dəqiqə"_s
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
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"Məhərrəm"_s,
				u"Səfər"_s,
				u"Rəbiüləvvəl"_s,
				u"Rəbiülaxır"_s,
				u"Cəmadiyələvvəl"_s,
				u"Cəmadiyəlaxır"_s,
				u"Rəcəb"_s,
				u"Şaban"_s,
				"Ramazan"_s,
				u"Şəvval"_s,
				u"Zilqədə"_s,
				u"Zilhiccə"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Minquo Təqvimi"_s
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
			"Ay"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"Saniyə"_s
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
			u"İslam Təqvimi"_s
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;night1:19:00-24:00;morning2:06:00-12:00;afternoon1:12:00-17:00;morning1:04:00-06:00;evening1:17:00-19:00;night2:00:00-04:00"_s
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
			u"{0} Vaxtı"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0\' \'min other:0\' \'min}"_s,
				"{one:00\' \'min other:00\' \'min}"_s,
				"{one:000\' \'min other:000\' \'min}"_s,
				"{one:0\' \'milyon other:0\' \'milyon}"_s,
				"{one:00\' \'milyon other:00\' \'milyon}"_s,
				"{one:000\' \'milyon other:000\' \'milyon}"_s,
				"{one:0\' \'milyard other:0\' \'milyard}"_s,
				"{one:00\' \'milyard other:00\' \'milyard}"_s,
				"{one:000\' \'milyard other:000\' \'milyard}"_s,
				"{one:0\' \'trilyon other:0\' \'trilyon}"_s,
				"{one:00\' \'trilyon other:00\' \'trilyon}"_s,
				"{one:000\' \'trilyon other:000\' \'trilyon}"_s
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
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			"field.zone"_s,
			u"Saat Qurşağı"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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
			u"Həftənin Günü"_s
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
			"field.week"_s,
			u"Həftə"_s
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
				"{one:0K other:0K}"_s,
				"{one:00K other:00K}"_s,
				"{one:000K other:000K}"_s,
				u"{one:0 mln other:0 mln}"_s,
				u"{one:00 mln other:00 mln}"_s,
				u"{one:000 mln other:000 mln}"_s,
				u"{one:0 mlrd other:0 mlrd}"_s,
				u"{one:00 mlrd other:00 mlrd}"_s,
				u"{one:000 mlrd other:000 mlrd}"_s,
				u"{one:0 trln other:0 trln}"_s,
				u"{one:00 trln other:00 trln}"_s,
				u"{one:000 trln other:000 trln}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} Yay Vaxtı"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"d MMMM y, EEEE"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"dd.MM.yy"_s
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
			"one:n = 1"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"Saat"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"Məh."_s,
				u"Səf."_s,
				u"Rəb. I"_s,
				u"Rəb. II"_s,
				u"Cəm. I"_s,
				u"Cəm. II"_s,
				u"Rəc."_s,
				u"Şab."_s,
				"Ram."_s,
				u"Şəv."_s,
				"Zilq."_s,
				"Zilh."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Buddist Təqvimi"_s
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
				"#,##0%"_s,
				u"#,##0.00 ¤"_s
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_az::FormatData_az() {
}

$Class* FormatData_az::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_az, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_az, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_az",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_az, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_az);
	});
	return class$;
}

$Class* FormatData_az::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun