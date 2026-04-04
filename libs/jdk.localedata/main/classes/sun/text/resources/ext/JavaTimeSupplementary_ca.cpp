#include <sun/text/resources/ext/JavaTimeSupplementary_ca.h>
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

void JavaTimeSupplementary_ca::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ca::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"1T"_s,
		"2T"_s,
		"3T"_s,
		"4T"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1r trimestre"_s,
		"2n trimestre"_s,
		"3r trimestre"_s,
		"4t trimestre"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a. m."_s,
		"p. m."_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"dg."_s,
		"dl."_s,
		"dt."_s,
		"dc."_s,
		"dj."_s,
		"dv."_s,
		"ds."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"diumenge"_s,
		"dilluns"_s,
		"dimarts"_s,
		"dimecres"_s,
		"dijous"_s,
		"divendres"_s,
		"dissabte"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"dg"_s,
		"dl"_s,
		"dt"_s,
		"dc"_s,
		"dj"_s,
		"dv"_s,
		"ds"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		"eB"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM \'de\' y G"_s,
		"d MMMM \'de\' y G"_s,
		"d/M/y G"_s,
		"d/M/yy GGGGG"_s
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
			"calendari budista"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"calendari gregorià"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"calendari gregorià"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"calendari musulmà"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"calendari civil islàmic"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"calendari japonès"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"calendari de la República de Xina"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"a. m./p. m."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"hora"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minut"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mes"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"segon"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"setmana"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"dia de la setmana"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"any"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"fus horari"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM \'de\' y GGGG"_s,
				"d MMMM \'de\' y GGGG"_s,
				"d/M/y GGGG"_s,
				"d/M/yy G"_s
			})
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
			"islamic.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, dd MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"dd/MM/y GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			sharedJavaTimeLongEras
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
				"abans de Crist"_s,
				u"després de Crist"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM \'de\' y G"_s,
				"d MMMM \'de\' y G"_s,
				"dd/MM/y G"_s,
				"dd/MM/y GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"aC"_s,
				"dC"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM \'de\' y GGGG"_s,
				"d MMMM \'de\' y GGGG"_s,
				"dd/MM/y GGGG"_s,
				"dd/MM/y G"_s
			})
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
				"gen."_s,
				"febr."_s,
				u"març"_s,
				"abr."_s,
				"maig"_s,
				"juny"_s,
				"jul."_s,
				"ag."_s,
				"set."_s,
				"oct."_s,
				"nov."_s,
				"des."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"de gener"_s,
				"de febrer"_s,
				u"de març"_s,
				u"d’abril"_s,
				"de maig"_s,
				"de juny"_s,
				"de juliol"_s,
				u"d’agost"_s,
				"de setembre"_s,
				u"d’octubre"_s,
				"de novembre"_s,
				"de desembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"GN"_s,
				"FB"_s,
				u"MÇ"_s,
				"AB"_s,
				"MG"_s,
				"JN"_s,
				"JL"_s,
				"AG"_s,
				"ST"_s,
				"OC"_s,
				"NV"_s,
				"DS"_s,
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
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		})
	});
}

JavaTimeSupplementary_ca::JavaTimeSupplementary_ca() {
}

$Class* JavaTimeSupplementary_ca::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ca, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ca, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ca",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ca, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ca);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ca::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun