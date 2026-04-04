#include <sun/text/resources/cldr/ext/FormatData_yo_BJ.h>
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

void FormatData_yo_BJ::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_yo_BJ::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"Oshù Shɛ́rɛ́"_s,
		u"Oshù Èrèlè"_s,
		u"Oshù Ɛrɛ̀nà"_s,
		u"Oshù Ìgbé"_s,
		u"Oshù Ɛ̀bibi"_s,
		u"Oshù Òkúdu"_s,
		u"Oshù Agɛmɔ"_s,
		u"Oshù Ògún"_s,
		u"Oshù Owewe"_s,
		u"Oshù Ɔ̀wàrà"_s,
		u"Oshù Bélú"_s,
		u"Oshù Ɔ̀pɛ̀"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"Shɛ́r"_s,
		u"Èrèl"_s,
		u"Ɛrɛ̀n"_s,
		u"Ìgb"_s,
		u"Ɛ̀bi"_s,
		u"Òkú"_s,
		u"Agɛ"_s,
		u"Ògú"_s,
		"Owe"_s,
		u"Ɔ̀wà"_s,
		u"Bél"_s,
		u"Ɔ̀pɛ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"S"_s,
		u"È"_s,
		u"Ɛ"_s,
		u"Ì"_s,
		u"Ɛ̀"_s,
		u"Ò"_s,
		"A"_s,
		u"Ò"_s,
		"O"_s,
		u"Ɔ̀"_s,
		"B"_s,
		u"Ɔ̀"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"Ɔjɔ́ Àìkú"_s,
		u"Ɔjɔ́ Ajé"_s,
		u"Ɔjɔ́ Ìsɛ́gun"_s,
		u"Ɔjɔ́rú"_s,
		u"Ɔjɔ́bɔ"_s,
		u"Ɔjɔ́ Ɛtì"_s,
		u"Ɔjɔ́ Àbámɛ́ta"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"Àìk"_s,
		"Aj"_s,
		u"Ìsɛ́g"_s,
		u"Ɔjɔ́r"_s,
		u"Ɔjɔ́b"_s,
		u"Ɛt"_s,
		u"Àbám"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"À"_s,
		"A"_s,
		u"Ì"_s,
		u"Ɔ"_s,
		u"Ɔ"_s,
		u"Ɛ"_s,
		u"À"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"Ìdámɛ́rin kíní"_s,
		u"Ìdámɛ́rin Kejì"_s,
		u"Ìdámɛ́rin Kɛta"_s,
		u"Ìdámɛ́rin Kɛrin"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"kíní"_s,
		u"Kejì"_s,
		u"Kɛta"_s,
		u"Kɛin"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"Àárɔ̀"_s,
		u"Ɔ̀sán"_s,
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
	$var($String, metaValue_calendarname_gregorian, u"Kàlɛ́ńdà Gregory"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"Ɔdún"_s
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
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			metaValue_DayNarrows
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
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Kàlɛ́ńdà ti Jàpánù"_s
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
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
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
				u"Kɛt"_s,
				u"Kɛr"_s
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
			"field.weekday"_s,
			u"Ɔjɔ́ tó wà láàárín ɔ̀sɛ̀"_s
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
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
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"Ìsɛ́jú"_s
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"Àárɔ̀/ɔ̀sán"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Kàlɛ́ńdà Minguo"_s
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
			"field.second"_s,
			u"Ìsɛ́jú Ààyá"_s
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"Ɔ̀sɛ̀"_s
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
			"calendarname.islamic"_s,
			u"Kàlɛ́ńdà Lárúbáwá"_s
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
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} Àkókò ojúmɔmɔ"_s
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
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
				u"Ìsɛ́gun"_s,
				u"Ɔjɔ́rú"_s,
				u"Ɔjɔ́bɔ"_s,
				u"Ɛtì"_s,
				u"Àbámɛ́ta"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Kàlɛ́ńdà Buddhist"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"Shɛ́rɛ́"_s,
				u"Èrèlè"_s,
				u"Ɛrɛ̀nà"_s,
				u"Ìgbé"_s,
				u"Ɛ̀bibi"_s,
				u"Òkúdu"_s,
				u"Agɛmɔ"_s,
				u"Ògún"_s,
				"Owewe"_s,
				u"Ɔ̀wàrà"_s,
				u"Bélú"_s,
				u"Ɔ̀pɛ̀"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"Shɛ́"_s,
				u"Èr"_s,
				u"Ɛr"_s,
				u"Ìg"_s,
				u"Ɛ̀b"_s,
				u"Òk"_s,
				"Ag"_s,
				u"Òg"_s,
				"Ow"_s,
				u"Ɔ̀w"_s,
				u"Bé"_s,
				u"Ɔ̀p"_s,
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
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'ɛgbɛ̀rún}"_s,
				u"{other:00\' \'ɛgbɛ̀rún}"_s,
				u"{other:000\' \'ɛgbɛ̀rún}"_s,
				u"{other:0\' \'mílíɔ̀nù}"_s,
				u"{other:00\' \'mílíɔ̀nù}"_s,
				u"{other:000\' \'mílíɔ̀nù}"_s,
				u"{other:0\' \'bilíɔ̀nù}"_s,
				u"{other:00\' \'bilíɔ̀nù}"_s,
				u"{other:000\' \'bilíɔ̀nù}"_s,
				u"{other:0\' \'tiriliɔ̀nù}"_s,
				u"{other:00\' \'tiriliɔ̀nù}"_s,
				u"{other:000\' \'tiriliɔ̀nù}"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNarrows"_s,
			metaValue_DayNarrows
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
			"japanese.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			$$new($StringArray, {
				u"Ìdámẹ́rin kíní"_s,
				u"Ìdámẹ́rin Kejì"_s,
				u"Ìdámɛ́rin Kɛta"_s,
				u"Ìdámẹ́rin Kẹrin"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_MonthNarrows
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

FormatData_yo_BJ::FormatData_yo_BJ() {
}

$Class* FormatData_yo_BJ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_yo_BJ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_yo_BJ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_yo_BJ",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_yo_BJ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_yo_BJ);
	});
	return class$;
}

$Class* FormatData_yo_BJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun