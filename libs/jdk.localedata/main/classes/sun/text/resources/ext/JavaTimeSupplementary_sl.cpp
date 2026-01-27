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

$MethodInfo _JavaTimeSupplementary_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_sl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_sl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_sl_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_sl($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_sl));
}

void JavaTimeSupplementary_sl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sl::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"budistični koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("gregorijanski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("gregorijanski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("islamski civilni koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("japonski koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"kitajski državni koledar"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"Čas dneva"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("doba"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("ura"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mesec"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("teden"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dan v tednu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("leto"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"časovni pas"_s)
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
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
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
				"pred Kristusom"_s,
				u"naše štetje"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"pr.n.š."_s,
				"po Kr."_s
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
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+HH.mm;-HH.mm"_s)
		})
	});
}

JavaTimeSupplementary_sl::JavaTimeSupplementary_sl() {
}

$Class* JavaTimeSupplementary_sl::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_sl, name, initialize, &_JavaTimeSupplementary_sl_ClassInfo_, allocate$JavaTimeSupplementary_sl);
	return class$;
}

$Class* JavaTimeSupplementary_sl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun