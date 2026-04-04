#include <sun/text/resources/cldr/ext/FormatData_uz_Cyrl.h>
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

void FormatData_uz_Cyrl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_uz_Cyrl::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"январ"_s,
		u"феврал"_s,
		u"март"_s,
		u"апрел"_s,
		u"май"_s,
		u"июн"_s,
		u"июл"_s,
		u"август"_s,
		u"сентябр"_s,
		u"октябр"_s,
		u"ноябр"_s,
		u"декабр"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"янв"_s,
		u"фев"_s,
		u"мар"_s,
		u"апр"_s,
		u"май"_s,
		u"июн"_s,
		u"июл"_s,
		u"авг"_s,
		u"сен"_s,
		u"окт"_s,
		u"ноя"_s,
		u"дек"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"Я"_s,
		u"Ф"_s,
		u"М"_s,
		u"А"_s,
		u"М"_s,
		u"И"_s,
		u"И"_s,
		u"А"_s,
		u"С"_s,
		u"О"_s,
		u"Н"_s,
		u"Д"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"якшанба"_s,
		u"душанба"_s,
		u"сешанба"_s,
		u"чоршанба"_s,
		u"пайшанба"_s,
		u"жума"_s,
		u"шанба"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"якш"_s,
		u"душ"_s,
		u"сеш"_s,
		u"чор"_s,
		u"пай"_s,
		u"жум"_s,
		u"шан"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"Я"_s,
		u"Д"_s,
		u"С"_s,
		u"Ч"_s,
		u"П"_s,
		u"Ж"_s,
		u"Ш"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-чорак"_s,
		u"2-чорак"_s,
		u"3-чорак"_s,
		u"4-чорак"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-ч"_s,
		u"2-ч"_s,
		u"3-ч"_s,
		u"4-ч"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"ТО"_s,
		u"ТК"_s,
		u"ярим тун"_s,
		u"туш пайти"_s,
		u"эрталаб"_s,
		""_s,
		u"кундузи"_s,
		""_s,
		u"кечқурун"_s,
		""_s,
		u"кечаси"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"м.а."_s,
		u"милодий"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss (zzzz)"_s,
		"HH:mm:ss (z)"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, G y MMMM dd"_s,
		"G y MMMM d"_s,
		"G y MMM d"_s,
		"GGGGG y/MM/dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, GGGG y MMMM dd"_s,
		"GGGG y MMMM d"_s,
		"GGGG y MMM d"_s,
		"G y/MM/dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Григориан календари"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"Йил"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				"-"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				u"ҳақиқий сон эмас"_s,
				""_s,
				""_s
			})
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
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			u"{0} стандарт вақти"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
				u"милоддан аввалги"_s,
				u"милодий"_s
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
				","_s,
				u" "_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"ҳақиқий сон эмас"_s,
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
			u"Дақиқа"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"Эра"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"Кун вақти"_s
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
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"Ой"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"Сония"_s
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
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			u"{0} вақти"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'минг other:0\' \'минг}"_s,
				u"{one:00\' \'минг other:00\' \'минг}"_s,
				u"{one:000\' \'минг other:000\' \'минг}"_s,
				u"{one:0\' \'миллион other:0\' \'миллион}"_s,
				u"{one:00\' \'миллион other:00\' \'миллион}"_s,
				u"{one:000\' \'миллион other:000\' \'миллион}"_s,
				u"{one:0\' \'миллиард other:0\' \'миллиард}"_s,
				u"{one:00\' \'миллиард other:00\' \'миллиард}"_s,
				u"{one:000\' \'миллиард other:000\' \'миллиард}"_s,
				u"{one:0\' \'трилион other:0\' \'трилион}"_s,
				u"{one:00\' \'трилион other:00\' \'трилион}"_s,
				u"{one:000\' \'трилион other:000\' \'трилион}"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			u"Минтақа"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			u"Ҳафта куни"_s
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
			u"Ҳафта"_s
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
				u"{one:0минг other:0минг}"_s,
				u"{one:00минг other:00минг}"_s,
				u"{one:000минг other:000минг}"_s,
				u"{one:0млн other:0млн}"_s,
				u"{one:00млн other:00млн}"_s,
				u"{one:000млн other:000млн}"_s,
				u"{one:0млрд other:0млрд}"_s,
				u"{one:00млрд other:00млрд}"_s,
				u"{one:000млрд other:000млрд}"_s,
				u"{one:0трлн other:0трлн}"_s,
				u"{one:00трлн other:00трлн}"_s,
				u"{one:000трлн other:000трлн}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} кундузги вақти"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, dd MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
				"dd/MM/yy"_s
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
			"field.hour"_s,
			u"Соат"_s
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

FormatData_uz_Cyrl::FormatData_uz_Cyrl() {
}

$Class* FormatData_uz_Cyrl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_uz_Cyrl, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_uz_Cyrl, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_uz_Cyrl",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_uz_Cyrl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_uz_Cyrl);
	});
	return class$;
}

$Class* FormatData_uz_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun