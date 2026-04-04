#include <sun/text/resources/ext/JavaTimeSupplementary_hr.h>
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

void JavaTimeSupplementary_hr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_hr::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"1kv"_s,
		"2kv"_s,
		"3kv"_s,
		"4kv"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. kvartal"_s,
		"2. kvartal"_s,
		"3. kvartal"_s,
		"4. kvartal"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ned"_s,
		"pon"_s,
		"uto"_s,
		"sri"_s,
		u"čet"_s,
		"pet"_s,
		"sub"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"nedjelja"_s,
		"ponedjeljak"_s,
		"utorak"_s,
		"srijeda"_s,
		u"četvrtak"_s,
		"petak"_s,
		"subota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"N"_s,
		"P"_s,
		"U"_s,
		"S"_s,
		u"Č"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y. G"_s,
		"d. MMMM y. G"_s,
		"d. MMM y. G"_s,
		"dd.MM.y. GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns2, $new($StringArray, {
		"EEEE, d. MMMM y. G"_s,
		"d. MMMM y. G"_s,
		"d. M. y. G"_s,
		"d.M.y. GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"prije R.O.C."_s,
		"R.O.C."_s
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
			u"budistički kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"gregorijanski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"gregorijanski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"islamski civilni kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"japanski kalendar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"kalendar Republike Kine"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"AM/PM"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"sat"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mjesec"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"tjedan"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"dan u tjednu"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"godina"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"vremenska zona"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d. MMMM y. GGGG"_s,
				"d. MMMM y. GGGG"_s,
				"d. M. y. GGGG"_s,
				"d.M.y. G"_s
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
			"islamic.QuarterNarrows"_s,
			sharedQuarterNarrows
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
			sharedJavaTimeDatePatterns2
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns2
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			$$new($StringArray, {
				"poslije Krista"_s,
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
				"p. Kr."_s,
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
				"prije Krista"_s,
				"poslije Krista"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"Prije Krista"_s,
				"Poslije Krista"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d. MMMM y. GGGG"_s,
				"d. MMMM y. GGGG"_s,
				"d. MMM y. GGGG"_s,
				"dd.MM.y. G"_s
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
			"roc.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"sij"_s,
				"velj"_s,
				u"ožu"_s,
				"tra"_s,
				"svi"_s,
				"lip"_s,
				"srp"_s,
				"kol"_s,
				"ruj"_s,
				"lis"_s,
				"stu"_s,
				"pro"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"siječnja"_s,
				u"veljače"_s,
				u"ožujka"_s,
				"travnja"_s,
				"svibnja"_s,
				"lipnja"_s,
				"srpnja"_s,
				"kolovoza"_s,
				"rujna"_s,
				"listopada"_s,
				"studenoga"_s,
				"prosinca"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"1."_s,
				"2."_s,
				"3."_s,
				"4."_s,
				"5."_s,
				"6."_s,
				"7."_s,
				"8."_s,
				"9."_s,
				"10."_s,
				"11."_s,
				"12."_s,
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
			"timezone.hourFormat"_s,
			"+HH:mm; -HH:mm"_s
		})
	});
}

JavaTimeSupplementary_hr::JavaTimeSupplementary_hr() {
}

$Class* JavaTimeSupplementary_hr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_hr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_hr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_hr",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_hr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_hr);
	});
	return class$;
}

$Class* JavaTimeSupplementary_hr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun