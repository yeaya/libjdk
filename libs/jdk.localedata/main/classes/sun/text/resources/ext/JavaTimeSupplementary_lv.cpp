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

$MethodInfo _JavaTimeSupplementary_lv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_lv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_lv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_lv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_lv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_lv_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_lv($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_lv));
}

void JavaTimeSupplementary_lv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_lv::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budistu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Gregora kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Gregora kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"islāma kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"islāma pilsoņu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"japāņu kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Ķīnas Republikas kalendārs"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"priekšpusdienā/pēcpusdienā"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ēra"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("stundas"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"minūtes"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"mēnesis"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekundes"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"nedēļa"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"nedēļas diena"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("gads"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("laika josla"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"pirms mūsu ēras"_s,
				u"mūsu ērā"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"pmē"_s,
				u"mē"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_lv::JavaTimeSupplementary_lv() {
}

$Class* JavaTimeSupplementary_lv::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_lv, name, initialize, &_JavaTimeSupplementary_lv_ClassInfo_, allocate$JavaTimeSupplementary_lv);
	return class$;
}

$Class* JavaTimeSupplementary_lv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun