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

$MethodInfo _FormatData_yo_BJ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_yo_BJ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_yo_BJ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_yo_BJ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_yo_BJ",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_yo_BJ_MethodInfo_
};

$Object* allocate$FormatData_yo_BJ($Class* clazz) {
	return $of($alloc(FormatData_yo_BJ));
}

void FormatData_yo_BJ::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_yo_BJ::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"Ɔdún"_s)
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
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Kàlɛ́ńdà ti Jàpánù"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of($$new($StringArray, {
				u"kí"_s,
				"Ke"_s,
				u"Kɛt"_s,
				u"Kɛr"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
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
			$of("field.weekday"_s),
			$of(u"Ɔjɔ́ tó wà láàárín ɔ̀sɛ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"Ìsɛ́jú"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"Àárɔ̀/ɔ̀sán"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Kàlɛ́ńdà Minguo"_s)
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
			$of("field.second"_s),
			$of(u"Ìsɛ́jú Ààyá"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"Ɔ̀sɛ̀"_s)
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
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Kàlɛ́ńdà Lárúbáwá"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} Àkókò ojúmɔmɔ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"Àìkú"_s,
				u"Ajé"_s,
				u"Ìsɛ́gun"_s,
				u"Ɔjɔ́rú"_s,
				u"Ɔjɔ́bɔ"_s,
				u"Ɛtì"_s,
				u"Àbámɛ́ta"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Kàlɛ́ńdà Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
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
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
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
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				u"Ìdámẹ́rin kíní"_s,
				u"Ìdámẹ́rin Kejì"_s,
				u"Ìdámɛ́rin Kɛta"_s,
				u"Ìdámẹ́rin Kẹrin"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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

FormatData_yo_BJ::FormatData_yo_BJ() {
}

$Class* FormatData_yo_BJ::load$($String* name, bool initialize) {
	$loadClass(FormatData_yo_BJ, name, initialize, &_FormatData_yo_BJ_ClassInfo_, allocate$FormatData_yo_BJ);
	return class$;
}

$Class* FormatData_yo_BJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun