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

$MethodInfo _JavaTimeSupplementary_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ca",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ca_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ca($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ca));
}

void JavaTimeSupplementary_ca::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ca::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("calendari budista"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"calendari gregorià"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"calendari gregorià"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"calendari musulmà"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"calendari civil islàmic"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"calendari japonès"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"calendari de la República de Xina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("a. m./p. m."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("hora"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minut"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mes"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("segon"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("setmana"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dia de la setmana"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("any"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("fus horari"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM \'de\' y GGGG"_s,
				"d MMMM \'de\' y GGGG"_s,
				"d/M/y GGGG"_s,
				"d/M/yy G"_s
			}))
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
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"dd/MM/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
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
				"abans de Crist"_s,
				u"després de Crist"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM \'de\' y G"_s,
				"d MMMM \'de\' y G"_s,
				"dd/MM/y G"_s,
				"dd/MM/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"aC"_s,
				"dC"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM \'de\' y GGGG"_s,
				"d MMMM \'de\' y GGGG"_s,
				"dd/MM/y GGGG"_s,
				"dd/MM/y G"_s
			}))
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_ca::JavaTimeSupplementary_ca() {
}

$Class* JavaTimeSupplementary_ca::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ca, name, initialize, &_JavaTimeSupplementary_ca_ClassInfo_, allocate$JavaTimeSupplementary_ca);
	return class$;
}

$Class* JavaTimeSupplementary_ca::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun