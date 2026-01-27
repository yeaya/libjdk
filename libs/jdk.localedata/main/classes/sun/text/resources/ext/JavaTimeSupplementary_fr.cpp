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

$MethodInfo _JavaTimeSupplementary_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_fr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_fr_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_fr($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_fr));
}

void JavaTimeSupplementary_fr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fr::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("calendrier bouddhiste"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"calendrier grégorien"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"calendrier grégorien"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("calendrier musulman"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"calendrier musulman (tabulaire, époque civile)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("calendrier japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"calendrier républicain chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("cadran"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ère"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("heure"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minute"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mois"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("seconde"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("semaine"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("jour de la semaine"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"année"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("fuseau horaire"_s)
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
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
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
				u"avant Jésus-Christ"_s,
				u"après Jésus-Christ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"ap. J.-C."_s
			}))
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
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of("UTC{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"+HH:mm;−HH:mm"_s)
		})
	});
}

JavaTimeSupplementary_fr::JavaTimeSupplementary_fr() {
}

$Class* JavaTimeSupplementary_fr::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_fr, name, initialize, &_JavaTimeSupplementary_fr_ClassInfo_, allocate$JavaTimeSupplementary_fr);
	return class$;
}

$Class* JavaTimeSupplementary_fr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun