#include <sun/text/resources/ext/JavaTimeSupplementary_fi.h>
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

void JavaTimeSupplementary_fi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fi::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"1. nelj."_s,
		"2. nelj."_s,
		"3. nelj."_s,
		"4. nelj."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. neljännes"_s,
		u"2. neljännes"_s,
		u"3. neljännes"_s,
		u"4. neljännes"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"ap."_s,
		"ip."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"su"_s,
		"ma"_s,
		"ti"_s,
		"ke"_s,
		"to"_s,
		"pe"_s,
		"la"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"sunnuntaina"_s,
		"maanantaina"_s,
		"tiistaina"_s,
		"keskiviikkona"_s,
		"torstaina"_s,
		"perjantaina"_s,
		"lauantaina"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"T"_s,
		"K"_s,
		"T"_s,
		"P"_s,
		"L"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H.mm.ss zzzz"_s,
		"H.mm.ss z"_s,
		"H.mm.ss"_s,
		"H.mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"cccc d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		"tammikuuta"_s,
		"helmikuuta"_s,
		"maaliskuuta"_s,
		"huhtikuuta"_s,
		"toukokuuta"_s,
		u"kesäkuuta"_s,
		u"heinäkuuta"_s,
		"elokuuta"_s,
		"syyskuuta"_s,
		"lokakuuta"_s,
		"marraskuuta"_s,
		"joulukuuta"_s,
		""_s
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
			"buddhalainen kalenteri"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"gregoriaaninen kalenteri"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"gregoriaaninen kalenteri"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamilainen kalenteri"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"islamilainen siviilikalenteri, perjantai-epookki"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"islamilainen Umm al-Qura -kalenteri"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"japanilainen kalenteri"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Kiinan tasavallan kalenteri"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"vuorokaudenaika"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"aikakausi"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"tunti"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuutti"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"kuukausi"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunti"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"viikko"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"viikonpäivä"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"vuosi"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"aikavyöhyke"_s
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
				"muharram"_s,
				"safar"_s,
				u"rabi’ al-awwal"_s,
				u"rabi’ al-akhir"_s,
				u"džumada-l-ula"_s,
				u"džumada-l-akhira"_s,
				u"radžab"_s,
				u"ša’ban"_s,
				"ramadan"_s,
				u"šawwal"_s,
				u"dhu-l-qa’da"_s,
				u"dhu-l-hiddža"_s,
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
			"java.time.DatePatterns"_s,
			$$new($StringArray, {
				"cccc d. MMMM y"_s,
				"d. MMMM y"_s,
				"d.M.y"_s,
				"d.M.y"_s
			})
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
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"ennen Kristuksen syntymää"_s,
				u"jälkeen Kristuksen syntymän"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"eKr."_s,
				"jKr."_s
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
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"T"_s,
				"H"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"K"_s,
				"H"_s,
				"E"_s,
				"S"_s,
				"L"_s,
				"M"_s,
				"J"_s,
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
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
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
			"+H.mm;-H.mm"_s
		})
	});
}

JavaTimeSupplementary_fi::JavaTimeSupplementary_fi() {
}

$Class* JavaTimeSupplementary_fi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_fi",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_fi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_fi);
	});
	return class$;
}

$Class* JavaTimeSupplementary_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun