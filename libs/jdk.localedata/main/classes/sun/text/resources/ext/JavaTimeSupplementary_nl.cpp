#include <sun/text/resources/ext/JavaTimeSupplementary_nl.h>

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

$MethodInfo _JavaTimeSupplementary_nl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_nl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_nl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_nl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_nl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_nl_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_nl($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_nl));
}

void JavaTimeSupplementary_nl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_nl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1e kwartaal"_s,
		"2e kwartaal"_s,
		"3e kwartaal"_s,
		"4e kwartaal"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd-MM-yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"zo"_s,
		"ma"_s,
		"di"_s,
		"wo"_s,
		"do"_s,
		"vr"_s,
		"za"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"zondag"_s,
		"maandag"_s,
		"dinsdag"_s,
		"woensdag"_s,
		"donderdag"_s,
		"vrijdag"_s,
		"zaterdag"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"Z"_s,
		"M"_s,
		"D"_s,
		"W"_s,
		"D"_s,
		"V"_s,
		"Z"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"Saʻna Hizjria"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd-MM-yy GGGGG"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		"voor R.O.C."_s,
		"Minguo"_s
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
			$of("Boeddhistische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Gregoriaanse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Gregoriaanse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Islamitische kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Islamitische kalender (cyclisch)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Islamitische kalender (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Japanse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Kalender van de Chinese Republiek"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("a.m./p.m."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("tijdperk"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Uur"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuut"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("maand"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("seconde"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("week"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dag van de week"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("jaar"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("tijdzone"_s)
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
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Moeh."_s,
				"Saf."_s,
				"Rab. I"_s,
				"Rab. II"_s,
				"Joem. I"_s,
				"Joem. II"_s,
				"Raj."_s,
				"Sja."_s,
				"Ram."_s,
				"Sjaw."_s,
				"Doe al k."_s,
				"Doe al h."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"Moeharram"_s,
				"Safar"_s,
				u"Rabiʻa al awal"_s,
				u"Rabiʻa al thani"_s,
				u"Joemadʻal awal"_s,
				u"Joemadʻal thani"_s,
				"Rajab"_s,
				u"Sjaʻaban"_s,
				"Ramadan"_s,
				"Sjawal"_s,
				u"Doe al kaʻaba"_s,
				"Doe al hizja"_s,
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
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
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
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				"na Christus"_s,
				"Meiji"_s,
				u"Taishō"_s,
				u"Shōwa"_s,
				"Heisei"_s,
				"Reiwa"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				"n.Chr."_s,
				"Meiji"_s,
				u"Taishō"_s,
				u"Shōwa"_s,
				"Heisei"_s,
				"Reiwa"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"voor Christus"_s,
				"na Christus"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"v. Chr."_s,
				"n. Chr."_s
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
			$of("roc.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan."_s,
				"feb."_s,
				"mrt."_s,
				"apr."_s,
				"mei"_s,
				"jun."_s,
				"jul."_s,
				"aug."_s,
				"sep."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"januari"_s,
				"februari"_s,
				"maart"_s,
				"april"_s,
				"mei"_s,
				"juni"_s,
				"juli"_s,
				"augustus"_s,
				"september"_s,
				"oktober"_s,
				"november"_s,
				"december"_s,
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		})
	});
}

JavaTimeSupplementary_nl::JavaTimeSupplementary_nl() {
}

$Class* JavaTimeSupplementary_nl::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_nl, name, initialize, &_JavaTimeSupplementary_nl_ClassInfo_, allocate$JavaTimeSupplementary_nl);
	return class$;
}

$Class* JavaTimeSupplementary_nl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun