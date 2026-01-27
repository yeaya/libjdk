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

$MethodInfo _JavaTimeSupplementary_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_hr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_hr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_hr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_hr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_hr_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_hr($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_hr));
}

void JavaTimeSupplementary_hr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_hr::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budistički kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("gregorijanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("islamski civilni kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("japanski kalendar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("kalendar Republike Kine"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("sat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mjesec"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("tjedan"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dan u tjednu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("godina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("vremenska zona"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM y. GGGG"_s,
				"d. MMMM y. GGGG"_s,
				"d. M. y. GGGG"_s,
				"d.M.y. G"_s
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
			$of("islamic.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
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
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns2)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns2)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				"poslije Krista"_s,
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
				"p. Kr."_s,
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
				"prije Krista"_s,
				"poslije Krista"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"Prije Krista"_s,
				"Poslije Krista"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM y. GGGG"_s,
				"d. MMMM y. GGGG"_s,
				"d. MMM y. GGGG"_s,
				"dd.MM.y. G"_s
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
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
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
			$of("timezone.hourFormat"_s),
			$of("+HH:mm; -HH:mm"_s)
		})
	});
}

JavaTimeSupplementary_hr::JavaTimeSupplementary_hr() {
}

$Class* JavaTimeSupplementary_hr::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_hr, name, initialize, &_JavaTimeSupplementary_hr_ClassInfo_, allocate$JavaTimeSupplementary_hr);
	return class$;
}

$Class* JavaTimeSupplementary_hr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun