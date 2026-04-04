#include <sun/text/resources/cldr/ext/FormatData_yo.h>
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

void FormatData_yo::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_yo::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"Oṣù Ṣẹ́rẹ́"_s,
		u"Oṣù Èrèlè"_s,
		u"Oṣù Ẹrẹ̀nà"_s,
		u"Oṣù Ìgbé"_s,
		u"Oṣù Ẹ̀bibi"_s,
		u"Oṣù Òkúdu"_s,
		u"Oṣù Agẹmọ"_s,
		u"Oṣù Ògún"_s,
		u"Oṣù Owewe"_s,
		u"Oṣù Ọ̀wàrà"_s,
		u"Oṣù Bélú"_s,
		u"Oṣù Ọ̀pẹ̀"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"Ṣẹ́r"_s,
		u"Èrèl"_s,
		u"Ẹrẹ̀n"_s,
		u"Ìgb"_s,
		u"Ẹ̀bi"_s,
		u"Òkú"_s,
		u"Agẹ"_s,
		u"Ògú"_s,
		"Owe"_s,
		u"Ọ̀wà"_s,
		u"Bél"_s,
		u"Ọ̀pẹ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"S"_s,
		u"È"_s,
		u"Ẹ"_s,
		u"Ì"_s,
		u"Ẹ̀"_s,
		u"Ò"_s,
		"A"_s,
		u"Ò"_s,
		"O"_s,
		u"Ọ̀"_s,
		"B"_s,
		u"Ọ̀"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"Ọjọ́ Àìkú"_s,
		u"Ọjọ́ Ajé"_s,
		u"Ọjọ́ Ìsẹ́gun"_s,
		u"Ọjọ́rú"_s,
		u"Ọjọ́bọ"_s,
		u"Ọjọ́ Ẹtì"_s,
		u"Ọjọ́ Àbámẹ́ta"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"Àìk"_s,
		"Aj"_s,
		u"Ìsẹ́g"_s,
		u"Ọjọ́r"_s,
		u"Ọjọ́b"_s,
		u"Ẹt"_s,
		u"Àbám"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"À"_s,
		"A"_s,
		u"Ì"_s,
		u"Ọ"_s,
		u"Ọ"_s,
		u"Ẹ"_s,
		u"À"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"Ìdámẹ́rin kíní"_s,
		u"Ìdámẹ́rin Kejì"_s,
		u"Ìdámẹ́rin Kẹta"_s,
		u"Ìdámẹ́rin Kẹrin"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"kíní"_s,
		u"Kejì"_s,
		u"Kẹta"_s,
		u"Kẹin"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"Àárọ̀"_s,
		u"Ọ̀sán"_s,
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
		"BCE"_s,
		"AD"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:m:s"_s,
		"H:m"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MM y G"_s,
		"d MM y G"_s,
		"d MM y G"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MM y GGGG"_s,
		"d MM y GGGG"_s,
		"d MM y GGGG"_s,
		"dd/MM/y GGGG"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Kàlẹ́ńdà Gregory"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"Ọdún"_s
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
			"timezone.gmtFormat"_s,
			"WAT{0}"_s
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
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
			u"{0} Ìlànà Àkókò"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Kàlẹ́ńdà ti Jàpánù"_s
		}),
		$$new($ObjectArray, {
			"timezone.gmtZeroFormat"_s,
			"WAT"_s
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
				"Saju Kristi"_s,
				"Lehin Kristi"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_QuarterNarrows
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
			u"Ìsẹ́jú"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"sáà"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"Àárọ̀/ọ̀sán"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Kàlẹ́ńdà Minguo"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"Osù"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"Ìsẹ́jú Ààyá"_s
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
			u"Kàlẹ́ńdà Lárúbáwá"_s
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
			$$new($StringArray, {
				u"Ṣẹ́"_s,
				u"Èr"_s,
				u"Ẹr"_s,
				u"Ìg"_s,
				u"Ẹ̀b"_s,
				u"Òk"_s,
				"Ag"_s,
				u"Òg"_s,
				"Ow"_s,
				u"Ọ̀w"_s,
				u"Bé"_s,
				u"Ọ̀p"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"Ìgbà {0}"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'ẹgbẹ̀rún}"_s,
				u"{other:00\' \'ẹgbẹ̀rún}"_s,
				u"{other:000\' \'ẹgbẹ̀rún}"_s,
				u"{other:0\' \'mílíọ̀nù}"_s,
				u"{other:00\' \'mílíọ̀nù}"_s,
				u"{other:000\' \'mílíọ̀nù}"_s,
				u"{other:0\' \'bilíọ̀nù}"_s,
				u"{other:00\' \'bilíọ̀nù}"_s,
				u"{other:000\' \'bilíọ̀nù}"_s,
				u"{other:0\' \'tiriliọ̀nù}"_s,
				u"{other:00\' \'tiriliọ̀nù}"_s,
				u"{other:000\' \'tiriliọ̀nù}"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			u"Agbègbè àkókò"_s
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
			"QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNarrows"_s,
			$$new($StringArray, {
				u"kí"_s,
				"Ke"_s,
				u"Kẹt"_s,
				u"Kẹr"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Ọjọ́ tó wà láàárín ọ̀sẹ̀"_s
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
			u"Ọ̀sẹ̀"_s
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
			metaValue_QuarterNarrows
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
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} Àkókò ojúmọmọ"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d MMM y"_s,
				"d MMM y"_s,
				"d MM y"_s,
				"d/M/y"_s
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
			$$new($StringArray, {
				u"Àìkú"_s,
				u"Ajé"_s,
				u"Ìsẹ́gun"_s,
				u"Ọjọ́rú"_s,
				u"Ọjọ́bọ"_s,
				u"Ẹtì"_s,
				u"Àbámẹ́ta"_s
			})
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"Wákàtí"_s
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Kàlẹ́ńdà Buddhist"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"Ṣẹ́rẹ́"_s,
				u"Èrèlè"_s,
				u"Ẹrẹ̀nà"_s,
				u"Ìgbé"_s,
				u"Ẹ̀bibi"_s,
				u"Òkúdu"_s,
				u"Agẹmọ"_s,
				u"Ògún"_s,
				"Owewe"_s,
				u"Ọ̀wàrà"_s,
				u"Bélú"_s,
				u"Ọ̀pẹ̀"_s,
				""_s
			})
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
			metaValue_QuarterNames
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

FormatData_yo::FormatData_yo() {
}

$Class* FormatData_yo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_yo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_yo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_yo",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_yo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_yo);
	});
	return class$;
}

$Class* FormatData_yo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun