#include <sun/text/resources/ext/JavaTimeSupplementary_sv.h>
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

void JavaTimeSupplementary_sv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sv::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1:a kvartalet"_s,
		"2:a kvartalet"_s,
		"3:e kvartalet"_s,
		"4:e kvartalet"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"fm"_s,
		"em"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"GGGG y-MM-dd"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"sön"_s,
		u"mån"_s,
		"tis"_s,
		"ons"_s,
		"tors"_s,
		"fre"_s,
		u"lör"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"söndag"_s,
		u"måndag"_s,
		"tisdag"_s,
		"onsdag"_s,
		"torsdag"_s,
		"fredag"_s,
		u"lördag"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"S"_s,
		"M"_s,
		"T"_s,
		"O"_s,
		"T"_s,
		"F"_s,
		"L"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"\'kl\'. HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		u"före Kristus"_s,
		"efter Kristus"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"före R.K."_s,
		"R.K."_s
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
			"buddistisk kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"gregoriansk kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"gregoriansk kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamisk kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"islamisk civil kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"islamisk kalender, Umm al-Qura"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"japansk kalender"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"kinesiska republikens kalender"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"fm/em"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"timme"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minut"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"månad"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekund"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"vecka"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"veckodag"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"år"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"tidszon"_s
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
				"jumada-l-ula"_s,
				"jumada-l-akhira"_s,
				"rajab"_s,
				u"sha’ban"_s,
				"ramadan"_s,
				"shawwal"_s,
				u"dhu-l-ga’da"_s,
				"dhu-l-hijja"_s,
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
				"efter Kristus"_s,
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
				"e.Kr."_s,
				"Meiji"_s,
				u"Taishō"_s,
				u"Shōwa"_s,
				"Heisei"_s,
				"Reiwa"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			sharedJavaTimeLongEras
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
			$$new($StringArray, {
				"jan."_s,
				"feb."_s,
				"mars"_s,
				"apr."_s,
				"maj"_s,
				"juni"_s,
				"juli"_s,
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
				"mars"_s,
				"april"_s,
				"maj"_s,
				"juni"_s,
				"juli"_s,
				"augusti"_s,
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
			"timezone.hourFormat"_s,
			u"+HH:mm;−HH:mm"_s
		})
	});
}

JavaTimeSupplementary_sv::JavaTimeSupplementary_sv() {
}

$Class* JavaTimeSupplementary_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_sv",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_sv);
	});
	return class$;
}

$Class* JavaTimeSupplementary_sv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun