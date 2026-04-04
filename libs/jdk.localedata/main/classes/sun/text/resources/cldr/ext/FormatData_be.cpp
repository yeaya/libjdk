#include <sun/text/resources/cldr/ext/FormatData_be.h>
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

void FormatData_be::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_be::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"студзеня"_s,
		u"лютага"_s,
		u"сакавіка"_s,
		u"красавіка"_s,
		u"мая"_s,
		u"чэрвеня"_s,
		u"ліпеня"_s,
		u"жніўня"_s,
		u"верасня"_s,
		u"кастрычніка"_s,
		u"лістапада"_s,
		u"снежня"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"сту"_s,
		u"лют"_s,
		u"сак"_s,
		u"кра"_s,
		u"мая"_s,
		u"чэр"_s,
		u"ліп"_s,
		u"жні"_s,
		u"вер"_s,
		u"кас"_s,
		u"ліс"_s,
		u"сне"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"с"_s,
		u"л"_s,
		u"с"_s,
		u"к"_s,
		u"м"_s,
		u"ч"_s,
		u"л"_s,
		u"ж"_s,
		u"в"_s,
		u"к"_s,
		u"л"_s,
		u"с"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"нядзеля"_s,
		u"панядзелак"_s,
		u"аўторак"_s,
		u"серада"_s,
		u"чацвер"_s,
		u"пятніца"_s,
		u"субота"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"нд"_s,
		u"пн"_s,
		u"аў"_s,
		u"ср"_s,
		u"чц"_s,
		u"пт"_s,
		u"сб"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"н"_s,
		u"п"_s,
		u"а"_s,
		u"с"_s,
		u"ч"_s,
		u"п"_s,
		u"с"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-шы квартал"_s,
		u"2-гі квартал"_s,
		u"3-ці квартал"_s,
		u"4-ты квартал"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-шы кв."_s,
		u"2-гі кв."_s,
		u"3-ці кв."_s,
		u"4-ты кв."_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"am"_s,
		"pm"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"да н.э."_s,
		u"н.э."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss, zzzz"_s,
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
	$var($StringArray, metaValue_buddhist_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_japanese_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
	}));
	$var($StringArray, metaValue_japanese_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"грыгарыянскі каляндар"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"год"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_buddhist_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_japanese_DatePatterns
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
			u"мусульманскі свецкі каляндар"_s
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
			"timezone.regionFormat.standard"_s,
			u"Стандартны час: {0}"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"японскі каляндар"_s
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
				u"да нараджэння Хрыстова"_s,
				u"ад нараджэння Хрыстова"_s
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
				u"{1} \'у\' {0}"_s,
				u"{1} \'у\' {0}"_s,
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
			metaValue_japanese_DatePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"хвіліна"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"эра"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_buddhist_AmPmMarkers
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
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"каляндар Міньго"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_japanese_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"месяц"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"секунда"_s
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
			metaValue_japanese_DatePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"мусульманскі каляндар"_s
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
				u"сту"_s,
				u"лют"_s,
				u"сак"_s,
				u"кра"_s,
				u"май"_s,
				u"чэр"_s,
				u"ліп"_s,
				u"жні"_s,
				u"вер"_s,
				u"кас"_s,
				u"ліс"_s,
				u"сне"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"Час: {0}"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'тысяча few:0\' \'тысячы many:0\' \'тысяч other:0\' \'тысячы}"_s,
				u"{one:00\' \'тысяча few:00\' \'тысячы many:00\' \'тысяч other:00\' \'тысячы}"_s,
				u"{one:000\' \'тысяча few:000\' \'тысячы many:000\' \'тысяч other:000\' \'тысячы}"_s,
				u"{one:0\' \'мільён few:0\' \'мільёны many:0\' \'мільёнаў other:0\' \'мільёна}"_s,
				u"{one:00\' \'мільён few:00\' \'мільёны many:00\' \'мільёнаў other:00\' \'мільёна}"_s,
				u"{one:000\' \'мільён few:000\' \'мільёны many:000\' \'мільёнаў other:000\' \'мільёна}"_s,
				u"{one:0\' \'мільярд few:0\' \'мільярды many:0\' \'мільярдаў other:0\' \'мільярда}"_s,
				u"{one:00\' \'мільярд few:00\' \'мільярды many:00\' \'мільярдаў other:00\' \'мільярда}"_s,
				u"{one:000\' \'мільярд few:000\' \'мільярды many:000\' \'мільярдаў other:000\' \'мільярда}"_s,
				u"{one:0\' \'трыльён few:0\' \'трыльёны many:0\' \'трыльёнаў other:0\' \'трыльёна}"_s,
				u"{one:00\' \'трыльён few:00\' \'трыльёны many:00\' \'трыльёнаў other:00\' \'трыльёна}"_s,
				u"{one:000\' \'трыльён few:000\' \'трыльёны many:000\' \'трыльёнаў other:000\' \'трыльёна}"_s
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
			"islamic.AmPmMarkers"_s,
			metaValue_buddhist_AmPmMarkers
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
			u"часавы пояс"_s
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
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_japanese_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"дзень тыдня"_s
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
			$$new($StringArray, {
				"EEEE, d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				"d.M.yy"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"тыд"_s
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
			metaValue_buddhist_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			metaValue_java_time_japanese_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"d.M.yy"_s
			})
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0 тыс\'.\' few:0 тыс\'.\' many:0 тыс\'.\' other:0 тыс\'.\'}"_s,
				u"{one:00 тыс\'.\' few:00 тыс\'.\' many:00 тыс\'.\' other:00 тыс\'.\'}"_s,
				u"{one:000 тыс\'.\' few:000 тыс\'.\' many:000 тыс\'.\' other:000 тыс\'.\'}"_s,
				u"{one:0 млн few:0 млн many:0 млн other:0 млн}"_s,
				u"{one:00 млн few:00 млн many:00 млн other:00 млн}"_s,
				u"{one:000 млн few:000 млн many:000 млн other:000 млн}"_s,
				u"{one:0 млрд few:0 млрд many:0 млрд other:0 млрд}"_s,
				u"{one:00 млрд few:00 млрд many:00 млрд other:00 млрд}"_s,
				u"{one:000 млрд few:000 млрд many:000 млрд other:000 млрд}"_s,
				u"{one:0 трлн few:0 трлн many:0 трлн other:0 трлн}"_s,
				u"{one:00 трлн few:00 трлн many:00 трлн other:00 трлн}"_s,
				u"{one:000 трлн few:000 трлн many:000 трлн other:000 трлн}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"Летні час: {0}"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, d MMMM y \'г\'."_s,
				u"d MMMM y \'г\'."_s,
				"d.MM.y"_s,
				"d.MM.yy"_s
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
			"one:n % 10 = 1 and n % 100 != 11;few:n % 10 = 2..4 and n % 100 != 12..14;many:n % 10 = 0 or n % 10 = 5..9 or n % 100 = 11..14"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"гадзіна"_s
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"будыйскі каляндар"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"студзень"_s,
				u"люты"_s,
				u"сакавік"_s,
				u"красавік"_s,
				u"май"_s,
				u"чэрвень"_s,
				u"ліпень"_s,
				u"жнівень"_s,
				u"верасень"_s,
				u"кастрычнік"_s,
				u"лістапад"_s,
				u"снежань"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
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
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_be::FormatData_be() {
}

$Class* FormatData_be::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_be, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_be, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_be",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_be, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_be);
	});
	return class$;
}

$Class* FormatData_be::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun