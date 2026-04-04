#include <sun/text/resources/ext/JavaTimeSupplementary_lv.h>
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

void JavaTimeSupplementary_lv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_lv::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1. cet."_s,
		u"2. cet."_s,
		u"3. cet."_s,
		u"4. cet."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. ceturksnis"_s,
		"2. ceturksnis"_s,
		"3. ceturksnis"_s,
		"4. ceturksnis"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"priekšpusdienā"_s,
		u"pēcpusdienā"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, y. \'gada\' d. MMMM GGGG"_s,
		"y. \'gada\' d. MMMM GGGG"_s,
		"y. \'gada\' d. MMM GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Sv"_s,
		"Pr"_s,
		"Ot"_s,
		"Tr"_s,
		"Ce"_s,
		"Pk"_s,
		"Se"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"svētdiena"_s,
		"pirmdiena"_s,
		"otrdiena"_s,
		u"trešdiena"_s,
		"ceturtdiena"_s,
		"piektdiena"_s,
		"sestdiena"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"P"_s,
		"O"_s,
		"T"_s,
		"C"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"priekšp."_s,
		u"pēcp."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, y. \'gada\' d. MMMM G"_s,
		"y. \'gada\' d. MMMM G"_s,
		"y. \'gada\' d. MMM G"_s,
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
			"QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"budistu kalendārs"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Gregora kalendārs"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Gregora kalendārs"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"islāma kalendārs"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"islāma pilsoņu kalendārs"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"japāņu kalendārs"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Ķīnas Republikas kalendārs"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"priekšpusdienā/pēcpusdienā"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ēra"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"stundas"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"minūtes"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"mēnesis"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekundes"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"nedēļa"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"nedēļas diena"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"gads"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"laika josla"_s
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
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"muharams"_s,
				"safars"_s,
				u"1. rabī"_s,
				u"2. rabī"_s,
				u"1. džumādā"_s,
				u"2. džumādā"_s,
				u"radžabs"_s,
				u"šabans"_s,
				u"ramadāns"_s,
				u"šauvals"_s,
				u"du al-kidā"_s,
				u"du al-hidžā"_s,
				""_s
			})
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
			"islamic.QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
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
				u"pirms mūsu ēras"_s,
				u"mūsu ērā"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"pmē"_s,
				u"mē"_s
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
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"janv."_s,
				"febr."_s,
				"marts"_s,
				"apr."_s,
				"maijs"_s,
				u"jūn."_s,
				u"jūl."_s,
				"aug."_s,
				"sept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"janvāris"_s,
				u"februāris"_s,
				"marts"_s,
				u"aprīlis"_s,
				"maijs"_s,
				u"jūnijs"_s,
				u"jūlijs"_s,
				"augusts"_s,
				"septembris"_s,
				"oktobris"_s,
				"novembris"_s,
				"decembris"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"F"_s,
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
			"roc.QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		})
	});
}

JavaTimeSupplementary_lv::JavaTimeSupplementary_lv() {
}

$Class* JavaTimeSupplementary_lv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_lv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_lv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_lv",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_lv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_lv);
	});
	return class$;
}

$Class* JavaTimeSupplementary_lv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun