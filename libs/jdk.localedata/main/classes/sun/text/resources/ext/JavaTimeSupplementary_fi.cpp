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

$MethodInfo _JavaTimeSupplementary_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_fi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_fi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_fi_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_fi($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_fi));
}

void JavaTimeSupplementary_fi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fi::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("buddhalainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("gregoriaaninen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("gregoriaaninen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamilainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("islamilainen siviilikalenteri, perjantai-epookki"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("islamilainen Umm al-Qura -kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("japanilainen kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Kiinan tasavallan kalenteri"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("vuorokaudenaika"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("aikakausi"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("tunti"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuutti"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("kuukausi"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunti"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("viikko"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"viikonpäivä"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("vuosi"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"aikavyöhyke"_s)
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
			$of("java.time.DatePatterns"_s),
			$of($$new($StringArray, {
				"cccc d. MMMM y"_s,
				"d. MMMM y"_s,
				"d.M.y"_s,
				"d.M.y"_s
			}))
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
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"ennen Kristuksen syntymää"_s,
				u"jälkeen Kristuksen syntymän"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"eKr."_s,
				"jKr."_s
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
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
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
			$of("+H.mm;-H.mm"_s)
		})
	});
}

JavaTimeSupplementary_fi::JavaTimeSupplementary_fi() {
}

$Class* JavaTimeSupplementary_fi::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_fi, name, initialize, &_JavaTimeSupplementary_fi_ClassInfo_, allocate$JavaTimeSupplementary_fi);
	return class$;
}

$Class* JavaTimeSupplementary_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun