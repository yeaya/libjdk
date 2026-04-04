#include <sun/text/resources/ext/JavaTimeSupplementary_lt.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void JavaTimeSupplementary_lt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_lt::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"I k."_s,
		"II k."_s,
		"III k."_s,
		"IV k."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"I ketvirtis"_s,
		"II ketvirtis"_s,
		"III ketvirtis"_s,
		"IV ketvirtis"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"priešpiet"_s,
		"popiet"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"y MMMM d GGGG, EEEE"_s,
		"y MMMM d GGGG"_s,
		"y MMM d GGGG"_s,
		"y-MM-dd GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"sk"_s,
		"pr"_s,
		"an"_s,
		"tr"_s,
		"kt"_s,
		"pn"_s,
		u"št"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"sekmadienis"_s,
		"pirmadienis"_s,
		"antradienis"_s,
		u"trečiadienis"_s,
		"ketvirtadienis"_s,
		"penktadienis"_s,
		u"šeštadienis"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"P"_s,
		"A"_s,
		"T"_s,
		"K"_s,
		"P"_s,
		u"Š"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"pr. p."_s,
		"pop."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"y MMMM d G, EEEE"_s,
		"y MMMM d G"_s,
		"y MMM d G"_s,
		"y-MM-dd G"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"Prieš R.O.C."_s,
		"R.O.C."_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"budistų kalendorius"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Grigaliaus kalendorius"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Grigaliaus kalendorius"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamo kalendorius"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Islamo kalendorius (lentelinis, pilietinė era)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"Islamo kalendorius (Umm al-Qura)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"japonų kalendorius"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Kinijos Respublikos kalendorius"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"iki pietų / po pietų"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"valanda"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"minutė"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"mėnuo"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"sekundė"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"savaitė"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"savaitės diena"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"metai"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"laiko juosta"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"BE"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			$$new($StringArray, {
				"po Kristaus"_s,
				u"Meidži"_s,
				u"Taišo"_s,
				u"Šova"_s,
				"Heisei"_s,
				"Reiwa"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			$$new($StringArray, {
				"po Kr."_s,
				u"Meidži"_s,
				u"Taišo"_s,
				u"Šova"_s,
				"Heisei"_s,
				"Reiwa"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"prieš Kristų"_s,
				"po Kristaus"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"pr.Kr."_s,
				"po.Kr."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"saus."_s,
				"vas."_s,
				"kov."_s,
				"bal."_s,
				"geg."_s,
				u"birž."_s,
				"liep."_s,
				"rugp."_s,
				"rugs."_s,
				"spal."_s,
				"lapkr."_s,
				"gruod."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"sausio"_s,
				"vasario"_s,
				"kovo"_s,
				u"balandžio"_s,
				u"gegužės"_s,
				u"birželio"_s,
				"liepos"_s,
				u"rugpjūčio"_s,
				u"rugsėjo"_s,
				"spalio"_s,
				u"lapkričio"_s,
				u"gruodžio"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"S"_s,
				"V"_s,
				"K"_s,
				"B"_s,
				"G"_s,
				"B"_s,
				"L"_s,
				"R"_s,
				"R"_s,
				"S"_s,
				"L"_s,
				"G"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			u"+HH:mm;−HH:mm"_s
		})
	});
}

JavaTimeSupplementary_lt::JavaTimeSupplementary_lt() {
}

$Class* JavaTimeSupplementary_lt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_lt, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_lt, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_lt",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_lt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_lt);
	});
	return class$;
}

$Class* JavaTimeSupplementary_lt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun