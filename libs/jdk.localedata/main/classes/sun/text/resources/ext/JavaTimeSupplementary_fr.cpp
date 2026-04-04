#include <sun/text/resources/ext/JavaTimeSupplementary_fr.h>
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

void JavaTimeSupplementary_fr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fr::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"T1"_s,
		"T2"_s,
		"T3"_s,
		"T4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1er trimestre"_s,
		"2e trimestre"_s,
		"3e trimestre"_s,
		"4e trimestre"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"dim."_s,
		"lun."_s,
		"mar."_s,
		"mer."_s,
		"jeu."_s,
		"ven."_s,
		"sam."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"dimanche"_s,
		"lundi"_s,
		"mardi"_s,
		"mercredi"_s,
		"jeudi"_s,
		"vendredi"_s,
		"samedi"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"M"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"ère bouddhiste"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"avant RdC"_s,
		"RdC"_s
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
			"calendrier bouddhiste"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"calendrier grégorien"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"calendrier grégorien"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"calendrier musulman"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"calendrier musulman (tabulaire, époque civile)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"calendrier japonais"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"calendrier républicain chinois"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"cadran"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ère"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"heure"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minute"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mois"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"seconde"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"semaine"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"jour de la semaine"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"année"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"fuseau horaire"_s
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
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				"mouh."_s,
				"saf."_s,
				"rab. aw."_s,
				"rab. th."_s,
				"joum. oul."_s,
				"joum. tha."_s,
				"raj."_s,
				"chaa."_s,
				"ram."_s,
				"chaw."_s,
				"dhou. q."_s,
				"dhou. h."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"mouharram"_s,
				"safar"_s,
				"rabia al awal"_s,
				"rabia ath-thani"_s,
				"joumada al oula"_s,
				"joumada ath-thania"_s,
				"rajab"_s,
				"chaabane"_s,
				"ramadan"_s,
				"chawwal"_s,
				"dhou al qi`da"_s,
				"dhou al-hijja"_s,
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
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
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
				u"avant Jésus-Christ"_s,
				u"après Jésus-Christ"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"ap. J.-C."_s
			})
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
				"janv."_s,
				u"févr."_s,
				"mars"_s,
				"avr."_s,
				"mai"_s,
				"juin"_s,
				"juil."_s,
				u"août"_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				u"déc."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"janvier"_s,
				u"février"_s,
				"mars"_s,
				"avril"_s,
				"mai"_s,
				"juin"_s,
				"juillet"_s,
				u"août"_s,
				"septembre"_s,
				"octobre"_s,
				"novembre"_s,
				u"décembre"_s,
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
			"roc.long.Eras"_s,
			sharedEras
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
			"timezone.gmtFormat"_s,
			"UTC{0}"_s
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			u"+HH:mm;−HH:mm"_s
		})
	});
}

JavaTimeSupplementary_fr::JavaTimeSupplementary_fr() {
}

$Class* JavaTimeSupplementary_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_fr",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_fr);
	});
	return class$;
}

$Class* JavaTimeSupplementary_fr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun