#include <sun/text/resources/ext/JavaTimeSupplementary_hu.h>
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

void JavaTimeSupplementary_hu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_hu::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"N1"_s,
		"N2"_s,
		"N3"_s,
		"N4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"I. negyedév"_s,
		u"II. negyedév"_s,
		u"III. negyedév"_s,
		u"IV. negyedév"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"de."_s,
		"du."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG y. MMMM d., EEEE"_s,
		"GGGG y. MMMM d."_s,
		"GGGG y. MMM d."_s,
		"G y. M. d."_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"V"_s,
		"H"_s,
		"K"_s,
		"Sze"_s,
		"Cs"_s,
		"P"_s,
		"Szo"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"vasárnap"_s,
		u"hétfő"_s,
		"kedd"_s,
		"szerda"_s,
		u"csütörtök"_s,
		u"péntek"_s,
		"szombat"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"V"_s,
		"H"_s,
		"K"_s,
		"Sz"_s,
		"Cs"_s,
		"P"_s,
		"Sz"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		"MF"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G y. MMMM d., EEEE"_s,
		"G y. MMMM d."_s,
		"G y. MMM d."_s,
		"GGGGG y. M. d."_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		"BK"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"R.O.C. előtt"_s,
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
			"QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Buddhista naptár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Gergely-naptár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Gergely-naptár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Iszlám naptár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Iszlám civil naptár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Japán naptár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Kínai köztársasági naptár"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"napszak"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"éra"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"óra"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"perc"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"hónap"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"másodperc"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"hét"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"hét napja"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"év"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"időzóna"_s
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
				"Moh."_s,
				"Saf."_s,
				u"Réb. 1"_s,
				u"Réb. 2"_s,
				"Dsem. I"_s,
				"Dsem. II"_s,
				"Red."_s,
				"Sab."_s,
				"Ram."_s,
				"Sev."_s,
				u"Dsül k."_s,
				u"Dsül h."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"Moharrem"_s,
				"Safar"_s,
				u"Rébi el avvel"_s,
				u"Rébi el accher"_s,
				u"Dsemádi el avvel"_s,
				u"Dsemádi el accher"_s,
				"Redseb"_s,
				u"Sabán"_s,
				u"Ramadán"_s,
				u"Sevvál"_s,
				u"Dsül kade"_s,
				u"Dsül hedse"_s,
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
			"islamic.QuarterNarrows"_s,
			sharedQuarterNarrows
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
			$$new($StringArray, {
				"G y. MMMM d., EEEE"_s,
				"G y. MMMM d."_s,
				"G y.MM.dd."_s,
				"GGGGG y.MM.dd."_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"időszámításunk előtt"_s,
				u"időszámításunk szerint"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"i.e."_s,
				"i.u."_s
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
				"febr."_s,
				u"márc."_s,
				u"ápr."_s,
				u"máj."_s,
				u"jún."_s,
				u"júl."_s,
				"aug."_s,
				"szept."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"január"_s,
				u"február"_s,
				u"március"_s,
				u"április"_s,
				u"május"_s,
				u"június"_s,
				u"július"_s,
				"augusztus"_s,
				"szeptember"_s,
				u"október"_s,
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
				u"Á"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"Sz"_s,
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
			"roc.QuarterNarrows"_s,
			sharedQuarterNarrows
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

JavaTimeSupplementary_hu::JavaTimeSupplementary_hu() {
}

$Class* JavaTimeSupplementary_hu::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_hu, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_hu, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_hu",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_hu, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_hu);
	});
	return class$;
}

$Class* JavaTimeSupplementary_hu::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun