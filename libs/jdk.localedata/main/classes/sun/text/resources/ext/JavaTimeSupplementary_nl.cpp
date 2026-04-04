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

void JavaTimeSupplementary_nl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_nl::getContents() {
	$useLocalObjectStack();
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
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"Boeddhistische kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Gregoriaanse kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Gregoriaanse kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"Islamitische kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"Islamitische kalender (cyclisch)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"Islamitische kalender (Umm al-Qura)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Japanse kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Kalender van de Chinese Republiek"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"a.m./p.m."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"tijdperk"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"Uur"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuut"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"maand"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"seconde"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"week"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"dag van de week"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"jaar"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"tijdzone"_s
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
			"islamic.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
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
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.short.Eras"_s,
			sharedEras
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
				"na Christus"_s,
				"Meiji"_s,
				u"Taishō"_s,
				u"Shōwa"_s,
				"Heisei"_s,
				"Reiwa"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			$$new($StringArray, {
				"n.Chr."_s,
				"Meiji"_s,
				u"Taishō"_s,
				u"Shōwa"_s,
				"Heisei"_s,
				"Reiwa"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"voor Christus"_s,
				"na Christus"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"v. Chr."_s,
				"n. Chr."_s
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
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedShortEras
		})
	});
}

JavaTimeSupplementary_nl::JavaTimeSupplementary_nl() {
}

$Class* JavaTimeSupplementary_nl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_nl, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_nl, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_nl",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_nl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_nl);
	});
	return class$;
}

$Class* JavaTimeSupplementary_nl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun