#include <sun/text/resources/ext/JavaTimeSupplementary_et.h>
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

void JavaTimeSupplementary_et::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_et::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. kvartal"_s,
		"2. kvartal"_s,
		"3. kvartal"_s,
		"4. kvartal"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"dd.MM.y GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"P"_s,
		"E"_s,
		"T"_s,
		"K"_s,
		"N"_s,
		"R"_s,
		"L"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"pühapäev"_s,
		u"esmaspäev"_s,
		u"teisipäev"_s,
		u"kolmapäev"_s,
		u"neljapäev"_s,
		"reede"_s,
		u"laupäev"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm.ss zzzz"_s,
		"H:mm.ss z"_s,
		"H:mm.ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"dd.MM.y G"_s,
		"dd.MM.y GGGGG"_s
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
			"budistlik kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Gregoriuse kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Gregoriuse kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamikalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"islami ilmalik kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Jaapani kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Hiina Vabariigi kalender"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"enne/pärast lõunat"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"ajastu"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"tund"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minut"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"kuu"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekund"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"nädal"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"nädalapäev"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"aasta"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"ajavöönd"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			$$new($StringArray, {
				"AM"_s,
				"PM"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayNarrows
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
			"islamic.TimePatterns"_s,
			sharedTimePatterns
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
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"enne Kristust"_s,
				u"pärast Kristust"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"e.m.a."_s,
				"m.a.j."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayNarrows
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
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"jaan"_s,
				"veebr"_s,
				u"märts"_s,
				"apr"_s,
				"mai"_s,
				"juuni"_s,
				"juuli"_s,
				"aug"_s,
				"sept"_s,
				"okt"_s,
				"nov"_s,
				"dets"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"jaanuar"_s,
				"veebruar"_s,
				u"märts"_s,
				"aprill"_s,
				"mai"_s,
				"juuni"_s,
				"juuli"_s,
				"august"_s,
				"september"_s,
				"oktoober"_s,
				"november"_s,
				"detsember"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"V"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
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
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			u"+HH:mm;−HH:mm"_s
		})
	});
}

JavaTimeSupplementary_et::JavaTimeSupplementary_et() {
}

$Class* JavaTimeSupplementary_et::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_et, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_et, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_et",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_et, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_et);
	});
	return class$;
}

$Class* JavaTimeSupplementary_et::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun