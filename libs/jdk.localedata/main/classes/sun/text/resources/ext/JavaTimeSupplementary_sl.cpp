#include <sun/text/resources/ext/JavaTimeSupplementary_sl.h>
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

void JavaTimeSupplementary_sl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sl::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1. čet."_s,
		u"2. čet."_s,
		u"3. čet."_s,
		u"4. čet."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. četrtletje"_s,
		u"2. četrtletje"_s,
		u"3. četrtletje"_s,
		u"4. četrtletje"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"dop."_s,
		"pop."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, dd. MMMM y GGGG"_s,
		"dd. MMMM y GGGG"_s,
		"d. MMM y GGGG"_s,
		"d. MM. yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ned."_s,
		"pon."_s,
		"tor."_s,
		"sre."_s,
		u"čet."_s,
		"pet."_s,
		"sob."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"nedelja"_s,
		"ponedeljek"_s,
		"torek"_s,
		"sreda"_s,
		u"četrtek"_s,
		"petek"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"t"_s,
		"s"_s,
		u"č"_s,
		"p"_s,
		"s"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"d"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, dd. MMMM y G"_s,
		"dd. MMMM y G"_s,
		"d. MMM y G"_s,
		"d. MM. yy GGGGG"_s
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
			u"budistični koledar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"gregorijanski koledar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"gregorijanski koledar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"islamski koledar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"islamski civilni koledar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"japonski koledar"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"kitajski državni koledar"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"Čas dneva"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"doba"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"ura"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mesec"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"teden"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"dan v tednu"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"leto"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"časovni pas"_s
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
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
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
				"pred Kristusom"_s,
				u"naše štetje"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"pr.n.š."_s,
				"po Kr."_s
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
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"jan."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				"maj"_s,
				"jun."_s,
				"jul."_s,
				"avg."_s,
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
				"januar"_s,
				"februar"_s,
				"marec"_s,
				"april"_s,
				"maj"_s,
				"junij"_s,
				"julij"_s,
				"avgust"_s,
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
				"j"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				"a"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
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
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			"+HH.mm;-HH.mm"_s
		})
	});
}

JavaTimeSupplementary_sl::JavaTimeSupplementary_sl() {
}

$Class* JavaTimeSupplementary_sl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sl, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sl, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_sl",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_sl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_sl);
	});
	return class$;
}

$Class* JavaTimeSupplementary_sl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun